using UnityEngine;

public class HpBar : MonoBehaviour
{
    private Camera _mainCamera;

    public void Initialize()
    {
        _mainCamera = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        transform.rotation = _mainCamera.transform.rotation;
    }
}