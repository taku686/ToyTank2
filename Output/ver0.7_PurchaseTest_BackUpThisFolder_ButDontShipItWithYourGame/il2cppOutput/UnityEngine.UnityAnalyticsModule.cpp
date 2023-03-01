#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Analytics.CustomEventData
struct CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395;
// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityAnalyticsModule[];
IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral117913D69EF572DF03D942BBEE8E969B6DD91DD5;
IL2CPP_EXTERN_C String_t* _stringLiteral58355D994EF40A56CE1F99A26EF6FE9AC801DCB4;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral9B6D0896D3D5AF34FAE5214A26FB32C1F2FC287F;
IL2CPP_EXTERN_C String_t* _stringLiteralECAF49DA801BC366C22127952F642AE8B5537F02;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsSessionInfo_CallIdentityTokenChanged_m1AD21A1840BCB9CB222455F609DBBF7B7B380911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalyticsSessionInfo_CallSessionStateChanged_m6C3C7DD13064E37D7C3AE9411355BCEF77C4664B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_CustomEvent_m663CDDCA04FF832169D1BCEE01C943A7FB6D4363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Analytics_Transaction_m9BD442FC02953AC2C573E3340E098751608ADEBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomEventData_AddDictionary_m8277B05DF41A78C3C8BEA8DB0724CABB32769221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomEventData_Destroy_mCE7CEA4B647288F3A6673F325D2397603BA927D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomEventData_Dispose_mF7FAD8DFA5AE64CA3F3BBDCA22D1ACBE810FAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomEventData_Finalize_m9BEB37895872F784C37236033CD022211DA8219D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomEventData__ctor_m56F78E56BEB38960137D4310EBA08871D1F8B4E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteConfigSettings_RemoteConfigSettingsUpdated_mA71E7C6CDAF5D349BF0B4880A4D54DF2365EB948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteSettings_RemoteSettingsBeforeFetchFromServer_m677DED4CFA8C9E498227A3E939242974DF8FA35C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteSettings_RemoteSettingsUpdateCompleted_m56713308E00B18BF0E5FADEC93D67A70F7E5FD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RemoteSettings_RemoteSettingsUpdated_m6202CCC0AF33D44838BB46977D075E54FD5EC069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* AnalyticsResult_tD3F23442DE6D00D9F160F7C9D3C7E3C5DEB91DCE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6B4A7D64487421A1C7A9ACB5578F8A35510E2A0C 
{
};

// UnityEngine.Analytics.Analytics
struct Analytics_tF5AF7B75C971CF64A542B88268F097E1B65573B0  : public RuntimeObject
{
};

// UnityEngine.Analytics.AnalyticsSessionInfo
struct AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76  : public RuntimeObject
{
};

// UnityEngine.Analytics.ContinuousEvent
struct ContinuousEvent_t71122F6F65BF7EA8490EA664A55D5C03790CB6CF  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.RemoteConfigSettingsHelper
struct RemoteConfigSettingsHelper_t29B2673892F8181388B45FFEEE354B3773629588  : public RuntimeObject
{
};

// UnityEngine.RemoteSettings
struct RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.Analytics.CustomEventData
struct CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Analytics.CustomEventData::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.CustomEventData
struct CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___Updated_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged
struct IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395  : public MulticastDelegate_t
{
};

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
struct SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C  : public MulticastDelegate_t
{
};

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// UnityEngine.Analytics.Analytics

// UnityEngine.Analytics.Analytics

// UnityEngine.Analytics.AnalyticsSessionInfo
struct AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields
{
	// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged UnityEngine.Analytics.AnalyticsSessionInfo::sessionStateChanged
	SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* ___sessionStateChanged_0;
	// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged UnityEngine.Analytics.AnalyticsSessionInfo::identityTokenChanged
	IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* ___identityTokenChanged_1;
};

// UnityEngine.Analytics.AnalyticsSessionInfo

// UnityEngine.Analytics.ContinuousEvent

// UnityEngine.Analytics.ContinuousEvent

// UnityEngine.RemoteConfigSettingsHelper

// UnityEngine.RemoteConfigSettingsHelper

// UnityEngine.RemoteSettings
struct RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields
{
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* ___Updated_0;
	// System.Action UnityEngine.RemoteSettings::BeforeFetchFromServer
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___BeforeFetchFromServer_1;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> UnityEngine.RemoteSettings::Completed
	Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* ___Completed_2;
};

// UnityEngine.RemoteSettings

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// UnityEngine.Analytics.CustomEventData

// UnityEngine.Analytics.CustomEventData

// System.Delegate

// System.Delegate

// UnityEngine.RemoteConfigSettings

// UnityEngine.RemoteConfigSettings

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`3<System.Boolean,System.Boolean,System.Int32>

// System.Action`3<System.Boolean,System.Boolean,System.Int32>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged

// UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged

// UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged

// UnityEngine.RemoteSettings/UpdatedEventHandler

