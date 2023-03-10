using BehaviorDesigner.Runtime;
using Cysharp.Threading.Tasks;
using Data;
using UniRx;
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
        private IShotStop _iShotStop;
        private Transform _playerTransform;
        private ShellManager _shellManager;
        private CanonData _canonData;
        private EnemyData _enemyData;
        private float _shotTimer;
        private float _interval;
        private EnemyHealth _enemyHealth;

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
                var shellBase = other.GetComponentInChildren<ShellBase>();
                _enemyHealth.OnDamage(shellBase.damage);
            }
        }

        protected override void OnTriggerStay(Collider other)
        {
            if (other.CompareTag(GameCommonData.BeamTag))
            {
                var hitEffect = other.GetComponent<HitEffect>();
                var damage = hitEffect.canonData.damage * Time.fixedTime;
                _enemyHealth.OnDamage(damage);
            }
        }

        private void Initialize()
        {
            _canonMoveBase = Owner._canonMoveBase;
            _iShot = Owner._iShot;
            _iShotStop = Owner._iShotStop;
            _shellManager = Owner._shellManager;
            _canonData = Owner._canonData;
            _enemyData = Owner._enemyData;
            _enemyHealth = Owner.enemyHealth;
            SetEnemyHealthSubscribe(_enemyHealth);
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
            if (canonData.canonKinds == Data.CanonType.BeamType)
            {
                BeamShot(canonData);
            }
            else
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

        private void BeamShot(CanonData canonData)
        {
            var targetDistance = Vector3.Distance(Owner.transform.position, _playerTransform.position);
            var shotRange = canonData.range;
            if (targetDistance <= shotRange)
            {
                _iShot.Shot(_shellManager.GetEnemyShell(ShellPoolTag, canonData), canonData);
            }
            else
            {
                _iShotStop.ShotStop();
            }
        }

        private void SetEnemyHealthSubscribe(EnemyHealth enemyHealth)
        {
            enemyHealth.Hp.Subscribe(hp =>
            {
                if (hp > 0)
                {
                    return;
                }

                Owner._stateMachine.Dispatch((int)Event.Dead);
            }).AddTo(Owner.GetCancellationTokenOnDestroy());
        }
    }
}