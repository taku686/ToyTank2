using System;
using UnityEngine;

[Serializable]
public class BaseData
{
    public string name;
    public int baseObjIndex;
    public GameObject baseObj;
    public int baseTypeIndex;
    public Data.BaseType baseType;
    public int hp;
    public int energyCapacity;
    public float energyChargeSpeed;
    public int moveSpeed;
    public int itemCapacity;
    public float canonPosX;
    public float canonPosY;
    public float canonPosZ;
    public Vector3 canonPos;

    public int Hp
    {
        get => hp;
        private set => hp = value;
    }

    public int EnergyCapacity
    {
        get => energyCapacity;
        private set => energyCapacity = value;
    }

    public float EnergyChargeSpeed
    {
        get => energyChargeSpeed;
        private set => energyChargeSpeed = value;
    }

    public int MoveSpeed
    {
        get => moveSpeed;
        private set => moveSpeed = value;
    }

    public int ItemCapacity
    {
        get => itemCapacity;
        private set => itemCapacity = value;
    }

    public string Name
    {
        get => name;
        private set => name = value;
    }

    public GameObject BaseObj
    {
        get => baseObj;
        private set => baseObj = value;
    }

    public Data.BaseType BaseType1
    {
        get => baseType;
        private set => baseType = value;
    }

    public Vector3 CanonPos
    {
        get => canonPos;
        private set => canonPos = value;
    }

    /*public enum BaseType
    {
        Ground,
        Amphibious
    }*/
}