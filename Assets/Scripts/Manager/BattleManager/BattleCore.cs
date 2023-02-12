using UnityEngine;

public partial class BattleCore : MonoBehaviour
{
    [SerializeField] private CreateObjectView createObjectView;
    private StateMachine<BattleCore> _stateMachine;

    private enum Event
    {
        SceneTransition,
        StageExplanation,
        CountDown,
        BattleStart
    }

    private void Start()
    {
        Initialize();
        InitializeState();
    }

    private void Initialize()
    {
    }

    private void InitializeState()
    {
        _stateMachine = new StateMachine<BattleCore>(this);
        _stateMachine.Start<CreateObjectState>();
        _stateMachine.AddTransition<CreateObjectState, SceneTransitionState>((int)Event.SceneTransition);
        _stateMachine.AddTransition<SceneTransitionState, StageExplanationState>((int)Event.StageExplanation);
        _stateMachine.AddTransition<StageExplanationState, CountDownState>((int)Event.CountDown);
        _stateMachine.AddTransition<CountDownState, BattleStartState>((int)Event.BattleStart);
    }
}