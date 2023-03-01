using System.Collections.Generic;
using BehaviorDesigner.Runtime.Tasks;
using Cysharp.Threading.Tasks;
using Data;
using PlayFab;
using PlayFab.ClientModels;
using UnityEngine;


public class PlayFabCatalogManager : MonoBehaviour
{
    public List<CatalogItem> catalogList = new();

    public async UniTask GetCatalogItems()
    {
        var response = await PlayFabClientAPI.GetCatalogItemsAsync(new GetCatalogItemsRequest());
        if (response.Error != null)
        {
            Debug.Log(response.Error.GenerateErrorReport());
            return;
        }

        catalogList = response.Result.Catalog;
        foreach (var item in catalogList)
        {
            Debug.Log(item.ItemId);
        }
    }

    public async UniTask ConsumeItemAsync(string itemId, int consumeCount)
    {
        var request = new ConsumeItemRequest
        {
            ItemInstanceId = itemId,
            ConsumeCount = consumeCount
        };
        var result = await PlayFabClientAPI.ConsumeItemAsync(request);
        if (result.Error != null)
        {
            Debug.Log(result.Error.GenerateErrorReport());
        }

        Debug.Log(result.Result.ItemInstanceId);
        Debug.Log(result.Result.RemainingUses);
    }
}