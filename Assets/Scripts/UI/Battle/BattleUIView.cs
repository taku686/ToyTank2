using UnityEngine;

public class BattleUIView : MonoBehaviour
{
    public GameClearView gameClearView;
    public GameOverView gameOverView;
    public RewardView rewardView;

    public void Initialize()
    {
        gameClearView.gameObject.SetActive(false);
        gameOverView.gameObject.SetActive(false);
        rewardView.gameObject.SetActive(false);
        foreach (var image in gameClearView.starImages)
        {
            image.gameObject.SetActive(false);
        }

        rewardView.rewardCountText.gameObject.SetActive(false);
    }
}