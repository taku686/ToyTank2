using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CanonDataManager : MonoBehaviour
{
    public List<CanonData> canonDatum = new();
    private static CanonDataManager _instance;
    public static CanonDataManager Instance => _instance;

    private void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
        }
        else if (_instance != this)
        {
            Destroy(gameObject);
        }


        DontDestroyOnLoad(gameObject);
    }

    public CanonData GetCanonData(int index)
    {
        return canonDatum.FirstOrDefault(x => x.index == index);
    }
}