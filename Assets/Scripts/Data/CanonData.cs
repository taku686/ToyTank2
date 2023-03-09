using System;
using UnityEngine;

[Serializable]
public class CanonData
{
    public string name;
    public int index;
    public int canonObjIndex;
    public GameObject canonObj;
    public int imageIndex;
    public Sprite image;
    public float range;
    public int clipSize;
    public float damage;
    public int fireCountLimit;
    public float bulletSpeed;
    public float reloadTime;
    public float fireTime;
    public float fireRate;
    public float chargeTime;
    public int bounceLimit;
    public int canonKindsIndex;
    public Data.CanonType canonKinds;
    public int shellObjIndex;
    public GameObject shellObj;
    public float shotPosX;
    public float shotPosY;
    public float shotPosZ;
    public Vector3 shotPos;
    public string explanation;


    public string Name
    {
        get => name;
        private set => name = value;
    }

    public GameObject CanonObj
    {
        get => canonObj;
        private set => canonObj = value;
    }

    public Sprite Image => image;

    public int Index => index;


    public float Range
    {
        get => range;
        private set => range = value;
    }

    public int ClipSize
    {
        get => clipSize;
        private set => clipSize = value;
    }

    public float Damage
    {
        get => damage;
        private set => damage = value;
    }

    public int FireCountLimit
    {
        get => fireCountLimit;
        private set => fireCountLimit = value;
    }

    public float BulletSpeed
    {
        get => bulletSpeed;
        private set => bulletSpeed = value;
    }

    public float ReloadTime
    {
        get => reloadTime;
        private set => reloadTime = value;
    }

    public float FireTime
    {
        get => fireTime;
        private set => fireTime = value;
    }

    public float FireRate
    {
        get => fireRate;
        private set => fireRate = value;
    }

    public float ChargeTime
    {
        get => chargeTime;
        private set => chargeTime = value;
    }

    public int BounceLimit
    {
        get => bounceLimit;
        private set => bounceLimit = value;
    }

    public string Explanation
    {
        get => explanation;
        private set => explanation = value;
    }

    public Data.CanonType CanonKinds
    {
        get => canonKinds;
        set => canonKinds = value;
    }

    public GameObject ShellObj
    {
        get => shellObj;
        set => shellObj = value;
    }

    public Vector3 ShotPos
    {
        get => shotPos;
        set => shotPos = value;
    }
}