using UnityEngine;

public class BattleUIView : MonoBehaviour
{
    public GameClearView gameClearView;
    public GameOverView gameOverView;

    public void Initialize()
    {
        gameClearView.gameObject.SetActive(false);
        gameOverView.gameObject.SetActive(false);
        foreach (var image in gameClearView.starImages)
        {
            image.gameObject.SetActive(false);
        }
    }
}