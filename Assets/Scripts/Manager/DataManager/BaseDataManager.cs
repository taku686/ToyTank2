using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BaseDataManager : MonoBehaviour
{
    public List<BaseData> baseDatum = new();

    public BaseData GetBaseData(int index)
    {
        return baseDatum.FirstOrDefault(x => x.baseObjIndex == index);
    }
}