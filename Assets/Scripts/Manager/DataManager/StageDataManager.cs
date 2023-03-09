using System.Collections.Generic;
using System.Linq;
using Data;
using UnityEngine;

public class StageDataManager : MonoBehaviour
{
    public List<StageData> stageDatum = new();
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
        return stageDatum.FirstOrDefault(x => x.stage == index);
    }

    public StageData GetCurrentStageData()
    {
        return stageDatum.FirstOrDefault(x => x.stage == _currentStage);
    }

    public void SetCurrentStage(int stageIndex)
    {
        _currentStage = stageIndex;
    }
}