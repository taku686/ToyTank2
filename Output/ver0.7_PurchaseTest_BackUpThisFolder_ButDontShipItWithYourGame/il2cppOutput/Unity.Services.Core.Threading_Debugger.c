#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 26324, 0,  6 } /*tableIndex: 0 */,
	{ 26325, 0,  7 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"task",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[18] = 
{
	{ 0, 0 } /* 0x06000001 System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Action) */,
	{ 0, 0 } /* 0x06000002 System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Action`1<System.Object>,System.Object) */,
	{ 0, 0 } /* 0x06000003 System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Func`1<T>) */,
	{ 0, 0 } /* 0x06000004 System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Func`2<System.Object,T>,System.Object) */,
	{ 0, 0 } /* 0x06000005 System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Action) */,
	{ 0, 0 } /* 0x06000006 System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Action`1<System.Object>,System.Object) */,
	{ 0, 1 } /* 0x06000007 T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Func`1<T>) */,
	{ 1, 1 } /* 0x06000008 T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Func`2<System.Object,T>,System.Object) */,
	{ 0, 0 } /* 0x06000009 System.Boolean Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.get_IsRunningOnUnityThread() */,
	{ 0, 0 } /* 0x0600000A System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Action) */,
	{ 0, 0 } /* 0x0600000B System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Action`1<System.Object>,System.Object) */,
	{ 0, 0 } /* 0x0600000C System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Func`1<T>) */,
	{ 0, 0 } /* 0x0600000D System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Func`2<System.Object,T>,System.Object) */,
	{ 0, 0 } /* 0x0600000E System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Action) */,
	{ 0, 0 } /* 0x0600000F System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Action`1<System.Object>,System.Object) */,
	{ 0, 0 } /* 0x06000010 T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Func`1<T>) */,
	{ 0, 0 } /* 0x06000011 T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Func`2<System.Object,T>,System.Object) */,
	{ 0, 0 } /* 0x06000012 System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Threading[];
Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Threading[132] = 
{
	{ 82651, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 82651, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 82651, 1, 10, 10, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 82651, 1, 11, 12, 13, 114, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 82651, 1, 11, 12, 13, 114, 1, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 82651, 1, 11, 12, 13, 114, 7, kSequencePointKind_StepOut, 0, 5 } /* seqPointIndex: 5 */,
	{ 82651, 1, 11, 12, 13, 114, 13, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 82651, 1, 11, 12, 13, 114, 18, kSequencePointKind_StepOut, 0, 7 } /* seqPointIndex: 7 */,
	{ 82651, 1, 13, 13, 9, 10, 26, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 82652, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 82652, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 82652, 1, 16, 16, 9, 10, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 82652, 1, 17, 19, 13, 56, 1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 82652, 1, 17, 19, 13, 56, 1, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 82652, 1, 17, 19, 13, 56, 8, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 82652, 1, 17, 19, 13, 56, 14, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 82652, 1, 17, 19, 13, 56, 19, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 82652, 1, 20, 20, 9, 10, 27, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 82653, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 82653, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 82653, 1, 23, 23, 9, 10, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 82653, 1, 24, 25, 13, 114, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 82653, 1, 24, 25, 13, 114, 1, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 82653, 1, 24, 25, 13, 114, 7, kSequencePointKind_StepOut, 0, 23 } /* seqPointIndex: 23 */,
	{ 82653, 1, 24, 25, 13, 114, 13, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 82653, 1, 24, 25, 13, 114, 18, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 82653, 1, 26, 26, 9, 10, 26, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 82654, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 82654, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 82654, 1, 29, 29, 9, 10, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 82654, 1, 30, 32, 13, 56, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 82654, 1, 30, 32, 13, 56, 1, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 82654, 1, 30, 32, 13, 56, 8, kSequencePointKind_StepOut, 0, 32 } /* seqPointIndex: 32 */,
	{ 82654, 1, 30, 32, 13, 56, 14, kSequencePointKind_StepOut, 0, 33 } /* seqPointIndex: 33 */,
	{ 82654, 1, 30, 32, 13, 56, 19, kSequencePointKind_StepOut, 0, 34 } /* seqPointIndex: 34 */,
	{ 82654, 1, 33, 33, 9, 10, 27, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 82655, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 82655, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 82655, 1, 36, 36, 9, 10, 0, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 82655, 1, 37, 37, 13, 57, 1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 82655, 1, 37, 37, 13, 57, 1, kSequencePointKind_StepOut, 0, 40 } /* seqPointIndex: 40 */,
	{ 82655, 1, 37, 37, 0, 0, 7, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 82655, 1, 38, 38, 13, 14, 10, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 82655, 1, 39, 39, 17, 26, 11, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 82655, 1, 39, 39, 17, 26, 12, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 82655, 1, 40, 40, 17, 24, 18, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 82655, 1, 43, 43, 13, 38, 20, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 82655, 1, 43, 43, 13, 38, 21, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 82655, 1, 43, 43, 13, 38, 26, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 82655, 1, 44, 44, 9, 10, 32, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 82656, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 82656, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 82656, 1, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 82656, 1, 48, 48, 13, 57, 1, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 82656, 1, 48, 48, 13, 57, 1, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 82656, 1, 48, 48, 0, 0, 7, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 82656, 1, 49, 49, 13, 14, 10, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 82656, 1, 50, 50, 17, 31, 11, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 82656, 1, 50, 50, 17, 31, 13, kSequencePointKind_StepOut, 0, 58 } /* seqPointIndex: 58 */,
	{ 82656, 1, 51, 51, 17, 24, 19, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 82656, 1, 54, 54, 13, 45, 21, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 82656, 1, 54, 54, 13, 45, 23, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 82656, 1, 54, 54, 13, 45, 28, kSequencePointKind_StepOut, 0, 62 } /* seqPointIndex: 62 */,
	{ 82656, 1, 55, 55, 9, 10, 34, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 82657, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 82657, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 82657, 1, 58, 58, 9, 10, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 82657, 1, 59, 59, 13, 57, 1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 82657, 1, 59, 59, 13, 57, 1, kSequencePointKind_StepOut, 0, 68 } /* seqPointIndex: 68 */,
	{ 82657, 1, 59, 59, 0, 0, 7, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 82657, 1, 60, 60, 13, 14, 10, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 82657, 1, 61, 61, 17, 33, 11, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 82657, 1, 61, 61, 17, 33, 12, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 82657, 1, 64, 64, 13, 42, 20, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 82657, 1, 64, 64, 13, 42, 21, kSequencePointKind_StepOut, 0, 74 } /* seqPointIndex: 74 */,
	{ 82657, 1, 65, 65, 13, 25, 27, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 82657, 1, 65, 65, 13, 25, 28, kSequencePointKind_StepOut, 0, 76 } /* seqPointIndex: 76 */,
	{ 82657, 1, 66, 66, 13, 32, 34, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 82657, 1, 66, 66, 13, 32, 35, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 82657, 1, 67, 67, 9, 10, 43, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 82658, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 82658, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 82658, 1, 70, 70, 9, 10, 0, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 82658, 1, 71, 71, 13, 57, 1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 82658, 1, 71, 71, 13, 57, 1, kSequencePointKind_StepOut, 0, 84 } /* seqPointIndex: 84 */,
	{ 82658, 1, 71, 71, 0, 0, 7, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 82658, 1, 72, 72, 13, 14, 10, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 82658, 1, 73, 73, 17, 38, 11, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 82658, 1, 73, 73, 17, 38, 13, kSequencePointKind_StepOut, 0, 88 } /* seqPointIndex: 88 */,
	{ 82658, 1, 76, 76, 13, 49, 21, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 82658, 1, 76, 76, 13, 49, 23, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 82658, 1, 77, 77, 13, 25, 29, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 82658, 1, 77, 77, 13, 25, 30, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 82658, 1, 78, 78, 13, 32, 36, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 82658, 1, 78, 78, 13, 32, 37, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 82658, 1, 79, 79, 9, 10, 45, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 82659, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 82659, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 82659, 1, 81, 81, 58, 97, 0, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 82659, 1, 81, 81, 58, 97, 0, kSequencePointKind_StepOut, 0, 99 } /* seqPointIndex: 99 */,
	{ 82660, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 82660, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 82660, 1, 82, 82, 60, 77, 0, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 82660, 1, 82, 82, 60, 77, 1, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 82661, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 82661, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 82661, 1, 83, 83, 82, 106, 0, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 82661, 1, 83, 83, 82, 106, 2, kSequencePointKind_StepOut, 0, 107 } /* seqPointIndex: 107 */,
	{ 82662, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 82662, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 82662, 1, 84, 84, 67, 84, 0, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 82662, 1, 84, 84, 67, 84, 1, kSequencePointKind_StepOut, 0, 111 } /* seqPointIndex: 111 */,
	{ 82663, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 82663, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 82663, 1, 85, 85, 89, 113, 0, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 82663, 1, 85, 85, 89, 113, 2, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 82664, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 82664, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 82664, 1, 86, 86, 55, 67, 0, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 82664, 1, 86, 86, 55, 67, 1, kSequencePointKind_StepOut, 0, 119 } /* seqPointIndex: 119 */,
	{ 82665, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 82665, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 82665, 1, 87, 87, 77, 96, 0, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 82665, 1, 87, 87, 77, 96, 2, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 82666, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 82666, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 82666, 1, 88, 88, 56, 68, 0, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 82666, 1, 88, 88, 56, 68, 1, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 82667, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 82667, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 82667, 1, 89, 89, 78, 97, 0, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 82667, 1, 89, 89, 78, 97, 2, kSequencePointKind_StepOut, 0, 131 } /* seqPointIndex: 131 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Threading[];
Il2CppSequencePoint g_sequencePointsUnity_Services_Core_Threading[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Library\\PackageCache\\com.unity.services.core@1.7.1\\Runtime\\Threading\\UnityThreadUtilsInternal.cs", { 47, 118, 141, 244, 133, 21, 96, 117, 136, 1, 129, 221, 87, 21, 90, 150} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = 
{
	{ 14839, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[8] = 
{
	{ 0, 28 },
	{ 0, 29 },
	{ 0, 28 },
	{ 0, 29 },
	{ 0, 33 },
	{ 0, 35 },
	{ 0, 45 },
	{ 0, 47 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[18] = 
{
	{ 28, 0, 1 } /* System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Action) */,
	{ 29, 1, 1 } /* System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Action`1<System.Object>,System.Object) */,
	{ 28, 2, 1 } /* System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Func`1<T>) */,
	{ 29, 3, 1 } /* System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::PostAsync(System.Func`2<System.Object,T>,System.Object) */,
	{ 33, 4, 1 } /* System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Action) */,
	{ 35, 5, 1 } /* System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Action`1<System.Object>,System.Object) */,
	{ 45, 6, 1 } /* T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Func`1<T>) */,
	{ 47, 7, 1 } /* T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Send(System.Func`2<System.Object,T>,System.Object) */,
	{ 0, 0, 0 } /* System.Boolean Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.get_IsRunningOnUnityThread() */,
	{ 0, 0, 0 } /* System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Action) */,
	{ 0, 0, 0 } /* System.Threading.Tasks.Task Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Action`1<System.Object>,System.Object) */,
	{ 0, 0, 0 } /* System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Func`1<T>) */,
	{ 0, 0, 0 } /* System.Threading.Tasks.Task`1<T> Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.PostAsync(System.Func`2<System.Object,T>,System.Object) */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Action) */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Action`1<System.Object>,System.Object) */,
	{ 0, 0, 0 } /* T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Func`1<T>) */,
	{ 0, 0, 0 } /* T Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::Unity.Services.Core.Threading.Internal.IUnityThreadUtils.Send(System.Func`2<System.Object,T>,System.Object) */,
	{ 0, 0, 0 } /* System.Void Unity.Services.Core.Threading.Internal.UnityThreadUtilsInternal::.ctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Services_Core_Threading;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Services_Core_Threading = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	132,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Services_Core_Threading,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	1,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
