using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanonSwitchManager : MonoBehaviour
{
    [SerializeField] private List<Image> imageList = new();
    [SerializeField] private Button canonSwitchButton;
    private int _count;
    private PlayerManager _playerManager;
    private List<CanonData> _canonDataList = new();
    private CanonData _currentCanon;

    public void Initialize(List<CanonData> canonDataList, PlayerManager playerManager)
    {
        _canonDataList = canonDataList;
        _playerManager = playerManager;
        _currentCanon = _canonDataList[0];
        for (int i = 0; i < canonDataList.Count; i++)
        {
            imageList[i].sprite = canonDataList[i].image;
        }

        canonSwitchButton.onClick.AddListener(ChangeCanon);
    }


    private void ChangeCanon()
    {
        _count++;
        imageList[0].sprite = _canonDataList[_count % 3].image;
        imageList[1].sprite = _canonDataList[(_count + 1) % 3].image;
        imageList[2].sprite = _canonDataList[(_count + 2) % 3].image;
        _playerManager.ChangeCanon(_canonDataList[_count % 3]);
    }
}