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
        [SerializeField] private LoginView loginView;
        [SerializeField] private MainView mainView;
        [SerializeField] private PlantView plantView;
        [SerializeField] private ShopView shopView;
        [SerializeField] private Transition transition;
        [SerializeField] private UIAnimation uiAnimation;
        [SerializeField] private Transform playerPos;
        [SerializeField] private GameObject[] phaseGameObjects;
        private StateMachine<TitleCore> _stateMachine;
        private UserData _userData;

        private enum Event
        {
            Login,
            Main,
            Plant,
            Shop
        }

        private void Start()
        {
            SaveSystem.Instance.Load();
            _userData = SaveSystem.Instance.UserData;
            Save();
            playerPos.gameObject.SetActive(false);
            InitializeState();
        }

        private void Update()
        {
            _stateMachine.Update();
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

        //Debug

        private void Save()
        {
            /*if (_userData.maxStage <= 0)
            {
                SaveSystem.Instance.UserData.maxStage = 1;
                SaveSystem.Instance.Save();
            }*/
        }
    }
}