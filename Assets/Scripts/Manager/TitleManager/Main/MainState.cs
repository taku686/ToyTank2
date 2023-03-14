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
            private MainView _mainView;
            private UIAnimation _uiAnimation;
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

            private void Initialize()
            {
                _uiAnimation = Owner.uiAnimation;
                _mainView = Owner.mainView;
                _playerPos = Owner.playerPos;
                _mainView.settingPanel.SetActive(false);
                _mainView.platformObj.SetActive(true);
                SetupTank();
            }

            private void InitializeButton()
            {
                _mainView.battleButton.onClick.RemoveAllListeners();
                _mainView.shopButton.onClick.RemoveAllListeners();
                _mainView.plantButton.onClick.RemoveAllListeners();
                _mainView.battleButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await OnClickOpenStageSelectPanel()));
                _mainView.shopButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickShopButton()));
                _mainView.plantButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickPlantButton()));
            }

            private void SetupTank()
            {
                var userData = UserDataManager.Instance.GetUserData();
                var canonData = CanonDataManager.Instance.GetCanonData(userData.currentCanonDataIndex);
                var baseData = BaseDataManager.Instance.GetBaseData(userData.currentBaseDataIndex);
                Owner.CreateTank(canonData, baseData);
                _playerPos.gameObject.SetActive(true);
            }

            private async UniTask OnClickOpenStageSelectPanel()
            {
                var battleButton = _mainView.battleButton.transform;
                await _uiAnimation.Click(battleButton, GameCommonData.ClickDuration);
                Owner.SwitchPhaseGameObject((int)Event.StageSelect);
                Owner._stateMachine.Dispatch((int)Event.StageSelect);
            }


            private async UniTask OnClickShopButton()
            {
                await _uiAnimation.Click(_mainView.shopButton.transform, GameCommonData.ClickDuration);
                Owner.SwitchPhaseGameObject((int)Event.Shop);
                Owner._stateMachine.Dispatch((int)Event.Shop);
            }

            private async UniTask OnClickPlantButton()
            {
                await _uiAnimation.Click(_mainView.plantButton.transform, GameCommonData.ClickDuration);
                Owner.SwitchPhaseGameObject((int)Event.Plant);
                Owner._stateMachine.Dispatch((int)Event.Plant);
            }
        }
    }
}