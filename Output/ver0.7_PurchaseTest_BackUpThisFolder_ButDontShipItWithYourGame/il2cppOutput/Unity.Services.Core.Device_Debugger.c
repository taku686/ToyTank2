#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[7] = 
{
	{ 43573, 0,  1 } /*tableIndex: 0 */,
	{ 43573, 1,  1 } /*tableIndex: 1 */,
	{ 31956, 2,  5 } /*tableIndex: 2 */,
	{ 31961, 3,  8 } /*tableIndex: 3 */,
	{ 31961, 4,  10 } /*tableIndex: 4 */,
	{ 31961, 4,  13 } /*tableIndex: 5 */,
	{ 31961, 5,  14 } /*tableIndex: 6 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[6] = 
{
	"analyticsId",
	"adsId",
	"unityPlayer",
	"activity",
	"preferences",
	"editor",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[23] = 
{
	{ 0, 0 } /* 0x06000001 System.Void Unity.Services.Core.Device.InstallationId::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.String Unity.Services.Core.Device.InstallationId::GetOrCreateIdentifier() */,
	{ 0, 2 } /* 0x06000003 System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier() */,
	{ 0, 0 } /* 0x06000004 System.String Unity.Services.Core.Device.InstallationId::ReadIdentifierFromFile() */,
	{ 0, 0 } /* 0x06000005 System.Void Unity.Services.Core.Device.InstallationId::WriteIdentifierToFile(System.String) */,
	{ 0, 0 } /* 0x06000006 System.String Unity.Services.Core.Device.InstallationId::GenerateGuid() */,
	{ 2, 1 } /* 0x06000007 UnityEngine.AndroidJavaObject Unity.Services.Core.Device.AndroidUtils::GetUnityActivity() */,
	{ 0, 0 } /* 0x06000008 UnityEngine.AndroidJavaObject Unity.Services.Core.Device.AndroidUtils::GetSharedPreferences(UnityEngine.AndroidJavaObject,System.String,System.Int32) */,
	{ 3, 1 } /* 0x06000009 UnityEngine.AndroidJavaObject Unity.Services.Core.Device.AndroidUtils::GetSharedPreferences(System.String,System.Int32) */,
	{ 4, 1 } /* 0x0600000A System.String Unity.Services.Core.Device.AndroidUtils::SharedPreferencesGetString(System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x0600000B System.String Unity.Services.Core.Device.AndroidUtils::SharedPreferencesGetString(UnityEngine.AndroidJavaObject,System.String,System.String) */,
	{ 5, 1 } /* 0x0600000C System.Void Unity.Services.Core.Device.AndroidUtils::SharedPreferencesPutString(System.String,System.String,System.String) */,
	{ 6, 1 } /* 0x0600000D System.Void Unity.Services.Core.Device.AndroidUtils::SharedPreferencesPutString(UnityEngine.AndroidJavaObject,System.String,System.String) */,
	{ 0, 0 } /* 0x0600000E System.String Unity.Services.Core.Device.IUserIdentifierProvider::get_UserId() */,
	{ 0, 0 } /* 0x0600000F System.Void Unity.Services.Core.Device.IUserIdentifierProvider::set_UserId(System.String) */,
	{ 0, 0 } /* 0x06000010 System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_UserId() */,
	{ 0, 0 } /* 0x06000011 System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_UserId(System.String) */,
	{ 0, 0 } /* 0x06000012 System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_IdentifierForInstallAndroid() */,
	{ 0, 0 } /* 0x06000013 System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_IdentifierForInstallAndroid(System.String) */,
	{ 0, 0 } /* 0x06000014 System.Void Unity.Services.Core.Device.UnityAdsIdentifier::.ctor() */,
	{ 0, 0 } /* 0x06000015 System.String Unity.Services.Core.Device.UnityAnalyticsIdentifier::get_UserId() */,
	{ 0, 0 } /* 0x06000016 System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::set_UserId(System.String) */,
	{ 0, 0 } /* 0x06000017 System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Device[];
Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Device[214] = 
{
	{ 82561, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 82561, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 82561, 1, 16, 16, 9, 32, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 82561, 1, 16, 16, 9, 32, 1, kSequencePointKind_StepOut, 0, 3 } /* seqPointIndex: 3 */,
	{ 82561, 1, 17, 17, 9, 10, 7, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 82561, 1, 18, 18, 13, 67, 8, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 82561, 1, 18, 18, 13, 67, 9, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 82561, 1, 19, 19, 13, 79, 19, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 82561, 1, 19, 19, 13, 79, 20, kSequencePointKind_StepOut, 0, 8 } /* seqPointIndex: 8 */,
	{ 82561, 1, 20, 20, 9, 10, 30, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 82562, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 82562, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 82562, 1, 23, 23, 9, 10, 0, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 82562, 1, 24, 24, 13, 50, 1, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 82562, 1, 24, 24, 13, 50, 7, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 82562, 1, 24, 24, 0, 0, 13, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 82562, 1, 25, 25, 17, 36, 16, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 82562, 1, 25, 25, 17, 36, 17, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 82562, 1, 27, 27, 13, 31, 23, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 82562, 1, 28, 28, 9, 10, 32, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 82563, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 82563, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 82563, 1, 31, 31, 9, 10, 0, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 82563, 1, 32, 32, 13, 51, 1, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 82563, 1, 32, 32, 13, 51, 2, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 82563, 1, 33, 33, 13, 51, 12, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 82563, 1, 33, 33, 13, 51, 18, kSequencePointKind_StepOut, 0, 26 } /* seqPointIndex: 26 */,
	{ 82563, 1, 33, 33, 0, 0, 27, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 82563, 1, 34, 34, 17, 24, 30, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 82563, 1, 36, 36, 13, 71, 35, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 82563, 1, 36, 36, 13, 71, 41, kSequencePointKind_StepOut, 0, 30 } /* seqPointIndex: 30 */,
	{ 82563, 1, 37, 37, 13, 59, 47, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 82563, 1, 37, 37, 13, 59, 53, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 82563, 1, 39, 39, 13, 52, 59, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 82563, 1, 39, 39, 13, 52, 60, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 82563, 1, 39, 39, 0, 0, 69, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 82563, 1, 40, 40, 13, 14, 72, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 82563, 1, 41, 41, 17, 42, 73, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 82563, 1, 42, 42, 13, 14, 80, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 82563, 1, 42, 42, 0, 0, 81, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 82563, 1, 43, 43, 18, 51, 83, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 82563, 1, 43, 43, 18, 51, 84, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 82563, 1, 43, 43, 0, 0, 94, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 82563, 1, 44, 44, 13, 14, 98, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 82563, 1, 45, 45, 17, 36, 99, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 82563, 1, 46, 46, 13, 14, 106, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 82563, 1, 46, 46, 0, 0, 107, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 82563, 1, 48, 48, 13, 14, 109, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 82563, 1, 49, 49, 17, 45, 110, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 82563, 1, 49, 49, 17, 45, 111, kSequencePointKind_StepOut, 0, 49 } /* seqPointIndex: 49 */,
	{ 82563, 1, 50, 50, 13, 14, 121, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 82563, 1, 52, 52, 13, 47, 122, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 82563, 1, 52, 52, 13, 47, 128, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 82563, 1, 54, 54, 13, 51, 134, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 82563, 1, 54, 54, 13, 51, 135, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 82563, 1, 54, 54, 0, 0, 142, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 82563, 1, 55, 55, 13, 14, 146, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 82563, 1, 56, 56, 17, 70, 147, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 82563, 1, 56, 56, 17, 70, 159, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 82563, 1, 57, 57, 13, 14, 165, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 82563, 1, 59, 59, 13, 45, 166, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 82563, 1, 59, 59, 13, 45, 167, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 82563, 1, 59, 59, 0, 0, 174, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 82563, 1, 60, 60, 13, 14, 178, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 82563, 1, 61, 61, 17, 64, 179, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 82563, 1, 61, 61, 17, 64, 191, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 82563, 1, 62, 62, 13, 14, 197, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 82563, 1, 63, 63, 9, 10, 198, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 82564, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 82564, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 82564, 1, 66, 66, 9, 10, 0, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 82564, 1, 67, 67, 13, 68, 1, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 82564, 1, 67, 67, 13, 68, 6, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 82564, 1, 68, 68, 9, 10, 14, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 82565, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 82565, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 82565, 1, 71, 71, 9, 10, 0, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 82565, 1, 72, 72, 13, 73, 1, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 82565, 1, 72, 72, 13, 73, 7, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 82565, 1, 73, 73, 13, 32, 13, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 82565, 1, 73, 73, 13, 32, 13, kSequencePointKind_StepOut, 0, 80 } /* seqPointIndex: 80 */,
	{ 82565, 1, 74, 74, 9, 10, 19, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 82566, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 82566, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 82566, 1, 77, 77, 9, 10, 0, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 82566, 1, 78, 78, 13, 46, 1, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 82566, 1, 78, 78, 13, 46, 1, kSequencePointKind_StepOut, 0, 86 } /* seqPointIndex: 86 */,
	{ 82566, 1, 78, 78, 13, 46, 15, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 82566, 1, 79, 79, 9, 10, 23, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 82567, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 82567, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 82567, 2, 12, 12, 9, 10, 0, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 82567, 2, 13, 13, 20, 92, 1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 82567, 2, 13, 13, 20, 92, 6, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 82567, 2, 14, 14, 13, 14, 12, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 82567, 2, 15, 15, 17, 84, 13, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 82567, 2, 15, 15, 17, 84, 19, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 82567, 2, 15, 15, 0, 0, 27, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 82567, 2, 15, 15, 0, 0, 31, kSequencePointKind_StepOut, 0, 98 } /* seqPointIndex: 98 */,
	{ 82567, 2, 15, 15, 0, 0, 37, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 82567, 2, 17, 17, 9, 10, 38, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 82568, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 82568, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 82568, 2, 20, 20, 9, 10, 0, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 82568, 2, 21, 21, 13, 88, 1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 82568, 2, 21, 21, 13, 88, 26, kSequencePointKind_StepOut, 0, 105 } /* seqPointIndex: 105 */,
	{ 82568, 2, 22, 22, 9, 10, 34, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 82569, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 82569, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 82569, 2, 25, 25, 9, 10, 0, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 82569, 2, 26, 26, 20, 53, 1, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 82569, 2, 26, 26, 20, 53, 1, kSequencePointKind_StepOut, 0, 111 } /* seqPointIndex: 111 */,
	{ 82569, 2, 27, 27, 13, 14, 7, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 82569, 2, 28, 28, 17, 67, 8, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 82569, 2, 28, 28, 17, 67, 11, kSequencePointKind_StepOut, 0, 114 } /* seqPointIndex: 114 */,
	{ 82569, 2, 28, 28, 0, 0, 19, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 82569, 2, 28, 28, 0, 0, 23, kSequencePointKind_StepOut, 0, 116 } /* seqPointIndex: 116 */,
	{ 82569, 2, 28, 28, 0, 0, 29, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 82569, 2, 30, 30, 9, 10, 30, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 82570, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 82570, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 82570, 2, 33, 33, 9, 10, 0, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 82570, 2, 34, 34, 20, 64, 1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 82570, 2, 34, 34, 20, 64, 3, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 82570, 2, 35, 35, 13, 14, 9, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 82570, 2, 36, 36, 17, 79, 10, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 82570, 2, 36, 36, 17, 79, 13, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 82570, 2, 36, 36, 0, 0, 21, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 82570, 2, 36, 36, 0, 0, 25, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 82570, 2, 36, 36, 0, 0, 31, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 82570, 2, 38, 38, 9, 10, 32, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 82571, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 82571, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 82571, 2, 41, 41, 9, 10, 0, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 82571, 2, 42, 42, 13, 37, 1, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 82571, 2, 42, 42, 0, 0, 6, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 82571, 2, 43, 43, 17, 33, 9, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 82571, 2, 44, 44, 13, 58, 13, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 82571, 2, 44, 44, 13, 58, 29, kSequencePointKind_StepOut, 0, 138 } /* seqPointIndex: 138 */,
	{ 82571, 2, 44, 44, 0, 0, 38, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 82571, 2, 45, 45, 17, 33, 41, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 82571, 2, 45, 45, 0, 0, 45, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 82571, 2, 48, 48, 13, 14, 46, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 82571, 2, 49, 49, 17, 77, 47, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 82571, 2, 49, 49, 17, 77, 67, kSequencePointKind_StepOut, 0, 144 } /* seqPointIndex: 144 */,
	{ 82571, 2, 52, 52, 13, 30, 75, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 82571, 2, 53, 53, 13, 14, 76, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 82571, 2, 54, 54, 17, 33, 77, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 82571, 2, 56, 56, 9, 10, 81, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 82572, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 82572, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 82572, 2, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 82572, 2, 60, 60, 20, 64, 1, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 82572, 2, 60, 60, 20, 64, 3, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 82572, 2, 61, 61, 13, 14, 9, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 82572, 2, 62, 62, 17, 69, 10, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 82572, 2, 62, 62, 17, 69, 13, kSequencePointKind_StepOut, 0, 156 } /* seqPointIndex: 156 */,
	{ 82572, 2, 63, 63, 13, 14, 19, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 82572, 2, 63, 63, 0, 0, 22, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 82572, 2, 63, 63, 0, 0, 26, kSequencePointKind_StepOut, 0, 159 } /* seqPointIndex: 159 */,
	{ 82572, 2, 63, 63, 0, 0, 32, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 82572, 2, 64, 64, 9, 10, 33, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 82573, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 82573, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 82573, 2, 67, 67, 9, 10, 0, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 82573, 2, 68, 68, 13, 37, 1, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 82573, 2, 68, 68, 0, 0, 6, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 82573, 2, 69, 69, 17, 24, 9, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 82573, 2, 71, 71, 13, 70, 11, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 82573, 2, 71, 71, 13, 70, 17, kSequencePointKind_StepOut, 0, 169 } /* seqPointIndex: 169 */,
	{ 82573, 2, 71, 71, 13, 70, 22, kSequencePointKind_StepOut, 0, 170 } /* seqPointIndex: 170 */,
	{ 82573, 2, 72, 72, 13, 69, 28, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 82573, 2, 72, 72, 13, 69, 48, kSequencePointKind_StepOut, 0, 172 } /* seqPointIndex: 172 */,
	{ 82573, 2, 73, 73, 13, 41, 54, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 82573, 2, 73, 73, 13, 41, 60, kSequencePointKind_StepOut, 0, 174 } /* seqPointIndex: 174 */,
	{ 82573, 2, 73, 73, 13, 41, 65, kSequencePointKind_StepOut, 0, 175 } /* seqPointIndex: 175 */,
	{ 82573, 2, 74, 74, 9, 10, 71, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 82576, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 82576, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 82576, 3, 15, 15, 13, 14, 0, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 82576, 3, 17, 17, 17, 52, 1, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 82576, 3, 17, 17, 17, 52, 1, kSequencePointKind_StepOut, 0, 181 } /* seqPointIndex: 181 */,
	{ 82576, 3, 23, 23, 13, 14, 9, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 82577, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 82577, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 82577, 3, 25, 25, 13, 14, 0, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 82577, 3, 27, 27, 17, 53, 1, kSequencePointKind_Normal, 0, 186 } /* seqPointIndex: 186 */,
	{ 82577, 3, 27, 27, 17, 53, 2, kSequencePointKind_StepOut, 0, 187 } /* seqPointIndex: 187 */,
	{ 82577, 3, 31, 31, 13, 14, 8, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 82578, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 82578, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 190 } /* seqPointIndex: 190 */,
	{ 82578, 3, 37, 37, 20, 93, 0, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 82578, 3, 37, 37, 20, 93, 15, kSequencePointKind_StepOut, 0, 192 } /* seqPointIndex: 192 */,
	{ 82579, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 193 } /* seqPointIndex: 193 */,
	{ 82579, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 82579, 3, 38, 38, 20, 100, 0, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 82579, 3, 38, 38, 20, 100, 11, kSequencePointKind_StepOut, 0, 196 } /* seqPointIndex: 196 */,
	{ 82581, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 197 } /* seqPointIndex: 197 */,
	{ 82581, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 198 } /* seqPointIndex: 198 */,
	{ 82581, 4, 12, 12, 20, 60, 0, kSequencePointKind_Normal, 0, 199 } /* seqPointIndex: 199 */,
	{ 82581, 4, 12, 12, 20, 60, 5, kSequencePointKind_StepOut, 0, 200 } /* seqPointIndex: 200 */,
	{ 82582, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 201 } /* seqPointIndex: 201 */,
	{ 82582, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 202 } /* seqPointIndex: 202 */,
	{ 82582, 4, 14, 14, 13, 14, 0, kSequencePointKind_Normal, 0, 203 } /* seqPointIndex: 203 */,
	{ 82582, 4, 16, 16, 17, 18, 1, kSequencePointKind_Normal, 0, 204 } /* seqPointIndex: 204 */,
	{ 82582, 4, 17, 17, 21, 69, 2, kSequencePointKind_Normal, 0, 205 } /* seqPointIndex: 205 */,
	{ 82582, 4, 17, 17, 21, 69, 8, kSequencePointKind_StepOut, 0, 206 } /* seqPointIndex: 206 */,
	{ 82582, 4, 18, 18, 21, 40, 14, kSequencePointKind_Normal, 0, 207 } /* seqPointIndex: 207 */,
	{ 82582, 4, 18, 18, 21, 40, 14, kSequencePointKind_StepOut, 0, 208 } /* seqPointIndex: 208 */,
	{ 82582, 4, 19, 19, 17, 18, 20, kSequencePointKind_Normal, 0, 209 } /* seqPointIndex: 209 */,
	{ 82582, 4, 20, 20, 17, 34, 23, kSequencePointKind_Normal, 0, 210 } /* seqPointIndex: 210 */,
	{ 82582, 4, 21, 21, 17, 18, 24, kSequencePointKind_Normal, 0, 211 } /* seqPointIndex: 211 */,
	{ 82582, 4, 23, 23, 17, 18, 25, kSequencePointKind_Normal, 0, 212 } /* seqPointIndex: 212 */,
	{ 82582, 4, 24, 24, 13, 14, 28, kSequencePointKind_Normal, 0, 213 } /* seqPointIndex: 213 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Device[];
Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Device[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[] = {
{ 82571, 35443, 75, 0, -1 },
{ 82582, 35443, 23, 0, -1 },
};
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Library\\PackageCache\\com.unity.services.core@1.7.1\\Runtime\\Device\\InstallationId.cs", { 172, 52, 221, 138, 130, 123, 16, 7, 37, 195, 180, 25, 140, 49, 234, 97} }, //1 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Library\\PackageCache\\com.unity.services.core@1.7.1\\Runtime\\Device\\UserIdProviders\\AndroidUtils.cs", { 8, 47, 27, 156, 53, 84, 59, 213, 173, 135, 197, 57, 123, 149, 211, 225} }, //2 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Library\\PackageCache\\com.unity.services.core@1.7.1\\Runtime\\Device\\UserIdProviders\\UnityAdsIdentifier.cs", { 188, 68, 15, 214, 165, 115, 190, 129, 31, 234, 34, 29, 194, 85, 214, 15} }, //3 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Library\\PackageCache\\com.unity.services.core@1.7.1\\Runtime\\Device\\UserIdProviders\\UnityAnalyticsIdentifier.cs", { 22, 43, 210, 34, 62, 237, 58, 204, 237, 109, 101, 103, 119, 241, 86, 231} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[4] = 
{
	{ 14820, 1 },
	{ 14821, 2 },
	{ 14823, 3 },
	{ 14824, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[16] = 
{
	{ 0, 34 },
	{ 0, 199 },
	{ 0, 16 },
	{ 0, 25 },
	{ 0, 40 },
	{ 1, 38 },
	{ 0, 36 },
	{ 0, 32 },
	{ 1, 30 },
	{ 0, 34 },
	{ 1, 32 },
	{ 0, 83 },
	{ 0, 34 },
	{ 1, 33 },
	{ 0, 72 },
	{ 0, 11 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[23] = 
{
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.InstallationId::.ctor() */,
	{ 34, 0, 1 } /* System.String Unity.Services.Core.Device.InstallationId::GetOrCreateIdentifier() */,
	{ 199, 1, 1 } /* System.Void Unity.Services.Core.Device.InstallationId::CreateIdentifier() */,
	{ 16, 2, 1 } /* System.String Unity.Services.Core.Device.InstallationId::ReadIdentifierFromFile() */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.InstallationId::WriteIdentifierToFile(System.String) */,
	{ 25, 3, 1 } /* System.String Unity.Services.Core.Device.InstallationId::GenerateGuid() */,
	{ 40, 4, 2 } /* UnityEngine.AndroidJavaObject Unity.Services.Core.Device.AndroidUtils::GetUnityActivity() */,
	{ 36, 6, 1 } /* UnityEngine.AndroidJavaObject Unity.Services.Core.Device.AndroidUtils::GetSharedPreferences(UnityEngine.AndroidJavaObject,System.String,System.Int32) */,
	{ 32, 7, 2 } /* UnityEngine.AndroidJavaObject Unity.Services.Core.Device.AndroidUtils::GetSharedPreferences(System.String,System.Int32) */,
	{ 34, 9, 2 } /* System.String Unity.Services.Core.Device.AndroidUtils::SharedPreferencesGetString(System.String,System.String,System.String) */,
	{ 83, 11, 1 } /* System.String Unity.Services.Core.Device.AndroidUtils::SharedPreferencesGetString(UnityEngine.AndroidJavaObject,System.String,System.String) */,
	{ 34, 12, 2 } /* System.Void Unity.Services.Core.Device.AndroidUtils::SharedPreferencesPutString(System.String,System.String,System.String) */,
	{ 72, 14, 1 } /* System.Void Unity.Services.Core.Device.AndroidUtils::SharedPreferencesPutString(UnityEngine.AndroidJavaObject,System.String,System.String) */,
	{ 0, 0, 0 } /* System.String Unity.Services.Core.Device.IUserIdentifierProvider::get_UserId() */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.IUserIdentifierProvider::set_UserId(System.String) */,
	{ 11, 15, 1 } /* System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_UserId() */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_UserId(System.String) */,
	{ 0, 0, 0 } /* System.String Unity.Services.Core.Device.UnityAdsIdentifier::get_IdentifierForInstallAndroid() */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.UnityAdsIdentifier::set_IdentifierForInstallAndroid(System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.UnityAdsIdentifier::.ctor() */,
	{ 0, 0, 0 } /* System.String Unity.Services.Core.Device.UnityAnalyticsIdentifier::get_UserId() */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::set_UserId(System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Device.UnityAnalyticsIdentifier::.ctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Services_Core_Device;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Services_Core_Device = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	214,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Services_Core_Device,
	2,
	(Il2CppCatchPoint*)g_catchPoints,
	4,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
