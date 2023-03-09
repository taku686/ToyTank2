using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class LoginButton : MonoBehaviour
{
    [SerializeField] private RectTransform loginButtonRect;
    [SerializeField] private float scale;

    // Start is called before the first frame update
    void Start()
    {
        loginButtonRect.DOScale(scale, 1f)
            .SetRelative(true)
            .SetEase(Ease.OutQuart)
            .SetLoops(-1, LoopType.Restart);
    }

    // Update is called once per frame
    void Update()
    {
    }
}