using UnityEngine;

public class NormalShell : ShellBase,IInitialize
{
    public void Initialize(string poolTag)
    {
        if (isInit)
        {
            return;
        }
        isInit = true;
        rb = gameObject.AddComponent<Rigidbody>();
        Col = gameObject.AddComponent<CapsuleCollider>();
        rb.useGravity = false;
        rb.constraints = RigidbodyConstraints.FreezePositionY | RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;
        rb.Sleep();
        Col.isTrigger = true;
        pool = GameObject.FindGameObjectWithTag(poolTag).transform;
    }

    public void Initialize(bool isPlayer)
    {
        throw new System.NotImplementedException();
    }
}
