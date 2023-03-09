using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;
using DG.Tweening;

public class CameraManager : MonoBehaviour
{
    private const string PlayerTag = "Player";
    private const string Joystick = "CanonMove";
    private const float MoveLimit = 3f;

    [SerializeField] private CinemachineVirtualCamera _virtualCamera;
    [SerializeField] private Camera mainCamera;
    private CinemachineTransposer _transposer;
    private Vector3 _initPos;
    private readonly float _backSpeed = 2;
    private readonly float _moveSpeed = 7;
    private readonly float _modifiedValue = 0.01f;

    public void Initialize()
    {
        Transform target = GameObject.FindGameObjectWithTag(PlayerTag).transform;
        _transposer = _virtualCamera.GetCinemachineComponent<CinemachineTransposer>();
        _virtualCamera.Follow = target;
        _initPos = _transposer.m_FollowOffset;
        _virtualCamera.LookAt = target;
    }

    private void Update()
    {
        CameraMove();
    }

    private void CameraMove()
    {
        float hor = -UltimateJoystick.GetHorizontalAxis(Joystick);
        float vert = -UltimateJoystick.GetVerticalAxis(Joystick);


        if (UltimateJoystick.GetJoystickState(Joystick))
        {
            _transposer.m_FollowOffset += new Vector3(hor, 0, vert) * _moveSpeed * Time.unscaledDeltaTime;
            if (_transposer.m_FollowOffset.x >= _initPos.x + MoveLimit + _modifiedValue ||
                _transposer.m_FollowOffset.x <= _initPos.x - MoveLimit - _modifiedValue)
            {
                _transposer.m_FollowOffset.x = Mathf.Clamp(_transposer.m_FollowOffset.x, _initPos.x - MoveLimit,
                    _initPos.x + MoveLimit);
            }

            if (_transposer.m_FollowOffset.z >= _initPos.z + MoveLimit + _modifiedValue ||
                _transposer.m_FollowOffset.z <= _initPos.z - MoveLimit - _modifiedValue)
            {
                _transposer.m_FollowOffset.z = Mathf.Clamp(_transposer.m_FollowOffset.z, _initPos.z - MoveLimit,
                    _initPos.z + MoveLimit);
            }
        }

        if (!UltimateJoystick.GetJoystickState(Joystick))
        {
            _transposer.m_FollowOffset =
                Vector3.MoveTowards(_transposer.m_FollowOffset, _initPos, _backSpeed * Time.deltaTime);
        }
    }
}