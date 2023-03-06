using UnityEngine;

public class CanonShell : ShellBase, IInitialize
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
        rb.useGravity = true;
        rb.Sleep();
        Col.isTrigger = true;
        pool = GameObject.FindGameObjectWithTag(poolTag).transform;
    }
}