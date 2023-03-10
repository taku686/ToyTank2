[System.Serializable]
public class EnemyData
{
    public int baseDataIndex;
    public BaseData baseData;
    public int canonDataIndex;
    public CanonData canonData;
    public int level;
    public int version;
    public float shotInterval;
    public float hpRate;

    public static EnemyData TestEnemyData()
    {
        var enemyData = new EnemyData()
        {
            baseDataIndex = 0,
            canonDataIndex = 2,
            level = 1,
            version = 99,
            shotInterval = 0,
            hpRate = 0.5f
        };

        return enemyData;
    }
}