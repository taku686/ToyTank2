using UnityEngine;

namespace Data
{
    public static class GameCommonData
    {
        public static bool IsInitialize;
        public static readonly string TitleId = "1589D";
        public static readonly string EnemyMaterialName = "Enemy";
        public static readonly int MaxStage = 50;
        public static int TitleScene = 0;
        public static readonly int BattleScene = 1;

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
    }

    public enum CratePos
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
    }
}