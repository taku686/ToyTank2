using UnityEngine;

public partial class BattleCore : MonoBehaviour
{
    [SerializeField] private CreateObjectView createObjectView;
    [SerializeField] private BattleUIView battleUIView;
    private StateMachine<BattleCore> _stateMachine;
    private PlayerManager _playerManager;
    private EnemyManager _enemyManager;

    private enum Event
    {
        SceneTransition,
        StageExplanation,
        CountDown,
        BattleStart,
        GameOver,
        GameClear
    }


    public void Initialize(PlayerManager playerManager, EnemyManager enemyManager)
    {
        _playerManager = playerManager;
        _enemyManager = enemyManager;
        battleUIView.Initialize();
        InitializeState();
    }

    private void InitializeState()
    {
        _stateMachine = new StateMachine<BattleCore>(this);
        _stateMachine.Start<CreateObjectState>();
        _stateMachine.AddTransition<CreateObjectState, SceneTransitionState>((int)Event.SceneTransition);
        _stateMachine.AddTransition<SceneTransitionState, StageExplanationState>((int)Event.StageExplanation);
        _stateMachine.AddTransition<StageExplanationState, CountDownState>((int)Event.CountDown);
        _stateMachine.AddTransition<CreateObjectState, BattleStartState>((int)Event.BattleStart);
        _stateMachine.AddTransition<BattleStartState, GameOverState>((int)Event.GameOver);
        _stateMachine.AddTransition<BattleStartState, GameClearState>((int)Event.GameClear);
    }
}