using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Data;
using UI;
using UnityEngine;
using State = StateMachine<BattleCore>.State;

public partial class BattleCore
{
    public class RewardState : State
    {
        private RewardView _rewardView;
        private UIAnimation _uiAnimation;
        private PlayFabUserData _playFabUserData;
        private readonly List<RewardGrid> _rewardGrids = new();

        protected override void OnEnter(State prevState)
        {
            Initialize().Forget();
            InitializeButton();
        }

        protected override void OnExit(State nextState)
        {
            DestroyRewardGrids();
        }

        private async UniTaskVoid Initialize()
        {
            _rewardView = Owner.battleUIView.rewardView;
            _uiAnimation = Owner.uiAnimation;
            _playFabUserData = Owner.playFabUserData;
            await OpenRewardView();
            CreateRewardGrid();
        }

        private void InitializeButton()
        {
            _rewardView.okButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickOk()));
        }

        private async UniTask OnClickOk()
        {
            await _uiAnimation.Click(_rewardView.okButton.transform, GameCommonData.ClickDuration);
            Owner._stateMachine.Dispatch((int)Event.SceneTransition);
        }

        private async UniTask OpenRewardView()
        {
            var gameClearView = Owner.battleUIView.gameClearView;
            gameClearView.gameObject.SetActive(false);
            _rewardView.transform.localScale = Vector3.zero;
            _rewardView.gameObject.SetActive(true);
            await _uiAnimation.Open(_rewardView.transform, GameCommonData.OpenDuration);
        }

        private async UniTask CreateRewardGrid()
        {
            if (!Owner.TryGetCanonReward(out var canonDatum))
            {
                return;
            }

            var gridParent = _rewardView.gridParent;
            var rewardGrid = _rewardView.rewardGrid.gameObject;
            foreach (var canonData in canonDatum)
            {
                var grid = Instantiate(rewardGrid, gridParent).GetComponent<RewardGrid>();
                grid.rewardImage.sprite = canonData.image;
                _rewardGrids.Add(grid);
                UserDataManager.Instance.AddAvailableCanonData(canonData);
            }

            var userData = UserDataManager.Instance.GetUserData();
            await _playFabUserData.UpdateUserData(userData);
        }

        private void DestroyRewardGrids()
        {
            foreach (var rewardGrid in _rewardGrids)
            {
                Destroy(rewardGrid);
            }

            _rewardGrids.Clear();
        }
    }
}