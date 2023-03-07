using UniRx;
using State = StateMachine<BattleCore>.State;

public partial class BattleCore
{
    public class BattleStartState : State
    {
        protected override void OnEnter(State prevState)
        {
            var playerHealth = Owner._playerManager.Health;
            var enemyManager = Owner._enemyManager;
            SetGameOverSubscribe(playerHealth);
            SetGameClearSubscribe(enemyManager);
        }

        private void SetGameOverSubscribe(PlayerHealth health)
        {
            health.isAlive.Subscribe(alive =>
                {
                    if (alive)
                    {
                        return;
                    }

                    Owner._stateMachine.Dispatch((int)Event.GameOver);
                })
                .AddTo(Owner.gameObject);
        }

        private void SetGameClearSubscribe(EnemyManager enemyManager)
        {
            enemyManager.Annihilate.Subscribe(_ => { Owner._stateMachine.Dispatch((int)Event.GameClear); })
                .AddTo(Owner.gameObject);
        }
    }
}