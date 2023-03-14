using Data;
using UnityEngine;

public partial class EnemyCore : MonoBehaviour
{
    private StateMachine<EnemyCore> _stateMachine;
    private CanonMoveBase _canonMoveBase;
    private IShot _iShot;
    private IShotStop _iShotStop;
    private ITargetMarker _iTargetMarker;
    private ISetLayerMask _iSetLayerMask;
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

    private void OnTriggerStay(Collider other)
    {
        _stateMachine.OnTriggerStay(other);
    }

    private void InitializeState()
    {
        _stateMachine = new StateMachine<EnemyCore>(this);
        _stateMachine.Start<EnemyIdleState>();
        _stateMachine.AddTransition<EnemyIdleState, EnemyDeadState>((int)Event.Dead);
    }

    private void InitializeComponent(CanonData canonData)
    {
        SetCanon(canonData);
        SetShellManager(canonData);
        enemyHealth = gameObject.GetComponent<EnemyHealth>();
    }

    private void SetCanon(CanonData canonData)
    {
        _canonMoveBase = gameObject.GetComponentInChildren<CanonMoveBase>();
        _iShot = _canonMoveBase.GetComponent<IShot>();
        _iShotStop = _canonMoveBase.GetComponent<IShotStop>();
        _iTargetMarker = _canonMoveBase.GetComponent<ITargetMarker>();
        _iSetLayerMask = _canonMoveBase.GetComponent<ISetLayerMask>();
        var iInitialize = _canonMoveBase.GetComponent<IInitialize>();
        _iTargetMarker?.CreateTargetMarker(ref _targetMarker, _targetMarkerObj, transform);
        _iSetLayerMask?.SetLayerMask(_enemyLayerMask);
        if (canonData.canonKinds != Data.CanonType.BeamType)
        {
            return;
        }

        iInitialize?.Initialize(false);
    }

    private void SetShellManager(CanonData canonData)
    {
        _shellManager = GameObject.FindGameObjectWithTag(GameCommonData.ShellManagerTag)
            .GetComponentInChildren<ShellManager>();
        _shellManager.InitializeEnemyPool(canonData);
    }
}