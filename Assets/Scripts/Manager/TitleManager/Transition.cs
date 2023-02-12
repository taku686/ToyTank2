using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace Manager.TitleManager
{
    public class Transition : MonoBehaviour
    {
        [SerializeField] private float duration;
        [SerializeField] private Image transitionImage;
        private static readonly int Progress = Shader.PropertyToID("_Progress");
        private static readonly int Color1 = Shader.PropertyToID("_Color");

        private void Awake()
        {
            transitionImage.material.SetColor(Color1, new Color(0, 0, 0, 0));
            transitionImage.color = new Color(1, 1, 1, 0);
        }

        public async UniTask PhaseTransition(Action action)
        {
            var sequence = DOTween.Sequence();
            var targetColor1 = new Color(transitionImage.color.r, transitionImage.color.g, transitionImage.color.b, 1);
            var targetColor2 = new Color(transitionImage.color.r, transitionImage.color.g, transitionImage.color.b, 0);
            var material = transitionImage.material;
            var maxValue = 1;
            var minValue = 0;
            var halfDuration = duration / 2;
            sequence.Append(transitionImage.DOColor(targetColor1, halfDuration).SetEase(Ease.OutExpo));
            sequence.Join(DOTween.ToAlpha(() => material.GetColor(Color1), x => material.SetColor(Color1, x),
                maxValue, halfDuration).SetEase(Ease.OutExpo));
            sequence.Join(DOTween.To(() => material.GetFloat(Progress), x => material.SetFloat(Progress, x), minValue,
                halfDuration).SetEase(Ease.OutExpo));
            await sequence.Play();
            action.Invoke();
            sequence = DOTween.Sequence();
            sequence.Append(transitionImage.DOColor(targetColor2, halfDuration).SetEase(Ease.OutExpo));
            sequence.Join(DOTween.ToAlpha(() => material.GetColor(Color1), x => material.SetColor(Color1, x),
                minValue, halfDuration).SetEase(Ease.OutExpo));
            sequence.Join(DOTween.To(() => material.GetFloat(Progress), x => material.SetFloat(Progress, x), maxValue,
                halfDuration).SetEase(Ease.OutExpo));
            await sequence.Play();
        }
    }
}