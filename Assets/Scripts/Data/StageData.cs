using System.Collections.Generic;
using UnityEngine;

namespace Data
{
    [System.Serializable]
    [CreateAssetMenu(fileName = "Item", menuName = "Item/Stage")]
    public class StageData : ScriptableObject
    {
        public int stage;
        public CratePos[] createPoses;
        public int[] enemyLevels;
    }
}