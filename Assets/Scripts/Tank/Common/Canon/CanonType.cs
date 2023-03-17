using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class CanonType : CanonMoveBase, IShot, ITargetMarker
{
    private Transform _targetMarker;
    private const float Angle = 60;

    public void CreateTargetMarker(ref Transform targetMarker, GameObject targetMarkerObj, Transform player)
    {
        targetMarker = Instantiate(targetMarkerObj).transform;
        var transform1 = targetMarker.transform;
        transform1.parent = null;

        targetMarker.localPosition = new Vector3(0, 0.5f, 0);
        targetMarker.eulerAngles = new Vector3(90, 0, 0);
        _targetMarker = transform1;
    }

    public void MoveTargetMarker(Transform targetMarker, string controllerName, float range, Transform player)
    {
        float hor = -UltimateJoystick.GetHorizontalAxis(controllerName);
        float vert = -UltimateJoystick.GetVerticalAxis(controllerName);

        if (hor != 0 || vert != 0)
        {
            var position = player.position;
            targetMarker.position = new Vector3(hor, 0, vert) * range +
                                    new Vector3(position.x, 0.5f, position.z);
        }
    }

    public void MoveTargetMarker(Transform targetMarker, float range, Transform target)
    {
        var dis = Vector3.Distance(target.position, transform.position);
        if (dis > range)
        {
            var position = transform.position;
            targetMarker.position = new Vector3(position.x, 0.5f, position.z);
            return;
        }

        var position1 = target.position;
        targetMarker.position = new Vector3(position1.x, 0.5f, position1.z);
    }

    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        Animator.SetTrigger(FireTrigger);
        shell[0].transform.parent = null;
        shell[0].transform.parent = ShotPos;
        shell[0].transform.localPosition = Vector3.zero;
        shell[0].transform.parent = null;
        shell[0].Reset(canonData.Range);
        shell[0].transform.DOLocalJump(_targetMarker.position, 2, 1, 1f);
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
    }

    private void OnDestroy()
    {
        Destroy(_targetMarker.gameObject);
    }
}