using UnityEngine;
using UnityEngine.UI;

public class CanonBar : MonoBehaviour
{
    Slider _slider;
    float _reloadTime;
    bool _isReload;
    float _timer;
    private Camera _mainCamera;

    // Update is called once per frame
    void Update()
    {
        transform.rotation = _mainCamera.transform.rotation;
    }

    public void Initialize(float maxValue, float reloadTime)
    {
        _mainCamera = Camera.main;
        _slider = GetComponent<Slider>();
        _slider.maxValue = maxValue;
        _reloadTime = reloadTime;
        _slider.value = maxValue;
    }

    public bool IsFire()
    {
        _slider.value -= Time.deltaTime;
        if (_slider.value > 0 && !_isReload)
        {
            return true;
        }

        _isReload = true;
        return false;
    }

    public void Reload()
    {
        if (!_isReload)
        {
            return;
        }

        _timer += Time.deltaTime;
        _slider.value = _slider.maxValue * (_timer / _reloadTime);
        if (_timer >= _reloadTime)
        {
            _isReload = false;
            _timer = 0;
        }
    }
}