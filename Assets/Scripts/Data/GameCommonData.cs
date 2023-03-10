using UnityEngine;

namespace Data
{
    public static class GameCommonData
    {
        public static bool IsInitialize;
        public static readonly string TitleId = "1589D";
        public static readonly string TankMaterialName = "Tank (Instance)";
        public static readonly string ShellManagerTag = "ShellManager";
        public static readonly string PlayerTag = "Player";
        public static readonly string GroundTag = "Ground";
        public static readonly string EnemyTag = "Enemy";
        public static readonly string PlayerShellTag = "PlayerShell";
        public static readonly string EnemyShellTag = "EnemyShell";
        public static readonly string GrassTag = "Grass";
        public static readonly string EnemyDataKey = "EnemyDatum";
        public static readonly string CanonDataKey = "CanonDatum";
        public static readonly string BaseDataKey = "BaseDatum";
        public static readonly string StageDataKey = "StageDatum";
        public static readonly string UserDataKey = "UserData";
        public static readonly string PlayerVariables = "Player";
        public static readonly int TitleScene = 0;
        public static readonly int BattleScene = 1;
        public static readonly int RemoveAdsPrice = 300;
        public static readonly int EquippedCanonCountLimit = 3;
        public static readonly float ClickDuration = 0.2f;
        public static readonly float CloseDuration = 0.5f;
        public static readonly float OpenDuration = 1.0f;
        public static readonly Color PlayerColor = Color.white;
        public static readonly string AdUnitId = "ca-app-pub-3759795642939239/4324583739";
        public static readonly string NonConsumable = "NonConsumable";
        public static readonly string RemoveAdsItem = "removeads";
        public static readonly string MainStoreKey = "Main";
        public static readonly string RealMoneyKey = "RM";

        public static Color GetEnemyColor(int index)
        {
            switch (index)
            {
                case 1:
                    return Color.red;
                case 2:
                    return new Color(1, 0.647f, 0);
                case 3:
                    return Color.yellow;
                case 4:
                    return new Color(0.584f, 1, 0);
                case 5:
                    return Color.green;
                case 6:
                    return Color.cyan;
                case 7:
                    return Color.blue;
                case 8:
                    return new Color(0.349f, 0.278f, 0.549f);
                case 9:
                    return Color.black;
                default:
                    return Color.white;
            }
        }

        public static CanonType GetCanonType(int index)
        {
            switch (index)
            {
                case 0:
                    return CanonType.NormalBulletType;
                case 1:
                    return CanonType.ShotGunBulletType;
                case 2:
                    return CanonType.TrackingBulletType;
                case 3:
                    return CanonType.ToxicBulletType;
                case 4:
                    return CanonType.BounceBulletType;
                case 5:
                    return CanonType.RailGunType;
                case 6:
                    return CanonType.BeamType;
                case 7:
                    return CanonType.MachineGunType;
                case 8:
                    return CanonType.CanonType;
                case 9:
                    return CanonType.FlameType;
                case 10:
                    return CanonType.TwoCanonType;
                default:
                    return CanonType.None;
            }
        }

        public static BaseType GetBaseType(int index)
        {
            switch (index)
            {
                case 0:
                    return BaseType.Ground;
                case 1:
                    return BaseType.Amphibious;
                default:
                    return BaseType.None;
            }
        }

        public static CreatePos GetCreatePos(int index)
        {
            switch (index)
            {
                case 0:
                    return CreatePos.UpperCenterRight;
                case 1:
                    return CreatePos.UpperCenterCenter;
                case 2:
                    return CreatePos.UpperCenterLeft;
                case 3:
                    return CreatePos.UpperLeftRight;
                case 4:
                    return CreatePos.UpperLeftCenter;
                case 5:
                    return CreatePos.UpperLeftLeft;
                case 6:
                    return CreatePos.UpperRightRight;
                case 7:
                    return CreatePos.UpperRightCenter;
                case 8:
                    return CreatePos.UpperRightLeft;
                default:
                    return CreatePos.None;
            }
        }
    }


    public enum CreatePos
    {
        UpperCenterRight,
        UpperCenterCenter,
        UpperCenterLeft,
        UpperLeftRight,
        UpperLeftCenter,
        UpperLeftLeft,
        UpperRightRight,
        UpperRightCenter,
        UpperRightLeft,
        None
    }

    public enum CanonType
    {
        NormalBulletType,
        ShotGunBulletType,
        TrackingBulletType,
        ToxicBulletType,
        BounceBulletType,
        RailGunType,
        BeamType,
        MachineGunType,
        CanonType,
        FlameType,
        TwoCanonType,
        None
    }

    public enum BaseType
    {
        Ground,
        Amphibious,
        None
    }
}