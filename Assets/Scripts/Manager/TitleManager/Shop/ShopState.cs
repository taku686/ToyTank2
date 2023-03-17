using System.Linq;
using Cysharp.Threading.Tasks;
using Data;
using Manager.PlayFab;
using UI;
using UnityEngine;
using State = StateMachine<Manager.TitleManager.TitleCore>.State;

namespace Manager.TitleManager
{
    public partial class TitleCore
    {
        public class ShopState : State
        {
            private PlayFabCatalogManager _playFabCatalogManager;
            private PlayFabShopManager _playFabShopManager;
            private ShopView _shopView;
            private UIAnimation _uiAnimation;
            private const string Explanation = "This item is already purchased.";

            protected override void OnEnter(State prevState)
            {
                Initialize();
                InitializeButton();
            }

            private void Initialize()
            {
                _playFabCatalogManager = Owner.playFabCatalogManager;
                _playFabShopManager = Owner.playFabShopManager;
                _shopView = Owner.shopView;
                _uiAnimation = Owner.uiAnimation;
                _shopView.Initialize();

                var purchaseErrorAction = UniTask.Action(async () => OpenErrorPanel().Forget());
                _playFabShopManager.SetPurchaseErrorAction(purchaseErrorAction);
            }

            private void InitializeButton()
            {
                _shopView.backButton.onClick.RemoveAllListeners();
                _shopView.adRemoveButton.onClick.RemoveAllListeners();
                _shopView.errorPanelCloseButton.onClick.RemoveAllListeners();
                _shopView.backButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickBackToLobby()));
                _shopView.adRemoveButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickPurchase()));
                _shopView.errorPanelCloseButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await OnclickCloseErrorPanel()));
            }

            private async UniTask OnClickBackToLobby()
            {
                await _uiAnimation.Click(_shopView.backButton.transform, GameCommonData.ClickDuration);
                Owner._stateMachine.Dispatch((int)Event.Main);
                Owner.SwitchPhaseGameObject((int)Event.Main);
            }

            private async UniTask OnClickPurchase()
            {
                await _uiAnimation.Click(_shopView.adRemoveButton.transform, GameCommonData.ClickDuration);
                if (UserDataManager.Instance.IsRemoveAds())
                {
                    _shopView.infoText.text = Explanation;
                    await OpenErrorPanel();
                }
                else
                {
                    var item = _playFabCatalogManager.catalogList.First(x => x.ItemId == GameCommonData.RemoveAdsItem);
                    await _playFabShopManager.TryPurchaseItem(item.ItemId, GameCommonData.RealMoneyKey,
                        GameCommonData.RemoveAdsPrice);
                }
            }

            private async UniTask OnclickCloseErrorPanel()
            {
                await _uiAnimation.Click(_shopView.errorPanelCloseButton.transform, GameCommonData.ClickDuration);
                var errorPanel = _shopView.errorPanel.transform;
                await _uiAnimation.Close(errorPanel, GameCommonData.CloseDuration);
                _shopView.errorPanel.SetActive(false);
                _shopView.infoText.enabled = false;
                _shopView.infoText.text = "";
            }

            private async UniTask OpenErrorPanel()
            {
                var errorPanel = _shopView.errorPanel.transform;
                var infoText = _shopView.infoText;
                errorPanel.gameObject.SetActive(true);
                infoText.enabled = true;
                errorPanel.localScale = Vector3.zero;
                await _uiAnimation.Open(errorPanel, GameCommonData.ClickDuration);
            }
        }
    }
}