using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeamType : CanonMoveBase, IShot,IShotStop
{
    private GameObject _beamObj;
    private BeamEffect _beamEffect;

    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        GenerateBeamObj(canonData);
        if (Animator.GetBool(FireTrigger) == false)
        {
            Animator.SetBool(FireTrigger, true);
        }  
        //後で見直しが必要 positionの初期設定がいるのか検証
        _beamObj.SetActive(true);
        Transform transform1;
        _beamObj.transform.position = (transform1 = transform).TransformPoint(canonData.ShotPos);
        _beamEffect.OnSpawned(canonData.ShotPos, transform1.parent);
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        throw new System.NotImplementedException();
    }

    private void GenerateBeamObj(CanonData canonData)
    {
        if (_beamObj != null)
        {
            return;
        }
        _beamObj = Instantiate(canonData.ShellObj,Vector3.zero,Quaternion.Euler(Vector3.zero),null);
        _beamEffect = _beamObj.GetComponent<BeamEffect>();
        _beamEffect.Initialize(true, canonData.Range);
    }

    public void ShotStop()
    {
        _beamObj.SetActive(false);
        Animator.SetBool(FireTrigger, false);
    }

}
