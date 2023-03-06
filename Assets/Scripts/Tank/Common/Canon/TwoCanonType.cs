using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TwoCanonType : CanonMoveBase ,IShot 
{
    private const float _shotPosModifiedValue = 1;
    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        Animator.SetTrigger(FireTrigger);
        for (int i = 0; i < shell.Count; i++)
        {
            shell[i].transform.parent = null;
            shell[i].transform.parent = ShotPos;
            shell[i].transform.localPosition = new Vector3(canonData.ShotPos.x + i * _shotPosModifiedValue, 0, 0);
            shell[i].transform.parent = null;
            shell[i].Reset(canonData.Range);
            shell[i].transform.rotation = Quaternion.Euler(90, transform.rotation.eulerAngles.y, 0);
            Rigidbody rigid = shell[i].GetComponent<Rigidbody>();
            rigid.AddForce(shell[i].transform.up * canonData.BulletSpeed, ForceMode.Impulse);
        }
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        throw new System.NotImplementedException();
    }
}
