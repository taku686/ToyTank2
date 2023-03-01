using State = StateMachine<PlayerCore>.State;

public partial class PlayerCore
{
    public class PlayerCanonChangingState : State
    {
        protected override void OnEnter(State prevState)
        {
            var baseData = BaseDataManager.Instance.GetBaseData(Owner._userData.baseDataIndex);
            DestroyImmediate(Owner._currentCanonObj);
            Owner._currentCanonObj = Instantiate(Owner._currentCanon.CanonObj, Owner.transform);
            Owner._currentCanonObj.transform.localPosition = baseData.CanonPos;
            Owner.DecideCanonType(Owner._currentCanon, Owner._currentCanonObj);
        }
    }
}