using System;
using System.Collections;
using System.Collections.Generic;
using Data;
using UniRx;
using UnityEngine;

public class EnemyManager : MonoBehaviour
{
    [SerializeField] private Transform[] enemyCreatePositions;
    [SerializeField] private EnemyFactory enemyFactory;
    private const float EnemyScale = 2.5f;
    private int _deadCount;
    private readonly Subject<Unit> _annihilate = new();
    public Subject<Unit> Annihilate => _annihilate;
    public int DeadCount => _deadCount;


    public void CreateEnemy(StageData stageData)
    {
        for (int i = 0; i < stageData.enemyDatum.Count; i++)
        {
            int level = stageData.enemyDatum[i].level;
            int version = stageData.enemyDatum[i].version;
            Transform createPos = GetCreatePos(stageData.createPoses[i]);
            var enemy = enemyFactory.CreateEnemy(level, version, createPos);
            enemy.transform.localScale = Vector3.one * EnemyScale;
            var enemyCore = enemy.GetComponent<EnemyCore>();
            var health = enemyCore.enemyHealth;
            var enemyCount = stageData.enemyDatum.Count;
            CheckDead(health, enemyCount);
        }
    }

    private void CheckDead(EnemyHealth health, int enemyCount)
    {
        health.isAlive.Subscribe(alive =>
        {
            if (alive)
            {
                return;
            }

            _deadCount++;
            if (_deadCount >= enemyCount)
            {
                _annihilate.OnNext(Unit.Default);
            }
        }).AddTo(health.gameObject);
    }

    private Transform GetCreatePos(CreatePos createPos)
    {
        switch (createPos)
        {
            case CreatePos.UpperCenterRight:
                return enemyCreatePositions[0];
            case CreatePos.UpperCenterCenter:
                return enemyCreatePositions[1];
            case CreatePos.UpperCenterLeft:
                return enemyCreatePositions[2];
            case CreatePos.UpperLeftRight:
                return enemyCreatePositions[3];
            case CreatePos.UpperLeftCenter:
                return enemyCreatePositions[4];
            case CreatePos.UpperLeftLeft:
                return enemyCreatePositions[5];
            case CreatePos.UpperRightRight:
                return enemyCreatePositions[6];
            case CreatePos.UpperRightCenter:
                return enemyCreatePositions[7];
            case CreatePos.UpperRightLeft:
                return enemyCreatePositions[8];
            default:
                return null;
        }
    }

    private void OnDestroy()
    {
        _annihilate.Dispose();
    }
}