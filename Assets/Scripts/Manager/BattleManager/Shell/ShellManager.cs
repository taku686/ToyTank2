using System.Collections.Generic;
using Data;
using UnityEngine;

public class ShellManager : MonoBehaviour
{
    public List<ShellBase>[] _playerShellList = { new(), new(), new() };
    public List<ShellBase> _enemyShellList = new();
    private UserData _userData;
    private readonly int _maxCount = 10;

    [SerializeField] private Transform[] _playerPools;
    [SerializeField] private Transform _enemyPool;
    private CanonData _currentCanon;


    public void InitializePlayerPool(UserData userData)
    {
        _userData = userData;
        var canonIndex = _userData.currentEquippedCanonList[_userData.currentCanonIndex];
        _currentCanon = CanonDataManager.Instance.GetCanonData(canonIndex);
        for (int i = 0; i < _userData.currentEquippedCanonList.Count; i++)
        {
            var index = _userData.currentEquippedCanonList[i];
            var canonData = CanonDataManager.Instance.GetCanonData(index);
            if (canonData.CanonKinds == Data.CanonType.BeamType ||
                canonData.CanonKinds == Data.CanonType.FlameType)
            {
                return;
            }

            CreatePlayerPool(canonData.ShellObj, _playerPools[i], i);
        }
    }

    public void InitializeEnemyPool(CanonData canonData)
    {
        if (canonData.CanonKinds == Data.CanonType.BeamType ||
            canonData.CanonKinds == Data.CanonType.FlameType)
        {
            return;
        }

        CreateEnemyPool(canonData.ShellObj, _enemyPool);
    }


    private void CreatePlayerPool(GameObject shellObj, Transform parent, int index)
    {
        for (int i = 0; i < _maxCount; i++)
        {
            ShellBase newShellBase = CreateShell(shellObj, parent);
            newShellBase.gameObject.SetActive(false);
            _playerShellList[index].Add(newShellBase);
        }
    }

    private void CreateEnemyPool(GameObject shellObj, Transform parent)
    {
        for (int i = 0; i < _maxCount; i++)
        {
            ShellBase newShellBase = CreateShell(shellObj, parent);
            newShellBase.gameObject.SetActive(false);
            _enemyShellList.Add(newShellBase);
        }
    }

    private ShellBase CreateShell(GameObject shellObj, Transform parent)
    {
        GameObject shell = Instantiate(shellObj, parent);
        //shell.tag = GameCommonData.ShellTag;
        DetectShellType(_userData, shell);
        return shell.GetComponent<ShellBase>();
    }

    public List<ShellBase> GetPlayerShell(string poolTag, int index)
    {
        List<ShellBase> objs = new List<ShellBase>();
        var canonData =
            CanonDataManager.Instance.GetCanonData(_userData.currentEquippedCanonList[_userData.currentCanonIndex]);
        foreach (ShellBase obj in _playerShellList[index])
        {
            if (!obj.gameObject.activeSelf)
            {
                obj.gameObject.SetActive(true);
                if (!obj.isInit)
                {
                    obj.GetComponent<IInitialize>().Initialize(poolTag);
                    obj.tag = GameCommonData.PlayerShellTag;
                }

                objs.Add(obj);

                if (objs.Count == canonData.FireCountLimit)
                {
                    return objs;
                }
            }
        }

        for (int i = 0; i < canonData.FireCountLimit; i++)
        {
            ShellBase newObj = CreateShell(canonData.ShellObj, _playerPools[_userData.currentCanonIndex]);
            _playerShellList[index].Add(newObj);
            newObj.GetComponent<IInitialize>().Initialize(poolTag);
            objs.Add(newObj);
        }

        return objs;
    }

    public ShellBase GetEnemyShell(string poolTag, CanonData canonData)
    {
        foreach (ShellBase obj in _enemyShellList)
        {
            if (!obj.gameObject.activeSelf)
            {
                obj.gameObject.SetActive(true);
                if (!obj.isInit)
                {
                    obj.GetComponent<IInitialize>().Initialize(poolTag);
                    obj.tag = GameCommonData.EnemyShellTag;
                }

                return obj;
            }
        }

        ShellBase newObj = CreateShell(canonData.ShellObj,
            _enemyPool);
        _enemyShellList.Add(newObj);
        newObj.GetComponent<IInitialize>().Initialize(poolTag);
        return newObj;
    }

    private void DetectShellType(UserData userData, GameObject shell)
    {
        var canonData =
            CanonDataManager.Instance.GetCanonData(userData.currentEquippedCanonList[_userData.currentCanonIndex]);
        switch (canonData.CanonKinds)
        {
            case Data.CanonType.BeamType:
                break;
            case Data.CanonType.BounceBulletType:
                break;
            case Data.CanonType.CanonType:
                shell.AddComponent<CanonShell>();
                break;
            case Data.CanonType.MachineGunType:
                shell.AddComponent<NormalShell>();
                break;
            case Data.CanonType.NormalBulletType:
                shell.AddComponent<NormalShell>();
                break;
            case Data.CanonType.RailGunType:
                break;
            case Data.CanonType.ShotGunBulletType:
                shell.AddComponent<NormalShell>();
                break;
            case Data.CanonType.ToxicBulletType:
                break;
            case Data.CanonType.TrackingBulletType:
                shell.AddComponent<TrackingShell>();
                break;
            case Data.CanonType.TwoCanonType:
                shell.AddComponent<NormalShell>();
                break;
        }
    }
}