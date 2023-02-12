using Cysharp.Threading.Tasks;
using Data;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;

namespace Manager.PlayFab
{
    public class PlayFabLogin : MonoBehaviour
    {
        public void Initialize()
        {
            PlayFabSettings.staticSettings.TitleId = GameCommonData.TitleId;
        }

        public async UniTask<bool> TryLogin()
        {
            var request = new LoginWithCustomIDRequest
            {
                CustomId = "GettingStartedGuide",
                CreateAccount = true
            };
            var result = await PlayFabClientAPI.LoginWithCustomIDAsync(request);


            return result.Error == null;
        }
    }
}