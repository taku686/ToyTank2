using UnityEngine;
using UnityEngine.Serialization;

public class PlayerManager : MonoBehaviour
{
    private const string Name = "Player";
    [FormerlySerializedAs("_generatePos")] [SerializeField]
    private Transform generatePos;
    [FormerlySerializedAs("_playerSize")] [SerializeField]
    private float playerSize = 1;
    [FormerlySerializedAs("_canonBar")] [SerializeField]
    private GameObject canonBar;
    [FormerlySerializedAs("_targetMarker")] [SerializeField]
    private GameObject targetMarker;
    [FormerlySerializedAs("_enemyLayerMask")] [SerializeField]
    private LayerMask enemyLayerMask;

    private GameObject _playerObj;
    private PlayerCore _playerCoreSc;
    private UserData _userData;
    public void Initialize(UserData userData)
    {
        _userData = userData;
        _playerObj = new GameObject
        {
            name = Name,
            tag = Name,
            transform =
            {
                position = generatePos.position,
                localScale = Vector3.one * playerSize
            }
        };
        _playerCoreSc = _playerObj.AddComponent<PlayerCore>();
        _playerCoreSc.Initialize(_userData, targetMarker.transform, canonBar, enemyLayerMask);
    }

    public void ChangeCanon(CanonData canonData,int canonIndex)
    {
        _playerCoreSc.ChangeCanon(_userData, canonData, canonIndex);
    }
}
