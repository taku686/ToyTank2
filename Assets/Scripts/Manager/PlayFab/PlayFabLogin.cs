using Cysharp.Threading.Tasks;
using Data;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;

namespace Manager.PlayFab
{
    public class PlayFabLogin : MonoBehaviour
    {
        [SerializeField] private PlayFabTitleData playFabTitleData;
        [SerializeField] private PlayFabUserData playFabUserData;
        [SerializeField] private PlayFabCatalogManager playFabCatalogManager;
        [SerializeField] private PlayFabShopManager playFabShopManager;

        private static readonly GetPlayerCombinedInfoRequestParams CombinedInfoRequestParams = new()
        {
            GetUserAccountInfo = true,
            GetPlayerProfile = true,
            GetTitleData = true,
            GetUserData = true,
            GetUserInventory = true,
            GetUserVirtualCurrency = true,
        };

        public void Initialize()
        {
            PlayFabSettings.staticSettings.TitleId = GameCommonData.TitleId;
        }

        public async UniTask<bool> TryLoginWithGoogle()
        {
            var request = new LoginWithAndroidDeviceIDRequest()
            {
                CreateAccount = true,
                AndroidDeviceId = SystemInfo.deviceUniqueIdentifier,
                InfoRequestParameters = CombinedInfoRequestParams
            };
            var result = await PlayFabClientAPI.LoginWithAndroidDeviceIDAsync(request);

            if (result.Error != null)
            {
                Debug.LogError(result.Error.GenerateErrorReport());
                return false;
            }

            await SetPlayFabData(result.Result.InfoResultPayload);
            return result.Error == null;
        }

        private async UniTask SetPlayFabData(GetPlayerCombinedInfoResultPayload data)
        {
            var titleData = data.TitleData;
            var userData = data.UserData;
            var inventoryData = data.UserInventory;
            playFabTitleData.SetTitleData(titleData);
            await playFabUserData.SetUserData(userData);
            playFabUserData.SetInventory(inventoryData);
            await playFabCatalogManager.GetCatalogItems();
            await playFabShopManager.Initialize(playFabCatalogManager, playFabUserData);
        }
    }
}