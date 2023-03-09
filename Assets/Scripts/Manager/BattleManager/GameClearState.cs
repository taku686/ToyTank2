using System;
using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks;
using UnityEngine.UI;
using State = StateMachine<BattleCore>.State;

public partial class BattleCore
{
    public class GameClearState : State
    {
        private BattleUIView _battleUIView;


        protected override void OnEnter(State prevState)
        {
            Initialize().Forget();
        }

        private async UniTaskVoid Initialize()
        {
            var clearUIView = Owner.battleUIView.gameClearView;
            var stars = clearUIView.starImages;
            var health = Owner._playerManager.Health;
            var playFabUserData = Owner.playFabUserData;
            clearUIView.gameObject.SetActive(true);
            InitializeButton(clearUIView);
            SetStar(stars, health);
            await UpdateUserStageData(playFabUserData);
        }

        private void InitializeButton(GameClearView gameClearView)
        {
            gameClearView.titleButton.onClick.AddListener(OnClickPhaseTransition);
        }

        private void SetStar(Image[] stars, PlayerHealth health)
        {
            var maxHp = health.HpBar.maxValue;
            var currentHp = health.HpBar.value;
            int getStarCount;
            if (Math.Abs(currentHp - maxHp) <= 0)
            {
                getStarCount = 3;
            }
            else if (currentHp >= maxHp * 2 / 3)
            {
                getStarCount = 2;
            }
            else if (currentHp >= maxHp * 1 / 3)
            {
                getStarCount = 1;
            }
            else
            {
                getStarCount = 0;
            }

            for (int i = 0; i < getStarCount; i++)
            {
                stars[i].gameObject.SetActive(true);
            }
        }

        private async UniTask UpdateUserStageData(PlayFabUserData playFabUserData)
        {
            var maxStage = UserDataManager.Instance.GetUserData().maxStage;
            var currentStage = StageDataManager.Instance.CurrentStage;
            if (maxStage <= currentStage)
            {
                return;
            }

            var userData = UserDataManager.Instance.GetUserData();
            userData.maxStage = currentStage;
            UserDataManager.Instance.SetUserData(userData);
            await playFabUserData.UpdateUserData(userData);
        }

        private void OnClickPhaseTransition()
        {
            if (Owner.TryGetCanonReward(out _))
            {
                Owner._stateMachine.Dispatch((int)Event.Reward);
            }
            else
            {
                Owner._stateMachine.Dispatch((int)Event.SceneTransition);
            }
        }
    }
}