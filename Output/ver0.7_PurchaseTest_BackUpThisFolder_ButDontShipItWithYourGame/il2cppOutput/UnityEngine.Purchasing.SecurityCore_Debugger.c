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
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[44] = 
{
	{ 0, 0 } /* 0x06000001 System.String UnityEngine.Purchasing.Security.AppleReceipt::get_bundleID() */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String) */,
	{ 0, 0 } /* 0x06000003 System.String UnityEngine.Purchasing.Security.AppleReceipt::get_appVersion() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String) */,
	{ 0, 0 } /* 0x06000005 System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::get_expirationDate() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_expirationDate(System.DateTime) */,
	{ 0, 0 } /* 0x06000007 System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::get_opaque() */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[]) */,
	{ 0, 0 } /* 0x06000009 System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::get_hash() */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[]) */,
	{ 0, 0 } /* 0x0600000B System.String UnityEngine.Purchasing.Security.AppleReceipt::get_originalApplicationVersion() */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String) */,
	{ 0, 0 } /* 0x0600000D System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::get_receiptCreationDate() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor() */,
	{ 0, 0 } /* 0x06000010 System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_quantity() */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32) */,
	{ 0, 0 } /* 0x06000012 System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID() */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String) */,
	{ 0, 0 } /* 0x06000014 System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_transactionID() */,
	{ 0, 0 } /* 0x06000015 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String) */,
	{ 0, 0 } /* 0x06000016 System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalTransactionIdentifier() */,
	{ 0, 0 } /* 0x06000017 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String) */,
	{ 0, 0 } /* 0x06000018 System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime) */,
	{ 0, 0 } /* 0x0600001A System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalPurchaseDate() */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime) */,
	{ 0, 0 } /* 0x0600001C System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate() */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime) */,
	{ 0, 0 } /* 0x0600001E System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate() */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime) */,
	{ 0, 0 } /* 0x06000020 System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial() */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32) */,
	{ 0, 0 } /* 0x06000022 System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType() */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32) */,
	{ 0, 0 } /* 0x06000024 System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod() */,
	{ 0, 0 } /* 0x06000025 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32) */,
	{ 0, 0 } /* 0x06000026 System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor() */,
	{ 0, 0 } /* 0x06000027 System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor() */,
	{ 0, 0 } /* 0x06000028 System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor(System.String) */,
	{ 0, 0 } /* 0x06000029 System.Void UnityEngine.Purchasing.Security.InvalidSignatureException::.ctor() */,
	{ 0, 0 } /* 0x0600002A System.String UnityEngine.Purchasing.Security.IPurchaseReceipt::get_transactionID() */,
	{ 0, 0 } /* 0x0600002B System.String UnityEngine.Purchasing.Security.IPurchaseReceipt::get_productID() */,
	{ 0, 0 } /* 0x0600002C System.DateTime UnityEngine.Purchasing.Security.IPurchaseReceipt::get_purchaseDate() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_Purchasing_SecurityCore[];
Il2CppSequencePoint g_sequencePointsUnityEngine_Purchasing_SecurityCore[120] = 
{
	{ 82496, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 82496, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 82496, 1, 14, 14, 34, 38, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 82497, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 82497, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 82497, 1, 14, 14, 39, 52, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 82498, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 82498, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 82498, 1, 19, 19, 36, 40, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 82499, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 82499, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 82499, 1, 19, 19, 41, 54, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 82500, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 82500, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 82500, 1, 24, 24, 42, 46, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 82501, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 82501, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 82501, 1, 24, 24, 47, 60, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 82502, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 82502, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 82502, 1, 29, 29, 32, 36, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 82503, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 82503, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 82503, 1, 29, 29, 37, 50, 0, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 82504, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 82504, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 82504, 1, 34, 34, 30, 34, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 82505, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 82505, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 82505, 1, 34, 34, 35, 48, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 82506, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 82506, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 82506, 1, 39, 39, 52, 56, 0, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 82507, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 82507, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 82507, 1, 39, 39, 57, 70, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 82508, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 82508, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 82508, 1, 44, 44, 47, 51, 0, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 82509, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 82509, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 82509, 1, 44, 44, 52, 65, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 82511, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 82511, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 82511, 1, 60, 60, 31, 35, 0, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 82512, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 82512, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 82512, 1, 60, 60, 36, 49, 0, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 82513, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 82513, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 82513, 1, 65, 65, 35, 39, 0, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 82514, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 82514, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 82514, 1, 65, 65, 40, 53, 0, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 82515, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 82515, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 82515, 1, 70, 70, 39, 43, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 82516, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 82516, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 82516, 1, 70, 70, 44, 57, 0, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 82517, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 82517, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 82517, 1, 75, 75, 55, 59, 0, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 82518, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 82518, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 82518, 1, 75, 75, 60, 73, 0, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 82519, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 82519, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 82519, 1, 80, 80, 40, 44, 0, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 82520, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 82520, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 82520, 1, 80, 80, 45, 58, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 82521, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 82521, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 82521, 1, 85, 85, 48, 52, 0, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 82522, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 82522, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 82522, 1, 85, 85, 53, 66, 0, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 82523, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 82523, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 82523, 1, 90, 90, 54, 58, 0, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 82524, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 82524, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 82524, 1, 90, 90, 59, 72, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 82525, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 82525, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 82525, 1, 96, 96, 44, 48, 0, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 82526, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 82526, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 82526, 1, 96, 96, 49, 62, 0, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 82527, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 82527, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 82527, 1, 101, 101, 34, 38, 0, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 82528, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 82528, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 82528, 1, 101, 101, 39, 52, 0, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 82529, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 82529, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 82529, 1, 106, 106, 34, 38, 0, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 82530, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 82530, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 82530, 1, 106, 106, 39, 52, 0, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 82531, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 82531, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 82531, 1, 111, 111, 48, 52, 0, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 82532, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 82532, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 82532, 1, 111, 111, 53, 66, 0, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 82534, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 82534, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 82534, 2, 13, 13, 9, 38, 0, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 82534, 2, 13, 13, 9, 38, 1, kSequencePointKind_StepOut, 0, 111 } /* seqPointIndex: 111 */,
	{ 82534, 2, 13, 13, 39, 40, 7, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 82534, 2, 13, 13, 41, 42, 8, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 82535, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 82535, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 82535, 2, 19, 19, 55, 68, 0, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 82535, 2, 19, 19, 55, 68, 2, kSequencePointKind_StepOut, 0, 117 } /* seqPointIndex: 117 */,
	{ 82535, 2, 20, 20, 9, 10, 8, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 82535, 2, 21, 21, 9, 10, 9, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_Purchasing_SecurityCore[];
Il2CppSequencePoint g_sequencePointsUnityEngine_Purchasing_SecurityCore[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Library\\PackageCache\\com.unity.purchasing@4.5.2\\Runtime\\SecurityCore\\AppleReceipt.cs", { 6, 75, 232, 53, 66, 21, 163, 214, 108, 229, 6, 210, 72, 51, 35, 242} }, //1 
{ "C:\\Users\\takun\\UnityProjects\\ToyTank2\\Library\\PackageCache\\com.unity.purchasing@4.5.2\\Runtime\\SecurityCore\\IAPSecurityException.cs", { 234, 13, 223, 57, 27, 183, 220, 209, 12, 225, 177, 173, 204, 192, 57, 28} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 14809, 1 },
	{ 14810, 1 },
	{ 14811, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[44] = 
{
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.AppleReceipt::get_bundleID() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_bundleID(System.String) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.AppleReceipt::get_appVersion() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_appVersion(System.String) */,
	{ 0, 0, 0 } /* System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::get_expirationDate() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_expirationDate(System.DateTime) */,
	{ 0, 0, 0 } /* System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::get_opaque() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_opaque(System.Byte[]) */,
	{ 0, 0, 0 } /* System.Byte[] UnityEngine.Purchasing.Security.AppleReceipt::get_hash() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_hash(System.Byte[]) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.AppleReceipt::get_originalApplicationVersion() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_originalApplicationVersion(System.String) */,
	{ 0, 0, 0 } /* System.DateTime UnityEngine.Purchasing.Security.AppleReceipt::get_receiptCreationDate() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::set_receiptCreationDate(System.DateTime) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleReceipt::.ctor() */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_quantity() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_quantity(System.Int32) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productID() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productID(System.String) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_transactionID() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_transactionID(System.String) */,
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalTransactionIdentifier() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalTransactionIdentifier(System.String) */,
	{ 0, 0, 0 } /* System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_purchaseDate() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_purchaseDate(System.DateTime) */,
	{ 0, 0, 0 } /* System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_originalPurchaseDate() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_originalPurchaseDate(System.DateTime) */,
	{ 0, 0, 0 } /* System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_subscriptionExpirationDate() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_subscriptionExpirationDate(System.DateTime) */,
	{ 0, 0, 0 } /* System.DateTime UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_cancellationDate() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_cancellationDate(System.DateTime) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isFreeTrial() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isFreeTrial(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_productType() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_productType(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::get_isIntroductoryPricePeriod() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::set_isIntroductoryPricePeriod(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.AppleInAppPurchaseReceipt::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.IAPSecurityException::.ctor(System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Purchasing.Security.InvalidSignatureException::.ctor() */,
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.IPurchaseReceipt::get_transactionID() */,
	{ 0, 0, 0 } /* System.String UnityEngine.Purchasing.Security.IPurchaseReceipt::get_productID() */,
	{ 0, 0, 0 } /* System.DateTime UnityEngine.Purchasing.Security.IPurchaseReceipt::get_purchaseDate() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_Purchasing_SecurityCore;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_Purchasing_SecurityCore = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	120,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_Purchasing_SecurityCore,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
