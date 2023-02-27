using UnityEngine;
using UnityEngine.UI;

namespace Manager.TitleManager
{
    public class PlantView : MonoBehaviour
    {
        public GameObject focusImage;
        public CanonGridView canonGridView;
        public Transform gridParent;
        public Button backButton;
        public Button selectButton;
        public Image[] equippedCanonImage;
    }
}