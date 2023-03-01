using Data;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using State = StateMachine<BattleCore>.State;

public partial class BattleCore
{
    public class GameOverState : State
    {
        protected override void OnEnter(State prevState)
        {
            Initialize();
        }

        private void Initialize()
        {
            var gameOverUIView = Owner.battleUIView.gameOverView;
            var defeatEnemyText = gameOverUIView.defeatEnemyCount;
            var enemyManger = Owner._enemyManager;
            gameOverUIView.gameObject.SetActive(true);
            InitializeButton(gameOverUIView);
            SetText(defeatEnemyText, enemyManger);
        }

        private void InitializeButton(GameOverView gameOverView)
        {
            gameOverView.titleButton.onClick.AddListener(OnClickSceneTransition);
        }

        private void SetText(TextMeshProUGUI defeatEnemyText, EnemyManager enemyManager)
        {
            defeatEnemyText.text = "x" + enemyManager.DeadCount;
        }

        private void OnClickSceneTransition()
        {
            Owner._stateMachine.Dispatch((int)Event.SceneTransition);
            //SceneManager.LoadScene(GameCommonData.TitleScene);
        }
    }
}