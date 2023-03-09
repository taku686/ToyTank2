#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.String
struct String_t;
// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_Purchasing_WinRTCore[];
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription__ctor_mF87A63C34788D1FE9140FB82C0B6357D57712F79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_ISOCurrencyCode_m9D640896DCB8F9D361C1AE27F731D6A539431BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_consumable_m1AE9A49AEB6879C29DDB7AF4CB5A2D67D3D3BD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_description_m6147401DA122F5EF3FC17E7DBD745E000D72A9AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_platformSpecificID_m2BE91A33BDA885A944E6ABB82BF7F9900F287E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_priceDecimal_m6BA7AC2066EE2118C85BB3AC926060A3A1905C8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_price_m4C5A6EFC3A06202BD15D1FAEC9CC7539D0CAAA64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_receipt_m76168F7E15F726357D5EDF7EEAFF9B0362224866_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_title_m8AFD9BCF98434179779C1DE859B9E39BE6C73D05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_get_transactionID_mD13D83227295190127566968BC9704214363E7D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD6FDA2B63599E8B234C0F9A81D759867223B4A4E 
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Purchasing.Default.WinProductDescription
struct WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974  : public RuntimeObject
{
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<platformSpecificID>k__BackingField
	String_t* ___U3CplatformSpecificIDU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<price>k__BackingField
	String_t* ___U3CpriceU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<title>k__BackingField
	String_t* ___U3CtitleU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<description>k__BackingField
	String_t* ___U3CdescriptionU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<ISOCurrencyCode>k__BackingField
	String_t* ___U3CISOCurrencyCodeU3Ek__BackingField_4;
	// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::<priceDecimal>k__BackingField
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___U3CpriceDecimalU3Ek__BackingField_5;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_6;
	// System.String UnityEngine.Purchasing.Default.WinProductDescription::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::<consumable>k__BackingField
	bool ___U3CconsumableU3Ek__BackingField_8;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

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

// System.Void

// System.Void

// UnityEngine.Purchasing.Default.WinProductDescription

// UnityEngine.Purchasing.Default.WinProductDescription
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, bool ___0_value, const RuntimeMethod* method) ;
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
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_platformSpecificID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_platformSpecificID_m2BE91A33BDA885A944E6ABB82BF7F9900F287E67 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_platformSpecificID_m2BE91A33BDA885A944E6ABB82BF7F9900F287E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_platformSpecificID_m2BE91A33BDA885A944E6ABB82BF7F9900F287E67_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 1));
	{
		// public string platformSpecificID { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 2));
		String_t* L_0 = __this->___U3CplatformSpecificIDU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_platformSpecificID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 4));
	{
		// public string platformSpecificID { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 5));
		String_t* L_0 = ___0_value;
		__this->___U3CplatformSpecificIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_price()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_price_m4C5A6EFC3A06202BD15D1FAEC9CC7539D0CAAA64 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_price_m4C5A6EFC3A06202BD15D1FAEC9CC7539D0CAAA64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_price_m4C5A6EFC3A06202BD15D1FAEC9CC7539D0CAAA64_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 6));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 7));
	{
		// public string price { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 8));
		String_t* L_0 = __this->___U3CpriceU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_price(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 9));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 10));
	{
		// public string price { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 11));
		String_t* L_0 = ___0_value;
		__this->___U3CpriceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpriceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_title_m8AFD9BCF98434179779C1DE859B9E39BE6C73D05 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_title_m8AFD9BCF98434179779C1DE859B9E39BE6C73D05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_title_m8AFD9BCF98434179779C1DE859B9E39BE6C73D05_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 12));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 13));
	{
		// public string title { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 14));
		String_t* L_0 = __this->___U3CtitleU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 15));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 16));
	{
		// public string title { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 17));
		String_t* L_0 = ___0_value;
		__this->___U3CtitleU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtitleU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_description_m6147401DA122F5EF3FC17E7DBD745E000D72A9AF (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_description_m6147401DA122F5EF3FC17E7DBD745E000D72A9AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_description_m6147401DA122F5EF3FC17E7DBD745E000D72A9AF_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 19));
	{
		// public string description { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 20));
		String_t* L_0 = __this->___U3CdescriptionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 21));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 22));
	{
		// public string description { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 23));
		String_t* L_0 = ___0_value;
		__this->___U3CdescriptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdescriptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_ISOCurrencyCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_ISOCurrencyCode_m9D640896DCB8F9D361C1AE27F731D6A539431BC0 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_ISOCurrencyCode_m9D640896DCB8F9D361C1AE27F731D6A539431BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_ISOCurrencyCode_m9D640896DCB8F9D361C1AE27F731D6A539431BC0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 24));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 25));
	{
		// public string ISOCurrencyCode { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 26));
		String_t* L_0 = __this->___U3CISOCurrencyCodeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_ISOCurrencyCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 28));
	{
		// public string ISOCurrencyCode { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 29));
		String_t* L_0 = ___0_value;
		__this->___U3CISOCurrencyCodeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Decimal UnityEngine.Purchasing.Default.WinProductDescription::get_priceDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F WinProductDescription_get_priceDecimal_m6BA7AC2066EE2118C85BB3AC926060A3A1905C8B (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_priceDecimal_m6BA7AC2066EE2118C85BB3AC926060A3A1905C8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_priceDecimal_m6BA7AC2066EE2118C85BB3AC926060A3A1905C8B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 30));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 31));
	{
		// public decimal priceDecimal { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 32));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = __this->___U3CpriceDecimalU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_priceDecimal(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 34));
	{
		// public decimal priceDecimal { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 35));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		__this->___U3CpriceDecimalU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_receipt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_receipt_m76168F7E15F726357D5EDF7EEAFF9B0362224866 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_receipt_m76168F7E15F726357D5EDF7EEAFF9B0362224866_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_receipt_m76168F7E15F726357D5EDF7EEAFF9B0362224866_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 37));
	{
		// public string receipt { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 38));
		String_t* L_0 = __this->___U3CreceiptU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_receipt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 39));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 40));
	{
		// public string receipt { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 41));
		String_t* L_0 = ___0_value;
		__this->___U3CreceiptU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceiptU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Purchasing.Default.WinProductDescription::get_transactionID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WinProductDescription_get_transactionID_mD13D83227295190127566968BC9704214363E7D4 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_transactionID_mD13D83227295190127566968BC9704214363E7D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_transactionID_mD13D83227295190127566968BC9704214363E7D4_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 42));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 43));
	{
		// public string transactionID { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 44));
		String_t* L_0 = __this->___U3CtransactionIDU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_transactionID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 45));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 46));
	{
		// public string transactionID { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 47));
		String_t* L_0 = ___0_value;
		__this->___U3CtransactionIDU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransactionIDU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.Purchasing.Default.WinProductDescription::get_consumable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinProductDescription_get_consumable_m1AE9A49AEB6879C29DDB7AF4CB5A2D67D3D3BD85 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_get_consumable_m1AE9A49AEB6879C29DDB7AF4CB5A2D67D3D3BD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_get_consumable_m1AE9A49AEB6879C29DDB7AF4CB5A2D67D3D3BD85_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 49));
	{
		// public bool consumable { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 50));
		bool L_0 = __this->___U3CconsumableU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::set_consumable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 51));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 52));
	{
		// public bool consumable { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 53));
		bool L_0 = ___0_value;
		__this->___U3CconsumableU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void UnityEngine.Purchasing.Default.WinProductDescription::.ctor(System.String,System.String,System.String,System.String,System.String,System.Decimal,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinProductDescription__ctor_mF87A63C34788D1FE9140FB82C0B6357D57712F79 (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_id, String_t* ___1_price, String_t* ___2_title, String_t* ___3_description, String_t* ___4_isoCode, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___5_priceD, String_t* ___6_receipt, String_t* ___7_transactionId, bool ___8_consumable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription__ctor_mF87A63C34788D1FE9140FB82C0B6357D57712F79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_id), (&___1_price), (&___2_title), (&___3_description), (&___4_isoCode), (&___5_priceD), (&___6_receipt), (&___7_transactionId), (&___8_consumable));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription__ctor_mF87A63C34788D1FE9140FB82C0B6357D57712F79_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 54));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 55));
	{
		// public WinProductDescription(string id, string price, string title, string description,
		//                            string isoCode, decimal priceD, string receipt = null, string transactionId = null, bool consumable = false)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 56));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 57));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 57));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 58));
		// platformSpecificID = id;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 59));
		String_t* L_0 = ___0_id;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 60));
		WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_inline(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 60));
		// this.price = price;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 61));
		String_t* L_1 = ___1_price;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 62));
		WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_inline(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 62));
		// this.title = title;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 63));
		String_t* L_2 = ___2_title;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 64));
		WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_inline(__this, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 64));
		// this.description = description;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 65));
		String_t* L_3 = ___3_description;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 66));
		WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_inline(__this, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 66));
		// ISOCurrencyCode = isoCode;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 67));
		String_t* L_4 = ___4_isoCode;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 68));
		WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_inline(__this, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 68));
		// priceDecimal = priceD;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 69));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ___5_priceD;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 70));
		WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_inline(__this, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 70));
		// this.receipt = receipt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 71));
		String_t* L_6 = ___6_receipt;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 72));
		WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_inline(__this, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 72));
		// transactionID = transactionId;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 73));
		String_t* L_7 = ___7_transactionId;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 74));
		WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_inline(__this, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 74));
		// this.consumable = consumable;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 75));
		bool L_8 = ___8_consumable;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 76));
		WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_inline(__this, L_8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 76));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 77));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_platformSpecificID_m794A68A614B5CD27330552592001C95A6653C8CA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 3));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 4));
	{
		// public string platformSpecificID { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 5));
		String_t* L_0 = ___0_value;
		__this->___U3CplatformSpecificIDU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CplatformSpecificIDU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_price_m96AE7CBF552F731D2F78F7F40E81043DE3E5C226_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 9));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 10));
	{
		// public string price { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 11));
		String_t* L_0 = ___0_value;
		__this->___U3CpriceU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpriceU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_title_m6B40401D075FE55E40B1EDD27B26A635B4941DBD_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 15));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 16));
	{
		// public string title { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 17));
		String_t* L_0 = ___0_value;
		__this->___U3CtitleU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtitleU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_description_m2FE4B17A0C40EF679A894CCD1638936D4D26CE6B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 21));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 22));
	{
		// public string description { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 23));
		String_t* L_0 = ___0_value;
		__this->___U3CdescriptionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdescriptionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_ISOCurrencyCode_m8EC42C553F0DA8DF4E32F9FADEDDA80CB1630908_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 28));
	{
		// public string ISOCurrencyCode { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 29));
		String_t* L_0 = ___0_value;
		__this->___U3CISOCurrencyCodeU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CISOCurrencyCodeU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_priceDecimal_mF0588EC4E45446E1317F36E529CFB0C3D8F09B3B_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 33));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 34));
	{
		// public decimal priceDecimal { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 35));
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___0_value;
		__this->___U3CpriceDecimalU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_receipt_m0BBA3B8AACE6884D4F079D85B7BC28283C651D40_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 39));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 40));
	{
		// public string receipt { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 41));
		String_t* L_0 = ___0_value;
		__this->___U3CreceiptU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreceiptU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_transactionID_mD1D0774BACC0D8E16A25B499E21FCC0FFEB45E37_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 45));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 46));
	{
		// public string transactionID { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 47));
		String_t* L_0 = ___0_value;
		__this->___U3CtransactionIDU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtransactionIDU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_inline (WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinProductDescription_tBF22B14F8B3F92A3EEB31026CBD2E29BE31F9974_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, WinProductDescription_set_consumable_m04D7CAB123D10999E1806C61DE8A6F1E9C8F12A1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 51));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 52));
	{
		// public bool consumable { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_Purchasing_WinRTCore + 53));
		bool L_0 = ___0_value;
		__this->___U3CconsumableU3Ek__BackingField_8 = L_0;
		return;
	}
}
