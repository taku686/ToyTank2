using UnityEngine;
using State = StateMachine<PlayerCore>.State;

public partial class PlayerCore
{
    public class PlayerCanonChangingState : State
    {
        protected override void OnEnter(State prevState)
        {
            var baseData = BaseDataManager.Instance.GetBaseData(Owner._currentBaseData.baseObjIndex);
            var canonData = CanonDataManager.Instance.GetCanonData(Owner._currentCanonData.index);
            if (Owner._targetMarker != null)
            {
                Destroy(Owner._targetMarker.gameObject);
            }

            Owner.CreateCanon(canonData, baseData);
        }

        protected override void OnUpdate()
        {
            Owner._stateMachine.Dispatch((int)Event.Idle);
        }
    }
}