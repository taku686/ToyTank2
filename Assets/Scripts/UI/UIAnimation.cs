using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;

namespace UI
{
    public class UIAnimation : MonoBehaviour
    {
        public async UniTask Open(Transform target, float duration)
        {
            await target.DOScale(1f, duration).SetEase(Ease.OutBounce)
                .WithCancellation(target.GetCancellationTokenOnDestroy());
        }

        public async UniTask Close(Transform target, float duration)
        {
            await target.DOScale(0f, duration).SetEase(Ease.OutQuad)
                .WithCancellation(target.GetCancellationTokenOnDestroy());
        }

        public async UniTask Click(Transform target, float duration)
        {
            var halfDuration = duration / 2;
            await target.DOScale(0.9f, halfDuration).WithCancellation(target.GetCancellationTokenOnDestroy());
            await target.DOScale(1.1f, halfDuration).WithCancellation(target.GetCancellationTokenOnDestroy());
        }
    }
}