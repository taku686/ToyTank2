using System.Collections.Generic;
using UnityEngine.Serialization;

[System.Serializable]
public class UserData
{
    public BaseData baseData;

    public int currentCanonIndex;

    public List<BaseData> availableBaseLists;

    public List<CanonData> availableCanonList;

    public int maxStage;

    [FormerlySerializedAs("_currentEqipedCanonArray")]
    public CanonData[] currentEquippedCanonArray;
}