using System.Collections.Generic;
using System.Linq;
using BehaviorDesigner.Runtime;
using Data;
using UnityEngine;
using UnityEngine.AI;

public class EnemyFactory : MonoBehaviour, ITankFactory
{
    [SerializeField] private Material enemyMaterial;
    [SerializeField] private ExternalBehavior externalBehavior;
    private const float ColliderRadius = 1f;
    private const float StoppingDistance = 15f;
    private readonly Vector3 _colliderCenter = new(0, 0.5f, 0);
    public List<EnemyHealth> enemyHealths = new();

    // ReSharper disable Unity.PerformanceAnalysis
    public GameObject CreateEnemy(int level, int version, Transform createPos)
    {
        var enemyData = EnemyDataManager.Instance.GetEnemyData(level, version);
        var enemy = new GameObject
        {
            name = level + "_" + version,
            tag = GameCommonData.EnemyTag
        };
        var enemyTransform = enemy.transform;
        enemyTransform.position = createPos.position;
        var canonData = enemyData.canonData;
        var baseData = enemyData.baseData;
        CreateCanon(canonData, baseData, enemyTransform);
        CreateBase(baseData, enemyTransform);
        SetMaterial(enemy, level);
        SetComponent(enemy, enemyData);
        return enemy;
    }

    private void CreateCanon(CanonData canonData, BaseData baseData, Transform createPos)
    {
        var canonObj = Instantiate(canonData.CanonObj, createPos);
        canonObj.transform.localPosition = baseData.CanonPos;
        SetCanonMove(canonObj, canonData);
    }

    private void CreateBase(BaseData baseData, Transform createPos)
    {
        GameObject baseObj = Instantiate(baseData.BaseObj, createPos);
        baseObj.transform.localPosition = Vector3.zero;
    }

    private void SetMaterial(GameObject tankObj, int level)
    {
        var meshRenderer = tankObj.GetComponentsInChildren<MeshRenderer>();
        foreach (var mesh in meshRenderer.Where(x => x.material.name == GameCommonData.TankMaterialName))
        {
            mesh.material = enemyMaterial;
            mesh.material.color = GameCommonData.GetEnemyColor(level);
        }
    }

    private void SetComponent(GameObject enemy, EnemyData enemyData)
    {
        SetHealth(enemy);
        SetRigidbody(enemy);
        SetCollider(enemy);
        SetNavMeshAgent(enemy);
        SetBehaviorTree(enemy);
        SetEnemyCore(enemy, enemyData);
    }

    private void SetHealth(GameObject enemy)
    {
        var health = enemy.AddComponent<EnemyHealth>();
        enemyHealths.Add(health);
    }

    private void SetRigidbody(GameObject enemy)
    {
        var rigid = enemy.AddComponent<Rigidbody>();
        rigid.useGravity = true;
        rigid.constraints = RigidbodyConstraints.FreezeAll;
    }

    private void SetCollider(GameObject enemy)
    {
        var col = enemy.AddComponent<SphereCollider>();
        col.center = _colliderCenter;
        col.radius = ColliderRadius;
        col.isTrigger = true;
    }

    private void SetNavMeshAgent(GameObject enemy)
    {
        var navMesh = enemy.AddComponent<NavMeshAgent>();
        navMesh.stoppingDistance = StoppingDistance;
    }

    private void SetBehaviorTree(GameObject enemy)
    {
        var behaviorTree = enemy.AddComponent<BehaviorTree>();
        behaviorTree.ExternalBehavior = externalBehavior;
    }

    private void SetCanonMove(GameObject canonObj, CanonData canonData)
    {
        CanonMoveBase canonMoveBase = null;
        switch (canonData.CanonKinds)
        {
            case Data.CanonType.BounceBulletType:
                canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.NormalBulletType:
                canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.RailGunType:
                canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.ShotGunBulletType:
                canonMoveBase = canonObj.AddComponent<ShotGunBulletType>();
                break;
            case Data.CanonType.ToxicBulletType:
                canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.TrackingBulletType:
                canonMoveBase = canonObj.AddComponent<TrackingCanonType>();
                break;
            case Data.CanonType.BeamType:
                canonMoveBase = canonObj.AddComponent<BeamType>();
                break;
            case Data.CanonType.MachineGunType:
                canonMoveBase = canonObj.AddComponent<MachinegunType>();
                break;
            case Data.CanonType.CanonType:
                canonMoveBase = canonObj.AddComponent<CanonType>();
                break;
            case Data.CanonType.FlameType:
                canonMoveBase = canonObj.AddComponent<FlameType>();
                break;
            case Data.CanonType.TwoCanonType:
                canonMoveBase = canonObj.AddComponent<TwoCanonType>();
                break;
        }

        if (canonMoveBase == null)
        {
            return;
        }

        canonMoveBase.CreateShotPos(canonData.ShotPos);
    }

    private void SetEnemyCore(GameObject enemy, EnemyData enemyData)
    {
        var enemyCore = enemy.AddComponent<EnemyCore>();
        enemyCore.Initialize(enemyData);
    }
}