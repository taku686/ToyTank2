using System.Collections.Generic;
using UnityEngine;

public class UserDataManager : MonoBehaviour
{
    [SerializeField] private BaseDataManager baseDataManager;
    [SerializeField] private CanonDataManager canonDataManager;
    [SerializeField] private UserData _userData;

    public UserData GetUserData()
    {
        return _userData;
    }

    public void SetUserData(UserData userData)
    {
        _userData = userData;
    }

    public UserData CreateUserData()
    {
        var userData = new UserData()
        {
            baseDataIndex = 0,
            currentCanonIndex = 0,
            availableBaseLists = new List<int>() { 0 },
            availableCanonList = new List<int>() { 0 },
            maxStage = 1,
            currentEquippedCanonList = new List<int>() { 0 }
        };

        return userData;
    }
}