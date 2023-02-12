using Cysharp.Threading.Tasks;
using Data;
using UnityEngine;
using UnityEngine.UI;

public class StageGrid : MonoBehaviour
{
    private Button _button;

    public void Initialize()
    {
        _button = gameObject.GetComponentInChildren<Button>();
        if (_button == null)
        {
            _button = gameObject.AddComponent<Button>();
        }

        _button.onClick.AddListener(() => UniTask.Void(async () => await OnClickSceneTransition()));
    }

    private async UniTask OnClickSceneTransition()
    {
        await SceneTransition.Instance.Transition(GameCommonData.BattleScene);
    }
}