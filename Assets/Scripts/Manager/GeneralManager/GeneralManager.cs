using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeneralManager : MonoBehaviour
{
    [SerializeField] private int[] defaultBaseNumber = new int[3];
    [SerializeField] private List<CanonData> defaultCanonData = new();
    [SerializeField] private List<BaseData> baseDataList;
    [SerializeField] private List<CanonData> canonDataList;
    [SerializeField] private PlayerManager playerManager;
    [SerializeField] private EnemyManager enemyManager;
    [SerializeField] private CameraManager cameraManager;
    [SerializeField] private ShellManager shellManager;
    [SerializeField] private BattleCore battleCore;
    [SerializeField] private CanonSwitchManager canonSwitchManager;
    [SerializeField] private CanonDataManager canonDataManager;
    [SerializeField] private BaseDataManager baseDataManager;
    private CanonData _currentCanonData;

    private void Awake()
    {
        UserData userData = SaveSystem.Instance.UserData;
        var baseData = baseDataManager.GetBaseData(userData.baseDataIndex);
        if (baseData == null || userData.currentEquippedCanonList.Count == 0)
        {
            baseData = baseDataList[defaultBaseNumber[0]];
            userData.currentEquippedCanonList = new List<int>(0);
        }

        Application.targetFrameRate = 60;
        List<CanonData> canonDatum = new List<CanonData>();
        foreach (var canonIndex in userData.currentEquippedCanonList)
        {
            canonDatum.Add(canonDataManager.GetCanonData(canonIndex));
        }

        canonSwitchManager.Initialize(canonDatum, playerManager);
        playerManager.Initialize(userData);
        cameraManager.Initialize();
        shellManager.InitializePlayerPool(userData);
        battleCore.Initialize(playerManager, enemyManager);
    }
}