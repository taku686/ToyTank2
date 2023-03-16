using Data;
using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    [SerializeField] private Transform generatePos;
    [SerializeField] private GameObject canonBar;
    [SerializeField] private GameObject hpBar;
    [SerializeField] private GameObject targetMarker;
    [SerializeField] private LayerMask enemyLayerMask;
    [SerializeField] private Material playerMaterial;
    private GameObject _playerObj;
    private PlayerCore _playerCoreSc;
    private UserData _userData;
    public PlayerHealth Health => _playerCoreSc.Health;
    private static readonly Vector3 Center = new(0, 0.85f, 0);
    private const float Radius = 0.8f;
    private const float PlayerSize = 2.5f;
    private const string Name = "Player";

    public void Initialize(UserData userData)
    {
        _userData = userData;
        _playerObj = new GameObject
        {
            name = Name,
            tag = GameCommonData.PlayerTag,
            layer = LayerMask.NameToLayer(GameCommonData.PLayerLayer),
            transform =
            {
                position = generatePos.position,
                localScale = Vector3.one * PlayerSize,
                rotation = generatePos.rotation
            }
        };
        InitializeComponent(_playerObj);
    }

    private void InitializeComponent(GameObject player)
    {
        _playerCoreSc = player.AddComponent<PlayerCore>();
        _playerCoreSc.Initialize(_userData, targetMarker.transform, canonBar, hpBar, enemyLayerMask,
            playerMaterial);
        var col = player.AddComponent<SphereCollider>();
        col.center = Center;
        col.radius = Radius;
    }

    public void ChangeCanon(CanonData canonData)
    {
        _playerCoreSc.ChangeCanon(canonData);
    }
}