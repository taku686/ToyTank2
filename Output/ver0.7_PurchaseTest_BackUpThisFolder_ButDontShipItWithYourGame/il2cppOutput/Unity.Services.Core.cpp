#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.CompilerServices.PreserveDependencyAttribute
struct PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789;
// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// Unity.Services.Core.UnityProjectNotLinkedException
struct UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Unity.Services.Core.UnityServices/<InitializeAsync>d__15
struct U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Services_Core[];
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02DC5487F216AE25A9C6B6F775A8CF9EE1920C91;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8D89FA256D52FDC3705DD1E01B226056587734;
IL2CPP_EXTERN_C String_t* _stringLiteral99F5E171221B0CB9D6DE6F675428CD7AA265CFD0;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalUserIdProperty_add_UserIdChanged_mE4C2F6301DC04C3244B15D69B253325A8EF52B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalUserIdProperty_remove_UserIdChanged_m9A12F1EF44ABF2FE2DB38C00232C6929DD2D0CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_SetOption_m8B3AE4FF35B39B8F83A8D5D24572FD4CBE692D73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_SetOption_mC6DE295515F91B4CE53D8A636A6C2D0153B192CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_SetOption_mF758DF5CD207080BDD1ED574CA8779F74BA9B683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_m4F7FE773817D0BBAF686CC299893BB2D4F80275B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_m7EAF52F67FF2B11AB605558A26E843C28036EB5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_mCB9A0D6A99D5B358266EBB638140D5DFB185A8D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_TryGetOption_mE7F73306A73CDEE1FF9E301EE3265FB1750E769B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions__ctor_mACA25E99BB9C236F1D65A7BBC84AC194E201FB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreserveDependencyAttribute__ctor_m3D09DF018713F6AFEC76CD25A7EF25AA73601FDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreserveDependencyAttribute__ctor_m42B4417CCD79D74D0BE88B3A366BA5D2BAC10E5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreserveDependencyAttribute__ctor_mB521F00D6CDEE0243E4ED00EA74F194E6118D8C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreserveDependencyAttribute_get_Condition_m373DA883FF7B32C77C5A9C8E60940B6E3682E424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PreserveDependencyAttribute_set_Condition_m4F7C09C7BB107F0D025F869DE179C0C207E62854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestFailedException__ctor_mE50ABBA68C3EC48A3D31EE97594E2909FF7501F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RequestFailedException_get_ErrorCode_mF3E649123FAA0AD7EEE1FFCBFACE6C2A20CBEDAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeAsyncU3Ed__15__ctor_mF7CA6079E1FE308471FFFCAE7EC9D75575504AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityProjectNotLinkedException__ctor_m841882F7BFEBE5DD101DB4E541A9A3FA4100FEED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityProjectNotLinkedException__ctor_mAD5451CE9BDD12E0F183D8E7BA09A469A6C197A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices__cctor_m995156A0F59490005C1FA05F9EE6FBF92E1E1485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_get_ExternalUserId_m5028564FBDCC1965850DA78BC91CCA7FF4369AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_set_ExternalUserId_m3D68213DAB808F69A5A8DA5F2C22AA1136C59365_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThreadUtils_CaptureUnityThreadInfo_m43D8C684F01F8CA911A1D6E80E7E70CC1A0CF579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThreadUtils_get_UnityThreadScheduler_mE9C3F85F54EF3425CB76B8899D0F0BFBA705E3F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ServicesInitializationState_t3285FD49152B310475A0B1254422946A268764AD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4052AFC804778757171A467E5C89680322791B94 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Unity.Services.Core.CommonErrorCodes
struct CommonErrorCodes_t9AC42A2F061C6322E48134A4A3A4DD8CA2F8E73C  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9  : public RuntimeObject
{
	// System.Action`1<System.String> Unity.Services.Core.ExternalUserIdProperty::UserIdChanged
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___UserIdChanged_0;
	// System.String Unity.Services.Core.ExternalUserIdProperty::m_UserId
	String_t* ___m_UserId_1;
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

// Unity.Services.Core.UnityServices
struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317  : public RuntimeObject
{
};

// Unity.Services.Core.UnityThreadUtils
struct UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Runtime.CompilerServices.PreserveDependencyAttribute
struct PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.Runtime.CompilerServices.PreserveDependencyAttribute::<Condition>k__BackingField
	String_t* ___U3CConditionU3Ek__BackingField_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.RequestFailedException
struct RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00  : public Exception_t
{
	// System.Int32 Unity.Services.Core.RequestFailedException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631  : public Exception_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// Unity.Services.Core.UnityProjectNotLinkedException
struct UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8  : public ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631
{
};

// Unity.Services.Core.UnityServices/<InitializeAsync>d__15
struct U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.UnityServices/<InitializeAsync>d__15::options
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.UnityServices/<InitializeAsync>d__15::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_4;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Attribute

// System.Attribute

// Unity.Services.Core.CommonErrorCodes

// Unity.Services.Core.CommonErrorCodes

// Unity.Services.Core.ExternalUserIdProperty

// Unity.Services.Core.ExternalUserIdProperty

// Unity.Services.Core.InitializationOptions

// Unity.Services.Core.InitializationOptions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// System.Threading.Tasks.TaskScheduler

// Unity.Services.Core.UnityServices
struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields
{
	// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::<InstantiationCompletion>k__BackingField
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___U3CInstantiationCompletionU3Ek__BackingField_1;
	// Unity.Services.Core.ExternalUserIdProperty Unity.Services.Core.UnityServices::ExternalUserIdProperty
	ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* ___ExternalUserIdProperty_2;
};

// Unity.Services.Core.UnityServices

// Unity.Services.Core.UnityThreadUtils
struct UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields
{
	// System.Int32 Unity.Services.Core.UnityThreadUtils::s_UnityThreadId
	int32_t ___s_UnityThreadId_0;
	// System.Threading.Tasks.TaskScheduler Unity.Services.Core.UnityThreadUtils::<UnityThreadScheduler>k__BackingField
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___U3CUnityThreadSchedulerU3Ek__BackingField_1;
};

// Unity.Services.Core.UnityThreadUtils

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.Runtime.CompilerServices.PreserveDependencyAttribute

// System.Runtime.CompilerServices.PreserveDependencyAttribute

// System.Single

// System.Single

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// Unity.Services.Core.RequestFailedException

// Unity.Services.Core.RequestFailedException

// Unity.Services.Core.ServicesInitializationException

// Unity.Services.Core.ServicesInitializationException

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// Unity.Services.Core.UnityProjectNotLinkedException

// Unity.Services.Core.UnityProjectNotLinkedException

// Unity.Services.Core.UnityServices/<InitializeAsync>d__15

// Unity.Services.Core.UnityServices/<InitializeAsync>d__15
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Boolean>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, bool* ___1_option, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Int32>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, int32_t* ___1_option, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Single>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, float* ___1_option, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Object>(System.String,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_TisRuntimeObject_m8472B96337AA7DC6DF5E835D5B014B4D1CEF7FA6_gshared (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, RuntimeObject** ___1_option, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m0E4A3F3D0E99E62AE6305318EB422A88B8D36DC4_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, RuntimeObject** ___1_stateMachine, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, RuntimeObject* ___0_values, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared)(__this, ___0_dictionary, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Boolean>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, bool* ___1_option, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, bool*, const RuntimeMethod*))InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_gshared)(__this, ___0_key, ___1_option, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Int32>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, int32_t* ___1_option, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, int32_t*, const RuntimeMethod*))InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_gshared)(__this, ___0_key, ___1_option, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.Single>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, float* ___1_option, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, float*, const RuntimeMethod*))InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_gshared)(__this, ___0_key, ___1_option, method);
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption<System.String>(System.String,T&)
inline bool InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, String_t** ___1_option, const RuntimeMethod* method)
{
	return ((  bool (*) (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*, String_t*, String_t**, const RuntimeMethod*))InitializationOptions_TryGetOption_TisRuntimeObject_m8472B96337AA7DC6DF5E835D5B014B4D1CEF7FA6_gshared)(__this, ___0_key, ___1_option, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___0_errorCode, String_t* ___1_message, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.UnityThreadUtils::get_IsRunningOnUnityThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4 (const RuntimeMethod* method) ;
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.ExternalUserIdProperty::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ExternalUserIdProperty::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.InitializationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_options, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15__ctor_mF7CA6079E1FE308471FFFCAE7EC9D75575504AAC (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ExternalUserIdProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
inline void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void Unity.Services.Core.UnityServices::set_InstantiationCompletion(System.Threading.Tasks.TaskCompletionSource`1<System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
inline TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54 (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisRuntimeObject_m0E4A3F3D0E99E62AE6305318EB422A88B8D36DC4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.UnityServices/<InitializeAsync>d__15>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA57D17CC22941935FA487582A05C7D7807AC9DCF_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.UnityThreadUtils::set_UnityThreadScheduler(System.Threading.Tasks.TaskScheduler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_inline (TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute__ctor_m3D09DF018713F6AFEC76CD25A7EF25AA73601FDE (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___0_memberSignature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute__ctor_m3D09DF018713F6AFEC76CD25A7EF25AA73601FDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_memberSignature));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PreserveDependencyAttribute__ctor_m3D09DF018713F6AFEC76CD25A7EF25AA73601FDE_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 1));
	{
		// public PreserveDependencyAttribute(string memberSignature)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 2));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 3));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 4));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 5));
		return;
	}
}
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute__ctor_m42B4417CCD79D74D0BE88B3A366BA5D2BAC10E5C (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___0_memberSignature, String_t* ___1_typeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute__ctor_m42B4417CCD79D74D0BE88B3A366BA5D2BAC10E5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_memberSignature), (&___1_typeName));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PreserveDependencyAttribute__ctor_m42B4417CCD79D74D0BE88B3A366BA5D2BAC10E5C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 6));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 7));
	{
		// public PreserveDependencyAttribute(string memberSignature, string typeName)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 8));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 9));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 9));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 10));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 11));
		return;
	}
}
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute__ctor_mB521F00D6CDEE0243E4ED00EA74F194E6118D8C3 (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___0_memberSignature, String_t* ___1_typeName, String_t* ___2_assembly, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute__ctor_mB521F00D6CDEE0243E4ED00EA74F194E6118D8C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_memberSignature), (&___1_typeName), (&___2_assembly));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PreserveDependencyAttribute__ctor_mB521F00D6CDEE0243E4ED00EA74F194E6118D8C3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 12));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 13));
	{
		// public PreserveDependencyAttribute(string memberSignature, string typeName, string assembly)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 14));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 15));
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 16));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 17));
		return;
	}
}
// System.String System.Runtime.CompilerServices.PreserveDependencyAttribute::get_Condition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PreserveDependencyAttribute_get_Condition_m373DA883FF7B32C77C5A9C8E60940B6E3682E424 (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute_get_Condition_m373DA883FF7B32C77C5A9C8E60940B6E3682E424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PreserveDependencyAttribute_get_Condition_m373DA883FF7B32C77C5A9C8E60940B6E3682E424_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 19));
	{
		// public string Condition { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 20));
		String_t* L_0 = __this->___U3CConditionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void System.Runtime.CompilerServices.PreserveDependencyAttribute::set_Condition(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveDependencyAttribute_set_Condition_m4F7C09C7BB107F0D025F869DE179C0C207E62854 (PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute_set_Condition_m4F7C09C7BB107F0D025F869DE179C0C207E62854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreserveDependencyAttribute_t72A2C1DD2EBD97F1CD1CE1B418B9300B66C80789_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PreserveDependencyAttribute_set_Condition_m4F7C09C7BB107F0D025F869DE179C0C207E62854_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 21));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 22));
	{
		// public string Condition { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 23));
		String_t* L_0 = ___0_value;
		__this->___U3CConditionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConditionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.ExternalUserIdProperty::add_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_add_UserIdChanged_mE4C2F6301DC04C3244B15D69B253325A8EF52B77 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_add_UserIdChanged_mE4C2F6301DC04C3244B15D69B253325A8EF52B77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ExternalUserIdProperty_add_UserIdChanged_mE4C2F6301DC04C3244B15D69B253325A8EF52B77_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___UserIdChanged_0;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___UserIdChanged_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Services.Core.ExternalUserIdProperty::remove_UserIdChanged(System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_remove_UserIdChanged_m9A12F1EF44ABF2FE2DB38C00232C6929DD2D0CA6 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_remove_UserIdChanged_m9A12F1EF44ABF2FE2DB38C00232C6929DD2D0CA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* V_2 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ExternalUserIdProperty_remove_UserIdChanged_m9A12F1EF44ABF2FE2DB38C00232C6929DD2D0CA6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = __this->___UserIdChanged_0;
		V_0 = L_0;
	}

IL_0007:
	{
		CHECK_PAUSE_POINT;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)Castclass((RuntimeObject*)L_4, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A** L_5 = (&__this->___UserIdChanged_0);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = V_2;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = V_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_9) == ((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.String Unity.Services.Core.ExternalUserIdProperty::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 24));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 25));
	{
		// get => m_UserId;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 26));
		String_t* L_0 = __this->___m_UserId_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.ExternalUserIdProperty::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 28));
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 29));
		// m_UserId = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 30));
		String_t* L_0 = ___0_value;
		__this->___m_UserId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserId_1), (void*)L_0);
		// UserIdChanged?.Invoke(m_UserId);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 31));
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_1 = __this->___UserIdChanged_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
		String_t* L_3 = __this->___m_UserId_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 32));
		NullCheck(G_B2_0);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B2_0, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 32));
	}

IL_0020:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 33));
		return;
	}
}
// System.Void Unity.Services.Core.ExternalUserIdProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7 (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 34));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 35));
	{
		// internal IDictionary<string, object> Values { get; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 36));
		RuntimeObject* L_0 = __this->___U3CValuesU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 37));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 38));
	{
		// : this(new Dictionary<string, object>()) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 39));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 40));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 40));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 41));
		InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 41));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 42));
		// : this(new Dictionary<string, object>()) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 43));
		return;
	}
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, RuntimeObject* ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_values));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 44));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 45));
	{
		// internal InitializationOptions(IDictionary<string, object> values)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 46));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 47));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 47));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 48));
		// Values = values;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 49));
		RuntimeObject* L_0 = ___0_values;
		__this->___U3CValuesU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValuesU3Ek__BackingField_0), (void*)L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 50));
		return;
	}
}
// System.Void Unity.Services.Core.InitializationOptions::.ctor(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationOptions__ctor_mACA25E99BB9C236F1D65A7BBC84AC194E201FB80 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions__ctor_mACA25E99BB9C236F1D65A7BBC84AC194E201FB80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions__ctor_mACA25E99BB9C236F1D65A7BBC84AC194E201FB80_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 51));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 52));
	{
		// : this(new Dictionary<string, object>(source.Values)) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 53));
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___0_source;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 54));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 54));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 55));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5(L_2, L_1, Dictionary_2__ctor_mDA2BD7D4F4563746BD486C91295E8A3952A20AF5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 55));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 56));
		InitializationOptions__ctor_mC00A133821529371B703109EC8884F73D3A43504(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 56));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 57));
		// : this(new Dictionary<string, object>(source.Values)) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 58));
		return;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_m7EAF52F67FF2B11AB605558A26E843C28036EB5A (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, bool* ___1_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_m7EAF52F67FF2B11AB605558A26E843C28036EB5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_option));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_TryGetOption_m7EAF52F67FF2B11AB605558A26E843C28036EB5A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 59));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 60));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 61));
		// return TryGetOption<bool>(key, out option);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 62));
		String_t* L_0 = ___0_key;
		bool* L_1 = ___1_option;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 63));
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E(__this, L_0, L_1, InitializationOptions_TryGetOption_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0C968CB439049288F026A9B8C3FEB7939D45314E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 63));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 64));
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_mCB9A0D6A99D5B358266EBB638140D5DFB185A8D3 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, int32_t* ___1_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_mCB9A0D6A99D5B358266EBB638140D5DFB185A8D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_option));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_TryGetOption_mCB9A0D6A99D5B358266EBB638140D5DFB185A8D3_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 65));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 66));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 67));
		// return TryGetOption<int>(key, out option);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 68));
		String_t* L_0 = ___0_key;
		int32_t* L_1 = ___1_option;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 69));
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417(__this, L_0, L_1, InitializationOptions_TryGetOption_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m87C03FA9BF54E6D84E29ED6B8D814E98BA9E1417_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 69));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 70));
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_mE7F73306A73CDEE1FF9E301EE3265FB1750E769B (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, float* ___1_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_mE7F73306A73CDEE1FF9E301EE3265FB1750E769B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_option));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_TryGetOption_mE7F73306A73CDEE1FF9E301EE3265FB1750E769B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 71));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 72));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 73));
		// return TryGetOption<float>(key, out option);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 74));
		String_t* L_0 = ___0_key;
		float* L_1 = ___1_option;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 75));
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2(__this, L_0, L_1, InitializationOptions_TryGetOption_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m5D8040801B159E425DA3C318DA0C8A6424E9DAA2_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 75));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 76));
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean Unity.Services.Core.InitializationOptions::TryGetOption(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InitializationOptions_TryGetOption_m4F7FE773817D0BBAF686CC299893BB2D4F80275B (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, String_t** ___1_option, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_TryGetOption_m4F7FE773817D0BBAF686CC299893BB2D4F80275B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_option));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_TryGetOption_m4F7FE773817D0BBAF686CC299893BB2D4F80275B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 77));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 78));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 79));
		// return TryGetOption<string>(key, out option);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 80));
		String_t* L_0 = ___0_key;
		String_t** L_1 = ___1_option;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 81));
		bool L_2;
		L_2 = InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E(__this, L_0, L_1, InitializationOptions_TryGetOption_TisString_t_mFA1B8F68BCEFCD31DE1BD5293DF5A286311CBA4E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 81));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 82));
		bool L_3 = V_0;
		return L_3;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mC6DE295515F91B4CE53D8A636A6C2D0153B192CF (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_SetOption_mC6DE295515F91B4CE53D8A636A6C2D0153B192CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_SetOption_mC6DE295515F91B4CE53D8A636A6C2D0153B192CF_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 96));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 97));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 98));
		// Values[key] = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 99));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 100));
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 100));
		String_t* L_1 = ___0_key;
		bool L_2 = ___1_value;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 101));
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 101));
		// return this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 102));
		V_0 = __this;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 103));
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_5 = V_0;
		return L_5;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_m8B3AE4FF35B39B8F83A8D5D24572FD4CBE692D73 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_SetOption_m8B3AE4FF35B39B8F83A8D5D24572FD4CBE692D73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_SetOption_m8B3AE4FF35B39B8F83A8D5D24572FD4CBE692D73_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 104));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 105));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 106));
		// Values[key] = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 107));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 108));
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 108));
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_value;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 109));
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 109));
		// return this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 110));
		V_0 = __this;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 111));
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_5 = V_0;
		return L_5;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mF758DF5CD207080BDD1ED574CA8779F74BA9B683 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_SetOption_mF758DF5CD207080BDD1ED574CA8779F74BA9B683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_SetOption_mF758DF5CD207080BDD1ED574CA8779F74BA9B683_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 112));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 113));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 114));
		// Values[key] = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 115));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 116));
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 116));
		String_t* L_1 = ___0_key;
		float L_2 = ___1_value;
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 117));
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 117));
		// return this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 118));
		V_0 = __this;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 119));
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_5 = V_0;
		return L_5;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.InitializationOptions::SetOption(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1 (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_key), (&___1_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_SetOption_mAD845F1EA85DA4F46EA10313BE9632127D0D5BC1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 120));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 121));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 122));
		// Values[key] = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 123));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 124));
		RuntimeObject* L_0;
		L_0 = InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 124));
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 125));
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 125));
		// return this;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 126));
		V_0 = __this;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 127));
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 128));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 129));
	{
		// public ServicesInitializationException() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 130));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 131));
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 131));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 132));
		// public ServicesInitializationException() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 133));
		return;
	}
}
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_message));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 134));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 135));
	{
		// : base(message) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 136));
		String_t* L_0 = ___0_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 137));
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 137));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 138));
		// : base(message) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 139));
		return;
	}
}
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_message), (&___1_innerException));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 140));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 141));
	{
		// : base(message, innerException) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 142));
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 143));
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 143));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 144));
		// : base(message, innerException) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 145));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.UnityProjectNotLinkedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityProjectNotLinkedException__ctor_m841882F7BFEBE5DD101DB4E541A9A3FA4100FEED (UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityProjectNotLinkedException__ctor_m841882F7BFEBE5DD101DB4E541A9A3FA4100FEED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityProjectNotLinkedException__ctor_m841882F7BFEBE5DD101DB4E541A9A3FA4100FEED_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 146));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 147));
	{
		// public UnityProjectNotLinkedException() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 148));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 149));
		ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 149));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 150));
		// public UnityProjectNotLinkedException() {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 151));
		return;
	}
}
// System.Void Unity.Services.Core.UnityProjectNotLinkedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityProjectNotLinkedException__ctor_mAD5451CE9BDD12E0F183D8E7BA09A469A6C197A1 (UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityProjectNotLinkedException__ctor_mAD5451CE9BDD12E0F183D8E7BA09A469A6C197A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityProjectNotLinkedException_t59C31CD6D4353D68B7205AAC8E35391D88B0ABF8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_message));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityProjectNotLinkedException__ctor_mAD5451CE9BDD12E0F183D8E7BA09A469A6C197A1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 152));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 153));
	{
		// : base(message) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 154));
		String_t* L_0 = ___0_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 155));
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 155));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 156));
		// : base(message) {}
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 157));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Services.Core.RequestFailedException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RequestFailedException_get_ErrorCode_mF3E649123FAA0AD7EEE1FFCBFACE6C2A20CBEDAE (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException_get_ErrorCode_mF3E649123FAA0AD7EEE1FFCBFACE6C2A20CBEDAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RequestFailedException_get_ErrorCode_mF3E649123FAA0AD7EEE1FFCBFACE6C2A20CBEDAE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 158));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 159));
	{
		// public int ErrorCode { get; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 160));
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_mE50ABBA68C3EC48A3D31EE97594E2909FF7501F7 (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___0_errorCode, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException__ctor_mE50ABBA68C3EC48A3D31EE97594E2909FF7501F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_errorCode), (&___1_message));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RequestFailedException__ctor_mE50ABBA68C3EC48A3D31EE97594E2909FF7501F7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 161));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 162));
	{
		// public RequestFailedException(int errorCode, string message) : this(errorCode, message, null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 163));
		int32_t L_0 = ___0_errorCode;
		String_t* L_1 = ___1_message;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 164));
		RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A(__this, L_0, L_1, (Exception_t*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 164));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 165));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 166));
		return;
	}
}
// System.Void Unity.Services.Core.RequestFailedException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A (RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00* __this, int32_t ___0_errorCode, String_t* ___1_message, Exception_t* ___2_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RequestFailedException_tBF4D4AF8AD31BEE32091AEBC120B629B052E2D00_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_errorCode), (&___1_message), (&___2_innerException));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RequestFailedException__ctor_m5F2BC9B778764EF58CA947E789CAEEAD27341C7A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 167));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 168));
	{
		// public RequestFailedException(int errorCode, string message, Exception innerException) : base(message, innerException)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 169));
		String_t* L_0 = ___1_message;
		Exception_t* L_1 = ___2_innerException;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 170));
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 170));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 171));
		// this.ErrorCode = errorCode;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 172));
		int32_t L_2 = ___0_errorCode;
		__this->___U3CErrorCodeU3Ek__BackingField_18 = L_2;
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 173));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 174));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 175));
	{
		// internal static IUnityServices Instance { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 176));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.UnityServices::set_Instance(Unity.Services.Core.IUnityServices)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 177));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 178));
	{
		// internal static IUnityServices Instance { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 179));
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 180));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 181));
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 182));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.UnityServices::set_InstantiationCompletion(System.Threading.Tasks.TaskCompletionSource`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 184));
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 185));
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.UnityServices::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicesInitializationState_t3285FD49152B310475A0B1254422946A268764AD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 186));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 187));
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B6_0 = NULL;
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 188));
		// if (!UnityThreadUtils.IsRunningOnUnityThread)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 189));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 190));
		bool L_0;
		L_0 = UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 190));
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 191));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 192));
		// throw new ServicesInitializationException("You are attempting to access UnityServices.State from a non-Unity Thread." +
		//     " UnityServices.State can only be accessed from Unity Thread");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 193));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 194));
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_2 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral02DC5487F216AE25A9C6B6F775A8CF9EE1920C91)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 194));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityServices_get_State_mF530C62B86FBF1BF3B379006DACF9C110FD7BC9D_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (Instance != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 195));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 196));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 196));
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 197));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 198));
		// return Instance.State;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 199));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 200));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 200));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 201));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* Unity.Services.Core.ServicesInitializationState Unity.Services.Core.IUnityServices::get_State() */, IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 201));
		V_2 = L_6;
		goto IL_0059;
	}

