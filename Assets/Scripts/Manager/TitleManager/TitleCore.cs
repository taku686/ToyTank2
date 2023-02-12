using System;
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
        [SerializeField] private LoginView loginView;
        [SerializeField] private MainManager mainManager;
        [SerializeField] private MainView mainView;
        [SerializeField] private Transition transition;
        [SerializeField] private UIAnimation uiAnimation;

        [SerializeField] private GameObject[] phaseGameObjects;
        private StateMachine<TitleCore> _stateMachine;
        private UserData _userData;

        private enum Event
        {
            Login,
            Main,
        }

        private void Start()
        {
            SaveSystem.Instance.Load();
            _userData = SaveSystem.Instance.UserData;
            DebugSave();
            _stateMachine = new StateMachine<TitleCore>(this);
            SwitchPhaseGameObject((int)Event.Login);
            InitializeState();
        }


        private void InitializeState()
        {
            if (GameCommonData.IsInitialize)
            {
                _stateMachine.Start<MainState>();
            }
            else
            {
                _stateMachine.Start<LoginState>();
            }

            _stateMachine.AddTransition<LoginState, MainState>((int)Event.Main);
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

        private void DebugSave()
        {
            if (_userData.maxStage <= 0)
            {
                SaveSystem.Instance.UserData.maxStage = 10;
                SaveSystem.Instance.Save();
            }
        }
    }
}