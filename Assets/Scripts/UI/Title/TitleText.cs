using DG.Tweening;
using TMPro;
using UnityEngine;

public class TitleText : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI titleText;
    [SerializeField] private RectTransform titleTextRect;
    [SerializeField] private Vector2 destPos;

    [SerializeField] private float duration;

    // Start is called before the first frame update
    void Start()
    {
        titleText = gameObject.GetComponent<TextMeshProUGUI>();
        titleTextRect.DOAnchorPos(destPos, duration).SetEase(Ease.OutElastic);
    }

    // Update is called once per frame
    void Update()
    {
        titleText.color = Color.HSVToRGB(Time.time % 1, 1, 1);
    }
}