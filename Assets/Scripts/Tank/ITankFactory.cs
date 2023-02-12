using UnityEngine;

public interface ITankFactory
{
    public GameObject CreateEnemy(int level, int version,Transform createPos);
}