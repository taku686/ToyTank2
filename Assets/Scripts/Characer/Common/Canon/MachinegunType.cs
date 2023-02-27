using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MachinegunType : CanonMoveBase, IShot,IShotStop
{
    private float _time=0;
    private readonly float _randomValue = 0.7f;

    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        _time += Time.deltaTime;
        if (Animator.GetBool(FireTrigger) == false)
        {
            Animator.SetBool(FireTrigger, true);
        }
        if (_time > canonData.FireRate)
        {
            _time = 0;
            Fire(shell, canonData);
        }
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        throw new System.NotImplementedException();
    }

    private void Fire(List<ShellBase> shell,CanonData canonData)
    {
        for (int i = 0; i < shell.Count; i++)
        {
            shell[i].transform.parent = null;
            shell[i].transform.parent = ShotPos;
            shell[i].transform.localPosition = new Vector3(Random.Range(-_randomValue, _randomValue), 0, 0);
            shell[i].transform.parent = null;
            shell[i].Reset(canonData.Range);
            shell[i].transform.rotation = Quaternion.Euler(90, transform.rotation.eulerAngles.y, 0);
            Rigidbody rigid = shell[i].GetComponent<Rigidbody>();
            rigid.AddForce(shell[i].transform.up * canonData.BulletSpeed, ForceMode.Impulse);
        }
    }

    public void ShotStop()
    {
        Animator.SetBool(FireTrigger, false);
    }
}