// UnityEngine.RemoteSettings/UpdatedEventHandler
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(T1,T2,T3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_gshared_inline (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* __this, bool ___0_arg1, bool ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_inline (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Boolean,System.Boolean,System.Int32>::Invoke(T1,T2,T3)
inline void Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_inline (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* __this, bool ___0_arg1, bool ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB*, bool, bool, int32_t, const RuntimeMethod*))Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_gshared_inline)(__this, ___0_arg1, ___1_arg2, ___2_arg3, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___0_obj, method);
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96 (String_t* ___0_productId, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_amount, String_t* ___2_currency, String_t* ___3_receiptPurchaseData, String_t* ___4_signature, bool ___5_usingIAPService, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12 (const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m6A951645AB4F5DC4577CFE062BE0E72A528261EA (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Double,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_Transaction_m6A16C2852B2365FFA31B407BE5EBF4A6525B5488 (String_t* ___0_productId, double ___1_amount, String_t* ___2_currency, String_t* ___3_receiptPurchaseData, String_t* ___4_signature, bool ___5_usingIAPService, const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEventName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEventName_m714D4EBF35293ACA77E6B8EDA5D454B760992CCF (String_t* ___0_customEventName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData__ctor_m56F78E56BEB38960137D4310EBA08871D1F8B4E5 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.CustomEventData::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Dispose_mF7FAD8DFA5AE64CA3F3BBDCA22D1ACBE810FAEA6 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDictionary_m8277B05DF41A78C3C8BEA8DB0724CABB32769221 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, RuntimeObject* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEvent_mDFD010BF86A285FB5620405455D04D31FD0F014B (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* ___0_eventData, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_inline (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_inline (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomEventData_Internal_Create_mA00A12FE26AE334F0251226C8ED5FB02882BC2ED (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* ___0_ced, String_t* ___1_name, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.CustomEventData::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Destroy_mCE7CEA4B647288F3A6673F325D2397603BA927D0 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Internal_Destroy_m8556DAF414664C7669D1D38217AE2E763B4CEC59 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String System.Char::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m7ABE3A3181325918A8EA8878A083497DCF2FED4B (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt32_m44ECC55B2F900092F5C92A5053B83D0955211946 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt64_m168582B1D88D236B83134237B44A61595F226EA1 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, int64_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt64_m487A081EB24E08F9A504E82C9FB5448D89190C7B (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, uint64_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddBool_mFB872845AE96AC3BB7E7ADC9DB297F00CC355747 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m0CECFA6799BA3F8CDB59C34287DD5BAE54CC0EBE (float ___0_value, const RuntimeMethod* method) ;
// System.Double System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, double ___1_value, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_m8328B095A33F951CD914F897D7DB9B0502EA09A9 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdated_m6202CCC0AF33D44838BB46977D075E54FD5EC069 (bool ___0_wasLastUpdatedFromServer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_RemoteSettingsUpdated_m6202CCC0AF33D44838BB46977D075E54FD5EC069_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_wasLastUpdatedFromServer));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RemoteSettings_RemoteSettingsUpdated_m6202CCC0AF33D44838BB46977D075E54FD5EC069_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 3));
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* L_0 = ((RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var))->___Updated_0;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 4));
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 5));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 6));
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 7));
		NullCheck(L_3);
		UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 7));
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 8));
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsBeforeFetchFromServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsBeforeFetchFromServer_m677DED4CFA8C9E498227A3E939242974DF8FA35C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_RemoteSettingsBeforeFetchFromServer_m677DED4CFA8C9E498227A3E939242974DF8FA35C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RemoteSettings_RemoteSettingsBeforeFetchFromServer_m677DED4CFA8C9E498227A3E939242974DF8FA35C_RuntimeMethod_var, NULL, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 9));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 10));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 11));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 12));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var))->___BeforeFetchFromServer_1;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 13));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 14));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 15));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 16));
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 16));
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 17));
		return;
	}
}
// System.Void UnityEngine.RemoteSettings::RemoteSettingsUpdateCompleted(System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteSettings_RemoteSettingsUpdateCompleted_m56713308E00B18BF0E5FADEC93D67A70F7E5FD86 (bool ___0_wasLastUpdatedFromServer, bool ___1_settingsChanged, int32_t ___2_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_RemoteSettingsUpdateCompleted_m56713308E00B18BF0E5FADEC93D67A70F7E5FD86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_wasLastUpdatedFromServer), (&___1_settingsChanged), (&___2_response));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RemoteSettings_RemoteSettingsUpdateCompleted_m56713308E00B18BF0E5FADEC93D67A70F7E5FD86_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 19));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 20));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 21));
		Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* L_0 = ((RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_StaticFields*)il2cpp_codegen_static_fields_for(RemoteSettings_t9DFFC747AB3E7A39DF4527F245B529A407427250_il2cpp_TypeInfo_var))->___Completed_2;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 22));
		Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 23));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 24));
		Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* L_3 = V_0;
		bool L_4 = ___0_wasLastUpdatedFromServer;
		bool L_5 = ___1_settingsChanged;
		int32_t L_6 = ___2_response;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 25));
		NullCheck(L_3);
		Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_inline(L_3, L_4, L_5, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 25));
	}

