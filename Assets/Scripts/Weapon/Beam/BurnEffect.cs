using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BurnEffect : MonoBehaviour
{
    private Health _healthSc;   

    private void Awake()
    {
        _healthSc = GetComponentInParent<Health>();
        _healthSc.burnEffectSc = this;
    }

    private void OnEnable()
    {
        _healthSc.isBurning = true;
    }

    private void OnParticleSystemStopped()
    {
        _healthSc.isBurning = false;
        gameObject.SetActive(false);
    }
}