IL_0033:
	{
		// if (InstantiationCompletion?.Task.Status == TaskStatus.WaitingForActivation)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 202));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 203));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_7;
		L_7 = UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 203));
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_003f;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_004c;
	}

IL_003f:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 204));
		NullCheck(G_B6_0);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_9;
		L_9 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(G_B6_0, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 204));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 205));
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 205));
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
	}

IL_004c:
	{
		V_3 = (bool)G_B7_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 206));
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0055;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 207));
		// return ServicesInitializationState.Initializing;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 208));
		V_2 = 1;
		goto IL_0059;
	}

IL_0055:
	{
		// return ServicesInitializationState.Uninitialized;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 209));
		V_2 = 0;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 210));
		int32_t L_12 = V_2;
		return L_12;
	}
}
// System.String Unity.Services.Core.UnityServices::get_ExternalUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityServices_get_ExternalUserId_m5028564FBDCC1965850DA78BC91CCA7FF4369AF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_get_ExternalUserId_m5028564FBDCC1965850DA78BC91CCA7FF4369AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_get_ExternalUserId_m5028564FBDCC1965850DA78BC91CCA7FF4369AF8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 211));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 212));
	{
		// get => ExternalUserIdProperty.UserId;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 213));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 214));
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 214));
		return L_1;
	}
}
// System.Void Unity.Services.Core.UnityServices::set_ExternalUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices_set_ExternalUserId_m3D68213DAB808F69A5A8DA5F2C22AA1136C59365 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_set_ExternalUserId_m3D68213DAB808F69A5A8DA5F2C22AA1136C59365_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_set_ExternalUserId_m3D68213DAB808F69A5A8DA5F2C22AA1136C59365_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 215));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 216));
	{
		// set => ExternalUserIdProperty.UserId = value;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 217));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2;
		String_t* L_1 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 218));
		NullCheck(L_0);
		ExternalUserIdProperty_set_UserId_m49AF583912638B80D441E07E46D5743BC8FA50E7(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 218));
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_InitializeAsync_mDC1CB3B695B5497E7159CE261445C907B26D223A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 219));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 220));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 221));
		// return InitializeAsync(new InitializationOptions());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 222));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 223));
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 223));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 224));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 224));
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 225));
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.UnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_InitializeAsync_m06F67CD34C2A60139443202D98F16E7130CB6A1F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* L_0 = (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB*)il2cpp_codegen_object_new(U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeAsyncU3Ed__15__ctor_mF7CA6079E1FE308471FFFCAE7EC9D75575504AAC(L_0, NULL);
		V_0 = L_0;
		U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* L_3 = V_0;
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_4 = ___0_options;
		NullCheck(L_3);
		L_3->___options_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___options_2), (void*)L_4);
		U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3E1__state_0 = (-1);
		U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* L_6 = V_0;
		NullCheck(L_6);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_7 = (&L_6->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56(L_7, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_mBBB8519D1AD7C68A746F7F7639F71AAEBB2ABC56_RuntimeMethod_var);
		U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* L_8 = V_0;
		NullCheck(L_8);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_9 = (&L_8->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_10;
		L_10 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_9, NULL);
		return L_10;
	}
}
// System.Void Unity.Services.Core.UnityServices::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServices__cctor_m995156A0F59490005C1FA05F9EE6FBF92E1E1485 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices__cctor_m995156A0F59490005C1FA05F9EE6FBF92E1E1485_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices__cctor_m995156A0F59490005C1FA05F9EE6FBF92E1E1485_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 226));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 227));
	{
		// internal static ExternalUserIdProperty ExternalUserIdProperty = new ExternalUserIdProperty();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 228));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 229));
		ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* L_0 = (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9*)il2cpp_codegen_object_new(ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExternalUserIdProperty__ctor_m2FEBC14C2B8A45DEE3B1250F0B577EB3B8F629F7(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 229));
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___ExternalUserIdProperty_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15__ctor_mF7CA6079E1FE308471FFFCAE7EC9D75575504AAC (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeAsyncU3Ed__15__ctor_mF7CA6079E1FE308471FFFCAE7EC9D75575504AAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeAsyncU3Ed__15__ctor_mF7CA6079E1FE308471FFFCAE7EC9D75575504AAC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8 (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_5;
	memset((&V_5), 0, sizeof(V_5));
	U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* V_6 = NULL;
	bool V_7 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t* V_9 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 230));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 231));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 232));
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		STORE_TRY_ID(methodExecutionContext, 0);
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 233));
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00bb_1;
		}

