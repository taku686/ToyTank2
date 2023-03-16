using Cysharp.Threading.Tasks;
using Data;
using Manager.TitleManager.Login;
using UI;
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
            private UIAnimation _uiAnimation;
            private bool _isLoginProcessing;

            protected override void OnEnter(State prevState)
            {
                Initialize();
                InitializeButton();
            }

            private void Initialize()
            {
                _loginManager = Owner.loginManager;
                _loginView = Owner.loginView;
                _transition = Owner.transition;
                _uiAnimation = Owner.uiAnimation;
                _loginView.Initialize();
                _loginManager.playFabLogin.Initialize();
            }

            private void InitializeButton()
            {
                _loginView.loginButton.onClick.RemoveAllListeners();
                _loginView.errorPanelView.retryButton.onClick.RemoveAllListeners();
                _loginView.loginButton.onClick.AddListener(() => UniTask.Void(async () => { await Login(); }));
                _loginView.errorPanelView.retryButton.onClick.AddListener(() =>
                    UniTask.Void(async () => await OnClickCloseErrorPanel()));
            }

            private async UniTask Login()
            {
                if (_isLoginProcessing)
                {
                    return;
                }

                _isLoginProcessing = true;
                _loginView.waitMessagePanel.SetActive(true);
                await _uiAnimation.Click(_loginView.loginButton.transform, GameCommonData.ClickDuration);
                var isSuccess = await _loginManager.playFabLogin.TryLoginWithGoogle();
                _loginView.waitMessagePanel.SetActive(false);
                Debug.Log(isSuccess ? "ログイン成功" : "ログイン失敗");
                if (isSuccess)
                {
                    Owner._stateMachine.Dispatch((int)Event.Main);
                    void Action() => Owner.SwitchPhaseGameObject((int)Event.Main);
                    await _transition.PhaseTransition(Action);
                    _isLoginProcessing = false;
                }
                else
                {
                    _loginView.errorPanelView.gameObject.SetActive(true);
                    await _uiAnimation.Open(_loginView.errorPanelView.transform, GameCommonData.OpenDuration);
                    _isLoginProcessing = false;
                }
            }

            private async UniTask OnClickCloseErrorPanel()
            {
                await _uiAnimation.Close(_loginView.errorPanelView.transform, GameCommonData.CloseDuration);
                _loginView.errorPanelView.gameObject.SetActive(false);
            }
        }
    }
}