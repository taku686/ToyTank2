using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanonSwitchManager : MonoBehaviour
{
    private const float CanonRotationY = 198.76f;
    [SerializeField] private Button _button;
    private int _count;
    private PlayerManager _playerManager;
    private List<CanonData> _canonDataList = new();
    private readonly List<GameObject> _canonObjList = new();
    private CanonData _currentCanon;

    public void Initialize(List<CanonData> canonDataArray, PlayerManager playerManager)
    {
        _canonDataList = canonDataArray;
        _playerManager = playerManager;
        for (int i = 0; i < canonDataArray.Count; i++)
        {
            GameObject canonObj = Instantiate(_canonDataList[i].CanonObj);
            canonObj.transform.position = new Vector3(-100 + 100 * i, 1000, 0);
            canonObj.transform.localEulerAngles = new Vector3(0, CanonRotationY, 0);
            canonObj.GetComponent<Animator>().enabled = false;
            _canonObjList.Add(canonObj);
        }

        _currentCanon = _canonDataList[0];
    }


    public void ChangeCanon()
    {
        _count++;
        _canonObjList[0].transform.position = new Vector3(-100 + 100 * (_count % 3), 1000, 0);
        _canonObjList[2].transform.position = new Vector3(-100 + 100 * ((_count + 1) % 3), 1000, 0);
        _canonObjList[1].transform.position = new Vector3(-100 + 100 * ((_count + 2) % 3), 1000, 0);
        _currentCanon = _canonDataList[_count % 3];
        _playerManager.ChangeCanon(_currentCanon, _count % 3);
    }
}