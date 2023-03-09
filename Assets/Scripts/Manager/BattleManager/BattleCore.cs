using System;
using System.Collections.Generic;
using System.Linq;
using UI;
using UnityEngine;

public partial class BattleCore : MonoBehaviour
{
    [SerializeField] private CreateObjectView createObjectView;
    [SerializeField] private BattleUIView battleUIView;
    [SerializeField] private PlayFabAdsManager playFabAdsManager;
    [SerializeField] private PlayFabUserData playFabUserData;
    [SerializeField] private UIAnimation uiAnimation;
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
        GameClear,
        Reward
    }

    private void Update()
    {
        _stateMachine.Update();
    }


    public void Initialize(PlayerManager playerManager, EnemyManager enemyManager)
    {
        _playerManager = playerManager;
        _enemyManager = enemyManager;
        playFabAdsManager.Initialize();
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
        _stateMachine.AddTransition<GameOverState, SceneTransitionState>((int)Event.SceneTransition);
        _stateMachine.AddTransition<GameClearState, SceneTransitionState>((int)Event.SceneTransition);
        _stateMachine.AddTransition<GameClearState, RewardState>((int)Event.Reward);
        _stateMachine.AddTransition<RewardState, SceneTransitionState>((int)Event.SceneTransition);
    }

    private bool TryGetCanonReward(out List<CanonData> canonDatum)
    {
        canonDatum = new List<CanonData>();
        var availableCanonList = UserDataManager.Instance.GetUserData().availableCanonList;
        var enemyCanonList = StageDataManager.Instance.GetCurrentStageData().enemyDatum
            .Select(x => x.canonDataIndex).ToList();
        var found = false;
        foreach (var enemyCanonDataIndex in enemyCanonList)
        {
            if (canonDatum.Contains(CanonDataManager.Instance.GetCanonData(enemyCanonDataIndex)))
            {
                continue;
            }

            foreach (var availableCanonDataIndex in availableCanonList)
            {
                if (enemyCanonDataIndex == availableCanonDataIndex)
                {
                    found = true;
                    break;
                }
            }

            if (found)
            {
                found = false;
                continue;
            }

            canonDatum.Add(CanonDataManager.Instance.GetCanonData(enemyCanonDataIndex));
        }

        return canonDatum.Count != 0;
    }
}