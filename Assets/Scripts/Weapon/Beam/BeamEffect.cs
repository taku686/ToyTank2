using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class BeamEffect : MonoBehaviour
{
    private const string TargetTag = "Enemy";
    private const string JoystickName = "CanonMove";
    public bool OneShot; // Constant or single beam?

    public Texture[] BeamFrames; // Animation frame sequence
    public float FrameStep; // Animation time

    public float beamScale; // Default beam scale to be kept over distance
    public float MaxBeamLength; // Maximum beam length

    public bool AnimateUV; // UV Animation
    public float UVTime; // UV Animation speed

    public GameObject _rayImpactEffect;
    public List<Transform> rayImpactList = new List<Transform>(); // Impact transform
    public Transform rayMuzzle; // Muzzle flash transform
    LineRenderer _lineRenderer; // Line rendered component
    int _frameNo; // Frame counter
    int _frameTimerID; // Frame timer reference
    float _beamLength; // Current beam length
    float _initialBeamOffset; // Initial UV offset 
    public float fxOffset; // Fx offset from bullet's touch point

    [FormerlySerializedAs("_targets")] [SerializeField]
    private List<GameObject> targets = new List<GameObject>();

    private Vector3 _endPoint;
    private float _radius = 18;
    private SphereCollider _sphereCollider;
    private bool _isMultiTargets;

    public void Initialize(bool isMultiTargets, float radius)
    {
        _isMultiTargets = isMultiTargets;
        _radius = radius;
        // Get line renderer component
        _lineRenderer = GetComponent<LineRenderer>();

        // Assign first frame texture
        if (!AnimateUV && BeamFrames.Length > 0)
            _lineRenderer.material.mainTexture = BeamFrames[0];

        // Randomize uv offset
        _initialBeamOffset = Random.Range(0f, 5f);
        _sphereCollider = this.gameObject.AddComponent<SphereCollider>();
        _sphereCollider.isTrigger = true;
        _sphereCollider.radius = _radius;
        _sphereCollider.center = Vector3.zero;
    }

    // OnSpawned called by pool manager 
    public void OnSpawned(Vector3 shotPos, Transform canonTransform)
    {
        if (AnimateUV)
        {
            _animateUVTime += Time.deltaTime;

            if (_animateUVTime > 1.0f)
                _animateUVTime = 0f;

            _lineRenderer.material.SetTextureOffset("_MainTex",
                new Vector2(_animateUVTime * UVTime + _initialBeamOffset, 0f));
        }

        DetectTarget(shotPos, canonTransform);
    }

    private void DetectTarget(Vector3 shotPos, Transform canonTransform)
    {
        if (_isMultiTargets)
        {
        }

        Vector3 initPos = transform.TransformPoint(shotPos);
        //  this.transform.position = initPos;

        _lineRenderer.SetPosition(0, Vector3.zero);
        rayMuzzle.localPosition = Vector3.zero;
        if (targets.Count == 0)
        {
            float hor = -UltimateJoystick.GetHorizontalAxis(JoystickName);
            float vert = -UltimateJoystick.GetVerticalAxis(JoystickName);
            var direction = new Vector3(hor, 0, vert);
            _endPoint = direction * _radius;
            _lineRenderer.SetPosition(1, new Vector3(_endPoint.x, initPos.y, _endPoint.z));
            GenerateRayImpact(targets, new Vector3(_endPoint.x, initPos.y, _endPoint.z), 0);
        }
        else
        {
            _lineRenderer.positionCount = targets.Count + 1;
            for (int i = 0; i < targets.Count; i++)
            {
                var direction = (targets[i].transform.position - this.transform.position);
                _lineRenderer.SetPosition(i + 1, direction);
                GenerateRayImpact(targets, direction, i);
            }
        }

        if ((targets.Count == 0 && _lineRenderer.positionCount - targets.Count > 2) ||
            (targets.Count > 0 && _lineRenderer.positionCount - targets.Count > 1))
        {
            _lineRenderer.positionCount -= 1;
        }
    }

    private void GenerateRayImpact(List<GameObject> targets, Vector3 generatePos, int index)
    {
        if (rayImpactList.Count < targets.Count || rayImpactList.Count < 0)
        {
            GameObject effect = Instantiate(_rayImpactEffect, this.transform);
            effect.transform.localPosition = generatePos;
            rayImpactList.Add(effect.transform);
        }
        else if (rayImpactList.Count > targets.Count && targets.Count < 1)
        {
            for (int i = rayImpactList.Count - 1; i > (targets.Count); i--)
            {
                rayImpactList[i].gameObject.SetActive(false);
            }
        }

        if (rayImpactList.Count > 0)
        {
            if (rayImpactList[index].gameObject.activeSelf == false && index >= targets.Count - 1)
            {
                rayImpactList[index].gameObject.SetActive(true);
            }

            rayImpactList[index].localPosition = generatePos;
        }
    }

    // Advance texture frame
    void OnFrameStep()
    {
        // Set current texture frame based on frame counter
        _lineRenderer.material.mainTexture = BeamFrames[_frameNo];
        _frameNo++;

        // Reset frame counter
        if (_frameNo == BeamFrames.Length)
            _frameNo = 0;
    }

    // Set offset of impact
    public void SetOffset(float offset)
    {
        fxOffset = offset;
    }

    private float _animateUVTime;


    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(TargetTag))
        {
            targets.Add(other.gameObject);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(TargetTag))
        {
            targets.Remove(other.gameObject);
        }
    }

    void OnDisable()
    {
        targets.RemoveRange(0, targets.Count);
    }
}