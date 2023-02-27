using BehaviorDesigner.Runtime;
using Data;
using UnityEngine;
using State = StateMachine<EnemyCore>.State;

public partial class EnemyCore
{
    public class EnemyIdleState : State
    {
        private const string ShellPoolTag = "EnemyShellPool";
        private const float MaxRandomValue = 3f;
        private CanonMoveBase _canonMoveBase;
        private IShot _iShot;
        private Transform _playerTransform;
        private ShellManager _shellManager;
        private CanonData _canonData;
        private EnemyData _enemyData;
        private float _shotTimer;
        private float _interval;

        protected override void OnEnter(State prevState)
        {
            Initialize();
        }

        protected override void OnUpdate()
        {
            GetPlayer();
            if (!_playerTransform)
            {
                return;
            }

            _canonMoveBase.AutomaticallyRotate(_playerTransform);
            Shot(_canonData);
        }

        protected override void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag(GameCommonData.PlayerShellTag))
            {
                Owner._stateMachine.Dispatch((int)Event.Dead);
            }
        }

        private void Initialize()
        {
            _canonMoveBase = Owner._canonMoveBase;
            _iShot = Owner._iShot;
            _shellManager = Owner._shellManager;
            _canonData = Owner._canonData;
            _enemyData = Owner._enemyData;
        }

        private void GetPlayer()
        {
            if (_playerTransform)
            {
                return;
            }

            if (GlobalVariables.Instance == null)
            {
                return;
            }

            var player = (GameObject)GlobalVariables.Instance.GetVariable(GameCommonData.PlayerVariables).GetValue();
            if (player == null)
            {
                return;
            }

            _playerTransform = player.transform;
        }

        private void Shot(CanonData canonData)
        {
            _shotTimer += Time.deltaTime;
            if (_shotTimer >= _interval)
            {
                _shotTimer = 0f;
                _interval = _enemyData.shotInterval + Random.Range(0f, MaxRandomValue);
                _iShot.Shot(_shellManager.GetEnemyShell(ShellPoolTag, canonData), canonData);
            }
        }
    }
}