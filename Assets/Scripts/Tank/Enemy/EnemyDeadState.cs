using State = StateMachine<EnemyCore>.State;

public partial class EnemyCore
{
    public class EnemyDeadState : State
    {
        protected override void OnEnter(State prevState)
        {
            Initialize();
            Dead();
        }

        private void Initialize()
        {
            var health = Owner.enemyHealth;
            health.isAlive.OnNext(false);
        }

        private void Dead()
        {
            Destroy(Owner.gameObject);
        }
    }
}