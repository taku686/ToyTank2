using System.Collections.Generic;

[System.Serializable]
public class UserData
{
    public int baseDataIndex;

    public int currentCanonIndex;

    public List<int> availableBaseLists = new();

    public List<int> availableCanonList = new();

    public int maxStage;

    public List<int> currentEquippedCanonList = new(3);
}