using System.Collections;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Data;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.UI;

public class StageSelectGrid : MonoBehaviour
{
    [SerializeField] private RectTransform parent;
    [SerializeField] private GameObject grid;
    [SerializeField] private GameObject disableGrid;
    [SerializeField] private TextMeshProUGUI pageText;
    [SerializeField] private Button nextButton;
    [SerializeField] private Button prevButton;
    private StageDataManager _stageDataManager;
    private UserDataManager _userDataManager;
    private UIAnimation _uiAnimation;
    private readonly List<GameObject> _grids = new();
    private const int MaxStageCountPerPage = 8;
    private int _currentPage = 1;

    private int PlayerMaxStage => _userDataManager.GetUserData().maxStage;
    //private int MaxStage => _stageDataManager.stageDatum.Count;
    //ToDo ‰¼ƒf[ƒ^
    private int MaxStage => 45;
    private int MaxPage => MaxStage / MaxStageCountPerPage;

    public void Initialize(StageDataManager stageDataManager, UserDataManager userDataManager, UIAnimation uiAnimation)
    {
        _stageDataManager = stageDataManager;
        _userDataManager = userDataManager;
        _uiAnimation = uiAnimation;
        nextButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickNextButton()));
        prevButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickPrevButton()));
    }

    public void CreateGrids()
    {
        SetPageText();
        pageText.text = _currentPage + " / " + MaxPage;
        var createGridCount = _currentPage * MaxStageCountPerPage <= PlayerMaxStage
            ? MaxStageCountPerPage
            : PlayerMaxStage - (_currentPage - 1) * MaxStageCountPerPage;
        for (int i = 0; i < MaxStageCountPerPage; i++)
        {
            if (createGridCount > i)
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

    private async UniTask OnClickNextButton()
    {
        await _uiAnimation.Click(nextButton.transform, GameCommonData.ClickDuration);
        DestroyGrids();
        _currentPage++;
        if (_currentPage > MaxPage)
        {
            _currentPage = 1;
        }
        CreateGrids();
    }

    private async UniTask OnClickPrevButton()
    {
        await _uiAnimation.Click(prevButton.transform, GameCommonData.ClickDuration);
        DestroyGrids();
        _currentPage--;
        if (_currentPage < 1)
        {
            _currentPage = MaxPage;
        }
        CreateGrids();
    }

    private void SetPageText()
    {
        pageText.text = _currentPage + " / " + MaxPage;
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