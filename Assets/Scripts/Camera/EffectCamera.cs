using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectCamera : MonoBehaviour
{
    private const string MainCameraTag = "MainCamera";
    private GameObject _mainCamera;

    // Start is called before the first frame update
    void Start()
    {
        _mainCamera = GameObject.FindGameObjectWithTag(MainCameraTag);
    }

    // Update is called once per frame
    void Update()
    {
        var transform1 = transform;
        transform1.position = _mainCamera.transform.position;
        transform1.rotation = _mainCamera.transform.rotation;
    }
}