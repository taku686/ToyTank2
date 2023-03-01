#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[115] = 
{
	{ 0, 0 } /* 0x06000001 System.Void GoogleMobileAds.Api.AdRequest::.cctor() */,
	{ 0, 0 } /* 0x06000002 System.Void GoogleMobileAds.Api.AdRequest::.ctor(GoogleMobileAds.Api.AdRequest/Builder) */,
	{ 0, 0 } /* 0x06000003 System.String GoogleMobileAds.Api.AdRequest::get_Version() */,
	{ 0, 0 } /* 0x06000004 System.Void GoogleMobileAds.Api.AdRequest::set_Version(System.String) */,
	{ 0, 0 } /* 0x06000005 System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::get_Keywords() */,
	{ 0, 0 } /* 0x06000006 System.Void GoogleMobileAds.Api.AdRequest::set_Keywords(System.Collections.Generic.HashSet`1<System.String>) */,
	{ 0, 0 } /* 0x06000007 System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::get_Extras() */,
	{ 0, 0 } /* 0x06000008 System.Void GoogleMobileAds.Api.AdRequest::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>) */,
	{ 0, 0 } /* 0x06000009 System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::get_MediationExtras() */,
	{ 0, 0 } /* 0x0600000A System.Void GoogleMobileAds.Api.AdRequest::set_MediationExtras(System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>) */,
	{ 0, 0 } /* 0x0600000B System.String GoogleMobileAds.Api.AdRequest::BuildVersionString(System.String) */,
	{ 0, 0 } /* 0x0600000C System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor() */,
	{ 0, 0 } /* 0x0600000D System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords() */,
	{ 0, 0 } /* 0x0600000E System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Keywords(System.Collections.Generic.HashSet`1<System.String>) */,
	{ 0, 0 } /* 0x0600000F System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras() */,
	{ 0, 0 } /* 0x06000010 System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>) */,
	{ 0, 0 } /* 0x06000011 System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::get_MediationExtras() */,
	{ 0, 0 } /* 0x06000012 System.Void GoogleMobileAds.Api.AdRequest/Builder::set_MediationExtras(System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>) */,
	{ 0, 0 } /* 0x06000013 GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String) */,
	{ 0, 0 } /* 0x06000014 GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build() */,
	{ 0, 0 } /* 0x06000015 GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddMediationExtras(GoogleMobileAds.Api.Mediation.MediationExtras) */,
	{ 0, 0 } /* 0x06000016 GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String) */,
	{ 0, 0 } /* 0x06000017 System.Void GoogleMobileAds.Api.AdSize::.ctor(System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000018 System.Void GoogleMobileAds.Api.AdSize::.ctor(System.Int32,System.Int32,GoogleMobileAds.Api.AdSize/Type) */,
	{ 0, 0 } /* 0x06000019 GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::CreateAnchoredAdaptiveAdSize(System.Int32,GoogleMobileAds.Api.Orientation) */,
	{ 0, 0 } /* 0x0600001A GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32) */,
	{ 0, 0 } /* 0x0600001B GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32) */,
	{ 0, 0 } /* 0x0600001C GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32) */,
	{ 0, 0 } /* 0x0600001D System.Int32 GoogleMobileAds.Api.AdSize::get_Width() */,
	{ 0, 0 } /* 0x0600001E System.Int32 GoogleMobileAds.Api.AdSize::get_Height() */,
	{ 0, 0 } /* 0x0600001F GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::get_AdType() */,
	{ 0, 0 } /* 0x06000020 GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::get_Orientation() */,
	{ 0, 0 } /* 0x06000021 System.Boolean GoogleMobileAds.Api.AdSize::Equals(System.Object) */,
	{ 0, 0 } /* 0x06000022 System.Boolean GoogleMobileAds.Api.AdSize::op_Equality(GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdSize) */,
	{ 0, 0 } /* 0x06000023 System.Boolean GoogleMobileAds.Api.AdSize::op_Inequality(GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdSize) */,
	{ 0, 0 } /* 0x06000024 System.Int32 GoogleMobileAds.Api.AdSize::GetHashCode() */,
	{ 0, 0 } /* 0x06000025 System.Void GoogleMobileAds.Api.AdSize::.cctor() */,
	{ 0, 0 } /* 0x06000026 System.Void GoogleMobileAds.Api.AdValue::.ctor() */,
	{ 0, 0 } /* 0x06000027 GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::get_Precision() */,
	{ 0, 0 } /* 0x06000028 System.Void GoogleMobileAds.Api.AdValue::set_Precision(GoogleMobileAds.Api.AdValue/PrecisionType) */,
	{ 0, 0 } /* 0x06000029 System.Int64 GoogleMobileAds.Api.AdValue::get_Value() */,
	{ 0, 0 } /* 0x0600002A System.Void GoogleMobileAds.Api.AdValue::set_Value(System.Int64) */,
	{ 0, 0 } /* 0x0600002B System.String GoogleMobileAds.Api.AdValue::get_CurrencyCode() */,
	{ 0, 0 } /* 0x0600002C System.Void GoogleMobileAds.Api.AdValue::set_CurrencyCode(System.String) */,
	{ 0, 0 } /* 0x0600002D System.Void GoogleMobileAds.Api.AdValueEventArgs::.ctor() */,
	{ 0, 0 } /* 0x0600002E GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::get_AdValue() */,
	{ 0, 0 } /* 0x0600002F System.Void GoogleMobileAds.Api.AdValueEventArgs::set_AdValue(GoogleMobileAds.Api.AdValue) */,
	{ 0, 0 } /* 0x06000030 System.Void GoogleMobileAds.Api.AdapterStatus::.ctor(GoogleMobileAds.Api.AdapterState,System.String,System.Int32) */,
	{ 0, 0 } /* 0x06000031 GoogleMobileAds.Api.AdapterState GoogleMobileAds.Api.AdapterStatus::get_InitializationState() */,
	{ 0, 0 } /* 0x06000032 System.Void GoogleMobileAds.Api.AdapterStatus::set_InitializationState(GoogleMobileAds.Api.AdapterState) */,
	{ 0, 0 } /* 0x06000033 System.String GoogleMobileAds.Api.AdapterStatus::get_Description() */,
	{ 0, 0 } /* 0x06000034 System.Void GoogleMobileAds.Api.AdapterStatus::set_Description(System.String) */,
	{ 0, 0 } /* 0x06000035 System.Int32 GoogleMobileAds.Api.AdapterStatus::get_Latency() */,
	{ 0, 0 } /* 0x06000036 System.Void GoogleMobileAds.Api.AdapterStatus::set_Latency(System.Int32) */,
	{ 0, 0 } /* 0x06000037 System.Void GoogleMobileAds.Api.MaxAdContentRating::.ctor(System.String) */,
	{ 0, 0 } /* 0x06000038 GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_G() */,
	{ 0, 0 } /* 0x06000039 GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_PG() */,
	{ 0, 0 } /* 0x0600003A GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_T() */,
	{ 0, 0 } /* 0x0600003B GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_MA() */,
	{ 0, 0 } /* 0x0600003C GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_Unspecified() */,
	{ 0, 0 } /* 0x0600003D GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::ToMaxAdContentRating(System.String) */,
	{ 0, 0 } /* 0x0600003E System.String GoogleMobileAds.Api.MaxAdContentRating::get_Value() */,
	{ 0, 0 } /* 0x0600003F System.Void GoogleMobileAds.Api.MaxAdContentRating::set_Value(System.String) */,
	{ 0, 0 } /* 0x06000040 System.Void GoogleMobileAds.Api.RequestConfiguration::.ctor(GoogleMobileAds.Api.RequestConfiguration/Builder) */,
	{ 0, 0 } /* 0x06000041 GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::get_MaxAdContentRating() */,
	{ 0, 0 } /* 0x06000042 System.Void GoogleMobileAds.Api.RequestConfiguration::set_MaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating) */,
	{ 0, 0 } /* 0x06000043 System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::get_TagForChildDirectedTreatment() */,
	{ 0, 0 } /* 0x06000044 System.Void GoogleMobileAds.Api.RequestConfiguration::set_TagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>) */,
	{ 0, 0 } /* 0x06000045 System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::get_TagForUnderAgeOfConsent() */,
	{ 0, 0 } /* 0x06000046 System.Void GoogleMobileAds.Api.RequestConfiguration::set_TagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>) */,
	{ 0, 0 } /* 0x06000047 System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::get_TestDeviceIds() */,
	{ 0, 0 } /* 0x06000048 System.Void GoogleMobileAds.Api.RequestConfiguration::set_TestDeviceIds(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0 } /* 0x06000049 System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration::get_SameAppKeyEnabled() */,
	{ 0, 0 } /* 0x0600004A System.Void GoogleMobileAds.Api.RequestConfiguration::set_SameAppKeyEnabled(System.Nullable`1<System.Boolean>) */,
	{ 0, 0 } /* 0x0600004B GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration::ToBuilder() */,
	{ 0, 0 } /* 0x0600004C System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::.ctor() */,
	{ 0, 0 } /* 0x0600004D GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration/Builder::get_MaxAdContentRating() */,
	{ 0, 0 } /* 0x0600004E System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_MaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating) */,
	{ 0, 0 } /* 0x0600004F System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TagForChildDirectedTreatment() */,
	{ 0, 0 } /* 0x06000050 System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>) */,
	{ 0, 0 } /* 0x06000051 System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TagForUnderAgeOfConsent() */,
	{ 0, 0 } /* 0x06000052 System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>) */,
	{ 0, 0 } /* 0x06000053 System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TestDeviceIds() */,
	{ 0, 0 } /* 0x06000054 System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TestDeviceIds(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0 } /* 0x06000055 System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration/Builder::get_SameAppKeyEnabled() */,
	{ 0, 0 } /* 0x06000056 System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_SameAppKeyEnabled(System.Nullable`1<System.Boolean>) */,
	{ 0, 0 } /* 0x06000057 GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetMaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating) */,
	{ 0, 0 } /* 0x06000058 GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>) */,
	{ 0, 0 } /* 0x06000059 GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>) */,
	{ 0, 0 } /* 0x0600005A GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTestDeviceIds(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0 } /* 0x0600005B GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetSameAppKeyEnabled(System.Boolean) */,
	{ 0, 0 } /* 0x0600005C GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.RequestConfiguration/Builder::build() */,
	{ 0, 0 } /* 0x0600005D System.Void GoogleMobileAds.Api.Reward::.ctor() */,
	{ 0, 0 } /* 0x0600005E System.String GoogleMobileAds.Api.Reward::get_Type() */,
	{ 0, 0 } /* 0x0600005F System.Void GoogleMobileAds.Api.Reward::set_Type(System.String) */,
	{ 0, 0 } /* 0x06000060 System.Double GoogleMobileAds.Api.Reward::get_Amount() */,
	{ 0, 0 } /* 0x06000061 System.Void GoogleMobileAds.Api.Reward::set_Amount(System.Double) */,
	{ 0, 0 } /* 0x06000062 System.Void GoogleMobileAds.Api.ServerSideVerificationOptions::.ctor(GoogleMobileAds.Api.ServerSideVerificationOptions/Builder) */,
	{ 0, 0 } /* 0x06000063 System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_UserId() */,
	{ 0, 0 } /* 0x06000064 System.Void GoogleMobileAds.Api.ServerSideVerificationOptions::set_UserId(System.String) */,
	{ 0, 0 } /* 0x06000065 System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_CustomData() */,
	{ 0, 0 } /* 0x06000066 System.Void GoogleMobileAds.Api.ServerSideVerificationOptions::set_CustomData(System.String) */,
	{ 0, 0 } /* 0x06000067 System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::.ctor() */,
	{ 0, 0 } /* 0x06000068 System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::get_UserId() */,
	{ 0, 0 } /* 0x06000069 System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_UserId(System.String) */,
	{ 0, 0 } /* 0x0600006A System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::get_CustomData() */,
	{ 0, 0 } /* 0x0600006B System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_CustomData(System.String) */,
	{ 0, 0 } /* 0x0600006C GoogleMobileAds.Api.ServerSideVerificationOptions/Builder GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::SetUserId(System.String) */,
	{ 0, 0 } /* 0x0600006D GoogleMobileAds.Api.ServerSideVerificationOptions/Builder GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::SetCustomData(System.String) */,
	{ 0, 0 } /* 0x0600006E GoogleMobileAds.Api.ServerSideVerificationOptions GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::Build() */,
	{ 0, 0 } /* 0x0600006F System.Void GoogleMobileAds.Api.Mediation.MediationExtras::.ctor() */,
	{ 0, 0 } /* 0x06000070 System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::get_Extras() */,
	{ 0, 0 } /* 0x06000071 System.Void GoogleMobileAds.Api.Mediation.MediationExtras::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>) */,
	{ 0, 0 } /* 0x06000072 System.String GoogleMobileAds.Api.Mediation.MediationExtras::get_AndroidMediationExtraBuilderClassName() */,
	{ 0, 0 } /* 0x06000073 System.String GoogleMobileAds.Api.Mediation.MediationExtras::get_IOSMediationExtraBuilderClassName() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Core[];
Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Core[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Core[];
Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Core[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[115] = 
{
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest::.cctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest::.ctor(GoogleMobileAds.Api.AdRequest/Builder) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.AdRequest::get_Version() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest::set_Version(System.String) */,
	{ 0, 0, 0 } /* System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::get_Keywords() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest::set_Keywords(System.Collections.Generic.HashSet`1<System.String>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::get_Extras() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::get_MediationExtras() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest::set_MediationExtras(System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.AdRequest::BuildVersionString(System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest/Builder::.ctor() */,
	{ 0, 0, 0 } /* System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Keywords() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Keywords(System.Collections.Generic.HashSet`1<System.String>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest/Builder::get_Extras() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest/Builder::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest/Builder::get_MediationExtras() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdRequest/Builder::set_MediationExtras(System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddKeyword(System.String) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdRequest GoogleMobileAds.Api.AdRequest/Builder::Build() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddMediationExtras(GoogleMobileAds.Api.Mediation.MediationExtras) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdRequest/Builder GoogleMobileAds.Api.AdRequest/Builder::AddExtra(System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdSize::.ctor(System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdSize::.ctor(System.Int32,System.Int32,GoogleMobileAds.Api.AdSize/Type) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::CreateAnchoredAdaptiveAdSize(System.Int32,GoogleMobileAds.Api.Orientation) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetLandscapeAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetPortraitAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdSize GoogleMobileAds.Api.AdSize::GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 GoogleMobileAds.Api.AdSize::get_Width() */,
	{ 0, 0, 0 } /* System.Int32 GoogleMobileAds.Api.AdSize::get_Height() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdSize/Type GoogleMobileAds.Api.AdSize::get_AdType() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.Orientation GoogleMobileAds.Api.AdSize::get_Orientation() */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Api.AdSize::Equals(System.Object) */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Api.AdSize::op_Equality(GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdSize) */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Api.AdSize::op_Inequality(GoogleMobileAds.Api.AdSize,GoogleMobileAds.Api.AdSize) */,
	{ 0, 0, 0 } /* System.Int32 GoogleMobileAds.Api.AdSize::GetHashCode() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdSize::.cctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdValue::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdValue/PrecisionType GoogleMobileAds.Api.AdValue::get_Precision() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdValue::set_Precision(GoogleMobileAds.Api.AdValue/PrecisionType) */,
	{ 0, 0, 0 } /* System.Int64 GoogleMobileAds.Api.AdValue::get_Value() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdValue::set_Value(System.Int64) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.AdValue::get_CurrencyCode() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdValue::set_CurrencyCode(System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdValueEventArgs::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::get_AdValue() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdValueEventArgs::set_AdValue(GoogleMobileAds.Api.AdValue) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdapterStatus::.ctor(GoogleMobileAds.Api.AdapterState,System.String,System.Int32) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdapterState GoogleMobileAds.Api.AdapterStatus::get_InitializationState() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdapterStatus::set_InitializationState(GoogleMobileAds.Api.AdapterState) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.AdapterStatus::get_Description() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdapterStatus::set_Description(System.String) */,
	{ 0, 0, 0 } /* System.Int32 GoogleMobileAds.Api.AdapterStatus::get_Latency() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdapterStatus::set_Latency(System.Int32) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.MaxAdContentRating::.ctor(System.String) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_G() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_PG() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_T() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_MA() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::get_Unspecified() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.MaxAdContentRating::ToMaxAdContentRating(System.String) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.MaxAdContentRating::get_Value() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.MaxAdContentRating::set_Value(System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration::.ctor(GoogleMobileAds.Api.RequestConfiguration/Builder) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration::get_MaxAdContentRating() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration::set_MaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating) */,
	{ 0, 0, 0 } /* System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration::get_TagForChildDirectedTreatment() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration::set_TagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>) */,
	{ 0, 0, 0 } /* System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration::get_TagForUnderAgeOfConsent() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration::set_TagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration::get_TestDeviceIds() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration::set_TestDeviceIds(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0, 0 } /* System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration::get_SameAppKeyEnabled() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration::set_SameAppKeyEnabled(System.Nullable`1<System.Boolean>) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration::ToBuilder() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.MaxAdContentRating GoogleMobileAds.Api.RequestConfiguration/Builder::get_MaxAdContentRating() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_MaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating) */,
	{ 0, 0, 0 } /* System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TagForChildDirectedTreatment() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>) */,
	{ 0, 0, 0 } /* System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TagForUnderAgeOfConsent() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>) */,
	{ 0, 0, 0 } /* System.Collections.Generic.List`1<System.String> GoogleMobileAds.Api.RequestConfiguration/Builder::get_TestDeviceIds() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_TestDeviceIds(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0, 0 } /* System.Nullable`1<System.Boolean> GoogleMobileAds.Api.RequestConfiguration/Builder::get_SameAppKeyEnabled() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.RequestConfiguration/Builder::set_SameAppKeyEnabled(System.Nullable`1<System.Boolean>) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetMaxAdContentRating(GoogleMobileAds.Api.MaxAdContentRating) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForChildDirectedTreatment(System.Nullable`1<GoogleMobileAds.Api.TagForChildDirectedTreatment>) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTagForUnderAgeOfConsent(System.Nullable`1<GoogleMobileAds.Api.TagForUnderAgeOfConsent>) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetTestDeviceIds(System.Collections.Generic.List`1<System.String>) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RequestConfiguration/Builder GoogleMobileAds.Api.RequestConfiguration/Builder::SetSameAppKeyEnabled(System.Boolean) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RequestConfiguration GoogleMobileAds.Api.RequestConfiguration/Builder::build() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.Reward::.ctor() */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.Reward::get_Type() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.Reward::set_Type(System.String) */,
	{ 0, 0, 0 } /* System.Double GoogleMobileAds.Api.Reward::get_Amount() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.Reward::set_Amount(System.Double) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.ServerSideVerificationOptions::.ctor(GoogleMobileAds.Api.ServerSideVerificationOptions/Builder) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_UserId() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.ServerSideVerificationOptions::set_UserId(System.String) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.ServerSideVerificationOptions::get_CustomData() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.ServerSideVerificationOptions::set_CustomData(System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::.ctor() */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::get_UserId() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_UserId(System.String) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::get_CustomData() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::set_CustomData(System.String) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.ServerSideVerificationOptions/Builder GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::SetUserId(System.String) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.ServerSideVerificationOptions/Builder GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::SetCustomData(System.String) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.ServerSideVerificationOptions GoogleMobileAds.Api.ServerSideVerificationOptions/Builder::Build() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.Mediation.MediationExtras::.ctor() */,
	{ 0, 0, 0 } /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.Mediation.MediationExtras::get_Extras() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.Mediation.MediationExtras::set_Extras(System.Collections.Generic.Dictionary`2<System.String,System.String>) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.Mediation.MediationExtras::get_AndroidMediationExtraBuilderClassName() */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Api.Mediation.MediationExtras::get_IOSMediationExtraBuilderClassName() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationGoogleMobileAds_Core;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationGoogleMobileAds_Core = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsGoogleMobileAds_Core,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
