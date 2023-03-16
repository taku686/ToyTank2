using System.Collections.Generic;
using System.Linq;
using Data;
using PlayFab.ClientModels;
using UnityEngine;

public class UserDataManager : MonoBehaviour
{
    [SerializeField] private UserData _userData;
    private List<ItemInstance> _inventory = new();

    private static UserDataManager _instance;
    public static UserDataManager Instance => _instance;

    private void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
        }
        else if (_instance != this)
        {
            Destroy(gameObject);
        }


        DontDestroyOnLoad(gameObject);
    }

    public UserData GetUserData()
    {
        return _userData;
    }

    public void SetUserData(UserData userData)
    {
        _userData = userData;
    }

    public void SetInventory(List<ItemInstance> inventory)
    {
        _inventory = inventory;
    }

    public UserData CreateUserData()
    {
        var userData = new UserData()
        {
            currentBaseDataIndex = 0,
            currentCanonDataIndex = 0,
            availableBaseLists = new List<int> { 0 },
            availableCanonList = new List<int> { 0 },
            maxStage = 0,
            currentEquippedCanonList = new List<int>(3) { 0, 0, 0 }
        };

        return userData;
    }

    public void AddAvailableCanonData(CanonData canonData)
    {
        _userData.availableCanonList.Add(canonData.index);
    }

    public void AddAvailableCanonData(int canonDataIndex)
    {
        _userData.availableCanonList.Add(canonDataIndex);
    }

    public bool IsRemoveAds()
    {
        var removeAds =
            _inventory.FirstOrDefault(x => x.ItemId == GameCommonData.RemoveAdsItem);
        return removeAds != null;
    }
}