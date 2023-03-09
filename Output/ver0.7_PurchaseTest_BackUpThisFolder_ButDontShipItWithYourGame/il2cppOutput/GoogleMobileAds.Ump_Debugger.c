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
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[33] = 
{
	{ 0, 0 } /* 0x06000001 System.Void GoogleMobileAds.Ump.Api.ConsentDebugSettings::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void GoogleMobileAds.Ump.Api.ConsentForm::.ctor(GoogleMobileAds.Ump.Common.IConsentFormClient) */,
	{ 0, 0 } /* 0x06000003 System.Void GoogleMobileAds.Ump.Api.ConsentForm::Load(System.Action`2<GoogleMobileAds.Ump.Api.ConsentForm,GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0 } /* 0x06000004 System.Void GoogleMobileAds.Ump.Api.ConsentForm::Show(System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0 } /* 0x06000005 System.Void GoogleMobileAds.Ump.Api.ConsentForm/<Load>c__AnonStorey0::.ctor() */,
	{ 0, 0 } /* 0x06000006 System.Void GoogleMobileAds.Ump.Api.ConsentForm/<Load>c__AnonStorey0::<>m__0() */,
	{ 0, 0 } /* 0x06000007 System.Void GoogleMobileAds.Ump.Api.ConsentForm/<Load>c__AnonStorey0::<>m__1(GoogleMobileAds.Ump.Api.FormError) */,
	{ 0, 0 } /* 0x06000008 System.Void GoogleMobileAds.Ump.Api.ConsentInformation::.ctor() */,
	{ 0, 0 } /* 0x06000009 GoogleMobileAds.Ump.Common.IUmpClientFactory GoogleMobileAds.Ump.Api.ConsentInformation::get_ClientFactory() */,
	{ 0, 0 } /* 0x0600000A System.Void GoogleMobileAds.Ump.Api.ConsentInformation::set_ClientFactory(GoogleMobileAds.Ump.Common.IUmpClientFactory) */,
	{ 0, 0 } /* 0x0600000B GoogleMobileAds.Ump.Api.ConsentStatus GoogleMobileAds.Ump.Api.ConsentInformation::get_ConsentStatus() */,
	{ 0, 0 } /* 0x0600000C System.Void GoogleMobileAds.Ump.Api.ConsentInformation::Update(GoogleMobileAds.Ump.Api.ConsentRequestParameters,System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0 } /* 0x0600000D System.Void GoogleMobileAds.Ump.Api.ConsentInformation::Reset() */,
	{ 0, 0 } /* 0x0600000E System.Boolean GoogleMobileAds.Ump.Api.ConsentInformation::IsConsentFormAvailable() */,
	{ 0, 0 } /* 0x0600000F System.Void GoogleMobileAds.Ump.Api.ConsentInformation/<Update>c__AnonStorey0::.ctor() */,
	{ 0, 0 } /* 0x06000010 System.Void GoogleMobileAds.Ump.Api.ConsentInformation/<Update>c__AnonStorey0::<>m__0() */,
	{ 0, 0 } /* 0x06000011 System.Void GoogleMobileAds.Ump.Api.ConsentInformation/<Update>c__AnonStorey0::<>m__1(GoogleMobileAds.Ump.Api.FormError) */,
	{ 0, 0 } /* 0x06000012 System.Void GoogleMobileAds.Ump.Api.ConsentRequestParameters::.ctor() */,
	{ 0, 0 } /* 0x06000013 System.Void GoogleMobileAds.Ump.Api.FormError::.ctor(System.Int32,System.String) */,
	{ 0, 0 } /* 0x06000014 System.Int32 GoogleMobileAds.Ump.Api.FormError::get_ErrorCode() */,
	{ 0, 0 } /* 0x06000015 System.Void GoogleMobileAds.Ump.Api.FormError::set_ErrorCode(System.Int32) */,
	{ 0, 0 } /* 0x06000016 System.String GoogleMobileAds.Ump.Api.FormError::get_Message() */,
	{ 0, 0 } /* 0x06000017 System.Void GoogleMobileAds.Ump.Api.FormError::set_Message(System.String) */,
	{ 0, 0 } /* 0x06000018 System.Void GoogleMobileAds.Ump.Api.Utils::.ctor() */,
	{ 0, 0 } /* 0x06000019 GoogleMobileAds.Ump.Common.IUmpClientFactory GoogleMobileAds.Ump.Api.Utils::GetClientFactory() */,
	{ 0, 0 } /* 0x0600001A System.Void GoogleMobileAds.Ump.Common.IConsentFormClient::Load(System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0 } /* 0x0600001B System.Void GoogleMobileAds.Ump.Common.IConsentFormClient::Show(System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0 } /* 0x0600001C System.Void GoogleMobileAds.Ump.Common.IConsentInformationClient::Reset() */,
	{ 0, 0 } /* 0x0600001D System.Void GoogleMobileAds.Ump.Common.IConsentInformationClient::Update(GoogleMobileAds.Ump.Api.ConsentRequestParameters,System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0 } /* 0x0600001E System.Int32 GoogleMobileAds.Ump.Common.IConsentInformationClient::GetConsentStatus() */,
	{ 0, 0 } /* 0x0600001F System.Boolean GoogleMobileAds.Ump.Common.IConsentInformationClient::IsConsentFormAvailable() */,
	{ 0, 0 } /* 0x06000020 GoogleMobileAds.Ump.Common.IConsentFormClient GoogleMobileAds.Ump.Common.IUmpClientFactory::ConsentFormClient() */,
	{ 0, 0 } /* 0x06000021 GoogleMobileAds.Ump.Common.IConsentInformationClient GoogleMobileAds.Ump.Common.IUmpClientFactory::ConsentInformationClient() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Ump[];
Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Ump[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Ump[];
Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Ump[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
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
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[33] = 
{
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentDebugSettings::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentForm::.ctor(GoogleMobileAds.Ump.Common.IConsentFormClient) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentForm::Load(System.Action`2<GoogleMobileAds.Ump.Api.ConsentForm,GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentForm::Show(System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentForm/<Load>c__AnonStorey0::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentForm/<Load>c__AnonStorey0::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentForm/<Load>c__AnonStorey0::<>m__1(GoogleMobileAds.Ump.Api.FormError) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentInformation::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Ump.Common.IUmpClientFactory GoogleMobileAds.Ump.Api.ConsentInformation::get_ClientFactory() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentInformation::set_ClientFactory(GoogleMobileAds.Ump.Common.IUmpClientFactory) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Ump.Api.ConsentStatus GoogleMobileAds.Ump.Api.ConsentInformation::get_ConsentStatus() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentInformation::Update(GoogleMobileAds.Ump.Api.ConsentRequestParameters,System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentInformation::Reset() */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Ump.Api.ConsentInformation::IsConsentFormAvailable() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentInformation/<Update>c__AnonStorey0::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentInformation/<Update>c__AnonStorey0::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentInformation/<Update>c__AnonStorey0::<>m__1(GoogleMobileAds.Ump.Api.FormError) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.ConsentRequestParameters::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.FormError::.ctor(System.Int32,System.String) */,
	{ 0, 0, 0 } /* System.Int32 GoogleMobileAds.Ump.Api.FormError::get_ErrorCode() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.FormError::set_ErrorCode(System.Int32) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Ump.Api.FormError::get_Message() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.FormError::set_Message(System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Api.Utils::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Ump.Common.IUmpClientFactory GoogleMobileAds.Ump.Api.Utils::GetClientFactory() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Common.IConsentFormClient::Load(System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Common.IConsentFormClient::Show(System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Common.IConsentInformationClient::Reset() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Ump.Common.IConsentInformationClient::Update(GoogleMobileAds.Ump.Api.ConsentRequestParameters,System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>) */,
	{ 0, 0, 0 } /* System.Int32 GoogleMobileAds.Ump.Common.IConsentInformationClient::GetConsentStatus() */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Ump.Common.IConsentInformationClient::IsConsentFormAvailable() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Ump.Common.IConsentFormClient GoogleMobileAds.Ump.Common.IUmpClientFactory::ConsentFormClient() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Ump.Common.IConsentInformationClient GoogleMobileAds.Ump.Common.IUmpClientFactory::ConsentInformationClient() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationGoogleMobileAds_Ump;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationGoogleMobileAds_Ump = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsGoogleMobileAds_Ump,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
