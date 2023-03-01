using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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
            adsManager.ShowAd();
        }
    }
}