IL_0017_1:
		{
			goto IL_0143_1;
		}

IL_001c_1:
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 234));
			// if (!UnityThreadUtils.IsRunningOnUnityThread)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 235));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 236));
			bool L_3;
			L_3 = UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4(NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 236));
			V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 237));
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0035_1;
			}
		}
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 238));
			// throw new ServicesInitializationException("You are attempting to initialize Unity Services from a non-Unity Thread." +
			//     " Unity Services can only be initialized from Unity Thread");
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 239));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 240));
			ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_5 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral99F5E171221B0CB9D6DE6F675428CD7AA265CFD0)), NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 240));
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var)));
		}

IL_0035_1:
		{
			// if (!Application.isPlaying)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 241));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 242));
			bool L_6;
			L_6 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 242));
			V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 243));
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_004d_1;
			}
		}
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 244));
			// throw new ServicesInitializationException("You are attempting to initialize Unity Services in Edit Mode." +
			//     " Unity Services can only be initialized in Play Mode");
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 245));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 246));
			ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_8 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
			NullCheck(L_8);
			ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E8D89FA256D52FDC3705DD1E01B226056587734)), NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 246));
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeAsyncU3Ed__15_MoveNext_m84D0CC8DED8AFCA17443A63B13FD7104ECEEABB8_RuntimeMethod_var)));
		}