IL_0019:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 26));
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
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_Multicast(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* currentDelegate = reinterpret_cast<UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenInst(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStatic(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStaticInvoker(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_ClosedStaticInvoker(UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4 (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler__ctor_mB914409481F8FDC738B4EDB1DBB4883F743F863A (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_Multicast;
}
// System.Void UnityEngine.RemoteSettings/UpdatedEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50 (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Updated_1));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_back(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke& marshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___Updated_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Updated_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_pinvoke_cleanup(RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_com(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
	marshaled.___Updated_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___Updated_1));
}
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_com_back(const RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com& marshaled, RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
	unmarshaled.___Updated_1 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Updated_1), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C>(marshaled.___Updated_1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.RemoteConfigSettings
IL2CPP_EXTERN_C void RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshal_com_cleanup(RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.RemoteConfigSettings::RemoteConfigSettingsUpdated(UnityEngine.RemoteConfigSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteConfigSettings_RemoteConfigSettingsUpdated_mA71E7C6CDAF5D349BF0B4880A4D54DF2365EB948 (RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52* ___0_rcs, bool ___1_wasLastUpdatedFromServer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteConfigSettings_RemoteConfigSettingsUpdated_mA71E7C6CDAF5D349BF0B4880A4D54DF2365EB948_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_rcs), (&___1_wasLastUpdatedFromServer));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, RemoteConfigSettings_RemoteConfigSettingsUpdated_mA71E7C6CDAF5D349BF0B4880A4D54DF2365EB948_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 28));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 29));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 30));
		RemoteConfigSettings_tC979947EE51355162B3241B9F80D95A8FD25FE52* L_0 = ___0_rcs;
		NullCheck(L_0);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = L_0->___Updated_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 31));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 32));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 33));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_4 = V_0;
		bool L_5 = ___1_wasLastUpdatedFromServer;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 34));
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_4, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 34));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 35));
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
// System.Boolean UnityEngine.Analytics.Analytics::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12 (const RuntimeMethod* method) 
{
	typedef bool (*Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12_ftn) ();
	static Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::IsInitialized()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Double,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_Transaction_m6A16C2852B2365FFA31B407BE5EBF4A6525B5488 (String_t* ___0_productId, double ___1_amount, String_t* ___2_currency, String_t* ___3_receiptPurchaseData, String_t* ___4_signature, bool ___5_usingIAPService, const RuntimeMethod* method) 
{
	typedef int32_t (*Analytics_Transaction_m6A16C2852B2365FFA31B407BE5EBF4A6525B5488_ftn) (String_t*, double, String_t*, String_t*, String_t*, bool);
	static Analytics_Transaction_m6A16C2852B2365FFA31B407BE5EBF4A6525B5488_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_Transaction_m6A16C2852B2365FFA31B407BE5EBF4A6525B5488_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::Transaction(System.String,System.Double,System.String,System.String,System.String,System.Boolean)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_productId, ___1_amount, ___2_currency, ___3_receiptPurchaseData, ___4_signature, ___5_usingIAPService);
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEventName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEventName_m714D4EBF35293ACA77E6B8EDA5D454B760992CCF (String_t* ___0_customEventName, const RuntimeMethod* method) 
{
	typedef int32_t (*Analytics_SendCustomEventName_m714D4EBF35293ACA77E6B8EDA5D454B760992CCF_ftn) (String_t*);
	static Analytics_SendCustomEventName_m714D4EBF35293ACA77E6B8EDA5D454B760992CCF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_SendCustomEventName_m714D4EBF35293ACA77E6B8EDA5D454B760992CCF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::SendCustomEventName(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_customEventName);
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::SendCustomEvent(UnityEngine.Analytics.CustomEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_SendCustomEvent_mDFD010BF86A285FB5620405455D04D31FD0F014B (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* ___0_eventData, const RuntimeMethod* method) 
{
	typedef int32_t (*Analytics_SendCustomEvent_mDFD010BF86A285FB5620405455D04D31FD0F014B_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*);
	static Analytics_SendCustomEvent_mDFD010BF86A285FB5620405455D04D31FD0F014B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Analytics_SendCustomEvent_mDFD010BF86A285FB5620405455D04D31FD0F014B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.Analytics::SendCustomEvent(UnityEngine.Analytics.CustomEventData)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_eventData);
	return icallRetVal;
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_Transaction_m9BD442FC02953AC2C573E3340E098751608ADEBB (String_t* ___0_productId, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_amount, String_t* ___2_currency, String_t* ___3_receiptPurchaseData, String_t* ___4_signature, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsResult_tD3F23442DE6D00D9F160F7C9D3C7E3C5DEB91DCE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_Transaction_m9BD442FC02953AC2C573E3340E098751608ADEBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_productId), (&___1_amount), (&___2_currency), (&___3_receiptPurchaseData), (&___4_signature));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Analytics_Transaction_m9BD442FC02953AC2C573E3340E098751608ADEBB_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 37));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 38));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 39));
		String_t* L_0 = ___0_productId;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___1_amount;
		String_t* L_2 = ___2_currency;
		String_t* L_3 = ___3_receiptPurchaseData;
		String_t* L_4 = ___4_signature;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 40));
		int32_t L_5;
		L_5 = Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96(L_0, L_1, L_2, L_3, L_4, (bool)0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 40));
		V_0 = L_5;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 41));
		int32_t L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::Transaction(System.String,System.Decimal,System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96 (String_t* ___0_productId, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_amount, String_t* ___2_currency, String_t* ___3_receiptPurchaseData, String_t* ___4_signature, bool ___5_usingIAPService, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsResult_tD3F23442DE6D00D9F160F7C9D3C7E3C5DEB91DCE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_productId), (&___1_amount), (&___2_currency), (&___3_receiptPurchaseData), (&___4_signature), (&___5_usingIAPService));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 42));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 43));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 44));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 45));
		String_t* L_0 = ___0_productId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 46));
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 46));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 47));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 48));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 49));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9B6D0896D3D5AF34FAE5214A26FB32C1F2FC287F)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 49));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96_RuntimeMethod_var)));
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 50));
		String_t* L_4 = ___2_currency;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 51));
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 51));
		V_1 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 52));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 53));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 54));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58355D994EF40A56CE1F99A26EF6FE9AC801DCB4)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 54));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_Transaction_m237599F1B6EDBB64DB6CE0CC6ED9A6E4B3391F96_RuntimeMethod_var)));
	}

