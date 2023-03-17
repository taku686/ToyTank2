using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShopView : MonoBehaviour
{
    public Button backButton;
    public Button adRemoveButton;
    public GameObject errorPanel;
    public Button errorPanelCloseButton;
    public TextMeshProUGUI infoText;

    public void Initialize()
    {
        errorPanel.SetActive(false);
        infoText.enabled = false;
    }
}