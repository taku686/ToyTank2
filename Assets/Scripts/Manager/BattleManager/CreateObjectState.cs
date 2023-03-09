using System.Threading;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using UnityEngine;
using State = StateMachine<BattleCore>.State;

public partial class BattleCore
{
    public class CreateObjectState : State
    {
        private CreateObjectView _createObjectView;
        private EnemyManager _enemyManager;
        private CancellationToken _token;

        protected override void OnEnter(State prevState)
        {
            _createObjectView = Owner.createObjectView;
            _enemyManager = Owner._enemyManager;
            _token = Owner.gameObject.GetCancellationTokenOnDestroy();
            Initialize().Forget();
        }

        private async UniTaskVoid Initialize()
        {
            GeneratePlayer();
            GenerateEnemy();
            await UniTask.NextFrame(PlayerLoopTiming.Update, _token);
            Owner._stateMachine.Dispatch((int)Event.BattleStart);
        }

        private void GeneratePlayer()
        {
        }

        private void GenerateEnemy()
        {
            var stageData = StageDataManager.Instance.GetCurrentStageData();
            _enemyManager.CreateEnemy(stageData);
        }
    }
}