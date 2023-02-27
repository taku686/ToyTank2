using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CanonDataManager : MonoBehaviour
{
    public List<CanonData> canonDatum = new();

    public CanonData GetCanonData(int index)
    {
        return canonDatum.FirstOrDefault(x => x.index == index);
    }
}