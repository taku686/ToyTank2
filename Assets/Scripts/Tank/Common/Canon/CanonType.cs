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
        if (targetMarker == null)
        {
            targetMarker = targetMarkerObj.transform;
        }

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

    /*private Vector3 CalculateVelocity(Vector3 pointA, Vector3 pointB, float angle)
    {
        // 射出角をラジアンに変換
        float rad = angle * Mathf.PI / 180;

        // 水平方向の距離x
        float x = Vector2.Distance(new Vector2(pointA.x, pointA.z), new Vector2(pointB.x, pointB.z));

        // 垂直方向の距離y
        float y = pointA.y - pointB.y;

        // 斜方投射の公式を初速度について解く
        float speed = Mathf.Sqrt(-Physics.gravity.y * Mathf.Pow(x, 2) /
                                 (2 * Mathf.Pow(Mathf.Cos(rad), 2) * (x * Mathf.Tan(rad) + y)));

        if (float.IsNaN(speed))
        {
            // 条件を満たす初速を算出できなければVector3.zeroを返す
            return Vector3.zero;
        }

        return (new Vector3(pointB.x - pointA.x, x * Mathf.Tan(rad), pointB.z - pointA.z).normalized * speed);
    }*/
}