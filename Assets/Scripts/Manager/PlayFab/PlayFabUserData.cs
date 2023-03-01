using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using Data;
using Newtonsoft.Json;
using PlayFab;
using PlayFab.ClientModels;
using PlayFab.MatchmakerModels;
using UnityEngine;
using ItemInstance = PlayFab.ClientModels.ItemInstance;

public class PlayFabUserData : MonoBehaviour
{
    public async UniTask SetUserData(Dictionary<string, UserDataRecord> playerData)
    {
        if (!playerData.ContainsKey(GameCommonData.UserDataKey))
        {
            var newData = UserDataManager.Instance.CreateUserData();
            var result = await UpdateUserData(newData);
            if (!result)
            {
                return;
            }

            UserDataManager.Instance.SetUserData(newData);
            return;
        }

        var userData = JsonConvert.DeserializeObject<UserData>(playerData[GameCommonData.UserDataKey].Value);
        UserDataManager.Instance.SetUserData(userData);
    }

    public async UniTask GetUserInventory()
    {
        var request = new GetUserInventoryRequest();
        var result = await PlayFabClientAPI.GetUserInventoryAsync(request);
        if (result.Error != null)
        {
            Debug.Log(result.Error.GenerateErrorReport());
        }

        UserDataManager.Instance.SetInventory(result.Result.Inventory);
    }

    public void SetInventory(List<ItemInstance> inventory)
    {
        UserDataManager.Instance.SetInventory(inventory);
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

    public async UniTask UseItem(List<ItemInstance> items)
    {
        var removeAds = items.FirstOrDefault(x => x.ItemId == GameCommonData.RemoveAdsItem);
        if (removeAds == null)
        {
            return;
        }

        var request = new ConsumeItemRequest()
        {
            ItemInstanceId = removeAds.ItemInstanceId,
            ConsumeCount = 1
        };
        var result = await PlayFabClientAPI.ConsumeItemAsync(request);
        if (result.Error != null)
        {
            Debug.Log(result.Error.GenerateErrorReport());
        }
    }
}