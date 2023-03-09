using System.Collections.Generic;
using Data;
using Newtonsoft.Json;
using UnityEngine;

public class PlayFabTitleData : MonoBehaviour
{
    [SerializeField] private GameObject[] canonObj;
    [SerializeField] private GameObject[] baseObj;
    [SerializeField] private GameObject[] shellObj;
    [SerializeField] private Sprite[] sprites;

    public void SetTitleData(Dictionary<string, string> titleDatum)
    {
        var stageDatum = JsonConvert.DeserializeObject<StageData[]>(titleDatum[GameCommonData.StageDataKey]);
        var enemyDatum = JsonConvert.DeserializeObject<EnemyData[]>(titleDatum[GameCommonData.EnemyDataKey]);
        var canonDatum = JsonConvert.DeserializeObject<CanonData[]>(titleDatum[GameCommonData.CanonDataKey]);
        var baseDatum = JsonConvert.DeserializeObject<BaseData[]>(titleDatum[GameCommonData.BaseDataKey]);
        SetCanonData(canonDatum);
        SetBaseData(baseDatum);
        SetEnemyData(enemyDatum);
        SetStageData(stageDatum);
    }

    private void SetCanonData(CanonData[] canonDatum)
    {
        foreach (var canonData in canonDatum)
        {
            canonData.canonObj = canonObj[canonData.canonObjIndex];
            canonData.image = sprites[canonData.imageIndex];
            canonData.canonKinds = GameCommonData.GetCanonType(canonData.canonKindsIndex);
            canonData.shellObj = shellObj[canonData.shellObjIndex];
            canonData.shotPos = new Vector3(canonData.shotPosX, canonData.shotPosY, canonData.shotPosZ);
            CanonDataManager.Instance.canonDatum.Add(canonData);
        }
    }

    private void SetBaseData(BaseData[] baseDatum)
    {
        foreach (var baseData in baseDatum)
        {
            baseData.baseObj = baseObj[baseData.baseObjIndex];
            baseData.baseType = GameCommonData.GetBaseType(baseData.baseTypeIndex);
            baseData.canonPos = new Vector3(baseData.canonPosX, baseData.canonPosY, baseData.canonPosZ);
            BaseDataManager.Instance.baseDatum.Add(baseData);
        }
    }

    private void SetEnemyData(EnemyData[] enemyDatum)
    {
        foreach (var enemyData in enemyDatum)
        {
            enemyData.baseData = BaseDataManager.Instance.GetBaseData(enemyData.baseDataIndex);
            enemyData.canonData = CanonDataManager.Instance.GetCanonData(enemyData.canonDataIndex);
            EnemyDataManager.Instance.enemyDatum.Add(enemyData);
        }
    }

    private void SetStageData(StageData[] stageDatum)
    {
        foreach (var stageData in stageDatum)
        {
            string[] createPosIndex = stageData.createPosIndex.Split(',');
            foreach (var createPos in createPosIndex)
            {
                var index = int.Parse(createPos);
                stageData.createPoses.Add(GameCommonData.GetCreatePos(index));
            }

            string[] enemyDataIndex = stageData.enemyDatumIndex.Split(',');
            foreach (var enemyData in enemyDataIndex)
            {
                var enemyLevelVersion = enemyData.Split('_');
                var level = int.Parse(enemyLevelVersion[0]);
                var version = int.Parse(enemyLevelVersion[1]);
                var data = EnemyDataManager.Instance.GetEnemyData(level, version);
                stageData.enemyDatum.Add(data);
            }

            StageDataManager.Instance.stageDatum.Add(stageData);
        }
    }
}