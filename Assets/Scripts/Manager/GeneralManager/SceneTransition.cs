using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneTransition : MonoBehaviour
{
    private static SceneTransition _instance;
    public static SceneTransition Instance => _instance;

    private void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
        }
        else if (_instance != this)
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