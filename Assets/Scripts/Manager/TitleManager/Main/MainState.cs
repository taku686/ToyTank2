using System.Linq;
using Cysharp.Threading.Tasks;
using Data;
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
            private const float RotationSpeed = 25f;
            private MainView _mainView;
            private MainManager _mainManager;
            private UIAnimation _uiAnimation;
            private UserData _userData;
            private Transform _playerPos;

            protected override void OnEnter(State prevState)
            {
                Initialize();
                InitializeButton();
            }

            protected override void OnExit(State nextState)
            {
                _mainView.platformObj.SetActive(false);
            }

            protected override void OnUpdate()
            {
                _playerPos.eulerAngles = new Vector3(0, Time.time * RotationSpeed, 0);
            }

            private void Initialize()
            {
                _uiAnimation = Owner.uiAnimation;
                _mainManager = Owner.mainManager;
                _mainView = Owner.mainView;
                _userData = Owner._userData;
                _playerPos = Owner.playerPos;
                _mainManager.stageSelectGrid.Initialize(_uiAnimation);
                _mainView.settingPanel.SetActive(false);
                _mainView.stageSelectPanel.SetActive(false);
                _mainView.platformObj.SetActive(true);
                _playerPos.gameObject.SetActive(true);
            }

            private void InitializeButton()
            {
                _mainView.battleButton.onClick.RemoveAllListeners();
                _mainView.stageSelectCloseButton.onClick.RemoveAllListeners();
                _mainView.shopButton.onClick.RemoveAllListeners();
                _mainView.battleButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await OnClickOpenStageSelectPanel()));
                _mainView.stageSelectCloseButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await OnClickCloseStageSelectPanel()));
                _mainView.shopButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickShopButton()));
            }

            private async UniTask OnClickOpenStageSelectPanel()
            {
                var battleButton = _mainView.battleButton.transform;
                var panel = _mainView.stageSelectPanel.transform;
                _mainManager.stageSelectGrid.CreateGrids();
                await _uiAnimation.Click(battleButton, GameCommonData.ClickDuration);
                panel.localScale = Vector3.zero;
                panel.gameObject.SetActive(true);
                await _uiAnimation.Open(panel, 1f);
            }

            private async UniTask OnClickCloseStageSelectPanel()
            {
                var panel = _mainView.stageSelectPanel.transform;
                var closeButton = _mainView.stageSelectCloseButton.transform;
                await _uiAnimation.Click(closeButton, GameCommonData.ClickDuration);
                await _uiAnimation.Close(panel, GameCommonData.CloseDuration);
                panel.gameObject.SetActive(false);
                _mainManager.stageSelectGrid.DestroyGrids();
            }

            private async UniTask OnClickShopButton()
            {
                await _uiAnimation.Click(_mainView.shopButton.transform, GameCommonData.ClickDuration);
                Owner._stateMachine.Dispatch((int)Event.Shop);
                Owner.SwitchPhaseGameObject((int)Event.Shop);
            }
        }
    }
}