IL_002b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 55));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 56));
		bool L_8;
		L_8 = Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 56));
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 57));
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 58));
		V_3 = 1;
		goto IL_0073;
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 59));
		String_t* L_10 = ___3_receiptPurchaseData;
		V_4 = (bool)((((RuntimeObject*)(String_t*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 60));
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 61));
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___3_receiptPurchaseData = L_12;
	}

IL_004c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 62));
		String_t* L_13 = ___4_signature;
		V_5 = (bool)((((RuntimeObject*)(String_t*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 63));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_005e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 64));
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		___4_signature = L_15;
	}

IL_005e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 65));
		String_t* L_16 = ___0_productId;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_17 = ___1_amount;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 66));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = Convert_ToDouble_m6A951645AB4F5DC4577CFE062BE0E72A528261EA(L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 66));
		String_t* L_19 = ___2_currency;
		String_t* L_20 = ___3_receiptPurchaseData;
		String_t* L_21 = ___4_signature;
		bool L_22 = ___5_usingIAPService;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 67));
		int32_t L_23;
		L_23 = Analytics_Transaction_m6A16C2852B2365FFA31B407BE5EBF4A6525B5488(L_16, L_18, L_19, L_20, L_21, L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 67));
		V_3 = L_23;
		goto IL_0073;
	}

IL_0073:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 68));
		int32_t L_24 = V_3;
		return L_24;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_m663CDDCA04FF832169D1BCEE01C943A7FB6D4363 (String_t* ___0_customEventName, RuntimeObject* ___1_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsResult_tD3F23442DE6D00D9F160F7C9D3C7E3C5DEB91DCE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Analytics_CustomEvent_m663CDDCA04FF832169D1BCEE01C943A7FB6D4363_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_customEventName), (&___1_eventData));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Analytics_CustomEvent_m663CDDCA04FF832169D1BCEE01C943A7FB6D4363_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 69));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 70));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 71));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 72));
		String_t* L_0 = ___0_customEventName;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 73));
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 73));
		V_2 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 74));
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 75));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 76));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral117913D69EF572DF03D942BBEE8E969B6DD91DD5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 76));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Analytics_CustomEvent_m663CDDCA04FF832169D1BCEE01C943A7FB6D4363_RuntimeMethod_var)));
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 77));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 78));
		bool L_4;
		L_4 = Analytics_IsInitialized_mBC7670704DE959791C8DF859A7C66D5DD5168F12(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 78));
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 79));
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 80));
		V_4 = 1;
		goto IL_0066;
	}

IL_0027:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 81));
		RuntimeObject* L_6 = ___1_eventData;
		V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 82));
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 83));
		String_t* L_8 = ___0_customEventName;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 84));
		int32_t L_9;
		L_9 = Analytics_SendCustomEventName_m714D4EBF35293ACA77E6B8EDA5D454B760992CCF(L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 84));
		V_4 = L_9;
		goto IL_0066;
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 85));
		String_t* L_10 = ___0_customEventName;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 86));
		CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* L_11 = (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*)il2cpp_codegen_object_new(CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		CustomEventData__ctor_m56F78E56BEB38960137D4310EBA08871D1F8B4E5(L_11, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 86));
		V_0 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 87));
		V_1 = 6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 94));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 95));
				CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* L_12 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 96));
				NullCheck(L_12);
				CustomEventData_Dispose_mF7FAD8DFA5AE64CA3F3BBDCA22D1ACBE810FAEA6(L_12, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 96));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 97));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 88));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 89));
			CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* L_13 = V_0;
			RuntimeObject* L_14 = ___1_eventData;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 90));
			NullCheck(L_13);
			bool L_15;
			L_15 = CustomEventData_AddDictionary_m8277B05DF41A78C3C8BEA8DB0724CABB32769221(L_13, L_14, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 90));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 91));
			CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* L_16 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 92));
			int32_t L_17;
			L_17 = Analytics_SendCustomEvent_mDFD010BF86A285FB5620405455D04D31FD0F014B(L_16, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 92));
			V_1 = L_17;
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 93));
			goto IL_0061;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 98));
		int32_t L_18 = V_1;
		V_4 = L_18;
		goto IL_0066;
	}

