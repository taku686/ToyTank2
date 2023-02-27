using UnityEngine;
using State = StateMachine<PlayerCore>.State;

public partial class PlayerCore
{
    public class PlayerDeadState : State
    {
        protected override void OnEnter(State prevState)
        {
            Owner._health.isAlive.OnNext(false);
            Debug.Log("Dead");
        }
    }
}