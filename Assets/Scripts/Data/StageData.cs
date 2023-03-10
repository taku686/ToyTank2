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

        public static StageData TestData()
        {
            var stageData = new StageData()
            {
                stage = 1,
                createPosIndex = 1.ToString(),
                enemyDatumIndex = 99.ToString()
            };
            return stageData;
        }
    }
}