IL_0066:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 99));
		int32_t L_19 = V_4;
		return L_19;
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
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallSessionStateChanged(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallSessionStateChanged_m6C3C7DD13064E37D7C3AE9411355BCEF77C4664B (int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_CallSessionStateChanged_m6C3C7DD13064E37D7C3AE9411355BCEF77C4664B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_sessionState), (&___1_sessionId), (&___2_sessionElapsedTime), (&___3_sessionChanged));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AnalyticsSessionInfo_CallSessionStateChanged_m6C3C7DD13064E37D7C3AE9411355BCEF77C4664B_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 100));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 101));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 102));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 103));
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* L_0 = ((AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var))->___sessionStateChanged_0;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 104));
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 105));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 106));
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* L_3 = V_0;
		int32_t L_4 = ___0_sessionState;
		int64_t L_5 = ___1_sessionId;
		int64_t L_6 = ___2_sessionElapsedTime;
		bool L_7 = ___3_sessionChanged;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 107));
		NullCheck(L_3);
		SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_inline(L_3, L_4, L_5, L_6, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 107));
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 108));
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo::CallIdentityTokenChanged(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsSessionInfo_CallIdentityTokenChanged_m1AD21A1840BCB9CB222455F609DBBF7B7B380911 (String_t* ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_CallIdentityTokenChanged_m1AD21A1840BCB9CB222455F609DBBF7B7B380911_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* V_0 = NULL;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_token));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, AnalyticsSessionInfo_CallIdentityTokenChanged_m1AD21A1840BCB9CB222455F609DBBF7B7B380911_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 109));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 110));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 111));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 112));
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* L_0 = ((AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsSessionInfo_tDE8F7A9E13EF9723E2D975F76E916753DA61AD76_il2cpp_TypeInfo_var))->___identityTokenChanged_1;
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 113));
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 114));
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 115));
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* L_3 = V_0;
		String_t* L_4 = ___0_token;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 116));
		NullCheck(L_3);
		IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_inline(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 116));
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 117));
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
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_Multicast(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* currentDelegate = reinterpret_cast<SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenInst(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, method);
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStatic(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, method);
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStaticInvoker(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, int64_t, int64_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged);
}
void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_ClosedStaticInvoker(SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, int64_t, int64_t, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int64_t, int64_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, static_cast<int32_t>(___3_sessionChanged));

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged__ctor_m8E04BB6766439BA455F9C808171BD791230496D8 (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_Multicast;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged::Invoke(UnityEngine.Analytics.AnalyticsSessionState,System.Int64,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5 (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_Multicast(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* currentDelegate = reinterpret_cast<IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenInst(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	NullCheck(___0_token);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_token, method);
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStatic(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_token, method);
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStaticInvoker(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_token);
}
void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_ClosedStaticInvoker(IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_token);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395 (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_token' to native representation
	char* ____0_token_marshaled = NULL;
	____0_token_marshaled = il2cpp_codegen_marshal_string(___0_token);

	// Native function invocation
	il2cppPInvokeFunc(____0_token_marshaled);

	// Marshaling cleanup of parameter '___0_token' native representation
	il2cpp_codegen_marshal_free(____0_token_marshaled);
	____0_token_marshaled = NULL;

}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged__ctor_m1970F8BEEDAA84A8FC5ABB973C0DB62FA2AA8312 (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_Multicast;
}
// System.Void UnityEngine.Analytics.AnalyticsSessionInfo/IdentityTokenChanged::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9 (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshal_pinvoke(const CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169& unmarshaled, CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshal_pinvoke_back(const CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_pinvoke& marshaled, CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshal_pinvoke_cleanup(CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshal_com(const CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169& unmarshaled, CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshal_com_back(const CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_com& marshaled, CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Analytics.CustomEventData
IL2CPP_EXTERN_C void CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshal_com_cleanup(CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Analytics.CustomEventData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData__ctor_m56F78E56BEB38960137D4310EBA08871D1F8B4E5 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData__ctor_m56F78E56BEB38960137D4310EBA08871D1F8B4E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_name));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CustomEventData__ctor_m56F78E56BEB38960137D4310EBA08871D1F8B4E5_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 118));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 119));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 120));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 121));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 121));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 122));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 123));
		String_t* L_0 = ___0_name;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 124));
		intptr_t L_1;
		L_1 = CustomEventData_Internal_Create_mA00A12FE26AE334F0251226C8ED5FB02882BC2ED(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 124));
		__this->___m_Ptr_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 125));
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Finalize_m9BEB37895872F784C37236033CD022211DA8219D (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_Finalize_m9BEB37895872F784C37236033CD022211DA8219D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CustomEventData_Finalize_m9BEB37895872F784C37236033CD022211DA8219D_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 126));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 127));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 128));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 132));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 133));
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 133));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 129));
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 130));
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 131));
			CustomEventData_Destroy_mCE7CEA4B647288F3A6673F325D2397603BA927D0(__this, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 131));
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 134));
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Destroy_mCE7CEA4B647288F3A6673F325D2397603BA927D0 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_Destroy_mCE7CEA4B647288F3A6673F325D2397603BA927D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CustomEventData_Destroy_mCE7CEA4B647288F3A6673F325D2397603BA927D0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 135));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 136));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 137));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 138));
		intptr_t L_0 = __this->___m_Ptr_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 139));
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 139));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 140));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 141));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 142));
		intptr_t L_4 = __this->___m_Ptr_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 143));
		CustomEventData_Internal_Destroy_m8556DAF414664C7669D1D38217AE2E763B4CEC59(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 143));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 144));
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->___m_Ptr_0 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 145));
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 146));
		return;
	}
}
// System.Void UnityEngine.Analytics.CustomEventData::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Dispose_mF7FAD8DFA5AE64CA3F3BBDCA22D1ACBE810FAEA6 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_Dispose_mF7FAD8DFA5AE64CA3F3BBDCA22D1ACBE810FAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CustomEventData_Dispose_mF7FAD8DFA5AE64CA3F3BBDCA22D1ACBE810FAEA6_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 147));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 148));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 149));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 150));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 151));
		CustomEventData_Destroy_mCE7CEA4B647288F3A6673F325D2397603BA927D0(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 151));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 152));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 153));
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 153));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 154));
		return;
	}
}
// System.IntPtr UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CustomEventData_Internal_Create_mA00A12FE26AE334F0251226C8ED5FB02882BC2ED (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* ___0_ced, String_t* ___1_name, const RuntimeMethod* method) 
{
	typedef intptr_t (*CustomEventData_Internal_Create_mA00A12FE26AE334F0251226C8ED5FB02882BC2ED_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*);
	static CustomEventData_Internal_Create_mA00A12FE26AE334F0251226C8ED5FB02882BC2ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_Internal_Create_mA00A12FE26AE334F0251226C8ED5FB02882BC2ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::Internal_Create(UnityEngine.Analytics.CustomEventData,System.String)");
	intptr_t icallRetVal = _il2cpp_icall_func(___0_ced, ___1_name);
	return icallRetVal;
}
// System.Void UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomEventData_Internal_Destroy_m8556DAF414664C7669D1D38217AE2E763B4CEC59 (intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	typedef void (*CustomEventData_Internal_Destroy_m8556DAF414664C7669D1D38217AE2E763B4CEC59_ftn) (intptr_t);
	static CustomEventData_Internal_Destroy_m8556DAF414664C7669D1D38217AE2E763B4CEC59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_Internal_Destroy_m8556DAF414664C7669D1D38217AE2E763B4CEC59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___0_ptr);
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*, String_t*);
	static CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddString(System.String,System.String)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_key, ___1_value);
	return icallRetVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*, int32_t);
	static CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt32(System.String,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_key, ___1_value);
	return icallRetVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt32_m44ECC55B2F900092F5C92A5053B83D0955211946 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, uint32_t ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*CustomEventData_AddUInt32_m44ECC55B2F900092F5C92A5053B83D0955211946_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*, uint32_t);
	static CustomEventData_AddUInt32_m44ECC55B2F900092F5C92A5053B83D0955211946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt32_m44ECC55B2F900092F5C92A5053B83D0955211946_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt32(System.String,System.UInt32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_key, ___1_value);
	return icallRetVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddInt64_m168582B1D88D236B83134237B44A61595F226EA1 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, int64_t ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*CustomEventData_AddInt64_m168582B1D88D236B83134237B44A61595F226EA1_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*, int64_t);
	static CustomEventData_AddInt64_m168582B1D88D236B83134237B44A61595F226EA1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddInt64_m168582B1D88D236B83134237B44A61595F226EA1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddInt64(System.String,System.Int64)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_key, ___1_value);
	return icallRetVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddUInt64_m487A081EB24E08F9A504E82C9FB5448D89190C7B (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, uint64_t ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*CustomEventData_AddUInt64_m487A081EB24E08F9A504E82C9FB5448D89190C7B_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*, uint64_t);
	static CustomEventData_AddUInt64_m487A081EB24E08F9A504E82C9FB5448D89190C7B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddUInt64_m487A081EB24E08F9A504E82C9FB5448D89190C7B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddUInt64(System.String,System.UInt64)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_key, ___1_value);
	return icallRetVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddBool_mFB872845AE96AC3BB7E7ADC9DB297F00CC355747 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*CustomEventData_AddBool_mFB872845AE96AC3BB7E7ADC9DB297F00CC355747_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*, bool);
	static CustomEventData_AddBool_mFB872845AE96AC3BB7E7ADC9DB297F00CC355747_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddBool_mFB872845AE96AC3BB7E7ADC9DB297F00CC355747_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddBool(System.String,System.Boolean)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_key, ___1_value);
	return icallRetVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, String_t* ___0_key, double ___1_value, const RuntimeMethod* method) 
{
	typedef bool (*CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897_ftn) (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169*, String_t*, double);
	static CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Analytics.CustomEventData::AddDouble(System.String,System.Double)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_key, ___1_value);
	return icallRetVal;
}
// System.Boolean UnityEngine.Analytics.CustomEventData::AddDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomEventData_AddDictionary_m8277B05DF41A78C3C8BEA8DB0724CABB32769221 (CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169* __this, RuntimeObject* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_AddDictionary_m8277B05DF41A78C3C8BEA8DB0724CABB32769221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomEventData_t62D89E3B19583D0C331B5E717FC09B41EE094169_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_eventData));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, CustomEventData_AddDictionary_m8277B05DF41A78C3C8BEA8DB0724CABB32769221_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 155));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 156));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 157));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 158));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 159));
		RuntimeObject* L_0 = ___0_eventData;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 160));
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 160));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02c5:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 280));
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_02cf;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 281));
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 281));
				}

