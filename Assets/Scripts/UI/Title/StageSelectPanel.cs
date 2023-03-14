using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Data;
using TMPro;
using UI;
using UnityEngine;
using UnityEngine.UI;

public class StageSelectPanel : MonoBehaviour
{
    [SerializeField] private RectTransform parent;
    [SerializeField] private GameObject grid;
    [SerializeField] private GameObject disableGrid;
    [SerializeField] private TextMeshProUGUI pageText;
    [SerializeField] private Button nextButton;
    [SerializeField] private Button prevButton;
    private UIAnimation _uiAnimation;
    private readonly List<GameObject> _grids = new();
    private const int MaxStageCountPerPage = 12;
    private int _currentPage = 1;

    private int PlayerMaxStage => UserDataManager.Instance.GetUserData().maxStage;

    //todo ‰¼‚Ì’l
    private int MaxStage => 50;

    private int MaxPage(int maxPage)
    {
        return (int)Mathf.Ceil(maxPage / (float)MaxStageCountPerPage);
    }

    public void Initialize(UIAnimation uiAnimation)
    {
        _uiAnimation = uiAnimation;
        InitializeButton();
    }

    private void InitializeButton()
    {
        nextButton.onClick.RemoveAllListeners();
        prevButton.onClick.RemoveAllListeners();
        nextButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickNextButton()));
        prevButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickPrevButton()));
    }

    public void CreateGrids()
    {
        SetPageText();
        var modifiedPlayerMaxStage = PlayerMaxStage + 1;
        var createActiveGridCount = _currentPage * MaxStageCountPerPage <= modifiedPlayerMaxStage
            ? MaxStageCountPerPage
            : modifiedPlayerMaxStage - (_currentPage - 1) * MaxStageCountPerPage;
        var createGridCount = _currentPage * MaxStageCountPerPage <= MaxStage
            ? MaxStageCountPerPage
            : MaxStage % MaxStageCountPerPage;
        for (int i = 0; i < createGridCount; i++)
        {
            if (createActiveGridCount > i)
            {
                var obj = Instantiate(grid, parent);
                var text = obj.GetComponentInChildren<TextMeshProUGUI>();
                var stageNum = (_currentPage - 1) * MaxStageCountPerPage + i + 1;
                text.text = stageNum.ToString();
                var stageGridSc = obj.AddComponent<StageGrid>();
                stageGridSc.Initialize(stageNum);
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
        if (_currentPage > MaxPage(MaxStage))
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
            _currentPage = MaxPage(MaxStage);
        }

        CreateGrids();
    }

    private void SetPageText()
    {
        pageText.text = _currentPage + " / " + MaxPage(MaxStage);
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