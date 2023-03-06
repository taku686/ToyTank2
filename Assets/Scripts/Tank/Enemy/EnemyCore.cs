using System;
using Data;
using UnityEngine;

public partial class EnemyCore : MonoBehaviour
{
    private StateMachine<EnemyCore> _stateMachine;
    private CanonMoveBase _canonMoveBase;
    private IShot _iShot;
    private IShotStop _iShotStop;
    private ITargetMarker _iTargetMarker;
    private ISetLayerMask _iInitializeCanon;
    private LayerMask _enemyLayerMask;
    private Transform _targetMarker;
    private Transform _playerTransform;
    private ShellManager _shellManager;
    private EnemyData _enemyData;
    private CanonData _canonData;
    private BaseData _baseData;
    private GameObject _targetMarkerObj;
    public EnemyHealth enemyHealth;

    private enum Event
    {
        Dead
    }

    private void Update()
    {
        _stateMachine.Update();
    }

    public void Initialize(EnemyData enemyData)
    {
        _enemyData = enemyData;
        _canonData = enemyData.canonData;
        _baseData = enemyData.baseData;
        InitializeComponent(_canonData);
        InitializeState();
    }

    private void OnTriggerEnter(Collider other)
    {
        _stateMachine.OnTriggerEnter(other);
    }

    private void InitializeState()
    {
        _stateMachine = new StateMachine<EnemyCore>(this);
        _stateMachine.Start<EnemyIdleState>();
        _stateMachine.AddTransition<EnemyIdleState, EnemyDeadState>((int)Event.Dead);
    }

    private void InitializeComponent(CanonData canonData)
    {
        SetCanon();
        SetShellManager(canonData);
        enemyHealth = gameObject.GetComponent<EnemyHealth>();
    }

    private void SetCanon()
    {
        _canonMoveBase = gameObject.GetComponentInChildren<CanonMoveBase>();
        _iShot = _canonMoveBase.GetComponent<IShot>();
        _iShotStop = _canonMoveBase.GetComponent<IShotStop>();
        _iTargetMarker = _canonMoveBase.GetComponent<ITargetMarker>();
        _iInitializeCanon = _canonMoveBase.GetComponent<ISetLayerMask>();
        _iTargetMarker?.CreateTargetMarker(ref _targetMarker, _targetMarkerObj, transform);
        _iInitializeCanon?.SetLayerMask(_enemyLayerMask);
    }

    private void SetShellManager(CanonData canonData)
    {
        _shellManager = GameObject.FindGameObjectWithTag(GameCommonData.ShellManagerTag)
            .GetComponentInChildren<ShellManager>();
        _shellManager.InitializeEnemyPool(canonData);
    }
}