IL_02cf:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 282));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 161));
				goto IL_02b8_1;
			}

IL_000e_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 162));
				RuntimeObject* L_4 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 163));
				NullCheck(L_4);
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_5;
				L_5 = InterfaceFuncInvoker0< KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var, L_4);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 163));
				V_1 = L_5;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 164));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 165));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 166));
				String_t* L_6;
				L_6 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_1), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 166));
				V_2 = L_6;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 167));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 168));
				RuntimeObject* L_7;
				L_7 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_1), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 168));
				V_3 = L_7;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 169));
				RuntimeObject* L_8 = V_3;
				V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 170));
				bool L_9 = V_5;
				if (!L_9)
				{
					goto IL_0043_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 171));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 172));
				String_t* L_10 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 173));
				bool L_11;
				L_11 = CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9(__this, L_10, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 173));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 174));
				goto IL_02b8_1;
			}

IL_0043_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 175));
				RuntimeObject* L_12 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 176));
				NullCheck(L_12);
				Type_t* L_13;
				L_13 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_12, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 176));
				V_4 = L_13;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 177));
				Type_t* L_14 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 178));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_16;
				L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 178));
				V_6 = (bool)((((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_16))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 179));
				bool L_17 = V_6;
				if (!L_17)
				{
					goto IL_0072_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 180));
				String_t* L_18 = V_2;
				RuntimeObject* L_19 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 181));
				bool L_20;
				L_20 = CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9(__this, L_18, ((String_t*)CastclassSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 181));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 182));
				goto IL_02b7_1;
			}

