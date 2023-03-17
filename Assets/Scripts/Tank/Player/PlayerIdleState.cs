using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using Data;
using UniRx;
using UnityEngine;
using State = StateMachine<PlayerCore>.State;

public partial class PlayerCore
{
    public class PlayerIdleState : State
    {
        private BaseMove _baseMove;
        private CanonMoveBase _canonMoveBase;
        private UserData _userData;
        private BaseData _baseData;
        private PlayerHealth _health;
        private Action _pointerUpCallBack;
        private bool _hasShotStopMethod;
        private CancellationTokenSource _cts;
        private const float DeadHp = 0f;

        protected override void OnEnter(State prevState)
        {
            _baseMove = Owner._baseMove;
            _canonMoveBase = Owner._canonMoveBase;
            _userData = UserDataManager.Instance.GetUserData();
            _baseData = BaseDataManager.Instance.GetBaseData(_userData.currentBaseDataIndex);
            _health = Owner._health;
            _cts = new CancellationTokenSource();
            _cts.RegisterRaiseCancelOnDestroy(Owner.gameObject);
            SetHpSubscribe(_health);
            DetectEventTrigger();
        }

        protected override void OnExit(State nextState)
        {
            if (Owner._iShotStop != null)
            {
                Owner._iShotStop.ShotStop();
            }

            _cts.Cancel();
            _cts.Dispose();
            _cts = new CancellationTokenSource();
            Owner._ultimateJoystick.OnPointerUpCallback -= _pointerUpCallBack;
        }

        protected override void OnUpdate()
        {
            _baseMove.Move(_baseData.MoveSpeed);
            _canonMoveBase.ManuallyRotate();
            Owner._canonBar.Reload();
            if (Owner._ultimateJoystick.GetJoystickState())
            {
                OnDragUltimateJoystick();
            }
        }

        protected override void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag(GameCommonData.EnemyShellTag))
            {
                ShellBase shellBase = other.GetComponent<ShellBase>();
                _health.OnDamage(shellBase.damage);
            }
        }

        protected override void OnTriggerStay(Collider other)
        {
            if (other.CompareTag(GameCommonData.BeamTag))
            {
                var hitEffect = other.GetComponent<HitEffect>();
                var damage = hitEffect.canonData.damage * Time.fixedDeltaTime;
                _health.OnDamage(damage);
            }
        }

        private void OnDragUltimateJoystick()
        {
            if (Owner._canonBar.IsFire())
            {
                Owner._iShot.Shot(
                    Owner._shellManager.GetPlayerShell(GameCommonData.PlayerShellPoolTag,
                        _userData.currentCanonDataIndex),
                    Owner._currentCanonData);
            }
            else if (!Owner._canonBar.IsFire() && Owner._iShotStop != null)
            {
                Owner._iShotStop.ShotStop();
            }

            if (Owner._iTargetMarker != null)
            {
                Owner._iTargetMarker.MoveTargetMarker(Owner._targetMarker, GameCommonData.CanonJoystickName,
                    Owner._currentCanonData.Range,
                    Owner.transform);
            }
        }

        private void OnPointerUp()
        {
            if (!_hasShotStopMethod)
            {
                Owner._iShot.Shot(
                    Owner._shellManager.GetPlayerShell(GameCommonData.PlayerShellPoolTag,
                        _userData.currentCanonDataIndex),
                    Owner._currentCanonData);
            }
            else if (_hasShotStopMethod)
            {
                Owner._iShotStop.ShotStop();
            }
        }

        private void DetectEventTrigger()
        {
            if (Owner._currentCanonData.CanonKinds == Data.CanonType.BeamType ||
                Owner._currentCanonData.CanonKinds == Data.CanonType.MachineGunType ||
                Owner._currentCanonData.CanonKinds == Data.CanonType.FlameType)
            {
                _hasShotStopMethod = true;
                _pointerUpCallBack = OnPointerUp;
                Owner._ultimateJoystick.OnPointerUpCallback += _pointerUpCallBack;
            }
            else
            {
                _hasShotStopMethod = false;
                _pointerUpCallBack = OnPointerUp;
                Owner._ultimateJoystick.OnPointerUpCallback += _pointerUpCallBack;
            }
        }

        private void SetHpSubscribe(PlayerHealth health)
        {
            health.Hp.Subscribe(hp =>
            {
                if (hp > DeadHp)
                {
                    return;
                }

                OnDead();
            }).AddTo(_cts.Token);
        }

        private void OnDead()
        {
            Owner._stateMachine.Dispatch((int)Event.Dead);
        }
    }
}