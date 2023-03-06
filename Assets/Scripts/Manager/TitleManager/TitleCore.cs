using Cysharp.Threading.Tasks;
using Data;
using Manager.PlayFab;
using Manager.TitleManager.Login;
using Manager.TitleManager.Main;
using UI;
using UnityEngine;

namespace Manager.TitleManager
{
    public partial class TitleCore : MonoBehaviour
    {
        [SerializeField] private LoginManager loginManager;
        [SerializeField] private MainManager mainManager;
        [SerializeField] private PlayFabShopManager playFabShopManager;
        [SerializeField] private PlayFabCatalogManager playFabCatalogManager;
        [SerializeField] private PlayFabUserData playFabUserData;
        [SerializeField] private LoginView loginView;
        [SerializeField] private MainView mainView;
        [SerializeField] private PlantView plantView;
        [SerializeField] private ShopView shopView;
        [SerializeField] private Transition transition;
        [SerializeField] private UIAnimation uiAnimation;
        [SerializeField] private Transform playerPos;
        [SerializeField] private GameObject[] phaseGameObjects;
        private StateMachine<TitleCore> _stateMachine;
        private Transform _playerObjTransform;
        private GameObject _canonObj;
        private GameObject _baseObj;
        private const float RotationSpeed = 25f;
        private const int TankScale = 3;
        private const float TankPosY = -0.68f;

        private enum Event
        {
            Login,
            Main,
            Plant,
            Shop
        }

        private void Start()
        {
            playerPos.gameObject.SetActive(false);
            _playerObjTransform = new GameObject().transform;
            _playerObjTransform.SetParent(playerPos);
            _playerObjTransform.localPosition = new Vector3(0, TankPosY, 0);
            _playerObjTransform.localScale = Vector3.one * TankScale;
            InitializeState();
        }

        private void Update()
        {
            _stateMachine.Update();
            playerPos.eulerAngles = new Vector3(0, Time.time * RotationSpeed, 0);
        }


        private void InitializeState()
        {
            _stateMachine = new StateMachine<TitleCore>(this);
            if (GameCommonData.IsInitialize)
            {
                _stateMachine.Start<MainState>();
                SwitchPhaseGameObject((int)Event.Main);
            }
            else
            {
                _stateMachine.Start<LoginState>();
                SwitchPhaseGameObject((int)Event.Login);
            }

            _stateMachine.AddTransition<LoginState, MainState>((int)Event.Main);
            _stateMachine.AddTransition<MainState, PlantState>((int)Event.Plant);
            _stateMachine.AddTransition<MainState, ShopState>((int)Event.Shop);
            _stateMachine.AddAnyTransition<MainState>((int)Event.Main);
            GameCommonData.IsInitialize = true;
        }

        private void SwitchPhaseGameObject(int index)
        {
            foreach (var phase in phaseGameObjects)
            {
                phase.SetActive(false);
            }

            phaseGameObjects[index].SetActive(true);
        }

        private void CreateTank(CanonData canonData, BaseData baseData)
        {
            CreateCanon(canonData, baseData);
            CreateBase(baseData);
        }

        private void CreateCanon(CanonData canonData, BaseData baseData)
        {
            if (_canonObj != null)
            {
                Destroy(_canonObj);
                _canonObj = new GameObject();
            }

            _canonObj = Instantiate(canonData.canonObj, _playerObjTransform);
            _canonObj.transform.localPosition = baseData.canonPos;
        }

        private void CreateBase(BaseData baseData)
        {
            if (_baseObj != null)
            {
                Destroy(_baseObj);
                _baseObj = new GameObject();
            }

            _baseObj = Instantiate(baseData.baseObj, _playerObjTransform);
            _baseObj.transform.localPosition = Vector3.zero;
        }
    }
}