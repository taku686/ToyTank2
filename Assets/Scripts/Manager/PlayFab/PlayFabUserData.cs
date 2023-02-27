using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Data;
using Newtonsoft.Json;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;

public class PlayFabUserData : MonoBehaviour
{
    [SerializeField] private UserDataManager userDataManager;

    public async UniTask SetUserData(Dictionary<string, UserDataRecord> playerData)
    {
        if (!playerData.ContainsKey(GameCommonData.UserDataKey))
        {
            var newData = userDataManager.CreateUserData();
            var result = await UpdateUserData(newData);
            if (!result)
            {
                return;
            }

            userDataManager.SetUserData(newData);
            return;
        }

        var userData = JsonConvert.DeserializeObject<UserData>(playerData[GameCommonData.UserDataKey].Value);
        userDataManager.SetUserData(userData);
    }

    public async UniTask<bool> UpdateUserData(UserData userData)
    {
        var userJson = JsonConvert.SerializeObject(userData);
        var request = new UpdateUserDataRequest
        {
            Data = new Dictionary<string, string> { { GameCommonData.UserDataKey, userJson } }
        };

        var response = await PlayFabClientAPI.UpdateUserDataAsync(request);
        if (response.Error != null)
        {
            Debug.Log(response.Error.GenerateErrorReport());
            return false;
        }

        return true;
    }
}