using System;
using System.Collections.Generic;
using UnityEngine;

public class BeamType : CanonMoveBase, IShot, IShotStop, IInitialize
{
    private GameObject _beamObj;
    private BeamEffect _beamEffect;
    private bool _isPlayer;

    public void Initialize(string poolTag)
    {
    }

    public void Initialize(bool isPlayer)
    {
        _isPlayer = isPlayer;
    }

    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        GenerateBeamObj(canonData);
        if (Animator.GetBool(FireTrigger) == false)
        {
            Animator.SetBool(FireTrigger, true);
        }

        //後で見直しが必要 positionの初期設定がいるのか検証
        _beamObj.SetActive(true);
        _beamObj.transform.position = transform.TransformPoint(canonData.ShotPos);
        _beamEffect.OnSpawned(canonData.ShotPos);
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        throw new NotImplementedException();
    }

    private void GenerateBeamObj(CanonData canonData)
    {
        if (_beamObj != null)
        {
            return;
        }

        _beamObj = Instantiate(canonData.ShellObj, Vector3.zero, Quaternion.Euler(Vector3.zero), null);
        _beamEffect = _beamObj.GetComponent<BeamEffect>();
        _beamEffect.Initialize(true, canonData.Range, _isPlayer);
        var hitEffect = _beamEffect._rayImpactEffect.GetComponent<HitEffect>();
        hitEffect.canonData = canonData;
    }

    public void ShotStop()
    {
        if (_beamObj == null)
        {
            return;
        }

        _beamObj.SetActive(false);
        Animator.SetBool(FireTrigger, false);
    }

    private void OnDestroy()
    {
        if (_beamObj == null)
        {
            return;
        }

        Destroy(_beamObj);
    }
}