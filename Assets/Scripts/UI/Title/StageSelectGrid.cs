using System.Collections;
using System.Collections.Generic;
using Data;
using TMPro;
using UnityEngine;

public class StageSelectGrid : MonoBehaviour
{
    [SerializeField] private RectTransform parent;
    [SerializeField] private GameObject grid;
    [SerializeField] private GameObject disableGrid;
    private readonly List<GameObject> _grids = new();

    public void CreateGrids(int maxStage)
    {
        for (int i = 0; i < GameCommonData.MaxStage; i++)
        {
            if (maxStage > i)
            {
                var obj = Instantiate(grid, parent);
                var text = obj.GetComponentInChildren<TextMeshProUGUI>();
                text.text = (i + 1).ToString();
                var stageGridSc = obj.AddComponent<StageGrid>();
                stageGridSc.Initialize();
                _grids.Add(obj);
                continue;
            }

            var disableObj = Instantiate(disableGrid, parent);
            _grids.Add(disableObj);
        }

        var position = parent.position;
        position = new Vector3(position.x, -(parent.rect.height / 2), position.z);
        parent.position = position;
    }

    public void DestroyGrids()
    {
        foreach (var obj in _grids)
        {
            Destroy(obj);
        }

        _grids.Clear();
    }
}