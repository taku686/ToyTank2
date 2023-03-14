using System.Collections.Generic;
using System.Linq;
using Data;
using UnityEngine;

public class StageDataManager : MonoBehaviour
{
    [SerializeField] private List<StageData> _stageDatum = new();
    private static StageDataManager _instance;
    public static StageDataManager Instance => _instance;
    private int _currentStage = 2;

    public int CurrentStage => _currentStage;

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

    public StageData GetStageData(int index)
    {
        return _stageDatum.FirstOrDefault(x => x.stage == index);
    }

    public StageData GetCurrentStageData()
    {
        return _stageDatum.FirstOrDefault(x => x.stage == _currentStage);
    }

    public void SetCurrentStage(int stageIndex)
    {
        _currentStage = stageIndex;
    }

    public void AddStageData(StageData stageData)
    {
        _stageDatum.Add(stageData);
    }

    public void DebugSetStageData()
    {
        _stageDatum[0].enemyDatum[0] = EnemyData.TestEnemyData();
        _stageDatum[0].createPoses[0] = CreatePos.UpperCenterCenter;
    }
}