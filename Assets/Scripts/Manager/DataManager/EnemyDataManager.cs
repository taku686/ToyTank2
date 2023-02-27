using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class EnemyDataManager : MonoBehaviour
{
    public List<EnemyData> enemyDatum = new();

    public EnemyData GetEnemyData(int level, int version)
    {
        return enemyDatum.FirstOrDefault(x => x.level == level && x.version == version);
    }
}