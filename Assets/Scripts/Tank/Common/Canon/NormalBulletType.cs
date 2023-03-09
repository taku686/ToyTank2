using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NormalBulletType : CanonMoveBase, IShot
{
    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        Animator.SetTrigger(FireTrigger);
        shell[0].damage = canonData.Damage;
        shell[0].transform.parent = null;
        shell[0].transform.parent = ShotPos;
        shell[0].transform.localPosition = Vector3.zero;
        shell[0].transform.parent = null;
        shell[0].Reset(canonData.Range);
        shell[0].transform.rotation = Quaternion.Euler(90, transform.rotation.eulerAngles.y, 0);
        Rigidbody rigid = shell[0].GetComponent<Rigidbody>();
        rigid.AddForce(shell[0].transform.up * canonData.BulletSpeed, ForceMode.Impulse);
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        Animator.SetTrigger(FireTrigger);
        shell.damage = canonData.Damage;
        var transform1 = shell.transform;
        Transform parent = null;
        parent = ShotPos;
        transform1.parent = parent;
        transform1.localPosition = Vector3.zero;
        transform1.parent = null;
        shell.Reset(canonData.Range);
        shell.transform.rotation = Quaternion.Euler(90, transform.rotation.eulerAngles.y, 0);
        Rigidbody rigid = shell.rb;
        rigid.AddForce(transform1.up * canonData.BulletSpeed, ForceMode.Impulse);
    }
}