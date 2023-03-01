using System.Collections.Generic;
using UnityEngine;

public class GeneralManager : MonoBehaviour
{
    [SerializeField] private PlayerManager playerManager;
    [SerializeField] private EnemyManager enemyManager;
    [SerializeField] private CameraManager cameraManager;
    [SerializeField] private ShellManager shellManager;
    [SerializeField] private BattleCore battleCore;
    [SerializeField] private CanonSwitchManager canonSwitchManager;
    private const int DefaultBaseIndex = 0;
    private const int DefaultCanonCapacity = 1;

    private void Awake()
    {
        Application.targetFrameRate = 60;
        UserData userData = UserDataManager.Instance.GetUserData();
        var baseData = BaseDataManager.Instance.GetBaseData(userData.baseDataIndex);
        if (baseData == null || userData.currentEquippedCanonList.Count == 0)
        {
            baseData = BaseDataManager.Instance.GetBaseData(DefaultBaseIndex);
            userData.currentEquippedCanonList = new List<int>(DefaultCanonCapacity);
        }

        List<CanonData> canonDatum = new List<CanonData>();
        foreach (var canonIndex in userData.currentEquippedCanonList)
        {
            var canonData = CanonDataManager.Instance.GetCanonData(canonIndex);
            Debug.Log(canonData.name);
            canonDatum.Add(canonData);
        }

        canonSwitchManager.Initialize(canonDatum, playerManager);
        playerManager.Initialize(userData);
        cameraManager.Initialize();
        shellManager.InitializePlayerPool(userData);
        battleCore.Initialize(playerManager, enemyManager);
    }
}