using UnityEngine;

public class TrackingShell : ShellBase, IInitialize
{
    [SerializeField] private Transform target;
    private float _velocity;
    private float _maxDistance;
    Vector3 _step;
    private CapsuleCollider _collider;
    private readonly float _lifeTime = 3.5f;
    private float _timer;
    private readonly float _rotationSpeed = 1.5f;

    protected override void Update()
    {
        base.Update();
        Tracking();
        _timer += Time.unscaledDeltaTime;
        if (_lifeTime < _timer)
        {
            Sleep();
        }
    }

    public void Initialize(string poolTag)
    {
        if (isInit)
        {
            return;
        }

        rb = gameObject.AddComponent<Rigidbody>();
        rb.useGravity = false;
        rb.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotationX |
                         RigidbodyConstraints.FreezeRotationZ;
        rb.Sleep();
        pool = GameObject.FindGameObjectWithTag(poolTag).transform;
        _collider = gameObject.AddComponent<CapsuleCollider>();
        _collider.isTrigger = true;
        _collider.direction = 2;
        _collider.center = new Vector3(0, -0.24f, 0.22f);
        _collider.radius = 0.32f;
        _collider.height = 2.8f;
        isInit = true;
    }

    public void Initialize(bool isPlayer)
    {
        throw new System.NotImplementedException();
    }

    public void SetProperty(CanonData canonData, Transform targetTransform)
    {
        _maxDistance = canonData.range;
        _velocity = canonData.bulletSpeed;
        target = targetTransform;
    }

    protected override void Sleep()
    {
        base.Sleep();
        _timer = 0;
    }

    private void Tracking()
    {
        if (target == null)
        {
            var transform1 = transform;
            var position = transform1.position;
            position = Vector3.MoveTowards(position,
                position + transform1.forward * _maxDistance, Time.deltaTime * _velocity);
            transform.position = position;
        }
        else
        {
            var transform1 = transform;
            var position = transform1.position;
            Transform transform2;
            var position1 = target.position;
            (transform2 = transform).rotation = Quaternion.Lerp(transform1.rotation,
                Quaternion.LookRotation(new Vector3(position1.x, position.y, position1.z) -
                                        position), Time.deltaTime * _rotationSpeed);
            _step = transform2.forward * Time.deltaTime * _velocity;
            position += _step;
            transform2.position = position;
        }
    }
}