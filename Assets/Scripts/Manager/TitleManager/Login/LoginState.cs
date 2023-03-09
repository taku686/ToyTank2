using Cysharp.Threading.Tasks;
using Manager.TitleManager.Login;
using UnityEngine;
using State = StateMachine<Manager.TitleManager.TitleCore>.State;

namespace Manager.TitleManager
{
    public partial class TitleCore
    {
        public class LoginState : State
        {
            private LoginManager _loginManager;
            private LoginView _loginView;
            private Transition _transition;

            protected override void OnEnter(State prevState)
            {
                _loginManager = Owner.loginManager;
                _loginView = Owner.loginView;
                _transition = Owner.transition;
                _loginManager.playFabLogin.Initialize();
                InitializeButton();
            }

            private void InitializeButton()
            {
                _loginView.loginButton.onClick.RemoveAllListeners();
                _loginView.loginButton.onClick.AddListener(() => UniTask.Void(async () => { await Login(); }));
            }

            private async UniTask Login()
            {
                var isSuccess = await _loginManager.playFabLogin.TryLoginWithGoogle();
                Debug.Log(isSuccess ? "ログイン成功" : "ログイン失敗");
                if (isSuccess)
                {
                    Owner._stateMachine.Dispatch((int)Event.Main);
                    void Action() => Owner.SwitchPhaseGameObject((int)Event.Main);
                    await _transition.PhaseTransition(Action);
                }
            }
        }
    }
}