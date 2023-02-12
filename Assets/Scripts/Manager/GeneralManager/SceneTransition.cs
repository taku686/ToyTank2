using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneTransition : MonoBehaviour
{
    private static SceneTransition instance;
    public static SceneTransition Instance => instance;
    public int currentStage;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }


        DontDestroyOnLoad(gameObject);
    }

    public async UniTask Transition(int index)
    {
        await SceneManager.LoadSceneAsync(index).WithCancellation(gameObject.GetCancellationTokenOnDestroy());
    }
}