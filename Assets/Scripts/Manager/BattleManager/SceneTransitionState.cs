using System.Collections;
using System.Collections.Generic;
using Data;
using UnityEngine;
using UnityEngine.SceneManagement;
using State = StateMachine<BattleCore>.State;

public partial class BattleCore
{
    public class SceneTransitionState : State
    {
        protected override void OnEnter(State prevState)
        {
            Initialize();
        }

        private void Initialize()
        {
            var adsManager = Owner.playFabAdsManager;
            ShowAds(adsManager);
        }

        private void ShowAds(PlayFabAdsManager adsManager)
        {
            if (UserDataManager.Instance.IsRemoveAds())
            {
                SceneManager.LoadScene(GameCommonData.TitleScene);
            }

            adsManager.ShowAd();
        }
    }
}