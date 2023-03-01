using System.Linq;
using Cysharp.Threading.Tasks;
using Data;
using Manager.PlayFab;
using UI;
using State = StateMachine<Manager.TitleManager.TitleCore>.State;

namespace Manager.TitleManager
{
    public partial class TitleCore
    {
        public class ShopState : State
        {
            private PlayFabCatalogManager _playFabCatalogManager;
            private PlayFabShopManager _playFabShopManager;
            private ShopView _shopView;
            private UIAnimation _uiAnimation;

            protected override void OnEnter(State prevState)
            {
                Initialize();
                InitializeButton();
            }

            private void Initialize()
            {
                _playFabCatalogManager = Owner.playFabCatalogManager;
                _playFabShopManager = Owner.playFabShopManager;
                _shopView = Owner.shopView;
                _uiAnimation = Owner.uiAnimation;
            }

            private void InitializeButton()
            {
                _shopView.backButton.onClick.RemoveAllListeners();
                _shopView.adRemoveButton.onClick.RemoveAllListeners();
                _shopView.backButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickBackToLobby()));
                _shopView.adRemoveButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickPurchase()));
            }

            private async UniTask OnClickBackToLobby()
            {
                await _uiAnimation.Click(_shopView.backButton.transform, GameCommonData.ClickDuration);
                Owner._stateMachine.Dispatch((int)Event.Main);
                Owner.SwitchPhaseGameObject((int)Event.Main);
            }

            private async UniTask OnClickPurchase()
            {
                await _uiAnimation.Click(_shopView.adRemoveButton.transform, GameCommonData.ClickDuration);
                var item = _playFabCatalogManager.catalogList.First(x => x.ItemId == GameCommonData.RemoveAdsItem);
                var result = await _playFabShopManager.TryPurchaseItem(item.ItemId, GameCommonData.RealMoneyKey,
                    GameCommonData.RemoveAdsPrice);
                if (!result)
                {
                    _shopView.debugText.text = "Fail";
                    return;
                }

                _shopView.debugText.text = "Success";
            }
        }
    }
}