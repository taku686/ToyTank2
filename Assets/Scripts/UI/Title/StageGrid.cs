using Cysharp.Threading.Tasks;
using Data;
using UnityEngine;
using UnityEngine.UI;

public class StageGrid : MonoBehaviour
{
    private Button _button;
    public int stageNum;

    public void Initialize(int index)
    {
        _button = gameObject.GetComponentInChildren<Button>();
        if (_button == null)
        {
            _button = gameObject.AddComponent<Button>();
        }

        stageNum = index;
        _button.onClick.AddListener(() => UniTask.Void(async () => await OnClickSceneTransition()));
    }

    private async UniTask OnClickSceneTransition()
    {
        Debug.Log(stageNum);
        StageDataManager.Instance.SetCurrentStage(stageNum);
        await SceneTransition.Instance.Transition(GameCommonData.BattleScene);
    }
}