IL_0072_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 183));
				Type_t* L_21 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 184));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_23;
				L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 184));
				V_7 = (bool)((((RuntimeObject*)(Type_t*)L_21) == ((RuntimeObject*)(Type_t*)L_23))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 185));
				bool L_24 = V_7;
				if (!L_24)
				{
					goto IL_009e_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 186));
				String_t* L_25 = V_2;
				RuntimeObject* L_26 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 187));
				il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
				String_t* L_27;
				L_27 = Char_ToString_m7ABE3A3181325918A8EA8878A083497DCF2FED4B(((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_26, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 187));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 188));
				bool L_28;
				L_28 = CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9(__this, L_25, L_27, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 188));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 189));
				goto IL_02b7_1;
			}

IL_009e_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 190));
				Type_t* L_29 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 191));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_31;
				L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 191));
				V_8 = (bool)((((RuntimeObject*)(Type_t*)L_29) == ((RuntimeObject*)(Type_t*)L_31))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 192));
				bool L_32 = V_8;
				if (!L_32)
				{
					goto IL_00c5_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 193));
				String_t* L_33 = V_2;
				RuntimeObject* L_34 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 194));
				bool L_35;
				L_35 = CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66(__this, L_33, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_34, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 194));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 195));
				goto IL_02b7_1;
			}

IL_00c5_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 196));
				Type_t* L_36 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 197));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_38;
				L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 197));
				V_9 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 198));
				bool L_39 = V_9;
				if (!L_39)
				{
					goto IL_00ec_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 199));
				String_t* L_40 = V_2;
				RuntimeObject* L_41 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 200));
				bool L_42;
				L_42 = CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66(__this, L_40, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_41, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 200));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 201));
				goto IL_02b7_1;
			}

IL_00ec_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 202));
				Type_t* L_43 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 203));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_45;
				L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 203));
				V_10 = (bool)((((RuntimeObject*)(Type_t*)L_43) == ((RuntimeObject*)(Type_t*)L_45))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 204));
				bool L_46 = V_10;
				if (!L_46)
				{
					goto IL_0113_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 205));
				String_t* L_47 = V_2;
				RuntimeObject* L_48 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 206));
				bool L_49;
				L_49 = CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66(__this, L_47, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_48, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 206));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 207));
				goto IL_02b7_1;
			}

IL_0113_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 208));
				Type_t* L_50 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 209));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_52;
				L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 209));
				V_11 = (bool)((((RuntimeObject*)(Type_t*)L_50) == ((RuntimeObject*)(Type_t*)L_52))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 210));
				bool L_53 = V_11;
				if (!L_53)
				{
					goto IL_013a_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 211));
				String_t* L_54 = V_2;
				RuntimeObject* L_55 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 212));
				bool L_56;
				L_56 = CustomEventData_AddUInt32_m44ECC55B2F900092F5C92A5053B83D0955211946(__this, L_54, ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_55, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 212));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 213));
				goto IL_02b7_1;
			}

IL_013a_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 214));
				Type_t* L_57 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 215));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_59;
				L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 215));
				V_12 = (bool)((((RuntimeObject*)(Type_t*)L_57) == ((RuntimeObject*)(Type_t*)L_59))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 216));
				bool L_60 = V_12;
				if (!L_60)
				{
					goto IL_0161_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 217));
				String_t* L_61 = V_2;
				RuntimeObject* L_62 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 218));
				bool L_63;
				L_63 = CustomEventData_AddInt32_m425314D03ECCAFE49DFDAEFDC50E393C4EAACD66(__this, L_61, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_62, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 218));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 219));
				goto IL_02b7_1;
			}

IL_0161_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 220));
				Type_t* L_64 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 221));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_66;
				L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 221));
				V_13 = (bool)((((RuntimeObject*)(Type_t*)L_64) == ((RuntimeObject*)(Type_t*)L_66))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 222));
				bool L_67 = V_13;
				if (!L_67)
				{
					goto IL_018e_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 223));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 224));
				String_t* L_68;
				L_68 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_1), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 224));
				RuntimeObject* L_69 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 225));
				bool L_70;
				L_70 = CustomEventData_AddUInt32_m44ECC55B2F900092F5C92A5053B83D0955211946(__this, L_68, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_69, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 225));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 226));
				goto IL_02b7_1;
			}

IL_018e_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 227));
				Type_t* L_71 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 228));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_73;
				L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 228));
				V_14 = (bool)((((RuntimeObject*)(Type_t*)L_71) == ((RuntimeObject*)(Type_t*)L_73))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 229));
				bool L_74 = V_14;
				if (!L_74)
				{
					goto IL_01b5_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 230));
				String_t* L_75 = V_2;
				RuntimeObject* L_76 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 231));
				bool L_77;
				L_77 = CustomEventData_AddInt64_m168582B1D88D236B83134237B44A61595F226EA1(__this, L_75, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_76, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 231));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 232));
				goto IL_02b7_1;
			}

IL_01b5_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 233));
				Type_t* L_78 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 234));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_80;
				L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 234));
				V_15 = (bool)((((RuntimeObject*)(Type_t*)L_78) == ((RuntimeObject*)(Type_t*)L_80))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 235));
				bool L_81 = V_15;
				if (!L_81)
				{
					goto IL_01dc_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 236));
				String_t* L_82 = V_2;
				RuntimeObject* L_83 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 237));
				bool L_84;
				L_84 = CustomEventData_AddUInt64_m487A081EB24E08F9A504E82C9FB5448D89190C7B(__this, L_82, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_83, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 237));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 238));
				goto IL_02b7_1;
			}