IL_004d_1:
		{
			// if (Instance == null)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 247));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 248));
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			RuntimeObject* L_9;
			L_9 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 248));
			V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 249));
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_00e1_1;
			}
		}
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 250));
			// if (InstantiationCompletion == null)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 251));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 252));
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_11;
			L_11 = UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline(NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 252));
			V_4 = (bool)((((RuntimeObject*)(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 253));
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_0078_1;
			}
		}
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 254));
			// InstantiationCompletion = new TaskCompletionSource<object>();
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 255));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 256));
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_13 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_13, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 256));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 257));
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_inline(L_13, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 257));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 258));
		}

IL_0078_1:
		{
			// await InstantiationCompletion.Task;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 259));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 260));
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_14;
			L_14 = UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline(NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 260));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 261));
			NullCheck(L_14);
			Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_15;
			L_15 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_14, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 261));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 262));
			NullCheck(L_15);
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_16;
			L_16 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_15, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 262));
			V_5 = L_16;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 263));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 264));
			bool L_17;
			L_17 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_5), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 264));
			if (L_17)
			{
				goto IL_00d8_1;
			}
		}
		{
			int32_t L_18 = 0;
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_19 = V_5;
			__this->___U3CU3Eu__1_3 = L_19;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_6 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_20 = (&__this->___U3CU3Et__builder_1);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 265));
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D(L_20, (&V_5), (&V_6), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m5CFA197F7E5FA9D58D7182FD5117CD2042E8866D_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 265));
			goto IL_0198;
		}

