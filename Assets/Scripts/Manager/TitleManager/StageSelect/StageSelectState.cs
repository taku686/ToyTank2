using System.Numerics;
using Cysharp.Threading.Tasks;
using Data;
using UI;
using UnityEngine;
using State = StateMachine<Manager.TitleManager.TitleCore>.State;
using Vector3 = UnityEngine.Vector3;

namespace Manager.TitleManager
{
    public partial class TitleCore
    {
        public class StageSelectState : State
        {
            private StageSelectView _stageSelectView;
            private UIAnimation _uiAnimation;

            protected override void OnEnter(State prevState)
            {
                Initialize().Forget();
                InitializeButton();
            }

            private async UniTaskVoid Initialize()
            {
                _stageSelectView = Owner.stageSelectView;
                _uiAnimation = Owner.uiAnimation;
                _stageSelectView.stageSelectPanel.Initialize(_uiAnimation);
                await OpenStageSelectPanel();
            }

            private void InitializeButton()
            {
                _stageSelectView.stageSelectCloseButton.onClick.RemoveAllListeners();
                _stageSelectView.stageSelectCloseButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await OnClickCloseStageSelectPanel()));
            }

            private async UniTask OnClickCloseStageSelectPanel()
            {
                var panel = _stageSelectView.stageSelectPanel.transform;
                var closeButton = _stageSelectView.stageSelectCloseButton.transform;
                await _uiAnimation.Click(closeButton, GameCommonData.ClickDuration);
                await _uiAnimation.Close(panel, GameCommonData.CloseDuration);
                panel.gameObject.SetActive(false);
                _stageSelectView.stageSelectPanel.DestroyGrids();
                Owner.SwitchPhaseGameObject((int)Event.Main);
                Owner._stateMachine.Dispatch((int)Event.Main);
            }

            private async UniTask OpenStageSelectPanel()
            {
                var panel = _stageSelectView.stageSelectPanel.transform;
                _stageSelectView.stageSelectPanel.CreateGrids();
                panel.localScale = Vector3.zero;
                panel.gameObject.SetActive(true);
                await _uiAnimation.Open(panel, GameCommonData.OpenDuration);
            }
        }
    }
}