using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class BackGround : MonoBehaviour
{
    [SerializeField] private Shader[] shaders = default;
    [SerializeField] private Image _backGround;
    private Material _backGroundMaterial;

    // Start is called before the first frame update
    void Start()
    {
        var index = Random.Range(0, shaders.Length);
        SetMaterial(index);
    }

    private void SetMaterial(int index)
    {
        _backGroundMaterial = CreateMaterial(shaders[index]);
        _backGround.material = _backGroundMaterial;
    }

    private Material CreateMaterial(Shader shader)
    {
        var material = new Material(shader);
        material.hideFlags = HideFlags.DontSave;
        return material;
    }

    private void OnDestroy()
    {
        if (_backGroundMaterial == null)
        {
            return;
        }

        Destroy(_backGroundMaterial);
        _backGroundMaterial = null;
    }
}