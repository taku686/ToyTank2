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

        private static readonly GetPlayerCombinedInfoRequestParams CombinedInfoRequestParams =
            new()
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

        public async UniTask<bool> TryLogin()
        {
            var request = new LoginWithCustomIDRequest
            {
                CustomId = "GettingStartedGuide",
                CreateAccount = true,
                InfoRequestParameters = CombinedInfoRequestParams
            };
            var result = await PlayFabClientAPI.LoginWithCustomIDAsync(request);


            return result.Error == null;
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
            playFabTitleData.SetTitleData(titleData);
            await playFabUserData.SetUserData(userData);
        }
    }
}