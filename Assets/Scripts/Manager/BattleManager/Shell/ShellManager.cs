using System.Collections.Generic;
using Data;
using UnityEngine;

public class ShellManager : MonoBehaviour
{
    public List<ShellBase> enemyShellList = new();
    private readonly Dictionary<int, List<ShellBase>> _playerShellDictionary = new();
    private readonly Dictionary<int, Transform> _playerPoolTransformDictionary = new();
    private UserData _userData;
    private const int MaxCount = 10;

    [SerializeField] private Transform[] _playerPools;
    [SerializeField] private Transform _enemyPool;
    private CanonData _currentCanon;


    public void InitializePlayerPool(UserData userData)
    {
        _userData = userData;
        var canonIndex = _userData.currentCanonDataIndex;
        _currentCanon = CanonDataManager.Instance.GetCanonData(canonIndex);
        for (int i = 0; i < _userData.currentEquippedCanonList.Count; i++)
        {
            var index = _userData.currentEquippedCanonList[i];
            var canonData = CanonDataManager.Instance.GetCanonData(index);
            if (canonData.CanonKinds is Data.CanonType.BeamType or Data.CanonType.FlameType)
            {
                continue;
            }

            _playerShellDictionary[canonData.index] = new List<ShellBase>();
            var playerPoolTransform = _playerPools[i];
            _playerPoolTransformDictionary[canonData.index] = playerPoolTransform;
            CreatePlayerPool(canonData, playerPoolTransform);
        }
    }

    public void InitializeEnemyPool(CanonData canonData)
    {
        if (canonData.CanonKinds is Data.CanonType.BeamType or Data.CanonType.FlameType)
        {
            return;
        }

        CreateEnemyPool(canonData, _enemyPool);
    }


    private void CreatePlayerPool(CanonData canonData, Transform parent)
    {
        for (int i = 0; i < MaxCount; i++)
        {
            ShellBase newShellBase = CreateShell(canonData, parent);
            newShellBase.gameObject.SetActive(false);
            _playerShellDictionary[canonData.index].Add(newShellBase);
        }
    }

    private void CreateEnemyPool(CanonData canonData, Transform parent)
    {
        for (int i = 0; i < MaxCount; i++)
        {
            ShellBase newShellBase = CreateShell(canonData, parent);
            newShellBase.gameObject.SetActive(false);
            enemyShellList.Add(newShellBase);
        }
    }

    private ShellBase CreateShell(CanonData canonData, Transform parent)
    {
        GameObject shell = Instantiate(canonData.shellObj, parent);
        DetectShellType(canonData, shell);
        return shell.GetComponent<ShellBase>();
    }

    public List<ShellBase> GetPlayerShell(string poolTag, int currentCanonIndex)
    {
        List<ShellBase> objs = new List<ShellBase>();
        var canonData = CanonDataManager.Instance.GetCanonData(_userData.currentCanonDataIndex);
        if (canonData.CanonKinds is Data.CanonType.BeamType or Data.CanonType.FlameType)
        {
            return null;
        }

        foreach (ShellBase obj in _playerShellDictionary[currentCanonIndex])
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
            ShellBase newObj = CreateShell(canonData, _playerPoolTransformDictionary[canonData.index]);
            _playerShellDictionary[currentCanonIndex].Add(newObj);
            newObj.GetComponent<IInitialize>().Initialize(poolTag);
            objs.Add(newObj);
        }

        return objs;
    }

    public ShellBase GetEnemyShell(string poolTag, CanonData canonData)
    {
        foreach (ShellBase obj in enemyShellList)
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

        ShellBase newObj = CreateShell(canonData, _enemyPool);
        enemyShellList.Add(newObj);
        newObj.GetComponent<IInitialize>().Initialize(poolTag);
        return newObj;
    }

    private void DetectShellType(CanonData canonData, GameObject shell)
    {
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