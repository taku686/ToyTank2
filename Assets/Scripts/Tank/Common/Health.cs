using UniRx;
using UnityEngine;

public class Health : MonoBehaviour
{
    public bool isBurning;
    public BurnEffect _burnEffectSc;
    public readonly Subject<bool> isAlive = new();

    private void OnDestroy()
    {
        isAlive.Dispose();
    }
}