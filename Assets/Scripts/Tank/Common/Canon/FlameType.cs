using System.Collections.Generic;
using UnityEngine;

public class FlameType : CanonMoveBase, IShot, IShotStop, IInitialize
{
    private GameObject _flameObj;
    private FlameEffect _flameEffect;
    private bool _isPlayer;


    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        GenerateEffect(canonData);
        _flameObj.SetActive(true);
        _flameObj.transform.position = transform.TransformPoint(canonData.ShotPos);
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        throw new System.NotImplementedException();
    }

    private void GenerateEffect(CanonData canonData)
    {
        if (_flameObj != null)
        {
            return;
        }

        _flameObj = Instantiate(canonData.ShellObj, Vector3.zero, Quaternion.identity, ShotPos);
        _flameObj.transform.localEulerAngles = Vector3.zero;
        _flameEffect = _flameObj.GetComponentInChildren<FlameEffect>();
        _flameEffect.Initialize(canonData.damage, _isPlayer);
    }

    public void ShotStop()
    {
        if (_flameObj == null)
        {
            return;
        }

        _flameObj.SetActive(false);
    }

    public void Initialize(string poolTag)
    {
        throw new System.NotImplementedException();
    }

    public void Initialize(bool isPlayer)
    {
        _isPlayer = isPlayer;
    }
}