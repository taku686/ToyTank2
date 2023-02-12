using System.Linq;
using Data;
using UnityEngine;

public class EnemyFactory : MonoBehaviour, ITankFactory
{
    [SerializeField] private EnemyData[] enemyDatum;

    public GameObject CreateEnemy(int level, int version, Transform createPos)
    {
        foreach (var enemyData in enemyDatum.Where(x => x.level == level && x.version == version))
        {
            if (enemyData == null)
            {
                return null;
            }

            var enemy = new GameObject
            {
                name = level + "_" + version
            };
            var enemyTransform = enemy.transform;
            enemyTransform.position = createPos.position;
            var canonData = enemyData.canonData;
            var baseData = enemyData.baseData;
            CreateCanon(canonData, baseData, enemyTransform);
            CreateBase(baseData, enemyTransform);
            SetMaterial(enemy, level);
            enemy.AddComponent<Health>();
            return enemy;
        }

        return null;
    }

    private void CreateCanon(CanonData canonData, BaseData baseData, Transform createPos)
    {
        var canonObj = Instantiate(canonData.CanonObj, createPos);
        canonObj.transform.localPosition = baseData.CanonPos;
    }

    private void CreateBase(BaseData baseData, Transform createPos)
    {
        GameObject baseObj = Instantiate(baseData.BaseObj, createPos);
        baseObj.transform.localPosition = Vector3.zero;
    }

    private void SetMaterial(GameObject tankObj, int level)
    {
        var meshRenderer = tankObj.GetComponentsInChildren<MeshRenderer>();
        foreach (var enemyMaterial in meshRenderer.Where(x => x.material.name == GameCommonData.EnemyMaterialName)
                     .Select(x => x.material))
        {
            enemyMaterial.color = GameCommonData.GetEnemyColor(level);
        }
    }
}