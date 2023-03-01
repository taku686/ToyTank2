using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class EnemyDataManager : MonoBehaviour
{
    public List<EnemyData> enemyDatum = new();
    private static EnemyDataManager _instance;
    public static EnemyDataManager Instance => _instance;

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

    public EnemyData GetEnemyData(int level, int version)
    {
        return enemyDatum.FirstOrDefault(x => x.level == level && x.version == version);
    }
}