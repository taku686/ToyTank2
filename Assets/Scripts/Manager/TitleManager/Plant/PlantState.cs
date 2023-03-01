using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using Data;
using UI;
using UnityEngine;
using State = StateMachine<Manager.TitleManager.TitleCore>.State;

namespace Manager.TitleManager
{
    public partial class TitleCore
    {
        public class PlantState : State
        {
            private PlantView _plantView;
            private UserData _userData;
            private UIAnimation _uiAnimation;

            protected override void OnEnter(State prevState)
            {
                Initialize();
            }

            private void Initialize()
            {
                _plantView = Owner.plantView;
                _userData = Owner._userData;
                _uiAnimation = Owner.uiAnimation;
                List<CanonData> availableCanonList = new List<CanonData>();
                foreach (var canonIndex in _userData.availableCanonList)
                {
                    var canonData = CanonDataManager.Instance.GetCanonData(canonIndex);
                    availableCanonList.Add(canonData);
                }

                CreateCanonGrid(availableCanonList);
            }

            private void CreateCanonGrid(List<CanonData> availableCanonList)
            {
                var parent = _plantView.gridParent;
                if (availableCanonList == null)
                {
                    Debug.Log("Canon data is null");
                    return;
                }

                foreach (var canonData in availableCanonList)
                {
                    var grid = Instantiate(_plantView.canonGridView.gameObject, parent).GetComponent<CanonGridView>();
                    grid.canonIndexText.text = canonData.Index.ToString();
                    grid.image.sprite = canonData.Image;
                    grid.button.onClick.AddListener(() => UniTask.Void(async () => await OnClickGrid(grid)));
                }
            }

            private async UniTask OnClickGrid(CanonGridView grid)
            {
                await _uiAnimation.Click(grid.transform, GameCommonData.ClickDuration);
                var imageArray = _plantView.equippedCanonImage;
                imageArray[1].sprite ??= imageArray[0].sprite;
                imageArray[2].sprite ??= imageArray[1].sprite;
                imageArray[0].sprite ??= grid.image.sprite;
            }
        }
    }
}