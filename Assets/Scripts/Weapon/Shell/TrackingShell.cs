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

    public void SetProperty(float range, float shellSpeed, Transform target)
    {
        _maxDistance = range;
        _velocity = shellSpeed;
        this.target = target;
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
            transform.position = Vector3.MoveTowards(this.transform.position,
                transform.position + transform.forward * _maxDistance, Time.deltaTime * _velocity);
        }
        else
        {
            transform.rotation = Quaternion.Lerp(transform.rotation,
                Quaternion.LookRotation(new Vector3(target.position.x, this.transform.position.y, target.position.z) -
                                        transform.position), Time.deltaTime * _rotationSpeed);
            _step = transform.forward * Time.deltaTime * _velocity;
            transform.position += _step;
        }
    }
}