IL_00bb_1:
		{
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_21 = __this->___U3CU3Eu__1_3;
			V_5 = L_21;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_22 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_22, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
			int32_t L_23 = (-1);
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
		}

IL_00d8_1:
		{
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 266));
			RuntimeObject* L_24;
			L_24 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_5), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 266));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 267));
		}

IL_00e1_1:
		{
			// if (options is null)
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 268));
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_25 = __this->___options_2;
			V_7 = (bool)((((RuntimeObject*)(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 269));
			bool L_26 = V_7;
			if (!L_26)
			{
				goto IL_00fd_1;
			}
		}
		{
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 270));
			// options = new InitializationOptions();
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 271));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 272));
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_27 = (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A*)il2cpp_codegen_object_new(InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_il2cpp_TypeInfo_var);
			NullCheck(L_27);
			InitializationOptions__ctor_m2D43EFD29B0A3E387D43FA9395F7D960D667E8F0(L_27, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 272));
			__this->___options_2 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___options_2), (void*)L_27);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 273));
		}

IL_00fd_1:
		{
			// await Instance.InitializeAsync(options);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 274));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 275));
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			RuntimeObject* L_28;
			L_28 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 275));
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_29 = __this->___options_2;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 276));
			NullCheck(L_28);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
			L_30 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* >::Invoke(2 /* System.Threading.Tasks.Task Unity.Services.Core.IUnityServices::InitializeAsync(Unity.Services.Core.InitializationOptions) */, IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9_il2cpp_TypeInfo_var, L_28, L_29);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 276));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 277));
			NullCheck(L_30);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31;
			L_31 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_30, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 277));
			V_8 = L_31;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 278));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 279));
			bool L_32;
			L_32 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_8), NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 279));
			if (L_32)
			{
				goto IL_0160_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_34 = V_8;
			__this->___U3CU3Eu__2_4 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
			V_6 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_35 = (&__this->___U3CU3Et__builder_1);
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 280));
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465(L_35, (&V_8), (&V_6), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB_m1EA53742EDE25C95CA2E0134115E212D41315465_RuntimeMethod_var);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 280));
			goto IL_0198;
		}

