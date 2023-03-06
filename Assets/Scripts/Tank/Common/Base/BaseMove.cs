using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseMove : MonoBehaviour
{
    private const string JoystickName = "BaseMove";
    private const float SlopeLimit = 20;
    private const float StepOffset = 0.5f;
    private const float SkinWidth = 0.08f;
    private const float Radius = 0.8f;
    private const float Height = 1f;
    private const float Gravity = 20f;
    private readonly Vector3 _center = new(0, 0.85f, 0);

    private Rigidbody _rigidbody;
    private CharacterController _characterController;
    Vector3 _dir = Vector3.zero;

    public void InitializeCharacterController()
    {
        _characterController = gameObject.AddComponent<CharacterController>();
        _characterController.slopeLimit = SlopeLimit;
        _characterController.stepOffset = StepOffset;
        _characterController.skinWidth = SkinWidth;
        _characterController.radius = Radius;
        _characterController.height = Height;
        _characterController.center = _center;
    }

    public void Move(float speed)
    {
        float hor;
        float vert;

        /*if (Application.platform == RuntimePlatform.Android)
        {
            hor = -UltimateJoystick.GetHorizontalAxis(JoystickName);
            vert = -UltimateJoystick.GetVerticalAxis(JoystickName);
        }
        else
        {
            hor = -Input.GetAxis("Horizontal");
            vert = -Input.GetAxis("Vertical");
        }*/
        hor = -UltimateJoystick.GetHorizontalAxis(JoystickName);
        vert = -UltimateJoystick.GetVerticalAxis(JoystickName);

        if (_characterController.isGrounded)
        {
            _dir = new Vector3(hor, 0, vert);
            _dir *= speed;
        }

        _dir.y -= Gravity * Time.deltaTime;
        _characterController.Move(_dir * Time.deltaTime);
        Rotate(hor, vert);
    }

    private void Rotate(float hori, float vert)
    {
        if (hori != 0 || vert != 0)
        {
            var direction = new Vector3(hori, 0, vert);
            transform.localRotation = Quaternion.LookRotation(direction);
        }
    }
}