using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanonMoveBase : MonoBehaviour
{
    private const string JoystickName = "CanonMove";
    protected const string FireTrigger = "Fire";
    protected string PoolTag;
    protected Transform ShotPos;
    protected Animator Animator;


    protected virtual void Start()
    {
        Animator = GetComponent<Animator>();
    }

    public void CreateShotPos(Vector3 shotPos)
    {
        ShotPos = new GameObject().transform;
        ShotPos.name = "ShotPos";
        ShotPos.transform.parent = transform;
        ShotPos.localPosition = shotPos;
    }

    public void ManuallyRotate()
    {
        float hor = -UltimateJoystick.GetHorizontalAxis(JoystickName);
        float vert = -UltimateJoystick.GetVerticalAxis(JoystickName);
        if (hor != 0 || vert != 0)
        {
            var direction = new Vector3(hor, 0, vert);
            transform.rotation = Quaternion.LookRotation(direction);
        }
    }

    public void AutomaticallyRotate(Transform target)
    {
        transform.LookAt(target);
    }
}

public interface ISetLayerMask
{
    void SetLayerMask(LayerMask layerMask);
}

public interface IShot
{
    void Shot(List<ShellBase> shell, CanonData canonData);
    void Shot(ShellBase shell, CanonData canonData);
}

public interface IShotStop
{
    void ShotStop();
}

public interface ITargetMarker
{
    void CreateTargetMarker(ref Transform targetMarker, GameObject targetMarkerObj, Transform player);

    void MoveTargetMarker(Transform targetMarker, string controllerName, float range, Transform player);
}