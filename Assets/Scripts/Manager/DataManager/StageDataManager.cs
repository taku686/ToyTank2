using System.Collections.Generic;
using System.Linq;
using Data;
using UnityEngine;

public class StageDataManager : MonoBehaviour
{
    public List<StageData> stageDatum = new();

    public StageData GetStageData(int index)
    {
        return stageDatum.FirstOrDefault(x => x.stage == index);
    }
}