IL_01dc_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 239));
				Type_t* L_85 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_86 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 240));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_87;
				L_87 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_86, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 240));
				V_16 = (bool)((((RuntimeObject*)(Type_t*)L_85) == ((RuntimeObject*)(Type_t*)L_87))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 241));
				bool L_88 = V_16;
				if (!L_88)
				{
					goto IL_0203_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 242));
				String_t* L_89 = V_2;
				RuntimeObject* L_90 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 243));
				bool L_91;
				L_91 = CustomEventData_AddBool_mFB872845AE96AC3BB7E7ADC9DB297F00CC355747(__this, L_89, ((*(bool*)((bool*)(bool*)UnBox(L_90, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 243));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 244));
				goto IL_02b7_1;
			}

IL_0203_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 245));
				Type_t* L_92 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 246));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_94;
				L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 246));
				V_17 = (bool)((((RuntimeObject*)(Type_t*)L_92) == ((RuntimeObject*)(Type_t*)L_94))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 247));
				bool L_95 = V_17;
				if (!L_95)
				{
					goto IL_0235_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 248));
				String_t* L_96 = V_2;
				RuntimeObject* L_97 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 249));
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_98;
				L_98 = Convert_ToDecimal_m0CECFA6799BA3F8CDB59C34287DD5BAE54CC0EBE(((*(float*)((float*)(float*)UnBox(L_97, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 249));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 250));
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				double L_99;
				L_99 = Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0(L_98, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 250));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 251));
				bool L_100;
				L_100 = CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897(__this, L_96, ((double)L_99), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 251));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 252));
				goto IL_02b7_1;
			}

IL_0235_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 253));
				Type_t* L_101 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 254));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_103;
				L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 254));
				V_18 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 255));
				bool L_104 = V_18;
				if (!L_104)
				{
					goto IL_0259_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 256));
				String_t* L_105 = V_2;
				RuntimeObject* L_106 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 257));
				bool L_107;
				L_107 = CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897(__this, L_105, ((*(double*)((double*)(double*)UnBox(L_106, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 257));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 258));
				goto IL_02b7_1;
			}

IL_0259_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 259));
				Type_t* L_108 = V_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_109 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 260));
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_110;
				L_110 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_109, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 260));
				V_19 = (bool)((((RuntimeObject*)(Type_t*)L_108) == ((RuntimeObject*)(Type_t*)L_110))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 261));
				bool L_111 = V_19;
				if (!L_111)
				{
					goto IL_0288_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 262));
				String_t* L_112 = V_2;
				RuntimeObject* L_113 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 263));
				il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_114;
				L_114 = Convert_ToDecimal_m8328B095A33F951CD914F897D7DB9B0502EA09A9(((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_113, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 263));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 264));
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				double L_115;
				L_115 = Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0(L_114, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 264));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 265));
				bool L_116;
				L_116 = CustomEventData_AddDouble_mE63C2C3EAD92FD83869373A3A3D942641B428897(__this, L_112, ((double)L_115), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 265));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 266));
				goto IL_02b7_1;
			}

IL_0288_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 267));
				Type_t* L_117 = V_4;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 268));
				NullCheck(L_117);
				bool L_118;
				L_118 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_117, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 268));
				V_20 = L_118;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 269));
				bool L_119 = V_20;
				if (!L_119)
				{
					goto IL_02a5_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 270));
				String_t* L_120 = V_2;
				RuntimeObject* L_121 = V_3;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 271));
				NullCheck(L_121);
				String_t* L_122;
				L_122 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_121);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 271));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 272));
				bool L_123;
				L_123 = CustomEventData_AddString_m42AB3534D86CCFCDF54E3F3006B1502C8BA269C9(__this, L_120, L_122, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 272));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 273));
				goto IL_02b7_1;
			}

IL_02a5_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 274));
				Type_t* L_124 = V_4;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 275));
				String_t* L_125;
				L_125 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAF49DA801BC366C22127952F642AE8B5537F02)), L_124, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 275));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 276));
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_126 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_126);
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_126, L_125, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 276));
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_126, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomEventData_AddDictionary_m8277B05DF41A78C3C8BEA8DB0724CABB32769221_RuntimeMethod_var)));
			}

IL_02b7_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 277));
			}

IL_02b8_1:
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 278));
				RuntimeObject* L_127 = V_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 279));
				NullCheck(L_127);
				bool L_128;
				L_128 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_127);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 279));
				if (L_128)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_02d0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02d0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 283));
		V_21 = (bool)1;
		goto IL_02d5;
	}

IL_02d5:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UnityAnalyticsModule + 284));
		bool L_129 = V_21;
		return L_129;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UpdatedEventHandler_Invoke_m4D496F648FD908A8537A35C4A94CBB44294D6D50_inline (UpdatedEventHandler_tB0D5A5BA322FE093894992C29DCF51E7E12579C4* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SessionStateChanged_Invoke_mB9195B30A226CB3E53E470C24FD31E039E5BB4F5_inline (SessionStateChanged_t1180FB66E702B635CAD9316DC661D931277B2A0C* __this, int32_t ___0_sessionState, int64_t ___1_sessionId, int64_t ___2_sessionElapsedTime, bool ___3_sessionChanged, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int64_t, int64_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sessionState, ___1_sessionId, ___2_sessionElapsedTime, ___3_sessionChanged, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityTokenChanged_Invoke_m22D3DA825F0D6E701D050EFA3D35E84DFAC7F8D9_inline (IdentityTokenChanged_tE8CB0DAB5F6E640A847803F582E6CB6237742395* __this, String_t* ___0_token, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_token, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_3_Invoke_mB1AE88F5C5FE161C85EA4A58D5CC535721E01B21_gshared_inline (Action_3_t4730167C8E7EB19F1E0034580790A915D549F6CB* __this, bool ___0_arg1, bool ___1_arg2, int32_t ___2_arg3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, bool, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, ___2_arg3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
