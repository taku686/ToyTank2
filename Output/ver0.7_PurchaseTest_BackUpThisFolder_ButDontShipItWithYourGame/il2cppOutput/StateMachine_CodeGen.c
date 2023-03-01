#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 TOwner StateMachine`1::get_Owner()
// 0x00000002 StateMachine`1/State<TOwner> StateMachine`1::get_CurrentState()
// 0x00000003 System.Void StateMachine`1::set_CurrentState(StateMachine`1/State<TOwner>)
// 0x00000004 System.Void StateMachine`1::.ctor(TOwner)
// 0x00000005 T StateMachine`1::Add()
// 0x00000006 T StateMachine`1::GetOrAddState()
// 0x00000007 System.Void StateMachine`1::AddTransition(System.Int32)
// 0x00000008 System.Void StateMachine`1::AddAnyTransition(System.Int32)
// 0x00000009 System.Void StateMachine`1::Start()
// 0x0000000A System.Void StateMachine`1::Start(StateMachine`1/State<TOwner>)
// 0x0000000B System.Void StateMachine`1::Update()
// 0x0000000C System.Void StateMachine`1::FixedUpdate()
// 0x0000000D System.Void StateMachine`1::Dispatch(System.Int32)
// 0x0000000E System.Void StateMachine`1::OnTriggerEnter(UnityEngine.Collider)
// 0x0000000F System.Void StateMachine`1::Change(StateMachine`1/State<TOwner>)
// 0x00000010 StateMachine`1<TOwner> StateMachine`1/State::get_StateMachine()
// 0x00000011 TOwner StateMachine`1/State::get_Owner()
// 0x00000012 System.Void StateMachine`1/State::Enter(StateMachine`1/State<TOwner>)
// 0x00000013 System.Void StateMachine`1/State::OnEnter(StateMachine`1/State<TOwner>)
// 0x00000014 System.Void StateMachine`1/State::Update()
// 0x00000015 System.Void StateMachine`1/State::OnUpdate()
// 0x00000016 System.Void StateMachine`1/State::FixedUpdate()
// 0x00000017 System.Void StateMachine`1/State::OnFixedUpdate()
// 0x00000018 System.Void StateMachine`1/State::Exit(StateMachine`1/State<TOwner>)
// 0x00000019 System.Void StateMachine`1/State::OnExit(StateMachine`1/State<TOwner>)
// 0x0000001A System.Void StateMachine`1/State::TriggerEnter(UnityEngine.Collider)
// 0x0000001B System.Void StateMachine`1/State::OnTriggerEnter(UnityEngine.Collider)
// 0x0000001C System.Void StateMachine`1/State::.ctor()
// 0x0000001D System.Void StateMachine`1/AnyState::.ctor()
static Il2CppMethodPointer s_methodPointers[29] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[29] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x02000002, { 0, 23 } },
	{ 0x02000003, { 34, 10 } },
	{ 0x02000004, { 44, 2 } },
	{ 0x06000005, { 23, 2 } },
	{ 0x06000006, { 25, 2 } },
	{ 0x06000007, { 27, 4 } },
	{ 0x06000008, { 31, 1 } },
	{ 0x06000009, { 32, 2 } },
};
extern const uint32_t g_rgctx_LinkedList_1_t7DED2FEB408210623CA926507759E25F3EB2EEA3;
extern const uint32_t g_rgctx_LinkedList_1__ctor_m904234DB051C472696C262D4586A7771059D63C0;
extern const uint32_t g_rgctx_LinkedList_1_AddLast_m58EA0C72C96CDB8751777C9BF14AD98B70C6DF3F;
extern const uint32_t g_rgctx_LinkedList_1_GetEnumerator_m90EB91E1B85F979EFE2F3677809DA9650382E8E2;
extern const uint32_t g_rgctx_Enumerator_get_Current_m196501C97BC0E0D5F09594B8741B27D558D21FBA;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m320ACA9F8773853ED1589E7DB9092957C05686DE;
extern const uint32_t g_rgctx_Enumerator_t52252CCC9EECA260B58DBDB8701D4EDF37353AD1;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t52252CCC9EECA260B58DBDB8701D4EDF37353AD1_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Dictionary_2_t180026150803330C3140EC2301E97924178DA621;
extern const uint32_t g_rgctx_Dictionary_2_ContainsKey_m95670E14CFBB4A213FB792502AA3DF16E9A953C1;
extern const uint32_t g_rgctx_Dictionary_2_Add_m9A53C269932C43CC298B89FD07D77FA141EE1F3C;
extern const uint32_t g_rgctx_StateMachine_1_Start_m381D2DB574C6503FA3C7096F23F83C7F9970BF56;
extern const uint32_t g_rgctx_StateMachine_1_set_CurrentState_mCC246F1A91AA932349E5AF36E59978F5ADA2060A;
extern const uint32_t g_rgctx_StateMachine_1_get_CurrentState_mB86851D8A47AA3686311FF375457ECBB01BDBE30;
extern const uint32_t g_rgctx_State_t7568F11ABEC274FE72606664A2B497A477FAFC61;
extern const uint32_t g_rgctx_State_Enter_mE1E8F06453E82CC5A1245D3109F163F40EA88977;
extern const uint32_t g_rgctx_State_Update_mB0AC34B9239D73667A788FEBFB139FCBF582C6C8;
extern const uint32_t g_rgctx_State_FixedUpdate_mBF436D3B0CE13390209327D8F1B7BD42132D5563;
extern const uint32_t g_rgctx_Dictionary_2_TryGetValue_m4B07EA088E72617240876DAB73514483B86D4885;
extern const uint32_t g_rgctx_StateMachine_1_GetOrAddState_TisAnyState_t2DF7C876E197C68AF2CDCE3309C974C47BAC7ACE_m229227FB3B2A50C577AAF55FF05000FA0197966A;
extern const uint32_t g_rgctx_StateMachine_1_Change_mE17F9CDE16D69E1182B6FBAA43C381500B1E3E51;
extern const uint32_t g_rgctx_State_TriggerEnter_mBE404B7E1CA71568208A38096BD96E548683BD27;
extern const uint32_t g_rgctx_State_Exit_mF155464259BCA6BA4B2AD966A66798965B3393BD;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisT_tC7FB6DE76A13EF48E6F9D387E2B0358E2166DCAC_m0A4025AFC28ED2D7210EB3133F5E7E24FE60BFDD;
extern const uint32_t g_rgctx_T_tC7FB6DE76A13EF48E6F9D387E2B0358E2166DCAC;
extern const uint32_t g_rgctx_T_t8CFBDC18A21E16EF5596A5FAEF79A13ECEB7CA94;
extern const uint32_t g_rgctx_StateMachine_1_Add_TisT_t8CFBDC18A21E16EF5596A5FAEF79A13ECEB7CA94_m8709AACB15D86B4C1D622B493531FE77697C2FB2;
extern const uint32_t g_rgctx_StateMachine_1_GetOrAddState_TisTFrom_tA31BD5067753272C861C8B4CCEA448CB430A2D11_mAD760720931411CB8FBA03D3E3EF38F62478C87C;
extern const uint32_t g_rgctx_TFrom_tA31BD5067753272C861C8B4CCEA448CB430A2D11;
extern const uint32_t g_rgctx_StateMachine_1_GetOrAddState_TisTTo_t82306F895E83AEEFAC7019281F2F22BFBD71D8CD_m1864F4CD46167BC62A0DE9810959F14460788D62;
extern const uint32_t g_rgctx_TTo_t82306F895E83AEEFAC7019281F2F22BFBD71D8CD;
extern const uint32_t g_rgctx_StateMachine_1_AddTransition_TisAnyState_t2DF7C876E197C68AF2CDCE3309C974C47BAC7ACE_TisTTo_t8F09348C6F1E9ABB7ABA68D699A0DAB55E156966_m5E362DC1A34D82913712C55D62CD0E9BF10B19C9;
extern const uint32_t g_rgctx_StateMachine_1_GetOrAddState_TisTFirst_t3FF4E60EF80CCFC8727F4F9FF7FB69A66AD88882_m4E1C12E07E26B644A987483EB3E9CBAA573DEB3F;
extern const uint32_t g_rgctx_TFirst_t3FF4E60EF80CCFC8727F4F9FF7FB69A66AD88882;
extern const uint32_t g_rgctx_StateMachine_1_t2967BECD0B4FD30B7CE0569B35849BF9EA5798C3;
extern const uint32_t g_rgctx_StateMachine_1_get_Owner_m35F06DFC15E688001580C09C286E9F55EF971E7E;
extern const uint32_t g_rgctx_State_tD6AC797ADBBAB02CE83E47E67A46DEEADFC2182B;
extern const uint32_t g_rgctx_State_OnEnter_m71C1DE54B49495138786B80F7048167B1B0915B9;
extern const uint32_t g_rgctx_State_OnUpdate_mD4C6C16B11FD81F491B5BA27BC263DF644300881;
extern const uint32_t g_rgctx_State_OnFixedUpdate_mB91F87102849473A4352487E08F26BF824C5388C;
extern const uint32_t g_rgctx_State_OnExit_mDBABA55B24AA19DB86FC759C77F729258F33A039;
extern const uint32_t g_rgctx_State_OnTriggerEnter_m59C7437D9BBBDD6597B10E896BDB24DD4392A5A7;
extern const uint32_t g_rgctx_Dictionary_2_t627BDB70F77836A03C9C6163EBC4D8A023364415;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m6328C1D23C64DAC038ADE9D886C8C29D82D481F6;
extern const uint32_t g_rgctx_State__ctor_m65AB99AFE46586EE62222C76106E0942F3D0B53F;
extern const uint32_t g_rgctx_State_tE7A3A85479FC12334397AA9E458C20F178F000E5;
static const Il2CppRGCTXDefinition s_rgctxValues[46] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_LinkedList_1_t7DED2FEB408210623CA926507759E25F3EB2EEA3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1__ctor_m904234DB051C472696C262D4586A7771059D63C0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_AddLast_m58EA0C72C96CDB8751777C9BF14AD98B70C6DF3F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_LinkedList_1_GetEnumerator_m90EB91E1B85F979EFE2F3677809DA9650382E8E2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m196501C97BC0E0D5F09594B8741B27D558D21FBA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m320ACA9F8773853ED1589E7DB9092957C05686DE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t52252CCC9EECA260B58DBDB8701D4EDF37353AD1 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t52252CCC9EECA260B58DBDB8701D4EDF37353AD1_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t180026150803330C3140EC2301E97924178DA621 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_ContainsKey_m95670E14CFBB4A213FB792502AA3DF16E9A953C1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m9A53C269932C43CC298B89FD07D77FA141EE1F3C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_Start_m381D2DB574C6503FA3C7096F23F83C7F9970BF56 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_set_CurrentState_mCC246F1A91AA932349E5AF36E59978F5ADA2060A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_get_CurrentState_mB86851D8A47AA3686311FF375457ECBB01BDBE30 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_State_t7568F11ABEC274FE72606664A2B497A477FAFC61 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_Enter_mE1E8F06453E82CC5A1245D3109F163F40EA88977 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_Update_mB0AC34B9239D73667A788FEBFB139FCBF582C6C8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_FixedUpdate_mBF436D3B0CE13390209327D8F1B7BD42132D5563 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_TryGetValue_m4B07EA088E72617240876DAB73514483B86D4885 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_GetOrAddState_TisAnyState_t2DF7C876E197C68AF2CDCE3309C974C47BAC7ACE_m229227FB3B2A50C577AAF55FF05000FA0197966A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_Change_mE17F9CDE16D69E1182B6FBAA43C381500B1E3E51 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_TriggerEnter_mBE404B7E1CA71568208A38096BD96E548683BD27 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_Exit_mF155464259BCA6BA4B2AD966A66798965B3393BD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisT_tC7FB6DE76A13EF48E6F9D387E2B0358E2166DCAC_m0A4025AFC28ED2D7210EB3133F5E7E24FE60BFDD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC7FB6DE76A13EF48E6F9D387E2B0358E2166DCAC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8CFBDC18A21E16EF5596A5FAEF79A13ECEB7CA94 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_Add_TisT_t8CFBDC18A21E16EF5596A5FAEF79A13ECEB7CA94_m8709AACB15D86B4C1D622B493531FE77697C2FB2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_GetOrAddState_TisTFrom_tA31BD5067753272C861C8B4CCEA448CB430A2D11_mAD760720931411CB8FBA03D3E3EF38F62478C87C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TFrom_tA31BD5067753272C861C8B4CCEA448CB430A2D11 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_GetOrAddState_TisTTo_t82306F895E83AEEFAC7019281F2F22BFBD71D8CD_m1864F4CD46167BC62A0DE9810959F14460788D62 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TTo_t82306F895E83AEEFAC7019281F2F22BFBD71D8CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_AddTransition_TisAnyState_t2DF7C876E197C68AF2CDCE3309C974C47BAC7ACE_TisTTo_t8F09348C6F1E9ABB7ABA68D699A0DAB55E156966_m5E362DC1A34D82913712C55D62CD0E9BF10B19C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_GetOrAddState_TisTFirst_t3FF4E60EF80CCFC8727F4F9FF7FB69A66AD88882_m4E1C12E07E26B644A987483EB3E9CBAA573DEB3F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TFirst_t3FF4E60EF80CCFC8727F4F9FF7FB69A66AD88882 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_StateMachine_1_t2967BECD0B4FD30B7CE0569B35849BF9EA5798C3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StateMachine_1_get_Owner_m35F06DFC15E688001580C09C286E9F55EF971E7E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_State_tD6AC797ADBBAB02CE83E47E67A46DEEADFC2182B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_OnEnter_m71C1DE54B49495138786B80F7048167B1B0915B9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_OnUpdate_mD4C6C16B11FD81F491B5BA27BC263DF644300881 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_OnFixedUpdate_mB91F87102849473A4352487E08F26BF824C5388C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_OnExit_mDBABA55B24AA19DB86FC759C77F729258F33A039 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State_OnTriggerEnter_m59C7437D9BBBDD6597B10E896BDB24DD4392A5A7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t627BDB70F77836A03C9C6163EBC4D8A023364415 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m6328C1D23C64DAC038ADE9D886C8C29D82D481F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_State__ctor_m65AB99AFE46586EE62222C76106E0942F3D0B53F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_State_tE7A3A85479FC12334397AA9E458C20F178F000E5 },
};
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationStateMachine;
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_StateMachine_CodeGenModule;
const Il2CppCodeGenModule g_StateMachine_CodeGenModule = 
{
	"StateMachine.dll",
	29,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	8,
	s_rgctxIndices,
	46,
	s_rgctxValues,
	&g_DebuggerMetadataRegistrationStateMachine,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
