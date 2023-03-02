#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[6] = 
{
	{ 1651, 0,  0 } /*tableIndex: 0 */,
	{ 25706, 0,  2 } /*tableIndex: 1 */,
	{ 1654, 1,  3 } /*tableIndex: 2 */,
	{ 1653, 2,  4 } /*tableIndex: 3 */,
	{ 5087, 3,  4 } /*tableIndex: 4 */,
	{ 25706, 3,  5 } /*tableIndex: 5 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[4] = 
{
	"state",
	"result",
	"from",
	"to",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[29] = 
{
	{ 0, 0 } /* 0x06000001 TOwner StateMachine`1::get_Owner() */,
	{ 0, 0 } /* 0x06000002 StateMachine`1/State<TOwner> StateMachine`1::get_CurrentState() */,
	{ 0, 0 } /* 0x06000003 System.Void StateMachine`1::set_CurrentState(StateMachine`1/State<TOwner>) */,
	{ 0, 0 } /* 0x06000004 System.Void StateMachine`1::.ctor(TOwner) */,
	{ 0, 1 } /* 0x06000005 T StateMachine`1::Add() */,
	{ 1, 2 } /* 0x06000006 T StateMachine`1::GetOrAddState() */,
	{ 3, 2 } /* 0x06000007 System.Void StateMachine`1::AddTransition(System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Void StateMachine`1::AddAnyTransition(System.Int32) */,
	{ 0, 0 } /* 0x06000009 System.Void StateMachine`1::Start() */,
	{ 0, 0 } /* 0x0600000A System.Void StateMachine`1::Start(StateMachine`1/State<TOwner>) */,
	{ 0, 0 } /* 0x0600000B System.Void StateMachine`1::Update() */,
	{ 0, 0 } /* 0x0600000C System.Void StateMachine`1::FixedUpdate() */,
	{ 5, 1 } /* 0x0600000D System.Void StateMachine`1::Dispatch(System.Int32) */,
	{ 0, 0 } /* 0x0600000E System.Void StateMachine`1::OnTriggerEnter(UnityEngine.Collider) */,
	{ 0, 0 } /* 0x0600000F System.Void StateMachine`1::Change(StateMachine`1/State<TOwner>) */,
	{ 0, 0 } /* 0x06000010 StateMachine`1<TOwner> StateMachine`1/State::get_StateMachine() */,
	{ 0, 0 } /* 0x06000011 TOwner StateMachine`1/State::get_Owner() */,
	{ 0, 0 } /* 0x06000012 System.Void StateMachine`1/State::Enter(StateMachine`1/State<TOwner>) */,
	{ 0, 0 } /* 0x06000013 System.Void StateMachine`1/State::OnEnter(StateMachine`1/State<TOwner>) */,
	{ 0, 0 } /* 0x06000014 System.Void StateMachine`1/State::Update() */,
	{ 0, 0 } /* 0x06000015 System.Void StateMachine`1/State::OnUpdate() */,
	{ 0, 0 } /* 0x06000016 System.Void StateMachine`1/State::FixedUpdate() */,
	{ 0, 0 } /* 0x06000017 System.Void StateMachine`1/State::OnFixedUpdate() */,
	{ 0, 0 } /* 0x06000018 System.Void StateMachine`1/State::Exit(StateMachine`1/State<TOwner>) */,
	{ 0, 0 } /* 0x06000019 System.Void StateMachine`1/State::OnExit(StateMachine`1/State<TOwner>) */,
	{ 0, 0 } /* 0x0600001A System.Void StateMachine`1/State::TriggerEnter(UnityEngine.Collider) */,
	{ 0, 0 } /* 0x0600001B System.Void StateMachine`1/State::OnTriggerEnter(UnityEngine.Collider) */,
	{ 0, 0 } /* 0x0600001C System.Void StateMachine`1/State::.ctor() */,
	{ 0, 0 } /* 0x0600001D System.Void StateMachine`1/AnyState::.ctor() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsStateMachine[];
Il2CppSequencePoint g_sequencePointsStateMachine[203] = 
{
	{ 82584, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 82584, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 82584, 1, 106, 106, 27, 31, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 82585, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 82585, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 82585, 1, 111, 111, 33, 37, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 82586, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 82586, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 82586, 1, 111, 111, 38, 50, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 82587, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 82587, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 82587, 1, 114, 114, 5, 64, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 82587, 1, 114, 114, 5, 64, 1, kSequencePointKind_StepOut, 0, 12 } /* seqPointIndex: 12 */,
	{ 82587, 1, 120, 120, 5, 38, 11, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 82587, 1, 120, 120, 5, 38, 12, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 82587, 1, 121, 121, 5, 6, 18, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 82587, 1, 122, 122, 9, 23, 19, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 82587, 1, 123, 123, 5, 6, 26, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 82588, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 82588, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 82588, 1, 129, 129, 5, 6, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 82588, 1, 130, 130, 9, 29, 1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 82588, 1, 130, 130, 9, 29, 1, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 82588, 1, 131, 131, 9, 35, 7, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 82588, 1, 132, 132, 9, 31, 19, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 82588, 1, 132, 132, 9, 31, 31, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 82588, 1, 133, 133, 9, 22, 37, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 82588, 1, 134, 134, 5, 6, 41, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 82589, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 82589, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 82589, 1, 140, 140, 5, 6, 0, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 82589, 1, 141, 141, 9, 16, 1, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 82589, 1, 141, 141, 31, 37, 2, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 82589, 1, 141, 141, 31, 37, 8, kSequencePointKind_StepOut, 0, 33 } /* seqPointIndex: 33 */,
	{ 82589, 1, 141, 141, 0, 0, 14, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 82589, 1, 141, 141, 18, 27, 16, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 82589, 1, 141, 141, 18, 27, 18, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 82589, 1, 142, 142, 9, 10, 24, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 82589, 1, 143, 143, 13, 35, 25, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 82589, 1, 143, 143, 0, 0, 47, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 82589, 1, 144, 144, 13, 14, 50, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 82589, 1, 145, 145, 17, 31, 51, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 82589, 1, 147, 147, 9, 10, 56, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 82589, 1, 141, 141, 28, 30, 57, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 82589, 1, 141, 141, 28, 30, 59, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 82589, 1, 141, 141, 0, 0, 68, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 82589, 1, 141, 141, 0, 0, 76, kSequencePointKind_StepOut, 0, 46 } /* seqPointIndex: 46 */,
	{ 82589, 1, 149, 149, 9, 25, 83, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 82589, 1, 149, 149, 9, 25, 84, kSequencePointKind_StepOut, 0, 48 } /* seqPointIndex: 48 */,
	{ 82589, 1, 150, 150, 5, 6, 93, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 82590, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 82590, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 82590, 1, 159, 159, 5, 6, 0, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 82590, 1, 160, 160, 9, 43, 1, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 82590, 1, 160, 160, 9, 43, 2, kSequencePointKind_StepOut, 0, 54 } /* seqPointIndex: 54 */,
	{ 82590, 1, 161, 161, 9, 51, 8, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 82590, 1, 161, 161, 9, 51, 20, kSequencePointKind_StepOut, 0, 56 } /* seqPointIndex: 56 */,
	{ 82590, 1, 161, 161, 0, 0, 26, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 82590, 1, 162, 162, 9, 10, 29, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 82590, 1, 164, 165, 13, 84, 30, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 82590, 1, 164, 165, 13, 84, 37, kSequencePointKind_StepOut, 0, 60 } /* seqPointIndex: 60 */,
	{ 82590, 1, 164, 165, 13, 84, 47, kSequencePointKind_StepOut, 0, 61 } /* seqPointIndex: 61 */,
	{ 82590, 1, 164, 165, 13, 84, 52, kSequencePointKind_StepOut, 0, 62 } /* seqPointIndex: 62 */,
	{ 82590, 1, 168, 168, 9, 39, 58, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 82590, 1, 168, 168, 9, 39, 59, kSequencePointKind_StepOut, 0, 64 } /* seqPointIndex: 64 */,
	{ 82590, 1, 169, 169, 9, 43, 65, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 82590, 1, 169, 169, 9, 43, 83, kSequencePointKind_StepOut, 0, 66 } /* seqPointIndex: 66 */,
	{ 82590, 1, 170, 170, 5, 6, 89, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 82591, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 82591, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 82591, 1, 177, 177, 5, 6, 0, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 82591, 1, 178, 178, 9, 47, 1, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 82591, 1, 178, 178, 9, 47, 3, kSequencePointKind_StepOut, 0, 72 } /* seqPointIndex: 72 */,
	{ 82591, 1, 179, 179, 5, 6, 9, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 82592, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 82592, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 82592, 1, 185, 185, 5, 6, 0, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 82592, 1, 186, 186, 9, 40, 1, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 82592, 1, 186, 186, 9, 40, 3, kSequencePointKind_StepOut, 0, 78 } /* seqPointIndex: 78 */,
	{ 82592, 1, 186, 186, 9, 40, 13, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 82592, 1, 187, 187, 5, 6, 19, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 82593, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 82593, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 82593, 1, 195, 195, 5, 6, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 82593, 1, 196, 196, 9, 35, 1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 82593, 1, 196, 196, 9, 35, 3, kSequencePointKind_StepOut, 0, 85 } /* seqPointIndex: 85 */,
	{ 82593, 1, 197, 197, 9, 34, 9, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 82593, 1, 197, 197, 9, 34, 10, kSequencePointKind_StepOut, 0, 87 } /* seqPointIndex: 87 */,
	{ 82593, 1, 197, 197, 9, 34, 16, kSequencePointKind_StepOut, 0, 88 } /* seqPointIndex: 88 */,
	{ 82593, 1, 198, 198, 5, 6, 22, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 82594, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 82594, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 82594, 1, 204, 204, 5, 6, 0, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 82594, 1, 205, 205, 9, 31, 1, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 82594, 1, 205, 205, 9, 31, 2, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 82594, 1, 205, 205, 9, 31, 7, kSequencePointKind_StepOut, 0, 95 } /* seqPointIndex: 95 */,
	{ 82594, 1, 206, 206, 5, 6, 13, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 82595, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 82595, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 82595, 1, 209, 209, 5, 6, 0, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 82595, 1, 210, 210, 9, 36, 1, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 82595, 1, 210, 210, 9, 36, 2, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 82595, 1, 210, 210, 9, 36, 7, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 82595, 1, 211, 211, 5, 6, 13, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 82596, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 82596, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 82596, 1, 218, 218, 5, 6, 0, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 82596, 1, 220, 220, 9, 68, 1, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 82596, 1, 220, 220, 9, 68, 2, kSequencePointKind_StepOut, 0, 108 } /* seqPointIndex: 108 */,
	{ 82596, 1, 220, 220, 9, 68, 15, kSequencePointKind_StepOut, 0, 109 } /* seqPointIndex: 109 */,
	{ 82596, 1, 220, 220, 0, 0, 24, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 82596, 1, 221, 221, 9, 10, 27, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 82596, 1, 222, 222, 13, 85, 28, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 82596, 1, 222, 222, 13, 85, 29, kSequencePointKind_StepOut, 0, 113 } /* seqPointIndex: 113 */,
	{ 82596, 1, 222, 222, 13, 85, 42, kSequencePointKind_StepOut, 0, 114 } /* seqPointIndex: 114 */,
	{ 82596, 1, 222, 222, 0, 0, 51, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 82596, 1, 223, 223, 13, 14, 54, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 82596, 1, 225, 225, 17, 24, 55, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 82596, 1, 227, 227, 9, 10, 57, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 82596, 1, 229, 229, 9, 20, 58, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 82596, 1, 229, 229, 9, 20, 60, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 82596, 1, 230, 230, 5, 6, 66, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 82597, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 82597, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 82597, 1, 233, 233, 5, 6, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 82597, 1, 234, 234, 9, 42, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 82597, 1, 234, 234, 9, 42, 2, kSequencePointKind_StepOut, 0, 126 } /* seqPointIndex: 126 */,
	{ 82597, 1, 234, 234, 9, 42, 8, kSequencePointKind_StepOut, 0, 127 } /* seqPointIndex: 127 */,
	{ 82597, 1, 235, 235, 5, 6, 14, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 82598, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 82598, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 82598, 1, 242, 242, 5, 6, 0, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 82598, 1, 243, 243, 9, 38, 1, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 82598, 1, 243, 243, 9, 38, 2, kSequencePointKind_StepOut, 0, 133 } /* seqPointIndex: 133 */,
	{ 82598, 1, 243, 243, 9, 38, 8, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 82598, 1, 244, 244, 9, 39, 14, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 82598, 1, 244, 244, 9, 39, 16, kSequencePointKind_StepOut, 0, 136 } /* seqPointIndex: 136 */,
	{ 82598, 1, 244, 244, 9, 39, 21, kSequencePointKind_StepOut, 0, 137 } /* seqPointIndex: 137 */,
	{ 82598, 1, 245, 245, 9, 34, 27, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 82598, 1, 245, 245, 9, 34, 29, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 82598, 1, 246, 246, 5, 6, 35, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 82599, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 82599, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 82599, 1, 18, 18, 56, 68, 0, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 82600, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 82600, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 145 } /* seqPointIndex: 145 */,
	{ 82600, 1, 30, 30, 35, 53, 0, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 82600, 1, 30, 30, 35, 53, 6, kSequencePointKind_StepOut, 0, 147 } /* seqPointIndex: 147 */,
	{ 82601, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 82601, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 82601, 1, 36, 36, 9, 10, 0, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 82601, 1, 37, 37, 13, 32, 1, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 82601, 1, 37, 37, 13, 32, 3, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 82601, 1, 38, 38, 9, 10, 9, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 82602, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 82602, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 82602, 1, 44, 44, 9, 10, 0, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 82602, 1, 45, 45, 9, 10, 1, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 82603, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 82603, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 82603, 1, 51, 51, 9, 10, 0, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 82603, 1, 52, 52, 13, 24, 1, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 82603, 1, 52, 52, 13, 24, 2, kSequencePointKind_StepOut, 0, 162 } /* seqPointIndex: 162 */,
	{ 82603, 1, 53, 53, 9, 10, 8, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 82604, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 82604, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 82604, 1, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 82604, 1, 60, 60, 9, 10, 1, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 82605, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 82605, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 82605, 1, 63, 63, 9, 10, 0, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 82605, 1, 64, 64, 13, 29, 1, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 82605, 1, 64, 64, 13, 29, 2, kSequencePointKind_StepOut, 0, 172 } /* seqPointIndex: 172 */,
	{ 82605, 1, 65, 65, 9, 10, 8, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 82606, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 82606, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 82606, 1, 68, 68, 9, 10, 0, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 82606, 1, 69, 69, 9, 10, 1, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 82607, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 82607, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 82607, 1, 75, 75, 9, 10, 0, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 82607, 1, 76, 76, 13, 31, 1, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 82607, 1, 76, 76, 13, 31, 3, kSequencePointKind_StepOut, 0, 182 } /* seqPointIndex: 182 */,
	{ 82607, 1, 77, 77, 9, 10, 9, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
	{ 82608, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 184 } /* seqPointIndex: 184 */,
	{ 82608, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 185 } /* seqPointIndex: 185 */,
	{ 82608, 1, 83, 83, 9, 10, 0, kSequencePointKind_Normal, 0, 186 } /* seqPointIndex: 186 */,
	{ 82608, 1, 84, 84, 9, 10, 1, kSequencePointKind_Normal, 0, 187 } /* seqPointIndex: 187 */,
	{ 82609, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 188 } /* seqPointIndex: 188 */,
	{ 82609, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 189 } /* seqPointIndex: 189 */,
	{ 82609, 1, 87, 87, 9, 10, 0, kSequencePointKind_Normal, 0, 190 } /* seqPointIndex: 190 */,
	{ 82609, 1, 88, 88, 13, 35, 1, kSequencePointKind_Normal, 0, 191 } /* seqPointIndex: 191 */,
	{ 82609, 1, 88, 88, 13, 35, 3, kSequencePointKind_StepOut, 0, 192 } /* seqPointIndex: 192 */,
	{ 82609, 1, 89, 89, 9, 10, 9, kSequencePointKind_Normal, 0, 193 } /* seqPointIndex: 193 */,
	{ 82610, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 194 } /* seqPointIndex: 194 */,
	{ 82610, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 195 } /* seqPointIndex: 195 */,
	{ 82610, 1, 92, 92, 9, 10, 0, kSequencePointKind_Normal, 0, 196 } /* seqPointIndex: 196 */,
	{ 82610, 1, 93, 93, 9, 10, 1, kSequencePointKind_Normal, 0, 197 } /* seqPointIndex: 197 */,
	{ 82611, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 198 } /* seqPointIndex: 198 */,
	{ 82611, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 199 } /* seqPointIndex: 199 */,
	{ 82611, 1, 25, 25, 9, 84, 0, kSequencePointKind_Normal, 0, 200 } /* seqPointIndex: 200 */,
	{ 82611, 1, 25, 25, 9, 84, 1, kSequencePointKind_StepOut, 0, 201 } /* seqPointIndex: 201 */,
	{ 82611, 1, 25, 25, 9, 84, 12, kSequencePointKind_StepOut, 0, 202 } /* seqPointIndex: 202 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsStateMachine[];
Il2CppSequencePoint g_sequencePointsStateMachine[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Assets\\Plugins\\StateMachine\\StateMachine.cs", { 18, 199, 186, 76, 0, 128, 44, 210, 78, 158, 0, 2, 185, 38, 149, 159} }, //1 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 14828, 1 },
	{ 14826, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[6] = 
{
	{ 0, 43 },
	{ 0, 96 },
	{ 16, 57 },
	{ 24, 57 },
	{ 0, 90 },
	{ 0, 67 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[29] = 
{
	{ 0, 0, 0 } /* TOwner StateMachine`1::get_Owner() */,
	{ 0, 0, 0 } /* StateMachine`1/State<TOwner> StateMachine`1::get_CurrentState() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::set_CurrentState(StateMachine`1/State<TOwner>) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::.ctor(TOwner) */,
	{ 43, 0, 1 } /* T StateMachine`1::Add() */,
	{ 96, 1, 3 } /* T StateMachine`1::GetOrAddState() */,
	{ 90, 4, 1 } /* System.Void StateMachine`1::AddTransition(System.Int32) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::AddAnyTransition(System.Int32) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::Start() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::Start(StateMachine`1/State<TOwner>) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::Update() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::FixedUpdate() */,
	{ 67, 5, 1 } /* System.Void StateMachine`1::Dispatch(System.Int32) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::OnTriggerEnter(UnityEngine.Collider) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1::Change(StateMachine`1/State<TOwner>) */,
	{ 0, 0, 0 } /* StateMachine`1<TOwner> StateMachine`1/State::get_StateMachine() */,
	{ 0, 0, 0 } /* TOwner StateMachine`1/State::get_Owner() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::Enter(StateMachine`1/State<TOwner>) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::OnEnter(StateMachine`1/State<TOwner>) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::Update() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::OnUpdate() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::FixedUpdate() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::OnFixedUpdate() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::Exit(StateMachine`1/State<TOwner>) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::OnExit(StateMachine`1/State<TOwner>) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::TriggerEnter(UnityEngine.Collider) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::OnTriggerEnter(UnityEngine.Collider) */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/State::.ctor() */,
	{ 0, 0, 0 } /* System.Void StateMachine`1/AnyState::.ctor() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationStateMachine;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationStateMachine = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	203,
	(Il2CppSequencePoint*)g_sequencePointsStateMachine,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
