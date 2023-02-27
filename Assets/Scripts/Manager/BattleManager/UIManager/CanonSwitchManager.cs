using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanonSwitchManager : MonoBehaviour
{
    private const float CanonRotationY = 198.76f;
    public List<CanonData> _canonDataArray = new();
    [SerializeField] private Button _button;
    [SerializeField] private List<GameObject> canonList = new();
    private int _count;
    public CanonData _currentCanon;
    private PlayerManager _playerManager;


    public void Initialize(List<CanonData> canonDataArray, PlayerManager playerManager)
    {
        _canonDataArray = canonDataArray;
        _playerManager = playerManager;
        for (int i = 0; i < 3; i++)
        {
            GameObject canon = Instantiate(_canonDataArray[i].CanonObj);
            canon.transform.position = new Vector3(-100 + 100 * i, 1000, 0);
            canon.transform.localEulerAngles = new Vector3(0, CanonRotationY, 0);
            canon.GetComponent<Animator>().enabled = false;
            canonList.Add(canon);
        }

        _currentCanon = _canonDataArray[0];
    }

    public void ChangeCanon()
    {
        _count++;
        canonList[0].transform.position = new Vector3(-100 + 100 * (_count % 3), 1000, 0);
        canonList[2].transform.position = new Vector3(-100 + 100 * ((_count + 1) % 3), 1000, 0);
        canonList[1].transform.position = new Vector3(-100 + 100 * ((_count + 2) % 3), 1000, 0);
        _currentCanon = _canonDataArray[_count % 3];
        _playerManager.ChangeCanon(_currentCanon, _count % 3);
    }
}