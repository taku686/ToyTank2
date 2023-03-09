using Data;
using GoogleMobileAds.Api;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayFabAdsManager : MonoBehaviour
{
    private InterstitialAd _interstitialAd;
    private bool _isLoadComplete;
    private bool _isAdFinish;

    //debug
    public BattleUIView battleUIView;

    private void Update()
    {
        if (_isLoadComplete)
        {
            _isLoadComplete = false;
            RegisterReloadHandler(_interstitialAd);
        }

        if (_isAdFinish)
        {
            _isAdFinish = false;
            // Reload the ad so that we can show another as soon as possible.
            SceneManager.LoadScene(GameCommonData.TitleScene);
        }
    }

    public void Initialize()
    {
        MobileAds.Initialize((InitializationStatus initStatus) =>
        {
            // This callback is called once the MobileAds SDK is initialized.
            Debug.Log("L‰Šú‰»Š®—¹");
            LoadInterstitialAd();
        });
    }

    /// <summary>
    /// Loads the interstitial ad.
    /// </summary>
    private void LoadInterstitialAd()
    {
        // Clean up the old ad before loading a new one.
        if (_interstitialAd != null)
        {
            _interstitialAd.Destroy();
            _interstitialAd = null;
        }

        Debug.Log("Loading the interstitial ad.");

        // create our request used to load the ad.
        var adRequest = new AdRequest.Builder()
            //.AddKeyword("unity-admob-sample")
            .Build();

        // send the request to load the ad.
        InterstitialAd.Load(GameCommonData.AdUnitId, adRequest,
            (ad, error) =>
            {
                // if error is not null, the load request failed.
                if (error != null || ad == null)
                {
                    Debug.LogError("interstitial ad failed to load an ad " +
                                   "with error : " + error);
                    return;
                }

                Debug.Log("Interstitial ad loaded with response : "
                          + ad.GetResponseInfo());
                _interstitialAd = ad;
                _isLoadComplete = true;
            });
    }

    public void ShowAd()
    {
        if (_interstitialAd != null && _interstitialAd.CanShowAd())
        {
            _interstitialAd.Show();
        }
        else
        {
            Debug.LogError("Interstitial ad is not ready yet.");
        }
    }

    private void RegisterReloadHandler(InterstitialAd ad)
    {
        // Raised when the ad closed full screen content.
        ad.OnAdFullScreenContentClosed += () =>
        {
            Debug.Log("Interstitial Ad full screen content closed.");
            _isAdFinish = true;
        };
        // Raised when the ad failed to open full screen content.
        ad.OnAdFullScreenContentFailed += (AdError error) =>
        {
            Debug.LogError("Interstitial ad failed to open full screen content " +
                           "with error : " + error);

            // Reload the ad so that we can show another as soon as possible.
            //LoadInterstitialAd();
        };
    }
}