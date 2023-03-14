using Data;
using UnityEngine;

public class ShellBase : MonoBehaviour
{
    public Rigidbody rb;
    protected Collider Col;
    [SerializeField] protected Vector3 _initPos;
    private float _limitRange;
    [SerializeField] protected Transform pool;
    public bool isInit;
    public float damage;

    protected virtual void Update()
    {
        if (Vector3.Distance(_initPos, transform.position) > _limitRange)
        {
            Sleep();
        }
    }

    public virtual void Reset(float limitRange)
    {
        if (rb != null)
        {
            rb.velocity = Vector3.zero;
        }

        _limitRange = limitRange;
        _initPos = transform.position;
    }

    protected virtual void Sleep()
    {
        gameObject.SetActive(false);
        Transform transform1;
        (transform1 = transform).SetParent(pool);
        transform1.localPosition = Vector3.zero;
        rb.Sleep();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(GameCommonData.GroundTag) ||
            (other.CompareTag(GameCommonData.EnemyTag) && gameObject.CompareTag(GameCommonData.PlayerShellTag)) ||
            (other.CompareTag(GameCommonData.PlayerTag) && gameObject.CompareTag(GameCommonData.EnemyShellTag)))
        {
            Sleep();
        }
    }
}

public interface IInitialize
{
    void Initialize(string poolTag);

    void Initialize(bool isPlayer);
}