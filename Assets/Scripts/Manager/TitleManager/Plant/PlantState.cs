using System.Collections.Generic;
using System.Linq;
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
            private PlayFabUserData _playFabUserData;
            private readonly List<CanonGridView> _gridList = new();
            private bool _isInitialize;

            protected override void OnEnter(State prevState)
            {
                Initialize();
                InitializeButton();
                InitializeImage(_userData, _plantView);
            }

            private void Initialize()
            {
                _plantView = Owner.plantView;
                _playFabUserData = Owner.playFabUserData;
                _uiAnimation = Owner.uiAnimation;
                _userData = UserDataManager.Instance.GetUserData();
                List<CanonData> availableCanonList = _userData.availableCanonList
                    .Select(canonIndex => CanonDataManager.Instance.GetCanonData(canonIndex)).ToList();
                CreateCanonGrid(availableCanonList);
            }

            private void InitializeButton()
            {
                _plantView.backButton.onClick.RemoveAllListeners();
                _plantView.selectButton.onClick.RemoveAllListeners();
                _plantView.backButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickBack()));
                _plantView.selectButton.onClick.AddListener(() => UniTask.Void(async () => await OnClickSelect()));
            }

            private void InitializeImage(UserData userData, PlantView plantView)
            {
                for (int i = 0; i < userData.currentEquippedCanonList.Count; i++)
                {
                    var canonDataIndex = userData.currentEquippedCanonList[i];
                    var canonData = CanonDataManager.Instance.GetCanonData(canonDataIndex);
                    plantView.equippedCanonImage[i].sprite = canonData.image;
                }
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
                    grid.canonData = canonData;
                    grid.canonIndexText.text = canonData.Index.ToString();
                    grid.image.sprite = canonData.Image;
                    grid.nameText.text = canonData.name;
                    grid.button.onClick.AddListener(() => UniTask.Void(async () => await OnClickGrid(grid)));
                    _gridList.Add(grid);
                }
            }

            private void DestroyCanonGrid()
            {
                foreach (var grid in _gridList)
                {
                    Destroy(grid.gameObject);
                }

                _gridList.Clear();
            }

            private void SetEquippedCanonData(CanonData canonData)
            {
                _userData.currentEquippedCanonList[2] = _userData.currentEquippedCanonList[1];
                _userData.currentEquippedCanonList[1] = _userData.currentEquippedCanonList[0];
                _userData.currentEquippedCanonList[0] = canonData.index;
                _userData.currentCanonIndex = canonData.index;
            }

            private void PhaseTransition()
            {
                Owner.SwitchPhaseGameObject((int)Event.Main);
                DestroyCanonGrid();
                Owner._stateMachine.Dispatch((int)Event.Main);
            }

            private async UniTask OnClickGrid(CanonGridView grid)
            {
                await _uiAnimation.Click(grid.transform, GameCommonData.ClickDuration);
                var canonData = grid.canonData;
                var baseData = BaseDataManager.Instance.GetBaseData(_userData.baseDataIndex);
                Owner.CreateTank(canonData, baseData);
                var imageArray = _plantView.equippedCanonImage;
                if (imageArray[1].sprite != null)
                {
                    imageArray[2].sprite = imageArray[1].sprite;
                }

                if (imageArray[0].sprite != null)
                {
                    imageArray[1].sprite = imageArray[0].sprite;
                }

                imageArray[0].sprite = grid.image.sprite;
                SetEquippedCanonData(canonData);
            }

            private async UniTask OnClickBack()
            {
                await _uiAnimation.Click(_plantView.backButton.transform, GameCommonData.ClickDuration);
                PhaseTransition();
            }

            private async UniTask OnClickSelect()
            {
                await _uiAnimation.Click(_plantView.selectButton.transform, GameCommonData.ClickDuration);
                await _playFabUserData.UpdateUserData(_userData);
                PhaseTransition();
            }


            //ToDo Ç†Ç∆Ç≈è¡Ç∑
            /*private void DebugUserData()
            {
                if (_isInitialize)
                {
                    return;
                }

                _isInitialize = true;
                var userData = UserDataManager.Instance.GetUserData();
                var availableCanonData = userData.availableCanonList;
                foreach (var canonData in CanonDataManager.Instance.canonDatum)
                {
                    availableCanonData.Add(canonData.index);
                }

                userData.availableCanonList = availableCanonData;
                UserDataManager.Instance.SetUserData(userData);
            }*/
        }
    }
}