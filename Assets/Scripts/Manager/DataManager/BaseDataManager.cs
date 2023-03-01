using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class BaseDataManager : MonoBehaviour
{
    public List<BaseData> baseDatum = new();

    private static BaseDataManager _instance;
    public static BaseDataManager Instance => _instance;

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

    public BaseData GetBaseData(int index)
    {
        return baseDatum.FirstOrDefault(x => x.baseObjIndex == index);
    }
}