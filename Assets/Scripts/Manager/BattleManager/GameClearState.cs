using System;
using UnityEngine.UI;
using State = StateMachine<BattleCore>.State;

public partial class BattleCore
{
    public class GameClearState : State
    {
        private BattleUIView _battleUIView;


        protected override void OnEnter(State prevState)
        {
            Initialize();
        }

        private void Initialize()
        {
            var clearUIView = Owner.battleUIView.gameClearView;
            var stars = clearUIView.starImages;
            var health = Owner._playerManager.Health;
            clearUIView.gameObject.SetActive(true);
            InitializeButton(clearUIView);
            SetStar(stars, health);
        }

        private void InitializeButton(GameClearView gameClearView)
        {
            gameClearView.titleButton.onClick.AddListener(OnClickSceneTransition);
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

        private void OnClickSceneTransition()
        {
            Owner._stateMachine.Dispatch((int)Event.SceneTransition);
            // SceneManager.LoadScene(GameCommonData.TitleScene);
        }
    }
}