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

    [SerializeField] private GameObject hpBar;

    [FormerlySerializedAs("_targetMarker")] [SerializeField]
    private GameObject targetMarker;

    [FormerlySerializedAs("_enemyLayerMask")] [SerializeField]
    private LayerMask enemyLayerMask;

    [SerializeField] private Material playerMaterial;
    [SerializeField] private LayerMask playerLayer;
    [SerializeField] private CanonDataManager canonDataManager;
    [SerializeField] private BaseDataManager baseDataManager;
    [SerializeField] private UserDataManager userDataManager;
    private GameObject _playerObj;
    private PlayerCore _playerCoreSc;
    private UserData _userData;
    public PlayerHealth Health => _playerCoreSc.Health;

    private static readonly Vector3 Center = new(0, 0.85f, 0);
    private const float Radius = 0.8f;

    public void Initialize(UserData userData)
    {
        _userData = userData;
        _playerObj = new GameObject
        {
            name = Name,
            tag = Name,
            // layer = playerLayer,
            transform =
            {
                position = generatePos.position,
                localScale = Vector3.one * playerSize,
                rotation = generatePos.rotation
            }
        };
        InitializeComponent(_playerObj);
    }

    private void InitializeComponent(GameObject player)
    {
        _playerCoreSc = player.AddComponent<PlayerCore>();
        _playerCoreSc.Initialize(_userData, targetMarker.transform, canonBar, hpBar, enemyLayerMask,
            playerMaterial, baseDataManager, canonDataManager, userDataManager);
        var col = player.AddComponent<SphereCollider>();
        col.center = Center;
        col.radius = Radius;
    }

    public void ChangeCanon(CanonData canonData, int canonIndex)
    {
        _playerCoreSc.ChangeCanon(_userData, canonData, canonIndex);
    }
}