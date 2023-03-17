using System;
using Cysharp.Threading.Tasks;
using Data;
using PlayFab;
using PlayFab.ClientModels;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.Purchasing;

namespace Manager.PlayFab
{
    public class PlayFabShopManager : MonoBehaviour, IStoreListener
    {
        private bool _isInitialized;
        private ConfigurationBuilder _builder;
        private IStoreController _storeController;
        private IExtensionProvider _extensionProvider;
        private PlayFabUserData _playFabUserData;
        private PlayFabLogin _playFabLogin;
        private Action _purchaseErrorAction;

        public async UniTask Initialize(PlayFabCatalogManager playFabCatalogManager, PlayFabUserData playFabUserData,
            PlayFabLogin playFabLogin)
        {
            if (_isInitialized)
            {
                return;
            }

            _playFabUserData = playFabUserData;
            _playFabLogin = playFabLogin;

            var options = new InitializationOptions();
            await UnityServices.InitializeAsync(options);
            _isInitialized = true;
            _builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());
            foreach (var catalogItem in playFabCatalogManager.catalogList.FindAll(x =>
                         x.ItemClass == GameCommonData.NonConsumable))
            {
                _builder.AddProduct(catalogItem.ItemId, ProductType.Consumable);
            }

            UnityPurchasing.Initialize(this, _builder);
        }

        public void SetPurchaseErrorAction(Action action)
        {
            _purchaseErrorAction = action;
        }

        public async UniTask<bool> TryPurchaseItem(string itemName, string virtualCurrencyKey, int price)
        {
            await _playFabLogin.TryLoginWithGoogle();
            var request = new PurchaseItemRequest
            {
                ItemId = itemName,
                VirtualCurrency = virtualCurrencyKey,
                Price = price,
                StoreId = "MainShop",
                CatalogVersion = "main"
            };
            var result = await PlayFabClientAPI.PurchaseItemAsync(request);
            _storeController.InitiatePurchase(itemName);
            if (result.Error != null)
            {
                if (_purchaseErrorAction != null)
                {
                    _purchaseErrorAction.Invoke();
                }

                Debug.Log(result.Error.GenerateErrorReport());
                return false;
            }


            return true;
        }


        private async void ValidateGooglePlayPurchaseAsync(PurchaseEventArgs e)
        {
            Debug.Log(e.purchasedProduct.metadata.isoCurrencyCode);
            var googleReceipt = GooglePurchase.FromJson(e.purchasedProduct.receipt);
            var request = new ValidateGooglePlayPurchaseRequest
            {
                CurrencyCode = e.purchasedProduct.metadata.isoCurrencyCode,
                PurchasePrice = (uint)(e.purchasedProduct.metadata.localizedPrice * 100),
                ReceiptJson = googleReceipt.PayloadData.json,
                Signature = googleReceipt.PayloadData.signature
            };

            var result = await PlayFabClientAPI.ValidateGooglePlayPurchaseAsync(request);

            if (result.Error != null)
            {
                Debug.Log("Validated failed" + result.Error.GenerateErrorReport());
            }

            await _playFabUserData.GetUserInventory();
            Debug.Log("Validated success");
        }

        public void OnInitializeFailed(InitializationFailureReason error)
        {
            throw new NotImplementedException();
        }

        public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs purchaseEvent)
        {
            if (!_isInitialized)
            {
                return PurchaseProcessingResult.Complete;
            }

            Debug.Log("手続き開始");
            // Test edge case where product is unknown
            if (purchaseEvent.purchasedProduct == null)
            {
                Debug.LogWarning("Attempted to process purchase with unknown product. Ignoring");
                return PurchaseProcessingResult.Complete;
            }

            // Test edge case where purchase has no receipt
            if (string.IsNullOrEmpty(purchaseEvent.purchasedProduct.receipt))
            {
                Debug.LogWarning("Attempted to process purchase with no receipt: ignoring");
                return PurchaseProcessingResult.Complete;
            }

            ValidateGooglePlayPurchaseAsync(purchaseEvent);
            return PurchaseProcessingResult.Complete;
        }

        public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
        {
            if (_purchaseErrorAction == null)
            {
                return;
            }

            _purchaseErrorAction.Invoke();
        }

        public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
        {
            _storeController = controller;
            _extensionProvider = extensions;
        }
    }

    public class JsonData
    {
        // JSON Fields, ! Case-sensitive
        public string orderId;
        public string packageName;
        public string productId;
        public long purchaseTime;
        public int purchaseState;
        public string purchaseToken;
    }

    public class PayloadData
    {
        private JsonData _jsonData;

        // JSON Fields, ! Case-sensitive
        public string signature;
        public string json;

        public PayloadData(string signature, string json)
        {
            this.signature = signature;
            this.json = json;
        }

        public static PayloadData FromJson(string json)
        {
            Debug.Log(json);
            var payload = JsonUtility.FromJson<PayloadData>(json);
            payload._jsonData = JsonUtility.FromJson<JsonData>(payload.json);
            return payload;
        }
    }

    public class GooglePurchase
    {
        public PayloadData PayloadData;

        // JSON Fields, ! Case-sensitive
        public string Store;
        public string TransactionID;
        public string Payload;

        public static GooglePurchase FromJson(string json)
        {
            Debug.Log(json);
            var purchase = JsonUtility.FromJson<GooglePurchase>(json);
            purchase.PayloadData = PayloadData.FromJson(purchase.Payload);
            return purchase;
        }
    }
}