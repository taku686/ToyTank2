using Cysharp.Threading.Tasks;
using UniRx;
using UnityEngine.UI;

public class PlayerHealth : Health
{
    /*public ReadOnlyReactiveProperty<float> Hp => _hp.ToReadOnlyReactiveProperty();
    public Slider HpBar => _hpBar;
    private readonly ReactiveProperty<float> _hp = new();
    private Slider _hpBar;

    public void Initialize(float maxHp, Slider hpBar)
    {
        _hp.Value = maxHp;
        _hpBar = hpBar;
        _hpBar.maxValue = maxHp;
        _hpBar.value = maxHp;
        SetHpSubscribe();
    }

    private void SetHpSubscribe()
    {
        _hp.Subscribe(hp => { _hpBar.value = hp; }).AddTo(gameObject.GetCancellationTokenOnDestroy());
    }

    public void OnDamage(float damage)
    {
        _hp.Value -= damage;
    }*/
}