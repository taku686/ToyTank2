using Cysharp.Threading.Tasks;
using Manager.TitleManager.Main;
using UI;
using UnityEngine;
using State = StateMachine<Manager.TitleManager.TitleCore>.State;

namespace Manager.TitleManager
{
    public partial class TitleCore
    {
        public class MainState : State
        {
            private MainView _mainView;
            private MainManager _mainManager;
            private UIAnimation _uiAnimation;
            private UserData _userData;

            protected override void OnEnter(State prevState)
            {
                Initialize();
                InitializeButton();
            }

            private void Initialize()
            {
                _uiAnimation = Owner.uiAnimation;
                _mainManager = Owner.mainManager;
                _mainView = Owner.mainView;
                _userData = Owner._userData;
                _mainView.settingPanel.SetActive(false);
                _mainView.stageSelectPanel.SetActive(false);
            }

            private void InitializeButton()
            {
                _mainView.battleButton.onClick.RemoveAllListeners();
                _mainView.stageSelectCloseButton.onClick.RemoveAllListeners();
                _mainView.battleButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await OpenStageSelectPanel()));
                _mainView.stageSelectCloseButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await CloseStageSelectPanel()));
            }

            private async UniTask OpenStageSelectPanel()
            {
                var battleButton = _mainView.battleButton.transform;
                var panel = _mainView.stageSelectPanel.transform;
                _mainManager.stageSelectGrid.CreateGrids(_userData.maxStage);
                await _uiAnimation.Click(battleButton, 0.2f);
                panel.localScale = Vector3.zero;
                panel.gameObject.SetActive(true);
                await _uiAnimation.Open(panel, 1f);
            }

            private async UniTask CloseStageSelectPanel()
            {
                var panel = _mainView.stageSelectPanel.transform;
                var closeButton = _mainView.stageSelectCloseButton.transform;
                await _uiAnimation.Click(closeButton, 0.2f);
                await _uiAnimation.Close(panel, 0.5f);
                panel.gameObject.SetActive(false);
                _mainManager.stageSelectGrid.DestroyGrids();
            }
        }
    }
}