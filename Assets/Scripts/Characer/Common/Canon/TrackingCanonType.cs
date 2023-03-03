using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class TrackingCanonType : CanonMoveBase, IShot, ISetLayerMask
{
    [SerializeField] private float rigidSphereRadius = 10f;
    private const string EnemyTag = "Enemy";
    private LayerMask _enemyLayerMask;
    private Rigidbody _rigid;
    private SphereCollider _sphereCollider;
    public float mFSightAngle = 60.0f;
    [SerializeField] private Transform _target;
    [SerializeField] private List<Transform> _targetsList = new();

    protected override void Start()
    {
        base.Start();
        _sphereCollider = gameObject.AddComponent<SphereCollider>();
        _sphereCollider.center = Vector3.zero;
        _sphereCollider.radius = 35f / 2f;
        _sphereCollider.isTrigger = true;
    }

    private void Update()
    {
        DetectTarget(DecideTarget());
    }

    public void Shot(List<ShellBase> shell, CanonData canonData)
    {
        Animator.SetTrigger(FireTrigger);
        shell[0].transform.parent = null;
        shell[0].transform.parent = ShotPos;
        shell[0].transform.localPosition = Vector3.zero;
        shell[0].transform.parent = null;
        shell[0].Reset(canonData.Range);
        shell[0].transform.rotation = Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0);
        shell[0].GetComponent<TrackingShell>().SetProperty(canonData.Range, canonData.BulletSpeed, _target);
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        throw new System.NotImplementedException();
    }

    private void DetectTarget(Transform target)
    {
        if (target == null) return;
        var transform1 = transform;
        Vector3 posDelta = target.transform.position - transform1.position;
        float targetAngle = Vector3.Angle(transform1.forward, posDelta);
        if (targetAngle < mFSightAngle)
        {
            _dir = new Vector3(posDelta.x, 0f, posDelta.z);
            if (Physics.Raycast(transform.position, _dir, out RaycastHit hit))
            {
                if (hit.collider.gameObject == target.gameObject)
                {
                    _target = target.transform;
                }
            }
        }
        else
        {
            _target = null;
        }
    }

    private Vector3 _dir;

    private Transform DecideTarget()
    {
        Transform target = null;
        if (_targetsList.Count < 1)
        {
            return target;
        }

        if (_targetsList.Count == 1)
        {
            return _targetsList[0];
        }

        foreach (var target_candidate in _targetsList)
        {
            if (target == null)
            {
                target = target_candidate;
            }

            if (Vector3.Distance(this.transform.position, target.position) >
                Vector3.Distance(this.transform.position, target_candidate.position))
            {
                target = target_candidate;
            }
        }

        return target;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag(EnemyTag))
        {
            return;
        }

        foreach (var target in _targetsList)
        {
            if (target.gameObject == other.gameObject)
            {
                return;
            }
        }

        _targetsList.Add(other.transform);
    }

    private void OnDrawGizmos()
    {
        if (_target == null) return;
        Debug.DrawRay(transform.position, _target.transform.position - transform.position, Color.red, 0.01f);
    }

    private void OnTriggerExit(Collider other)
    {
        if (!other.CompareTag(EnemyTag))
        {
            return;
        }

        _targetsList.Remove(other.transform);
    }

    public void SetLayerMask(LayerMask layerMask)
    {
        _enemyLayerMask = layerMask;
    }
}