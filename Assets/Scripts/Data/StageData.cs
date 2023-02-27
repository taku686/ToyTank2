using System.Collections.Generic;

namespace Data
{
    [System.Serializable]
    public class StageData 
    {
        public int stage;
        public string createPosIndex;
        public List<CreatePos> createPoses = new();
        public string enemyDatumIndex;
        public List<EnemyData> enemyDatum = new();
    }
}