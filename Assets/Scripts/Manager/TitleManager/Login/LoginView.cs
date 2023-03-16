using UnityEngine;
using UnityEngine.UI;

namespace Manager.TitleManager.Login
{
    public class LoginView : MonoBehaviour
    {
        public Button loginButton;
        public ErrorPanelView errorPanelView;
        public GameObject waitMessagePanel;

        public void Initialize()
        {
            errorPanelView.gameObject.SetActive(false);
            waitMessagePanel.SetActive(false);
        }
    }
}