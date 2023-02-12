using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
[CreateAssetMenu(fileName = "Item", menuName = "Item/Enemy")]
public class EnemyData : ScriptableObject
{
    public BaseData baseData;
    public CanonData canonData;
    public int level;
    public int version;
}