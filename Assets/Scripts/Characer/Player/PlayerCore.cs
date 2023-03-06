using System;
using System.Collections.Generic;
using System.Linq;
using Data;
using UnityEngine;
using UnityEngine.UI;

public partial class PlayerCore : MonoBehaviour
{
    private const string JoystickTag = "CanonJoystick";
    private const string ShellPoolTag = "PlayerShellPool";
    private StateMachine<PlayerCore> _stateMachine;
    private BaseMove _baseMove;
    private UserData _userData;
    private CanonMoveBase _canonMoveBase;
    private ShellManager _shellManager;
    private UltimateJoystick _ultimateJoystick;
    private CanonBar _canonBar;
    private IShot _iShot;
    private IShotStop _iShotStop;
    private ITargetMarker _iTargetMarker;
    private ISetLayerMask _iInitializeCanon;
    private LayerMask _enemyLayerMask;
    private Transform _targetMarker;
    private GameObject[] _canonArray = new GameObject[3];
    private CanonData _currentCanon;
    private GameObject _canonObj;
    private GameObject _baseObj;
    private PlayerHealth _health;
    public PlayerHealth Health => _health;

    private enum Event
    {
        Idle,
        Dead,
        CanonChanging
    }

    // Update is called once per frame
    void Update()
    {
        _stateMachine.Update();
    }

    private void OnTriggerEnter(Collider other)
    {
        _stateMachine.OnTriggerEnter(other);
    }

    public void Initialize(UserData userData, Transform targetMarker, GameObject canonBar, GameObject hpBar,
        LayerMask enemyLayer, Material playerMaterial)
    {
        InitializeComponent(userData, targetMarker, canonBar, hpBar, enemyLayer, playerMaterial);
        InitializeState();
    }

    private void InitializeComponent(UserData userData, Transform targetMarker, GameObject canonBar,
        GameObject hpBar, LayerMask enemyLayer, Material playerMaterial)
    {
        _userData = userData;
        _targetMarker = targetMarker;
        _enemyLayerMask = enemyLayer;
        var baseData = BaseDataManager.Instance.GetBaseData(_userData.currentBaseDataIndex);
        var canonData = CanonDataManager.Instance.GetCanonData(_userData.currentCanonDataIndex);
        _shellManager = GameObject.FindGameObjectWithTag(GameCommonData.ShellManagerTag).GetComponent<ShellManager>();
        GameObject joystick = GameObject.FindGameObjectWithTag(JoystickTag);
        _ultimateJoystick = joystick.GetComponent<UltimateJoystick>();
        var slider = Instantiate(hpBar, transform).GetComponentInChildren<Slider>();
        _health = gameObject.AddComponent<PlayerHealth>();
        _health.Initialize(baseData.Hp, slider);

        CreateCanon(canonData, baseData, canonBar, userData.currentCanonDataIndex);
        CreateBase(baseData);
        SetMaterial(gameObject, playerMaterial);
    }

    private void InitializeState()
    {
        _stateMachine = new StateMachine<PlayerCore>(this);
        _stateMachine.AddTransition<PlayerIdleState, PlayerDeadState>((int)Event.Dead);
        _stateMachine.AddTransition<PlayerIdleState, PlayerCanonChangingState>((int)Event.CanonChanging);
        _stateMachine.AddAnyTransition<PlayerIdleState>((int)Event.Idle);
        _stateMachine.Start<PlayerIdleState>();
    }


    private void CreateCanon(CanonData canonData, BaseData baseData, GameObject canonBar, int canonDataIndex)
    {
        _canonObj = Instantiate(canonData.canonObj, transform);
        _canonObj.transform.localPosition = baseData.CanonPos;
        DecideCanonType(canonData, _canonObj);
        _currentCanon = canonData;
        _canonBar = Instantiate(canonBar, transform).GetComponentInChildren<CanonBar>();
        _canonBar.Initialize(canonData.FireTime, canonData.ReloadTime);
    }

    private void CreateCanon(CanonData canonData, BaseData baseData)
    {
        if (_canonObj != null)
        {
            Destroy(_canonObj);
            _canonObj = new GameObject();
        }

        _canonObj = Instantiate(canonData.canonObj, transform);
        _canonObj.transform.localPosition = baseData.canonPos;
        DecideCanonType(canonData, _canonObj);
    }

    private void CreateBase(BaseData baseData)
    {
        if (_baseObj != null)
        {
            Destroy(_baseObj);
            _baseObj = new GameObject();
        }

        _baseObj = Instantiate(baseData.BaseObj, transform);
        _baseObj.transform.localPosition = Vector3.zero;
        _baseMove = gameObject.AddComponent<BaseMove>();
        _baseMove.InitializeCharacterController();
    }


    public void ChangeCanon(CanonData canonData)
    {
        _userData.currentCanonDataIndex = canonData.index;
        _canonBar.Initialize(canonData.FireTime, canonData.ReloadTime);
        _currentCanon = canonData;
        _stateMachine.Dispatch((int)Event.CanonChanging);
    }

    private void SetMaterial(GameObject tankObj, Material playerMaterial)
    {
        var meshRenderer = tankObj.GetComponentsInChildren<MeshRenderer>();
        foreach (var mesh in meshRenderer.Where(x => x.material.name == GameCommonData.TankMaterialName))
        {
            mesh.material = playerMaterial;
            mesh.material.color = GameCommonData.PlayerColor;
        }
    }

    private void DecideCanonType(CanonData canonData, GameObject canonObj)
    {
        switch (canonData.CanonKinds)
        {
            case Data.CanonType.BounceBulletType:
                _canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.NormalBulletType:
                _canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.RailGunType:
                _canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.ShotGunBulletType:
                _canonMoveBase = canonObj.AddComponent<ShotGunBulletType>();
                break;
            case Data.CanonType.ToxicBulletType:
                _canonMoveBase = canonObj.AddComponent<NormalBulletType>();
                break;
            case Data.CanonType.TrackingBulletType:
                _canonMoveBase = canonObj.AddComponent<TrackingCanonType>();
                break;
            case Data.CanonType.BeamType:
                _canonMoveBase = canonObj.AddComponent<BeamType>();
                break;
            case Data.CanonType.MachineGunType:
                _canonMoveBase = canonObj.AddComponent<MachinegunType>();
                break;
            case Data.CanonType.CanonType:
                _canonMoveBase = canonObj.AddComponent<CanonType>();
                break;
            case Data.CanonType.FlameType:
                _canonMoveBase = canonObj.AddComponent<FlameType>();
                break;
            case Data.CanonType.TwoCanonType:
                _canonMoveBase = canonObj.AddComponent<TwoCanonType>();
                break;
        }

        _canonMoveBase.CreateShotPos(canonData.ShotPos);
        _iShot = _canonMoveBase.GetComponent<IShot>();
        _iShotStop = _canonMoveBase.GetComponent<IShotStop>();
        _iTargetMarker = _canonMoveBase.GetComponent<ITargetMarker>();
        _iInitializeCanon = _canonMoveBase.GetComponent<ISetLayerMask>();
        if (_iTargetMarker != null)
        {
            _iTargetMarker.CreateTargetMarker(ref _targetMarker, transform);
        }

        if (_iInitializeCanon != null)
        {
            _iInitializeCanon.SetLayerMask(_enemyLayerMask);
        }
    }
}