IL_0143_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_36 = __this->___U3CU3Eu__2_4;
			V_8 = L_36;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_37 = (&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_0160_1:
		{
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 281));
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_8), NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 281));
			goto IL_0184;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_016a;
		}
		throw e;
	}

CATCH_016a:
	{// begin catch(System.Exception)
		STORE_TRY_ID(methodExecutionContext, -1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 282));
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_39 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_40 = V_9;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 283));
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_39, L_40, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 283));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0198;
	}// end catch (depth: 1)

IL_0184:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 284));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 285));
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_41 = (&__this->___U3CU3Et__builder_1);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 286));
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_41, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 286));
	}

IL_0198:
	{
		return;
	}
}
// System.Void Unity.Services.Core.UnityServices/<InitializeAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990 (U3CInitializeAsyncU3Ed__15_t9ACF022FD2FC62A0B0FA612D80739BFB7A5A8ACB* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CInitializeAsyncU3Ed__15_SetStateMachine_m64D4E0EC42AF9A1FF73B65B44D22A07A1B450990_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Threading.Tasks.TaskScheduler Unity.Services.Core.UnityThreadUtils::get_UnityThreadScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* UnityThreadUtils_get_UnityThreadScheduler_mE9C3F85F54EF3425CB76B8899D0F0BFBA705E3F2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_get_UnityThreadScheduler_mE9C3F85F54EF3425CB76B8899D0F0BFBA705E3F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityThreadUtils_get_UnityThreadScheduler_mE9C3F85F54EF3425CB76B8899D0F0BFBA705E3F2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 287));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 288));
	{
		// internal static TaskScheduler UnityThreadScheduler { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 289));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.UnityThreadUtils::set_UnityThreadScheduler(System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6 (TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 290));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 291));
	{
		// internal static TaskScheduler UnityThreadScheduler { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 292));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ___0_value;
		((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.UnityThreadUtils::CaptureUnityThreadInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityThreadUtils_CaptureUnityThreadInfo_m43D8C684F01F8CA911A1D6E80E7E70CC1A0CF579 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_CaptureUnityThreadInfo_m43D8C684F01F8CA911A1D6E80E7E70CC1A0CF579_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityThreadUtils_CaptureUnityThreadInfo_m43D8C684F01F8CA911A1D6E80E7E70CC1A0CF579_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 293));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 294));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 295));
		// s_UnityThreadId = Thread.CurrentThread.ManagedThreadId;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 296));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 297));
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 297));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 298));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 298));
		((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___s_UnityThreadId_0 = L_1;
		// UnityThreadScheduler = TaskScheduler.FromCurrentSynchronizationContext();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 299));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 300));
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 300));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 301));
		UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_inline(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 301));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 302));
		return;
	}
}
// System.Boolean Unity.Services.Core.UnityThreadUtils::get_IsRunningOnUnityThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityThreadUtils_get_IsRunningOnUnityThread_m5FD8E9090E2A2EE035677BC109B12A234B91A1B4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 303));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 304));
	{
		// public static bool IsRunningOnUnityThread => Thread.CurrentThread.ManagedThreadId == s_UnityThreadId;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 305));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 306));
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 306));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 307));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 307));
		int32_t L_2 = ((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___s_UnityThreadId_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_inline (InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, InitializationOptions_get_Values_m9D5E5B39B0E681240EC6C34E848D201B625A497B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 34));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 35));
	{
		// internal IDictionary<string, object> Values { get; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 36));
		RuntimeObject* L_0 = __this->___U3CValuesU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 174));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 175));
	{
		// internal static IUnityServices Instance { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 176));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 180));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 181));
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 182));
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_inline (ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ExternalUserIdProperty_get_UserId_mF463E7814BFC0294128FEB39259BEB00692F3295_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 24));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 25));
	{
		// get => m_UserId;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 26));
		String_t* L_0 = __this->___m_UserId_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityServices_set_InstantiationCompletion_mA4D8862E87057DD28B48E93BDA0545E5CDCE8DEC_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 184));
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 185));
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_inline (TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, UnityThreadUtils_set_UnityThreadScheduler_m5AE27DBA9F88FE1CDCB8FBF241A3C1B5628F9BB6_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 290));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Services_Core + 291));
	{
		// internal static TaskScheduler UnityThreadScheduler { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Services_Core + 292));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ___0_value;
		((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_StaticFields*)il2cpp_codegen_static_fields_for(UnityThreadUtils_tCC1D0915CC9C90AEB5B27F2A9D791544FAC0DEBA_il2cpp_TypeInfo_var))->___U3CUnityThreadSchedulerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
