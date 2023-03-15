using Data;
using UnityEngine;

public class FlameEffect : MonoBehaviour
{
    [SerializeField] private GameObject burnEffect;
    private float _damageAmount;
    private bool _isPlayer;

    public void Initialize(float damageAmount, bool isPlayer)
    {
        _damageAmount = damageAmount;
        _isPlayer = isPlayer;
    }

    private void OnParticleCollision(GameObject other)
    {
        if ((other.CompareTag(GameCommonData.EnemyTag) && _isPlayer) ||
            (other.CompareTag(GameCommonData.PlayerTag) && !_isPlayer))
        {
            Health healthSc = other.GetComponent<Health>();
            if (healthSc == null)
            {
                return;
            }

            var damage = _damageAmount * Time.fixedDeltaTime;
            healthSc.OnDamage(damage);
            if (healthSc.burnEffectSc == null)
            {
                GameObject effect = Instantiate(burnEffect, other.transform);
                effect.transform.localPosition = Vector3.zero;
                effect.transform.localEulerAngles = Vector3.zero;
            }
            else
            {
                if (!healthSc.isBurning)
                {
                    healthSc.burnEffectSc.gameObject.SetActive(true);
                }
            }
        }
    }
}