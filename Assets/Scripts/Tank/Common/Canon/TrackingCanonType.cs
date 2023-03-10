using System.Collections.Generic;
using UnityEngine;
using Data;

public class TrackingCanonType : CanonMoveBase, IShot, ISetLayerMask
{
    [SerializeField] private float rigidSphereRadius = 10f;


    private LayerMask _enemyLayerMask;
    private Rigidbody _rigid;
    private SphereCollider _sphereCollider;
    private const float SightAngle = 60.0f;
    [SerializeField] private Transform target;
    [SerializeField] private List<Transform> targetsList = new();

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
        shell[0].GetComponent<TrackingShell>().SetProperty(canonData.Range, canonData.BulletSpeed, target);
    }

    public void Shot(ShellBase shell, CanonData canonData)
    {
        throw new System.NotImplementedException();
    }

    private void DetectTarget(Transform targetEnemy)
    {
        if (targetEnemy == null) return;
        var transform1 = transform;
        Vector3 posDelta = targetEnemy.transform.position - transform1.position;
        float targetAngle = Vector3.Angle(transform1.forward, posDelta);
        if (targetAngle < SightAngle)
        {
            _dir = new Vector3(posDelta.x, 0f, posDelta.z);
            if (Physics.Raycast(transform.position, _dir, out RaycastHit hit))
            {
                if (hit.collider.gameObject == targetEnemy.gameObject)
                {
                    this.target = targetEnemy.transform;
                }
            }
        }
        else
        {
            this.target = null;
        }
    }

    private Vector3 _dir;

    private Transform DecideTarget()
    {
        Transform targetEnemy = null;
        if (targetsList.Count < 1)
        {
            return null;
        }

        if (targetsList.Count == 1)
        {
            return targetsList[0];
        }

        foreach (var targetCandidate in targetsList)
        {
            if (targetCandidate == null)
            {
                targetsList.Remove(targetCandidate);
                break;
            }

            if (targetEnemy == null)
            {
                targetEnemy = targetCandidate;
            }

            if (Vector3.Distance(this.transform.position, targetEnemy.position) >
                Vector3.Distance(this.transform.position, targetCandidate.position))
            {
                targetEnemy = targetCandidate;
            }
        }

        return targetEnemy;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag(GameCommonData.EnemyTag))
        {
            return;
        }

        foreach (var targetEnemy in targetsList)
        {
            if (targetEnemy.gameObject == other.gameObject)
            {
                return;
            }
        }

        targetsList.Add(other.transform);
    }

    /*private void OnDrawGizmos()
    {
        if (target == null) return;
        var transform1 = transform;
        var position = transform1.position;
        Debug.DrawRay(position, target.transform.position - position, Color.red, 0.01f);
    }*/

    private void OnTriggerExit(Collider other)
    {
        if (!other.CompareTag(GameCommonData.EnemyTag))
        {
            return;
        }

        targetsList.Remove(other.transform);
    }

    public void SetLayerMask(LayerMask layerMask)
    {
        _enemyLayerMask = layerMask;
    }
}