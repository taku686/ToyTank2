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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Purchasing.MiniJson
struct MiniJson_t1B4DF42607912BFE4389C35340964C3064A83D66;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Purchasing.MiniJSON.Json/Parser
struct Parser_t1212D664758DEABD1AE7263AD49A9792437E107D;
// UnityEngine.Purchasing.MiniJSON.Json/Serializer
struct Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsPurchasing_Common[];
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t485C76DCE4DC10B1237D1F9CBDD9FF91BEAB884D____F642F9B52A17FCAEDFF8B008B645A49C9B6C1C229ACA7ABC830E359B614ABCD2_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Json_Deserialize_mEBC5D5952D07E0A092A41E0358F0B8F101214963_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Json_Serialize_m13D7C5C2831640BB1082D4DA6AC27461CE87E75C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_ArrayListFromJson_mCA4DC5E9B69CE1F39298E9498D7DBFD9DF66E02A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_GetBool_mA409E9188230B82092D346BA4BAA2E4F64012C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_GetHash_mBB5A2F2E42AE6EF2176EC99DF69447E5FFDA8D3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_GetLong_mF6C2535592DF322A6EA87520804FB07E0EB1F873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_GetStringList_m593D3840636FA9D2B84F83ED52F7E6C7A15D4AF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_GetString_m30C96D830B48F7B726D704B72648A4D3718262EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_HashtableFromJson_m9700EAC23B195E012320EDFF5B6B18039A5CDB70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_toJson_m7A2BA8A0BBA1F5D6B39FFA9B977E2C2B19B29E62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_toJson_m7B6D9612FCDFECA8BB3DC9990967F2D9D044A6F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJsonExtensions_toJson_m886DE81A48F6EBF9B0B75A3FA0C8B60EABDCF61A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJson_JsonDecode_m5B62B33DF18A7AF5D050F9508ACAE7916B3B1C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MiniJson__ctor_mFE532382330137DAA56D99B8B1F3E9D6B82D6748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_Dispose_mC69DC94FE5BC51E604E11E185EE9656D805AB7E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_EatWhitespace_m8352A78799241FA73989E651ECB36B283A619230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_IsWordBreak_m85CA2ECC1631CFA9F0F0AF0A06E6E48747F8A8D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_ParseArray_m7517AC8449AFB45E7993DFD38DC899BCB37772F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_ParseByToken_m3B16890600DA42CE38616668ADC8630B8D45E374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_ParseNumber_mD21E421C94C573B083483B135F84632EAE8B9F19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_ParseObject_m52ED96AC090BEEDBEB5EB5680139ACD024372B9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_ParseString_m96982EF2B3A96E2AF0C5BFE56D7BF069F5D5B0CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_ParseValue_m5BFFB59E2A9FEE3868A772C777066AB8B8910276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_Parse_mF1D07B77A93A253A8A356C2DA1909F30DE954D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser__ctor_mD2FE158D76F90C14804FF90AEDC6255EA96AB67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_get_NextWord_m24A013D958324096C9ABC7E43FA7807D17156579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_SerializeArray_m4C726B75C57DECBAE44E60AA5903E14108E634A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_SerializeObject_m344032DCE67EECA23363BAB284EA33444DF60DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_SerializeOther_m8BD246EE7E68993610AB6E0DE0C32FE17C70E8D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer_Serialize_mBE6FF0E50A5E677E0F28E587AF2B96C076ED2122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Serializer__ctor_m340B552B648B7154EAC06E81210780404680D6FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_Equal_m45BBEE864D343822EA3A9656E0E3647F44002E8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_GreaterThanOrEqual_m95AEFF9AE03E097A7FD3A160F53E7D39AB301A77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_GreaterThan_mBE15E97672E6B46AFC181347F4E5716586C08A12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_LessThanOrEqual_mADA87D236C0D51BB9D44364B57F5BA3347DB71CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_MajorVersion_m8C799246C55924E585B1C66190B9B2842CE11F10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_MinorVersion_m479CE09D5C335EB27F5F5802D72B2D39D20487D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_Parse_m7CE8DC718E09D1A4DEAF7311D6B8CEA5987E7AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionCheck_PatchVersion_mE87C0EF95697D721CFBA13F53F32CD4C8DFAE8E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringBuilder_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TOKEN_t02BFF43FF84DB07FF65D4C176D51E65C42709C04_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6BA5D494C1832BE2DA55D465EF355D387760BD89 
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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t485C76DCE4DC10B1237D1F9CBDD9FF91BEAB884D  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.Purchasing.MiniJSON.Json
struct Json_t4CCABA1E1257CD7FB2A9FAC1DE677CD0B6BFCD4A  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// UnityEngine.Purchasing.MiniJson
struct MiniJson_t1B4DF42607912BFE4389C35340964C3064A83D66  : public RuntimeObject
{
};

// UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions
struct MiniJsonExtensions_t498B8E03A4833AAD3D9F5F1B8B594440D263DEC0  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine.Purchasing.VersionCheck
struct VersionCheck_t15A192ECF82F72C31735AFCC4594CC8E7642CFC6  : public RuntimeObject
{
};

// UnityEngine.Purchasing.MiniJSON.Json/Parser
struct Parser_t1212D664758DEABD1AE7263AD49A9792437E107D  : public RuntimeObject
{
	// System.IO.StringReader UnityEngine.Purchasing.MiniJSON.Json/Parser::json
	StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* ___json_1;
};

// UnityEngine.Purchasing.MiniJSON.Json/Serializer
struct Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099  : public RuntimeObject
{
	// System.Text.StringBuilder UnityEngine.Purchasing.MiniJSON.Json/Serializer::builder
	StringBuilder_t* ___builder_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
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

// UnityEngine.Purchasing.VersionCheck/Version
struct Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 
{
	// System.Int32 UnityEngine.Purchasing.VersionCheck/Version::major
	int32_t ___major_0;
	// System.Int32 UnityEngine.Purchasing.VersionCheck/Version::minor
	int32_t ___minor_1;
	// System.Int32 UnityEngine.Purchasing.VersionCheck/Version::patch
	int32_t ___patch_2;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.IO.StringReader
struct StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.String System.IO.StringReader::_s
	String_t* ____s_2;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_3;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_4;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Purchasing.UnityPurchasingCallback
struct UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t485C76DCE4DC10B1237D1F9CBDD9FF91BEAB884D_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::F642F9B52A17FCAEDFF8B008B645A49C9B6C1C229ACA7ABC830E359B614ABCD2
	int64_t ___F642F9B52A17FCAEDFF8B008B645A49C9B6C1C229ACA7ABC830E359B614ABCD2_0;
};

// <PrivateImplementationDetails>

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// UnityEngine.Purchasing.MiniJSON.Json

// UnityEngine.Purchasing.MiniJSON.Json

// UnityEngine.Purchasing.MiniJson

// UnityEngine.Purchasing.MiniJson

// UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions

// UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// UnityEngine.Purchasing.VersionCheck

// UnityEngine.Purchasing.VersionCheck

// UnityEngine.Purchasing.MiniJSON.Json/Parser

// UnityEngine.Purchasing.MiniJSON.Json/Parser

// UnityEngine.Purchasing.MiniJSON.Json/Serializer

// UnityEngine.Purchasing.MiniJSON.Json/Serializer

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// UnityEngine.Purchasing.VersionCheck/Version

// UnityEngine.Purchasing.VersionCheck/Version

// System.Delegate

// System.Delegate

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.IO.StringReader

// System.IO.StringReader

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Purchasing.UnityPurchasingCallback

// UnityEngine.Purchasing.UnityPurchasingCallback
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.String UnityEngine.Purchasing.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m13D7C5C2831640BB1082D4DA6AC27461CE87E75C (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Object UnityEngine.Purchasing.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_mEBC5D5952D07E0A092A41E0358F0B8F101214963 (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Purchasing.VersionCheck::LessThan(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D (String_t* ___0_versionA, String_t* ___1_versionB, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Purchasing.VersionCheck::LessThanOrEqual(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionCheck_LessThanOrEqual_mADA87D236C0D51BB9D44364B57F5BA3347DB71CA (String_t* ___0_versionA, String_t* ___1_versionB, const RuntimeMethod* method) ;
// UnityEngine.Purchasing.VersionCheck/Version UnityEngine.Purchasing.VersionCheck::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 VersionCheck_Parse_m7CE8DC718E09D1A4DEAF7311D6B8CEA5987E7AC4 (String_t* ___0_version, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Purchasing.VersionCheck::PartialVersion(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D (String_t* ___0_version, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Purchasing.VersionCheck::MajorVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_MajorVersion_m8C799246C55924E585B1C66190B9B2842CE11F10 (String_t* ___0_version, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Purchasing.VersionCheck::MinorVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_MinorVersion_m479CE09D5C335EB27F5F5802D72B2D39D20487D9 (String_t* ___0_version, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Purchasing.VersionCheck::PatchVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_PatchVersion_mE87C0EF95697D721CFBA13F53F32CD4C8DFAE8E2 (String_t* ___0_version, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_mF1D07B77A93A253A8A356C2DA1909F30DE954D9C (String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mBE6FF0E50A5E677E0F28E587AF2B96C076ED2122 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0 (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* __this, String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mD2FE158D76F90C14804FF90AEDC6255EA96AB67E (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, String_t* ___0_jsonString, const RuntimeMethod* method) ;
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m5BFFB59E2A9FEE3868A772C777066AB8B8910276 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616 (TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m96982EF2B3A96E2AF0C5BFE56D7BF069F5D5B0CB (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseByToken(UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m3B16890600DA42CE38616668ADC8630B8D45E374 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, int32_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mD21E421C94C573B083483B135F84632EAE8B9F19 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_m52ED96AC090BEEDBEB5EB5680139ACD024372B9B (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m7517AC8449AFB45E7993DFD38DC899BCB37772F8 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m24A013D958324096C9ABC7E43FA7807D17156579 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, int64_t* ___3_result, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382 (String_t* ___0_s, int32_t ___1_style, RuntimeObject* ___2_provider, double* ___3_result, const RuntimeMethod* method) ;
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Purchasing.MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m85CA2ECC1631CFA9F0F0AF0A06E6E48747F8A8D3 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m8352A78799241FA73989E651ECB36B283A619230 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m340B552B648B7154EAC06E81210780404680D6FE (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m4C726B75C57DECBAE44E60AA5903E14108E634A1 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m344032DCE67EECA23363BAB284EA33444DF60DE8 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m8BD246EE7E68993610AB6E0DE0C32FE17C70E8D9 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Int64 System.Int64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23 (RuntimeObject* ___0_json, const RuntimeMethod* method) ;
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MiniJson_JsonDecode_m5B62B33DF18A7AF5D050F9508ACAE7916B3B1C43 (String_t* ___0_json, const RuntimeMethod* method) ;
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
void UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_Multicast(UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* currentDelegate = reinterpret_cast<UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_subject, ___1_payload, ___2_receipt, ___3_transactionId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_OpenInst(UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, const RuntimeMethod* method)
{
	NullCheck(___0_subject);
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_subject, ___1_payload, ___2_receipt, ___3_transactionId, method);
}
void UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_OpenStatic(UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_subject, ___1_payload, ___2_receipt, ___3_transactionId, method);
}
void UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_OpenStaticInvoker(UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, const RuntimeMethod* method)
{
	InvokerActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_subject, ___1_payload, ___2_receipt, ___3_transactionId);
}
void UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_ClosedStaticInvoker(UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, String_t*, String_t*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_subject, ___1_payload, ___2_receipt, ___3_transactionId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D (UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_subject' to native representation
	char* ____0_subject_marshaled = NULL;
	____0_subject_marshaled = il2cpp_codegen_marshal_string(___0_subject);

	// Marshaling of parameter '___1_payload' to native representation
	char* ____1_payload_marshaled = NULL;
	____1_payload_marshaled = il2cpp_codegen_marshal_string(___1_payload);

	// Marshaling of parameter '___2_receipt' to native representation
	char* ____2_receipt_marshaled = NULL;
	____2_receipt_marshaled = il2cpp_codegen_marshal_string(___2_receipt);

	// Marshaling of parameter '___3_transactionId' to native representation
	char* ____3_transactionId_marshaled = NULL;
	____3_transactionId_marshaled = il2cpp_codegen_marshal_string(___3_transactionId);

	// Native function invocation
	il2cppPInvokeFunc(____0_subject_marshaled, ____1_payload_marshaled, ____2_receipt_marshaled, ____3_transactionId_marshaled);

	// Marshaling cleanup of parameter '___0_subject' native representation
	il2cpp_codegen_marshal_free(____0_subject_marshaled);
	____0_subject_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_payload' native representation
	il2cpp_codegen_marshal_free(____1_payload_marshaled);
	____1_payload_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_receipt' native representation
	il2cpp_codegen_marshal_free(____2_receipt_marshaled);
	____2_receipt_marshaled = NULL;

	// Marshaling cleanup of parameter '___3_transactionId' native representation
	il2cpp_codegen_marshal_free(____3_transactionId_marshaled);
	____3_transactionId_marshaled = NULL;

}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasingCallback__ctor_mF6C91FDD1AD84B6A8A603BCFDB392928C849E5A4 (UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD_Multicast;
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::Invoke(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasingCallback_Invoke_m6F1B2D31F2FAAA74ECDBFC1559DCA2D6C73F25AD (UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_subject, ___1_payload, ___2_receipt, ___3_transactionId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Purchasing.UnityPurchasingCallback::BeginInvoke(System.String,System.String,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityPurchasingCallback_BeginInvoke_mFAB3C93C6254E7F95C417C0689BDD215D9EE82AB (UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, String_t* ___0_subject, String_t* ___1_payload, String_t* ___2_receipt, String_t* ___3_transactionId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	__d_args[0] = ___0_subject;
	__d_args[1] = ___1_payload;
	__d_args[2] = ___2_receipt;
	__d_args[3] = ___3_transactionId;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void UnityEngine.Purchasing.UnityPurchasingCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPurchasingCallback_EndInvoke_m048526672E91F6764201A48784A7C16B0BEF8E9A (UnityPurchasingCallback_tFC58410D7A50DD05CC7430C76C7E0277A213757D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Purchasing.MiniJson::JsonEncode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23 (RuntimeObject* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_json));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 2));
		// return MiniJSON.Json.Serialize(json);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 3));
		RuntimeObject* L_0 = ___0_json;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 4));
		String_t* L_1;
		L_1 = Json_Serialize_m13D7C5C2831640BB1082D4DA6AC27461CE87E75C(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 4));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 5));
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Object UnityEngine.Purchasing.MiniJson::JsonDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MiniJson_JsonDecode_m5B62B33DF18A7AF5D050F9508ACAE7916B3B1C43 (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJson_JsonDecode_m5B62B33DF18A7AF5D050F9508ACAE7916B3B1C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_json));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJson_JsonDecode_m5B62B33DF18A7AF5D050F9508ACAE7916B3B1C43_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 6));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 7));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 8));
		// return MiniJSON.Json.Deserialize(json);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 9));
		String_t* L_0 = ___0_json;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 10));
		RuntimeObject* L_1;
		L_1 = Json_Deserialize_mEBC5D5952D07E0A092A41E0358F0B8F101214963(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 10));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 11));
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Purchasing.MiniJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MiniJson__ctor_mFE532382330137DAA56D99B8B1F3E9D6B82D6748 (MiniJson_t1B4DF42607912BFE4389C35340964C3064A83D66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJson__ctor_mFE532382330137DAA56D99B8B1F3E9D6B82D6748_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJson__ctor_mFE532382330137DAA56D99B8B1F3E9D6B82D6748_RuntimeMethod_var, NULL, NULL, NULL);
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
// System.Boolean UnityEngine.Purchasing.VersionCheck::GreaterThanOrEqual(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionCheck_GreaterThanOrEqual_m95AEFF9AE03E097A7FD3A160F53E7D39AB301A77 (String_t* ___0_versionA, String_t* ___1_versionB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_GreaterThanOrEqual_m95AEFF9AE03E097A7FD3A160F53E7D39AB301A77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_versionA), (&___1_versionB));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_GreaterThanOrEqual_m95AEFF9AE03E097A7FD3A160F53E7D39AB301A77_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 12));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 13));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 14));
		// return !LessThan(versionA, versionB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 15));
		String_t* L_0 = ___0_versionA;
		String_t* L_1 = ___1_versionB;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 16));
		bool L_2;
		L_2 = VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 16));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 17));
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Purchasing.VersionCheck::GreaterThan(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionCheck_GreaterThan_mBE15E97672E6B46AFC181347F4E5716586C08A12 (String_t* ___0_versionA, String_t* ___1_versionB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_GreaterThan_mBE15E97672E6B46AFC181347F4E5716586C08A12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_versionA), (&___1_versionB));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_GreaterThan_mBE15E97672E6B46AFC181347F4E5716586C08A12_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 18));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 19));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 20));
		// return !LessThanOrEqual(versionA, versionB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 21));
		String_t* L_0 = ___0_versionA;
		String_t* L_1 = ___1_versionB;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 22));
		bool L_2;
		L_2 = VersionCheck_LessThanOrEqual_mADA87D236C0D51BB9D44364B57F5BA3347DB71CA(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 22));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 23));
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Purchasing.VersionCheck::LessThan(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D (String_t* ___0_versionA, String_t* ___1_versionB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_versionA), (&___1_versionB));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 24));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 25));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 26));
		// var va = Parse(versionA);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 27));
		String_t* L_0 = ___0_versionA;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 28));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_1;
		L_1 = VersionCheck_Parse_m7CE8DC718E09D1A4DEAF7311D6B8CEA5987E7AC4(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 28));
		V_0 = L_1;
		// var vb = Parse(versionB);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 29));
		String_t* L_2 = ___1_versionB;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 30));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_3;
		L_3 = VersionCheck_Parse_m7CE8DC718E09D1A4DEAF7311D6B8CEA5987E7AC4(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 30));
		V_1 = L_3;
		// if (va.major > vb.major)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 31));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_4 = V_0;
		int32_t L_5 = L_4.___major_0;
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_6 = V_1;
		int32_t L_7 = L_6.___major_0;
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)L_7))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 32));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0029;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 33));
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 34));
		V_3 = (bool)0;
		goto IL_00ab;
	}

IL_0029:
	{
		// else if (va.major < vb.major)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 35));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_9 = V_0;
		int32_t L_10 = L_9.___major_0;
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_11 = V_1;
		int32_t L_12 = L_11.___major_0;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 36));
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0042;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 37));
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 38));
		V_3 = (bool)1;
		goto IL_00ab;
	}

IL_0042:
	{
		// else if (va.minor > vb.minor)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 39));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_14 = V_0;
		int32_t L_15 = L_14.___minor_1;
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_16 = V_1;
		int32_t L_17 = L_16.___minor_1;
		V_5 = (bool)((((int32_t)L_15) > ((int32_t)L_17))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 40));
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 41));
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 42));
		V_3 = (bool)0;
		goto IL_00ab;
	}

IL_005b:
	{
		// else if (va.minor < vb.minor)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 43));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_19 = V_0;
		int32_t L_20 = L_19.___minor_1;
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_21 = V_1;
		int32_t L_22 = L_21.___minor_1;
		V_6 = (bool)((((int32_t)L_20) < ((int32_t)L_22))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 44));
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_0074;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 45));
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 46));
		V_3 = (bool)1;
		goto IL_00ab;
	}

IL_0074:
	{
		// else if (va.patch > vb.patch)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 47));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_24 = V_0;
		int32_t L_25 = L_24.___patch_2;
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_26 = V_1;
		int32_t L_27 = L_26.___patch_2;
		V_7 = (bool)((((int32_t)L_25) > ((int32_t)L_27))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 48));
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_008d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 49));
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 50));
		V_3 = (bool)0;
		goto IL_00ab;
	}

IL_008d:
	{
		// else if (va.patch < vb.patch)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 51));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_29 = V_0;
		int32_t L_30 = L_29.___patch_2;
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_31 = V_1;
		int32_t L_32 = L_31.___patch_2;
		V_8 = (bool)((((int32_t)L_30) < ((int32_t)L_32))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 52));
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00a6;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 53));
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 54));
		V_3 = (bool)1;
		goto IL_00ab;
	}

IL_00a6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 55));
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 56));
		V_3 = (bool)0;
		goto IL_00ab;
	}

IL_00ab:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 57));
		bool L_34 = V_3;
		return L_34;
	}
}
// System.Boolean UnityEngine.Purchasing.VersionCheck::LessThanOrEqual(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionCheck_LessThanOrEqual_mADA87D236C0D51BB9D44364B57F5BA3347DB71CA (String_t* ___0_versionA, String_t* ___1_versionB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_LessThanOrEqual_mADA87D236C0D51BB9D44364B57F5BA3347DB71CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_versionA), (&___1_versionB));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_LessThanOrEqual_mADA87D236C0D51BB9D44364B57F5BA3347DB71CA_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 58));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 59));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 60));
		// return LessThan(versionA, versionB) || !LessThan(versionB, versionA);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 61));
		String_t* L_0 = ___0_versionA;
		String_t* L_1 = ___1_versionB;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 62));
		bool L_2;
		L_2 = VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 62));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___1_versionB;
		String_t* L_4 = ___0_versionA;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 63));
		bool L_5;
		L_5 = VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 63));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 64));
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Purchasing.VersionCheck::Equal(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionCheck_Equal_m45BBEE864D343822EA3A9656E0E3647F44002E8F (String_t* ___0_versionA, String_t* ___1_versionB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_Equal_m45BBEE864D343822EA3A9656E0E3647F44002E8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_versionA), (&___1_versionB));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_Equal_m45BBEE864D343822EA3A9656E0E3647F44002E8F_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 65));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 66));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 67));
		// return !LessThan(versionA, versionB) && !LessThan(versionB, versionA);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 68));
		String_t* L_0 = ___0_versionA;
		String_t* L_1 = ___1_versionB;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 69));
		bool L_2;
		L_2 = VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 69));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___1_versionB;
		String_t* L_4 = ___0_versionA;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 70));
		bool L_5;
		L_5 = VersionCheck_LessThan_m47BB676773E013CC4674D94D8061CD5C8CB7094D(L_3, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 70));
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 71));
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Int32 UnityEngine.Purchasing.VersionCheck::MajorVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_MajorVersion_m8C799246C55924E585B1C66190B9B2842CE11F10 (String_t* ___0_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_MajorVersion_m8C799246C55924E585B1C66190B9B2842CE11F10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_version));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_MajorVersion_m8C799246C55924E585B1C66190B9B2842CE11F10_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 72));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 73));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 74));
		// return PartialVersion(version, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 75));
		String_t* L_0 = ___0_version;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 76));
		int32_t L_1;
		L_1 = VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 76));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 77));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Purchasing.VersionCheck::MinorVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_MinorVersion_m479CE09D5C335EB27F5F5802D72B2D39D20487D9 (String_t* ___0_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_MinorVersion_m479CE09D5C335EB27F5F5802D72B2D39D20487D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_version));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_MinorVersion_m479CE09D5C335EB27F5F5802D72B2D39D20487D9_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 78));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 79));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 80));
		// return PartialVersion(version, 1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 81));
		String_t* L_0 = ___0_version;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 82));
		int32_t L_1;
		L_1 = VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D(L_0, 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 82));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 83));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Purchasing.VersionCheck::PatchVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_PatchVersion_mE87C0EF95697D721CFBA13F53F32CD4C8DFAE8E2 (String_t* ___0_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_PatchVersion_mE87C0EF95697D721CFBA13F53F32CD4C8DFAE8E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_version));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_PatchVersion_mE87C0EF95697D721CFBA13F53F32CD4C8DFAE8E2_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 84));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 85));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 86));
		// return PartialVersion(version, 2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 87));
		String_t* L_0 = ___0_version;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 88));
		int32_t L_1;
		L_1 = VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D(L_0, 2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 88));
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 89));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Purchasing.VersionCheck/Version UnityEngine.Purchasing.VersionCheck::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 VersionCheck_Parse_m7CE8DC718E09D1A4DEAF7311D6B8CEA5987E7AC4 (String_t* ___0_version, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_Parse_m7CE8DC718E09D1A4DEAF7311D6B8CEA5987E7AC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_version));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_Parse_m7CE8DC718E09D1A4DEAF7311D6B8CEA5987E7AC4_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 90));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 91));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 92));
		// var v = new Version
		// {
		//     major = MajorVersion(version),
		//     minor = MinorVersion(version),
		//     patch = PatchVersion(version)
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 93));
		il2cpp_codegen_initobj((&V_1), sizeof(Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3));
		String_t* L_0 = ___0_version;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 94));
		int32_t L_1;
		L_1 = VersionCheck_MajorVersion_m8C799246C55924E585B1C66190B9B2842CE11F10(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 94));
		(&V_1)->___major_0 = L_1;
		String_t* L_2 = ___0_version;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 95));
		int32_t L_3;
		L_3 = VersionCheck_MinorVersion_m479CE09D5C335EB27F5F5802D72B2D39D20487D9(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 95));
		(&V_1)->___minor_1 = L_3;
		String_t* L_4 = ___0_version;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 96));
		int32_t L_5;
		L_5 = VersionCheck_PatchVersion_mE87C0EF95697D721CFBA13F53F32CD4C8DFAE8E2(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 96));
		(&V_1)->___patch_2 = L_5;
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_6 = V_1;
		V_0 = L_6;
		// return v;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 97));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_7 = V_0;
		V_2 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 98));
		Version_t369469EEC2175C381EC194CBB5D7AD26161F45D3 L_8 = V_2;
		return L_8;
	}
}
// System.Int32 UnityEngine.Purchasing.VersionCheck::PartialVersion(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D (String_t* ___0_version, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t485C76DCE4DC10B1237D1F9CBDD9FF91BEAB884D____F642F9B52A17FCAEDFF8B008B645A49C9B6C1C229ACA7ABC830E359B614ABCD2_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_version), (&___1_index));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, VersionCheck_PartialVersion_m4DAABC25D974F1CD018ED14E8528ABA38A17F34D_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 99));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 100));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 101));
		// var parts = version.Split(new char[] { 'a', 'b', 'f', 'p' });
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 102));
		String_t* L_0 = ___0_version;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t485C76DCE4DC10B1237D1F9CBDD9FF91BEAB884D____F642F9B52A17FCAEDFF8B008B645A49C9B6C1C229ACA7ABC830E359B614ABCD2_0_FieldInfo_var) };
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 103));
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 103));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 104));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 104));
		V_0 = L_4;
		// var prefix = parts[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 105));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// var result = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 106));
		V_2 = 0;
		// var versions = prefix.Split('.');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 107));
		String_t* L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 108));
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_8, ((int32_t)46), 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 108));
		V_3 = L_9;
		// if (versions.Length < index + 1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 109));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_3;
		NullCheck(L_10);
		int32_t L_11 = ___1_index;
		V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) < ((int32_t)((int32_t)il2cpp_codegen_add(L_11, 1))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 110));
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 111));
		// return result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 112));
		int32_t L_13 = V_2;
		V_5 = L_13;
		goto IL_004d;
	}

IL_003d:
	{
		// int.TryParse(versions[index], out result);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 113));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_3;
		int32_t L_15 = ___1_index;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 114));
		bool L_18;
		L_18 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_17, (&V_2), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 114));
		// return result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 115));
		int32_t L_19 = V_2;
		V_5 = L_19;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 116));
		int32_t L_20 = V_5;
		return L_20;
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
// System.Object UnityEngine.Purchasing.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_mEBC5D5952D07E0A092A41E0358F0B8F101214963 (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_Deserialize_mEBC5D5952D07E0A092A41E0358F0B8F101214963_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_json));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Json_Deserialize_mEBC5D5952D07E0A092A41E0358F0B8F101214963_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 117));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 118));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 119));
		// if (json == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 120));
		String_t* L_0 = ___0_json;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 121));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 122));
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 123));
		V_1 = NULL;
		goto IL_0017;
	}

IL_000e:
	{
		// return Parser.Parse(json);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 124));
		String_t* L_2 = ___0_json;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 125));
		RuntimeObject* L_3;
		L_3 = Parser_Parse_mF1D07B77A93A253A8A356C2DA1909F30DE954D9C(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 125));
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 126));
		RuntimeObject* L_4 = V_1;
		return L_4;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m13D7C5C2831640BB1082D4DA6AC27461CE87E75C (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Json_Serialize_m13D7C5C2831640BB1082D4DA6AC27461CE87E75C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Json_Serialize_m13D7C5C2831640BB1082D4DA6AC27461CE87E75C_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 127));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 128));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 129));
		// return Serializer.Serialize(obj);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 130));
		RuntimeObject* L_0 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 131));
		String_t* L_1;
		L_1 = Serializer_Serialize_mBE6FF0E50A5E677E0F28E587AF2B96C076ED2122(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 131));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 132));
		String_t* L_2 = V_0;
		return L_2;
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
// System.Boolean UnityEngine.Purchasing.MiniJSON.Json/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_m85CA2ECC1631CFA9F0F0AF0A06E6E48747F8A8D3 (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_IsWordBreak_m85CA2ECC1631CFA9F0F0AF0A06E6E48747F8A8D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_c));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_IsWordBreak_m85CA2ECC1631CFA9F0F0AF0A06E6E48747F8A8D3_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 133));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 134));
	int32_t G_B3_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 135));
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 136));
		Il2CppChar L_0 = ___0_c;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 137));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 137));
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Il2CppChar L_2 = ___0_c;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 138));
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 138));
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 139));
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_mD2FE158D76F90C14804FF90AEDC6255EA96AB67E (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser__ctor_mD2FE158D76F90C14804FF90AEDC6255EA96AB67E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_jsonString));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser__ctor_mD2FE158D76F90C14804FF90AEDC6255EA96AB67E_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 140));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 141));
	{
		// Parser(string jsonString)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 142));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 143));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 143));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 144));
		// json = new StringReader(jsonString);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 145));
		String_t* L_0 = ___0_jsonString;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 146));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)il2cpp_codegen_object_new(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringReader__ctor_m72556EC1062F49E05CF41B0825AC7FA2DB2A81C0(L_1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 146));
		__this->___json_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)L_1);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 147));
		return;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_Parse_mF1D07B77A93A253A8A356C2DA1909F30DE954D9C (String_t* ___0_jsonString, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_Parse_mF1D07B77A93A253A8A356C2DA1909F30DE954D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_jsonString));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_Parse_mF1D07B77A93A253A8A356C2DA1909F30DE954D9C_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 148));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 149));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 150));
		// using (var instance = new Parser(jsonString))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 151));
		String_t* L_0 = ___0_jsonString;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 152));
		Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* L_1 = (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D*)il2cpp_codegen_object_new(Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Parser__ctor_mD2FE158D76F90C14804FF90AEDC6255EA96AB67E(L_1, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 152));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 156));
					Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001c;
					}
				}
				{
					Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* L_3 = V_0;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 157));
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 157));
				}

IL_001c:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 158));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 153));
			// return instance.ParseValue();
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 154));
			Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* L_4 = V_0;
			STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 155));
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Parser_ParseValue_m5BFFB59E2A9FEE3868A772C777066AB8B8910276(L_4, NULL);
			CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 155));
			V_1 = L_5;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 159));
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_mC69DC94FE5BC51E604E11E185EE9656D805AB7E0 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_Dispose_mC69DC94FE5BC51E604E11E185EE9656D805AB7E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_Dispose_mC69DC94FE5BC51E604E11E185EE9656D805AB7E0_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 160));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 161));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 162));
		// json.Dispose();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 163));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 164));
		NullCheck(L_0);
		TextReader_Dispose_mDCB332EFA06970A9CC7EC4596FCC5220B9512616(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 164));
		// json = null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 165));
		__this->___json_1 = (StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___json_1), (void*)(StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8*)NULL);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 166));
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* Parser_ParseObject_m52ED96AC090BEEDBEB5EB5680139ACD024372B9B (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_ParseObject_m52ED96AC090BEEDBEB5EB5680139ACD024372B9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TOKEN_t02BFF43FF84DB07FF65D4C176D51E65C42709C04_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_ParseObject_m52ED96AC090BEEDBEB5EB5680139ACD024372B9B_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 167));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 168));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 169));
		// var table = new Dictionary<string, object>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 170));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 171));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 171));
		V_0 = L_0;
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 172));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 173));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 173));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 174));
		goto IL_0088;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 175));
		// switch (NextToken)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 176));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 177));
		int32_t L_3;
		L_3 = Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 177));
		V_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 178));
		int32_t L_4 = V_3;
		V_2 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 179));
		int32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_002a;
	}

IL_002a:
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_003c;
	}

IL_0030:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 180));
		V_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_008d;
	}

IL_0035:
	{
		// continue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 181));
		goto IL_0088;
	}

IL_0037:
	{
		// return table;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 182));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = V_0;
		V_4 = L_8;
		goto IL_008d;
	}

IL_003c:
	{
		// var name = ParseString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 183));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 184));
		String_t* L_9;
		L_9 = Parser_ParseString_m96982EF2B3A96E2AF0C5BFE56D7BF069F5D5B0CB(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 184));
		V_1 = L_9;
		// if (name == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 185));
		String_t* L_10 = V_1;
		V_5 = (bool)((((RuntimeObject*)(String_t*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 186));
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 187));
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 188));
		V_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_008d;
	}

IL_0053:
	{
		// if (NextToken != TOKEN.COLON)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 189));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 190));
		int32_t L_12;
		L_12 = Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 190));
		V_6 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 191));
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 192));
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 193));
		V_4 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		goto IL_008d;
	}

IL_006b:
	{
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 194));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_14 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 195));
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_14);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 195));
		// table[name] = ParseValue();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 196));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = V_0;
		String_t* L_17 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 197));
		RuntimeObject* L_18;
		L_18 = Parser_ParseValue_m5BFFB59E2A9FEE3868A772C777066AB8B8910276(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 197));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 198));
		NullCheck(L_16);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_16, L_17, L_18, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 198));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 199));
		goto IL_0087;
	}

IL_0087:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 200));
	}

IL_0088:
	{
		// while (true)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 201));
		V_7 = (bool)1;
		goto IL_0015;
	}

IL_008d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 202));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = V_4;
		return L_19;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Parser_ParseArray_m7517AC8449AFB45E7993DFD38DC899BCB37772F8 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_ParseArray_m7517AC8449AFB45E7993DFD38DC899BCB37772F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TOKEN_t02BFF43FF84DB07FF65D4C176D51E65C42709C04_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_6 = NULL;
	bool V_7 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_ParseArray_m7517AC8449AFB45E7993DFD38DC899BCB37772F8_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 203));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 204));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 205));
		// var array = new List<object>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 206));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 207));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 207));
		V_0 = L_0;
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 208));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 209));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 209));
		// var parsing = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 210));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 211));
		goto IL_0058;
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 212));
		// var nextToken = NextToken;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 213));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 214));
		int32_t L_3;
		L_3 = Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 214));
		V_2 = L_3;
		// switch (nextToken)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 215));
		int32_t L_4 = V_2;
		V_5 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 216));
		int32_t L_5 = V_5;
		V_4 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 217));
		int32_t L_6 = V_4;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_7 = V_4;
		if ((((int32_t)L_7) == ((int32_t)4)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_8 = V_4;
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0045;
	}

IL_003a:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 218));
		V_6 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		goto IL_0064;
	}

IL_003f:
	{
		// continue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 219));
		goto IL_0058;
	}

IL_0041:
	{
		// parsing = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 220));
		V_1 = (bool)0;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 221));
		goto IL_0057;
	}

IL_0045:
	{
		// var value = ParseByToken(nextToken);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 222));
		int32_t L_9 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 223));
		RuntimeObject* L_10;
		L_10 = Parser_ParseByToken_m3B16890600DA42CE38616668ADC8630B8D45E374(__this, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 223));
		V_3 = L_10;
		// array.Add(value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 224));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = V_0;
		RuntimeObject* L_12 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 225));
		NullCheck(L_11);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_11, L_12, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 225));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 226));
		goto IL_0057;
	}

IL_0057:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 227));
	}

IL_0058:
	{
		// while (parsing)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 228));
		bool L_13 = V_1;
		V_7 = L_13;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 229));
		bool L_14 = V_7;
		if (L_14)
		{
			goto IL_0017;
		}
	}
	{
		// return array;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 230));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_15 = V_0;
		V_6 = L_15;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 231));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_16 = V_6;
		return L_16;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseValue_m5BFFB59E2A9FEE3868A772C777066AB8B8910276 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_ParseValue_m5BFFB59E2A9FEE3868A772C777066AB8B8910276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TOKEN_t02BFF43FF84DB07FF65D4C176D51E65C42709C04_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_ParseValue_m5BFFB59E2A9FEE3868A772C777066AB8B8910276_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 232));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 233));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 234));
		// var nextToken = NextToken;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 235));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 236));
		int32_t L_0;
		L_0 = Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 236));
		V_0 = L_0;
		// return ParseByToken(nextToken);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 237));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 238));
		RuntimeObject* L_2;
		L_2 = Parser_ParseByToken_m3B16890600DA42CE38616668ADC8630B8D45E374(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 238));
		V_1 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 239));
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseByToken(UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseByToken_m3B16890600DA42CE38616668ADC8630B8D45E374 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, int32_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_ParseByToken_m3B16890600DA42CE38616668ADC8630B8D45E374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TOKEN_t02BFF43FF84DB07FF65D4C176D51E65C42709C04_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_token));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_ParseByToken_m3B16890600DA42CE38616668ADC8630B8D45E374_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 240));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 241));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 242));
		// switch (token)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 243));
		int32_t L_0 = ___0_token;
		V_1 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 244));
		int32_t L_1 = V_1;
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 245));
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0075;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0075;
			}
			case 6:
			{
				goto IL_003b;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_005f;
			}
			case 9:
			{
				goto IL_0068;
			}
			case 10:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_0075;
	}

IL_003b:
	{
		// return ParseString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 246));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 247));
		String_t* L_3;
		L_3 = Parser_ParseString_m96982EF2B3A96E2AF0C5BFE56D7BF069F5D5B0CB(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 247));
		V_2 = L_3;
		goto IL_0079;
	}

IL_0044:
	{
		// return ParseNumber();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 248));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 249));
		RuntimeObject* L_4;
		L_4 = Parser_ParseNumber_mD21E421C94C573B083483B135F84632EAE8B9F19(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 249));
		V_2 = L_4;
		goto IL_0079;
	}

IL_004d:
	{
		// return ParseObject();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 250));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 251));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5;
		L_5 = Parser_ParseObject_m52ED96AC090BEEDBEB5EB5680139ACD024372B9B(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 251));
		V_2 = L_5;
		goto IL_0079;
	}

IL_0056:
	{
		// return ParseArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 252));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 253));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6;
		L_6 = Parser_ParseArray_m7517AC8449AFB45E7993DFD38DC899BCB37772F8(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 253));
		V_2 = L_6;
		goto IL_0079;
	}

IL_005f:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 254));
		bool L_7 = ((bool)1);
		RuntimeObject* L_8 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_7);
		V_2 = L_8;
		goto IL_0079;
	}

IL_0068:
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 255));
		bool L_9 = ((bool)0);
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		V_2 = L_10;
		goto IL_0079;
	}

IL_0071:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 256));
		V_2 = NULL;
		goto IL_0079;
	}

IL_0075:
	{
		// return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 257));
		V_2 = NULL;
		goto IL_0079;
	}

IL_0079:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 258));
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m96982EF2B3A96E2AF0C5BFE56D7BF069F5D5B0CB (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_ParseString_m96982EF2B3A96E2AF0C5BFE56D7BF069F5D5B0CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppChar V_4 = 0x0;
	Il2CppChar V_5 = 0x0;
	bool V_6 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_7 = NULL;
	Il2CppChar V_8 = 0x0;
	Il2CppChar V_9 = 0x0;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_7), (&V_10));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_ParseString_m96982EF2B3A96E2AF0C5BFE56D7BF069F5D5B0CB_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 259));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 260));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 261));
		// var s = new StringBuilder();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 262));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 263));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 263));
		V_0 = L_0;
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 264));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_1 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 265));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 265));
		// var parsing = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 266));
		V_2 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 267));
		goto IL_0176;
	}

IL_001a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 268));
		// if (json.Peek() == -1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 269));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_3 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 270));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 270));
		V_3 = (bool)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 271));
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 272));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 273));
		goto IL_0180;
	}

IL_0033:
	{
		// c = NextChar;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 274));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 275));
		Il2CppChar L_6;
		L_6 = Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 275));
		V_1 = L_6;
		// switch (c)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 276));
		Il2CppChar L_7 = V_1;
		V_5 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 277));
		Il2CppChar L_8 = V_5;
		V_4 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 278));
		Il2CppChar L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_0049;
	}

IL_0049:
	{
		Il2CppChar L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_016b;
	}

IL_0054:
	{
		// parsing = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 279));
		V_2 = (bool)0;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 280));
		goto IL_0175;
	}

IL_005b:
	{
		// if (json.Peek() == -1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 281));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 282));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 282));
		V_6 = (bool)((((int32_t)L_12) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 283));
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0077;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 284));
		// parsing = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 285));
		V_2 = (bool)0;
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 286));
		goto IL_0175;
	}

IL_0077:
	{
		// c = NextChar;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 288));
		Il2CppChar L_14;
		L_14 = Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 288));
		V_1 = L_14;
		// switch (c)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 289));
		Il2CppChar L_15 = V_1;
		V_9 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 290));
		Il2CppChar L_16 = V_9;
		V_8 = L_16;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 291));
		Il2CppChar L_17 = V_8;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a6;
		}
	}
	{
		Il2CppChar L_18 = V_8;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_0093;
	}

IL_0093:
	{
		Il2CppChar L_19 = V_8;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)47))))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_009b;
	}

IL_009b:
	{
		Il2CppChar L_20 = V_8;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)92))))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_0169;
	}

IL_00a6:
	{
		Il2CppChar L_21 = V_8;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_00bf;
		}
	}
	{
		Il2CppChar L_22 = V_8;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)98))))
		{
			goto IL_00f0;
		}
	}
	{
		goto IL_00b4;
	}

IL_00b4:
	{
		Il2CppChar L_23 = V_8;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)102))))
		{
			goto IL_00fa;
		}
	}
	{
		goto IL_0169;
	}

IL_00bf:
	{
		Il2CppChar L_24 = V_8;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)110))))
		{
			goto IL_0105;
		}
	}
	{
		goto IL_00c7;
	}

IL_00c7:
	{
		Il2CppChar L_25 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_25, ((int32_t)114))))
		{
			case 0:
			{
				goto IL_0110;
			}
			case 1:
			{
				goto IL_0169;
			}
			case 2:
			{
				goto IL_011b;
			}
			case 3:
			{
				goto IL_0126;
			}
		}
	}
	{
		goto IL_0169;
	}

IL_00e6:
	{
		// s.Append(c);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 292));
		StringBuilder_t* L_26 = V_0;
		Il2CppChar L_27 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 293));
		NullCheck(L_26);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 293));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 294));
		goto IL_0169;
	}

IL_00f0:
	{
		// s.Append('\b');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 295));
		StringBuilder_t* L_29 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 296));
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, 8, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 296));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 297));
		goto IL_0169;
	}

IL_00fa:
	{
		// s.Append('\f');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 298));
		StringBuilder_t* L_31 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 299));
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)12), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 299));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 300));
		goto IL_0169;
	}

IL_0105:
	{
		// s.Append('\n');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 301));
		StringBuilder_t* L_33 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 302));
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, ((int32_t)10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 302));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 303));
		goto IL_0169;
	}

IL_0110:
	{
		// s.Append('\r');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 304));
		StringBuilder_t* L_35 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 305));
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_35, ((int32_t)13), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 305));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 306));
		goto IL_0169;
	}

IL_011b:
	{
		// s.Append('\t');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 307));
		StringBuilder_t* L_37 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 308));
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_37, ((int32_t)9), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 308));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 309));
		goto IL_0169;
	}

IL_0126:
	{
		// var hex = new char[4];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 310));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_39 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)4);
		V_7 = L_39;
		// for (var i = 0; i < 4; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 311));
		V_10 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 312));
		goto IL_0146;
	}

IL_0133:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 313));
		// hex[i] = NextChar;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 314));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_40 = V_7;
		int32_t L_41 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 315));
		Il2CppChar L_42;
		L_42 = Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 315));
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (Il2CppChar)L_42);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 316));
		// for (var i = 0; i < 4; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 317));
		int32_t L_43 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0146:
	{
		// for (var i = 0; i < 4; i++)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 318));
		int32_t L_44 = V_10;
		V_11 = (bool)((((int32_t)L_44) < ((int32_t)4))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 319));
		bool L_45 = V_11;
		if (L_45)
		{
			goto IL_0133;
		}
	}
	{
		// s.Append((char)Convert.ToInt32(new string(hex), 16));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 320));
		StringBuilder_t* L_46 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47 = V_7;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 321));
		String_t* L_48;
		L_48 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_47, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 321));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 322));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_49;
		L_49 = Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4(L_48, ((int32_t)16), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 322));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 323));
		NullCheck(L_46);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_46, ((int32_t)(uint16_t)L_49), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 323));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 324));
		goto IL_0169;
	}

IL_0169:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 325));
		goto IL_0175;
	}

IL_016b:
	{
		// s.Append(c);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 326));
		StringBuilder_t* L_51 = V_0;
		Il2CppChar L_52 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 327));
		NullCheck(L_51);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_51, L_52, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 327));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 328));
		goto IL_0175;
	}

IL_0175:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 329));
	}

IL_0176:
	{
		// while (parsing)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 330));
		bool L_54 = V_2;
		V_12 = L_54;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 331));
		bool L_55 = V_12;
		if (L_55)
		{
			goto IL_001a;
		}
	}

IL_0180:
	{
		// return s.ToString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 332));
		StringBuilder_t* L_56 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 333));
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 333));
		V_13 = L_57;
		goto IL_018a;
	}

IL_018a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 334));
		String_t* L_58 = V_13;
		return L_58;
	}
}
// System.Object UnityEngine.Purchasing.MiniJSON.Json/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Parser_ParseNumber_mD21E421C94C573B083483B135F84632EAE8B9F19 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_ParseNumber_mD21E421C94C573B083483B135F84632EAE8B9F19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	bool V_2 = false;
	int64_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_ParseNumber_mD21E421C94C573B083483B135F84632EAE8B9F19_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 335));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 336));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 337));
		// var number = NextWord;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 338));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 339));
		String_t* L_0;
		L_0 = Parser_get_NextWord_m24A013D958324096C9ABC7E43FA7807D17156579(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 339));
		V_0 = L_0;
		// if (number.IndexOf('.') == -1 && number.IndexOf('e') == -1 && number.IndexOf('E') == -1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 340));
		String_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 341));
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_1, ((int32_t)46), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 341));
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 342));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)101), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 342));
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 343));
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_5, ((int32_t)69), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 343));
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 0;
	}

IL_002c:
	{
		V_2 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 344));
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 345));
		// Int64.TryParse(number, NumberStyles.Any, CultureInfo.InvariantCulture, out var parsedInt);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 346));
		String_t* L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 347));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 347));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 348));
		bool L_10;
		L_10 = Int64_TryParse_m64CEDECE4C3F16B715CA1057801018B2957AE0E3(L_8, ((int32_t)511), L_9, (&V_3), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 348));
		// return parsedInt;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 349));
		int64_t L_11 = V_3;
		int64_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_12);
		V_4 = L_13;
		goto IL_006b;
	}

IL_004e:
	{
		// Double.TryParse(number, NumberStyles.Any, CultureInfo.InvariantCulture, out var parsedDouble);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 350));
		String_t* L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 351));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 351));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 352));
		bool L_16;
		L_16 = Double_TryParse_m1D39DC22A45BC9A576B9D9130600BFD3CB6DA382(L_14, ((int32_t)511), L_15, (&V_1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 352));
		// return parsedDouble;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 353));
		double L_17 = V_1;
		double L_18 = L_17;
		RuntimeObject* L_19 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_18);
		V_4 = L_19;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 354));
		RuntimeObject* L_20 = V_4;
		return L_20;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_m8352A78799241FA73989E651ECB36B283A619230 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_EatWhitespace_m8352A78799241FA73989E651ECB36B283A619230_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_EatWhitespace_m8352A78799241FA73989E651ECB36B283A619230_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 355));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 356));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 357));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 358));
		goto IL_0026;
	}

IL_0003:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 359));
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 360));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 361));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 361));
		// if (json.Peek() == -1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 362));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_2 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 363));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 363));
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 364));
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 365));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 366));
		goto IL_0035;
	}

IL_0025:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 367));
	}

IL_0026:
	{
		// while (Char.IsWhiteSpace(PeekChar))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 368));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 369));
		Il2CppChar L_5;
		L_5 = Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 369));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 370));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 370));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 371));
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0003;
		}
	}

IL_0035:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 372));
		return;
	}
}
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 373));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 374));
	{
		// char PeekChar => Convert.ToChar(json.Peek());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 375));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 376));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 376));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 377));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 377));
		return L_2;
	}
}
// System.Char UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 378));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 379));
	{
		// char NextChar => Convert.ToChar(json.Read());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 380));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 381));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 381));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 382));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Il2CppChar L_2;
		L_2 = Convert_ToChar_mF1B1B205DDEFDE52251235514E7DAFCAB37D1F24(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 382));
		return L_2;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m24A013D958324096C9ABC7E43FA7807D17156579 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_get_NextWord_m24A013D958324096C9ABC7E43FA7807D17156579_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_get_NextWord_m24A013D958324096C9ABC7E43FA7807D17156579_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 383));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 384));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 385));
		// var word = new StringBuilder();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 386));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 387));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 387));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 388));
		goto IL_002d;
	}

IL_0009:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 389));
		// word.Append(NextChar);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 390));
		StringBuilder_t* L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 391));
		Il2CppChar L_2;
		L_2 = Parser_get_NextChar_m5701B6754644C372935D11CFC79F036997D7AFD3(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 391));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 392));
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 392));
		// if (json.Peek() == -1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 393));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_4 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 394));
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 394));
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 395));
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 396));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 397));
		goto IL_003f;
	}

IL_002c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 398));
	}

IL_002d:
	{
		// while (!IsWordBreak(PeekChar))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 400));
		Il2CppChar L_7;
		L_7 = Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 400));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 401));
		bool L_8;
		L_8 = Parser_IsWordBreak_m85CA2ECC1631CFA9F0F0AF0A06E6E48747F8A8D3(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 401));
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 402));
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0009;
		}
	}

IL_003f:
	{
		// return word.ToString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 403));
		StringBuilder_t* L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 404));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 404));
		V_3 = L_11;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 405));
		String_t* L_12 = V_3;
		return L_12;
	}
}
// UnityEngine.Purchasing.MiniJSON.Json/Parser/TOKEN UnityEngine.Purchasing.MiniJSON.Json/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355 (Parser_t1212D664758DEABD1AE7263AD49A9792437E107D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t1212D664758DEABD1AE7263AD49A9792437E107D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TOKEN_t02BFF43FF84DB07FF65D4C176D51E65C42709C04_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Parser_get_NextToken_m12BEE52A4D5389619AB3BF2F7975B98168A6E355_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 406));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 407));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 408));
		// EatWhitespace();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 409));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 410));
		Parser_EatWhitespace_m8352A78799241FA73989E651ECB36B283A619230(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 410));
		// if (json.Peek() == -1)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 411));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_0 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 412));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 412));
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 413));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 414));
		// return TOKEN.NONE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 415));
		V_1 = 0;
		goto IL_014d;
	}

IL_0022:
	{
		// switch (PeekChar)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 416));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 417));
		Il2CppChar L_3;
		L_3 = Parser_get_PeekChar_m50E157E099775830A433BE20580C7F6D4E3BF124(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 417));
		V_3 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 418));
		Il2CppChar L_4 = V_3;
		V_2 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 419));
		Il2CppChar L_5 = V_2;
		if ((!(((uint32_t)L_5) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a6;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00f6;
			}
			case 1:
			{
				goto IL_0102;
			}
			case 2:
			{
				goto IL_0102;
			}
			case 3:
			{
				goto IL_0102;
			}
			case 4:
			{
				goto IL_0102;
			}
			case 5:
			{
				goto IL_0102;
			}
			case 6:
			{
				goto IL_0102;
			}
			case 7:
			{
				goto IL_0102;
			}
			case 8:
			{
				goto IL_0102;
			}
			case 9:
			{
				goto IL_0102;
			}
			case 10:
			{
				goto IL_00e6;
			}
			case 11:
			{
				goto IL_00fe;
			}
			case 12:
			{
				goto IL_0102;
			}
			case 13:
			{
				goto IL_0102;
			}
			case 14:
			{
				goto IL_00fe;
			}
			case 15:
			{
				goto IL_00fe;
			}
			case 16:
			{
				goto IL_00fe;
			}
			case 17:
			{
				goto IL_00fe;
			}
			case 18:
			{
				goto IL_00fe;
			}
			case 19:
			{
				goto IL_00fe;
			}
			case 20:
			{
				goto IL_00fe;
			}
			case 21:
			{
				goto IL_00fe;
			}
			case 22:
			{
				goto IL_00fe;
			}
			case 23:
			{
				goto IL_00fe;
			}
			case 24:
			{
				goto IL_00fa;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_009f:
	{
		Il2CppChar L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)91))))
		{
			goto IL_00d2;
		}
	}
	{
		goto IL_0102;
	}

IL_00a6:
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)93))))
		{
			goto IL_00d6;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)123))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00b4;
	}

IL_00b4:
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)125))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_0102;
	}

IL_00bb:
	{
		// return TOKEN.CURLY_OPEN;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 420));
		V_1 = 1;
		goto IL_014d;
	}

IL_00c2:
	{
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 421));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_11 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 422));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 422));
		// return TOKEN.CURLY_CLOSE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 423));
		V_1 = 2;
		goto IL_014d;
	}

IL_00d2:
	{
		// return TOKEN.SQUARED_OPEN;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 424));
		V_1 = 3;
		goto IL_014d;
	}

IL_00d6:
	{
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 425));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_13 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 426));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_13);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 426));
		// return TOKEN.SQUARED_CLOSE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 427));
		V_1 = 4;
		goto IL_014d;
	}

IL_00e6:
	{
		// json.Read();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 428));
		StringReader_t1A336148FF22A9584E759A9D720CC96C23E35DD8* L_15 = __this->___json_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 429));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 429));
		// return TOKEN.COMMA;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 430));
		V_1 = 6;
		goto IL_014d;
	}

IL_00f6:
	{
		// return TOKEN.STRING;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 431));
		V_1 = 7;
		goto IL_014d;
	}

IL_00fa:
	{
		// return TOKEN.COLON;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 432));
		V_1 = 5;
		goto IL_014d;
	}

IL_00fe:
	{
		// return TOKEN.NUMBER;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 433));
		V_1 = 8;
		goto IL_014d;
	}

IL_0102:
	{
		// switch (NextWord)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 434));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 435));
		String_t* L_17;
		L_17 = Parser_get_NextWord_m24A013D958324096C9ABC7E43FA7807D17156579(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 435));
		V_5 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 436));
		String_t* L_18 = V_5;
		V_4 = L_18;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 437));
		String_t* L_19 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 438));
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 438));
		if (L_20)
		{
			goto IL_013a;
		}
	}
	{
		String_t* L_21 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 439));
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 439));
		if (L_22)
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_23 = V_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 440));
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 440));
		if (L_24)
		{
			goto IL_0144;
		}
	}
	{
		goto IL_0149;
	}

IL_013a:
	{
		// return TOKEN.FALSE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 441));
		V_1 = ((int32_t)10);
		goto IL_014d;
	}

IL_013f:
	{
		// return TOKEN.TRUE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 442));
		V_1 = ((int32_t)9);
		goto IL_014d;
	}

IL_0144:
	{
		// return TOKEN.NULL;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 443));
		V_1 = ((int32_t)11);
		goto IL_014d;
	}

IL_0149:
	{
		// return TOKEN.NONE;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 444));
		V_1 = 0;
		goto IL_014d;
	}

IL_014d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 445));
		int32_t L_25 = V_1;
		return L_25;
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
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_m340B552B648B7154EAC06E81210780404680D6FE (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer__ctor_m340B552B648B7154EAC06E81210780404680D6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Serializer__ctor_m340B552B648B7154EAC06E81210780404680D6FE_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 446));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 447));
	{
		// Serializer()
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 448));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 449));
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 449));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 450));
		// builder = new StringBuilder();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 451));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 452));
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 452));
		__this->___builder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_0);
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 453));
		return;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.Json/Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_mBE6FF0E50A5E677E0F28E587AF2B96C076ED2122 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_Serialize_mBE6FF0E50A5E677E0F28E587AF2B96C076ED2122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Serializer_Serialize_mBE6FF0E50A5E677E0F28E587AF2B96C076ED2122_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 454));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 455));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 456));
		// var instance = new Serializer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 458));
		Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* L_0 = (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099*)il2cpp_codegen_object_new(Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Serializer__ctor_m340B552B648B7154EAC06E81210780404680D6FE(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 458));
		V_0 = L_0;
		// instance.SerializeValue(obj);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 459));
		Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* L_1 = V_0;
		RuntimeObject* L_2 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 460));
		NullCheck(L_1);
		Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 460));
		// return instance.builder.ToString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 461));
		Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t* L_4 = L_3->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 462));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 462));
		V_1 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 463));
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 464));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 465));
	StringBuilder_t* G_B7_0 = NULL;
	StringBuilder_t* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t* G_B8_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 466));
		// if (value == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 467));
		RuntimeObject* L_0 = ___0_value;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 468));
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 469));
		// builder.Append("null");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 470));
		StringBuilder_t* L_2 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 471));
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 471));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 472));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 473));
		goto IL_00de;
	}

IL_0021:
	{
		// else if ((asStr = value as string) != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 474));
		RuntimeObject* L_4 = ___0_value;
		String_t* L_5 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		V_2 = L_5;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 475));
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 476));
		// SerializeString(asStr);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 477));
		String_t* L_7 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 478));
		Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314(__this, L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 478));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 479));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 480));
		goto IL_00de;
	}

IL_0041:
	{
		// else if (value is bool)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 481));
		RuntimeObject* L_8 = ___0_value;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 482));
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 483));
		// builder.Append((bool)value ? "true" : "false");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 484));
		StringBuilder_t* L_10 = __this->___builder_0;
		RuntimeObject* L_11 = ___0_value;
		G_B6_0 = L_10;
		if (((*(bool*)((bool*)(bool*)UnBox(L_11, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_10;
			goto IL_0066;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_006b;
	}

IL_0066:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_006b:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 485));
		NullCheck(G_B8_1);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_1, G_B8_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 485));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 486));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 487));
		goto IL_00de;
	}

IL_0074:
	{
		// else if ((asList = value as IList) != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 488));
		RuntimeObject* L_13 = ___0_value;
		RuntimeObject* L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		V_0 = L_14;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 489));
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0091;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 490));
		// SerializeArray(asList);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 491));
		RuntimeObject* L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 492));
		Serializer_SerializeArray_m4C726B75C57DECBAE44E60AA5903E14108E634A1(__this, L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 492));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 493));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 494));
		goto IL_00de;
	}

IL_0091:
	{
		// else if ((asDict = value as IDictionary) != null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 495));
		RuntimeObject* L_17 = ___0_value;
		RuntimeObject* L_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var));
		V_1 = L_18;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 496));
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 497));
		// SerializeObject(asDict);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 498));
		RuntimeObject* L_20 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 499));
		Serializer_SerializeObject_m344032DCE67EECA23363BAB284EA33444DF60DE8(__this, L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 499));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 500));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 501));
		goto IL_00de;
	}

IL_00ae:
	{
		// else if (value is char)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 502));
		RuntimeObject* L_21 = ___0_value;
		V_8 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_21, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 503));
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_00d4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 504));
		// SerializeString(new string((char)value, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 505));
		RuntimeObject* L_23 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 506));
		String_t* L_24;
		L_24 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_23, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), 1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 506));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 507));
		Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314(__this, L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 507));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 508));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 509));
		goto IL_00de;
	}

IL_00d4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 510));
		// SerializeOther(value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 511));
		RuntimeObject* L_25 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 512));
		Serializer_SerializeOther_m8BD246EE7E68993610AB6E0DE0C32FE17C70E8D9(__this, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 512));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 513));
	}

IL_00de:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 514));
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m344032DCE67EECA23363BAB284EA33444DF60DE8 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_SerializeObject_m344032DCE67EECA23363BAB284EA33444DF60DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Serializer_SerializeObject_m344032DCE67EECA23363BAB284EA33444DF60DE8_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 515));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 516));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 517));
		// var first = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 518));
		V_0 = (bool)1;
		// builder.Append('{');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 519));
		StringBuilder_t* L_0 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 520));
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 520));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 521));
		// foreach (var e in obj.Keys)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 522));
		RuntimeObject* L_2 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 523));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 523));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 524));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_3);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 524));
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 547));
					RuntimeObject* L_5 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_6 = V_4;
					if (!L_6)
					{
						goto IL_008a;
					}
				}
				{
					RuntimeObject* L_7 = V_4;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 548));
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 548));
				}

IL_008a:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 549));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 525));
				goto IL_006c_1;
			}

IL_0020_1:
			{
				// foreach (var e in obj.Keys)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 526));
				RuntimeObject* L_8 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 527));
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 527));
				V_2 = L_9;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 528));
				// if (!first)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 529));
				bool L_10 = V_0;
				V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 530));
				bool L_11 = V_3;
				if (!L_11)
				{
					goto IL_0040_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 531));
				// builder.Append(',');
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 532));
				StringBuilder_t* L_12 = __this->___builder_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 533));
				NullCheck(L_12);
				StringBuilder_t* L_13;
				L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)44), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 533));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 534));
			}

IL_0040_1:
			{
				// SerializeString(e.ToString());
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 535));
				RuntimeObject* L_14 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 536));
				NullCheck(L_14);
				String_t* L_15;
				L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 536));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 537));
				Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314(__this, L_15, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 537));
				// builder.Append(':');
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 538));
				StringBuilder_t* L_16 = __this->___builder_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 539));
				NullCheck(L_16);
				StringBuilder_t* L_17;
				L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, ((int32_t)58), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 539));
				// SerializeValue(obj[e]);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 540));
				RuntimeObject* L_18 = ___0_obj;
				RuntimeObject* L_19 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 541));
				NullCheck(L_18);
				RuntimeObject* L_20;
				L_20 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_18, L_19);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 541));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 542));
				Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566(__this, L_20, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 542));
				// first = false;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 543));
				V_0 = (bool)0;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 544));
			}

IL_006c_1:
			{
				// foreach (var e in obj.Keys)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 545));
				RuntimeObject* L_21 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 546));
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 546));
				if (L_22)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		// builder.Append('}');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 550));
		StringBuilder_t* L_23 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 551));
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_23, ((int32_t)125), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 551));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 552));
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_m4C726B75C57DECBAE44E60AA5903E14108E634A1 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_anArray, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_SerializeArray_m4C726B75C57DECBAE44E60AA5903E14108E634A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_anArray));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Serializer_SerializeArray_m4C726B75C57DECBAE44E60AA5903E14108E634A1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 553));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 554));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 555));
		// builder.Append('[');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 556));
		StringBuilder_t* L_0 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 557));
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 557));
		// var first = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 558));
		V_0 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 559));
		// foreach (var obj in anArray)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 560));
		RuntimeObject* L_2 = ___0_anArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 561));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 561));
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 578));
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_0064;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 579));
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 579));
				}

IL_0064:
				{
					CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 580));
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 562));
				goto IL_0046_1;
			}

IL_001b_1:
			{
				// foreach (var obj in anArray)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 563));
				RuntimeObject* L_7 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 564));
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 564));
				V_2 = L_8;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 565));
				// if (!first)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 566));
				bool L_9 = V_0;
				V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 567));
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_003b_1;
				}
			}
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 568));
				// builder.Append(',');
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 569));
				StringBuilder_t* L_11 = __this->___builder_0;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 570));
				NullCheck(L_11);
				StringBuilder_t* L_12;
				L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)44), NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 570));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 571));
			}

IL_003b_1:
			{
				// SerializeValue(obj);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 572));
				RuntimeObject* L_13 = V_2;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 573));
				Serializer_SerializeValue_mAF9647F5632680F36923B28B514187FF1AC11566(__this, L_13, NULL);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 573));
				// first = false;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 574));
				V_0 = (bool)0;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 575));
			}

IL_0046_1:
			{
				// foreach (var obj in anArray)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 576));
				RuntimeObject* L_14 = V_1;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 577));
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 577));
				if (L_15)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// builder.Append(']');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 581));
		StringBuilder_t* L_16 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 582));
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, ((int32_t)93), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 582));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 583));
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, String_t* ___0_str, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	Il2CppChar V_6 = 0x0;
	bool V_7 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_str));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 584));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 585));
	int32_t G_B17_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 586));
		// builder.Append('\"');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 587));
		StringBuilder_t* L_0 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 588));
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)34), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 588));
		// var charArray = str.ToCharArray();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 589));
		String_t* L_2 = ___0_str;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 590));
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 590));
		V_0 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 591));
		// foreach (var c in charArray)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 592));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		V_1 = L_4;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 593));
		goto IL_0159;
	}

IL_0020:
	{
		// foreach (var c in charArray)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 594));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 595));
		// switch (c)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 596));
		Il2CppChar L_9 = V_3;
		V_6 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 597));
		Il2CppChar L_10 = V_6;
		V_5 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 598));
		Il2CppChar L_11 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_11, 8)))
		{
			case 0:
			{
				goto IL_008e;
			}
			case 1:
			{
				goto IL_00e3;
			}
			case 2:
			{
				goto IL_00ba;
			}
			case 3:
			{
				goto IL_00f6;
			}
			case 4:
			{
				goto IL_00a4;
			}
			case 5:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_004f:
	{
		Il2CppChar L_12 = V_5;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)34))))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0057;
	}

IL_0057:
	{
		Il2CppChar L_13 = V_5;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_0078;
		}
	}
	{
		goto IL_00f6;
	}

IL_0062:
	{
		// builder.Append("\\\"");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 599));
		StringBuilder_t* L_14 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 600));
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 600));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 601));
		goto IL_0154;
	}

IL_0078:
	{
		// builder.Append("\\\\");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 602));
		StringBuilder_t* L_16 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 603));
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 603));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 604));
		goto IL_0154;
	}

IL_008e:
	{
		// builder.Append("\\b");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 605));
		StringBuilder_t* L_18 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 606));
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 606));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 607));
		goto IL_0154;
	}

IL_00a4:
	{
		// builder.Append("\\f");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 608));
		StringBuilder_t* L_20 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 609));
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 609));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 610));
		goto IL_0154;
	}

IL_00ba:
	{
		// builder.Append("\\n");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 611));
		StringBuilder_t* L_22 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 612));
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 612));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 613));
		goto IL_0154;
	}

IL_00d0:
	{
		// builder.Append("\\r");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 614));
		StringBuilder_t* L_24 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 615));
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 615));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 616));
		goto IL_0154;
	}

IL_00e3:
	{
		// builder.Append("\\t");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 617));
		StringBuilder_t* L_26 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 618));
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 618));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 619));
		goto IL_0154;
	}

IL_00f6:
	{
		// var codepoint = Convert.ToInt32(c);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 620));
		Il2CppChar L_28 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 621));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_29;
		L_29 = Convert_ToInt32_mDBBE9318A7CCE1560974CE93F5BFED9931CF0052(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 621));
		V_4 = L_29;
		// if ((codepoint >= 32) && (codepoint <= 126))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 622));
		int32_t L_30 = V_4;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)32))))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_31 = V_4;
		G_B17_0 = ((((int32_t)((((int32_t)L_31) > ((int32_t)((int32_t)126)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0110;
	}

IL_010f:
	{
		G_B17_0 = 0;
	}

IL_0110:
	{
		V_7 = (bool)G_B17_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 623));
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_0127;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 624));
		// builder.Append(c);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 625));
		StringBuilder_t* L_33 = __this->___builder_0;
		Il2CppChar L_34 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 626));
		NullCheck(L_33);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, L_34, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 626));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 627));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 628));
		goto IL_0152;
	}

IL_0127:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 629));
		// builder.Append("\\u");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 630));
		StringBuilder_t* L_36 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 631));
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 631));
		// builder.Append(codepoint.ToString("x4"));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 632));
		StringBuilder_t* L_38 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 633));
		String_t* L_39;
		L_39 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_4), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 633));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 634));
		NullCheck(L_38);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 634));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 635));
	}

IL_0152:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 636));
		goto IL_0154;
	}

IL_0154:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 637));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 638));
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0159:
	{
		// foreach (var c in charArray)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 639));
		int32_t L_42 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_43 = V_1;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// builder.Append('\"');
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 640));
		StringBuilder_t* L_44 = __this->___builder_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 641));
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, ((int32_t)34), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 641));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 642));
		return;
	}
}
// System.Void UnityEngine.Purchasing.MiniJSON.Json/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m8BD246EE7E68993610AB6E0DE0C32FE17C70E8D9 (Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_SerializeOther_m8BD246EE7E68993610AB6E0DE0C32FE17C70E8D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Serializer_tCBB835B0AFE92555112A76AB52B7A770FD03B099_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	double V_4 = 0.0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Serializer_SerializeOther_m8BD246EE7E68993610AB6E0DE0C32FE17C70E8D9_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 643));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 644));
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 645));
		// if (value is float)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 646));
		RuntimeObject* L_0 = ___0_value;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 647));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 648));
		// builder.Append(((float)value).ToString("R", CultureInfo.InvariantCulture));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 649));
		StringBuilder_t* L_2 = __this->___builder_0;
		RuntimeObject* L_3 = ___0_value;
		V_1 = ((*(float*)((float*)(float*)UnBox(L_3, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 650));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 650));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 651));
		String_t* L_5;
		L_5 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 651));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 652));
		NullCheck(L_2);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 652));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 653));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 654));
		goto IL_00e2;
	}

IL_0039:
	{
		// else if (value is int
		//            || value is uint
		//            || value is long
		//            || value is sbyte
		//            || value is byte
		//            || value is short
		//            || value is ushort
		//            || value is ulong)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 655));
		RuntimeObject* L_7 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_8 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_8, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_9 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_9, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_10 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_10, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_11 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_11, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_12 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_13 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_13, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var)))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeObject* L_14 = ___0_value;
		G_B11_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_14, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B11_0 = 1;
	}

IL_007d:
	{
		V_2 = (bool)G_B11_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 656));
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 657));
		// builder.Append(value);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 658));
		StringBuilder_t* L_16 = __this->___builder_0;
		RuntimeObject* L_17 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 659));
		NullCheck(L_16);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_16, L_17, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 659));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 660));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 661));
		goto IL_00e2;
	}

IL_0092:
	{
		// else if (value is double
		//            || value is decimal)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 662));
		RuntimeObject* L_19 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_19, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_00a5;
		}
	}
	{
		RuntimeObject* L_20 = ___0_value;
		G_B16_0 = ((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_20, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B16_0 = 1;
	}

IL_00a6:
	{
		V_3 = (bool)G_B16_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 663));
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 664));
		// builder.Append(Convert.ToDouble(value).ToString("R", CultureInfo.InvariantCulture));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 665));
		StringBuilder_t* L_22 = __this->___builder_0;
		RuntimeObject* L_23 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 666));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_24;
		L_24 = Convert_ToDouble_m86FF4F837721833186E883102C056A35F0860EB0(L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 666));
		V_4 = L_24;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 667));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 667));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 668));
		String_t* L_26;
		L_26 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&V_4), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, L_25, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 668));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 669));
		NullCheck(L_22);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 669));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 670));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 671));
		goto IL_00e2;
	}

IL_00d3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 672));
		// SerializeString(value.ToString());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 673));
		RuntimeObject* L_28 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 674));
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 674));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 675));
		Serializer_SerializeString_mC88515C25FF2AE89BEB3DD72E6C9325E672C4314(__this, L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 675));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 676));
	}

IL_00e2:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 677));
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
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetHash(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* MiniJsonExtensions_GetHash_mBB5A2F2E42AE6EF2176EC99DF69447E5FFDA8D3C (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dic, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_GetHash_mBB5A2F2E42AE6EF2176EC99DF69447E5FFDA8D3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dic), (&___1_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_GetHash_mBB5A2F2E42AE6EF2176EC99DF69447E5FFDA8D3C_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 678));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 679));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 680));
		// return (Dictionary<string, object>)dic[key];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 681));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_dic;
		String_t* L_1 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 682));
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_0, L_1, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 682));
		V_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)CastclassClass((RuntimeObject*)L_2, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		goto IL_0010;
	}

IL_0010:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 683));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetString(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_GetString_m30C96D830B48F7B726D704B72648A4D3718262EF (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dic, String_t* ___1_key, String_t* ___2_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_GetString_m30C96D830B48F7B726D704B72648A4D3718262EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dic), (&___1_key), (&___2_defaultValue));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_GetString_m30C96D830B48F7B726D704B72648A4D3718262EF_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 698));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 699));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 700));
		// if (dic.ContainsKey(key))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 701));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_dic;
		String_t* L_1 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 702));
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 702));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 703));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 704));
		// return dic[key].ToString();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 705));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___0_dic;
		String_t* L_5 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 706));
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, L_5, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 706));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 707));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 707));
		V_1 = L_7;
		goto IL_0020;
	}

IL_001c:
	{
		// return defaultValue;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 708));
		String_t* L_8 = ___2_defaultValue;
		V_1 = L_8;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 709));
		String_t* L_9 = V_1;
		return L_9;
	}
}
// System.Int64 UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetLong(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MiniJsonExtensions_GetLong_mF6C2535592DF322A6EA87520804FB07E0EB1F873 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dic, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_GetLong_mF6C2535592DF322A6EA87520804FB07E0EB1F873_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dic), (&___1_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_GetLong_mF6C2535592DF322A6EA87520804FB07E0EB1F873_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 710));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 711));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 712));
		// if (dic.ContainsKey(key))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 713));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_dic;
		String_t* L_1 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 714));
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 714));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 715));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 716));
		// return long.Parse(dic[key].ToString());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 717));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___0_dic;
		String_t* L_5 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 718));
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, L_5, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 718));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 719));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 719));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 720));
		int64_t L_8;
		L_8 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 720));
		V_1 = L_8;
		goto IL_0026;
	}

IL_0021:
	{
		// return 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 721));
		V_1 = ((int64_t)0);
		goto IL_0026;
	}

IL_0026:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 722));
		int64_t L_9 = V_1;
		return L_9;
	}
}
// System.Collections.Generic.List`1<System.String> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetStringList(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* MiniJsonExtensions_GetStringList_m593D3840636FA9D2B84F83ED52F7E6C7A15D4AF3 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dic, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_GetStringList_m593D3840636FA9D2B84F83ED52F7E6C7A15D4AF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_2 = NULL;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_5 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dic), (&___1_key));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_GetStringList_m593D3840636FA9D2B84F83ED52F7E6C7A15D4AF3_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 723));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 724));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 725));
		// if (dic.ContainsKey(key))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 726));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_dic;
		String_t* L_1 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 727));
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 727));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 728));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0062;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 729));
		// var result = new List<string>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 730));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 731));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_4, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 731));
		V_1 = L_4;
		// var objs = (List<object>)dic[key];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 732));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = ___0_dic;
		String_t* L_6 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 733));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_5, L_6, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 733));
		V_2 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)CastclassClass((RuntimeObject*)L_7, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 734));
		// foreach (var v in objs)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 735));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_8 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 736));
		NullCheck(L_8);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_9;
		L_9 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_8, List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 736));
		V_3 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				STORE_TRY_ID(methodExecutionContext, -1);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 747));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 748));
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_3), Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 748));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			STORE_TRY_ID(methodExecutionContext, 0);
			{
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 737));
				goto IL_0043_1;
			}

IL_002a_1:
			{
				// foreach (var v in objs)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 738));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 739));
				RuntimeObject* L_10;
				L_10 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_3), Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 739));
				V_4 = L_10;
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 740));
				// result.Add(v.ToString());
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 741));
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = V_1;
				RuntimeObject* L_12 = V_4;
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 742));
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 742));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 743));
				NullCheck(L_11);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_11, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 743));
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 744));
			}

IL_0043_1:
			{
				// foreach (var v in objs)
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 745));
				STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 746));
				bool L_14;
				L_14 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_3), Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_RuntimeMethod_var);
				CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 746));
				if (L_14)
				{
					goto IL_002a_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		// return result;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 749));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_1;
		V_5 = L_15;
		goto IL_006b;
	}

IL_0062:
	{
		// return new List<string>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 750));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 751));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_16, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 751));
		V_5 = L_16;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 752));
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_5;
		return L_17;
	}
}
// System.Boolean UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::GetBool(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MiniJsonExtensions_GetBool_mA409E9188230B82092D346BA4BAA2E4F64012C51 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dic, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_GetBool_mA409E9188230B82092D346BA4BAA2E4F64012C51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dic), (&___1_key));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_GetBool_mA409E9188230B82092D346BA4BAA2E4F64012C51_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 753));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 754));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 755));
		// if (dic.ContainsKey(key))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 756));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_dic;
		String_t* L_1 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 757));
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_0, L_1, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 757));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 758));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 759));
		// return bool.Parse(dic[key].ToString());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 760));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___0_dic;
		String_t* L_5 = ___1_key;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 761));
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_4, L_5, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 761));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 762));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 762));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 763));
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 763));
		V_1 = L_8;
		goto IL_0025;
	}

IL_0021:
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 764));
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 765));
		bool L_9 = V_1;
		return L_9;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m7B6D9612FCDFECA8BB3DC9990967F2D9D044A6F7 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_toJson_m7B6D9612FCDFECA8BB3DC9990967F2D9D044A6F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_toJson_m7B6D9612FCDFECA8BB3DC9990967F2D9D044A6F7_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 777));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 778));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 779));
		// return MiniJson.JsonEncode(obj);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 780));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 781));
		String_t* L_1;
		L_1 = MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 781));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 782));
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m886DE81A48F6EBF9B0B75A3FA0C8B60EABDCF61A (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_toJson_m886DE81A48F6EBF9B0B75A3FA0C8B60EABDCF61A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_toJson_m886DE81A48F6EBF9B0B75A3FA0C8B60EABDCF61A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 783));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 784));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 785));
		// return MiniJson.JsonEncode(obj);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 786));
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 787));
		String_t* L_1;
		L_1 = MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 787));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 788));
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::toJson(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiniJsonExtensions_toJson_m7A2BA8A0BBA1F5D6B39FFA9B977E2C2B19B29E62 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_toJson_m7A2BA8A0BBA1F5D6B39FFA9B977E2C2B19B29E62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_array));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_toJson_m7A2BA8A0BBA1F5D6B39FFA9B977E2C2B19B29E62_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 789));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 790));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 791));
		// var list = new List<object>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 792));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 793));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 793));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 794));
		// foreach (var s in array)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 795));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___0_array;
		V_1 = L_1;
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 796));
		goto IL_0020;
	}

IL_000e:
	{
		// foreach (var s in array)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 797));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 798));
		// list.Add(s);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 799));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = V_0;
		String_t* L_7 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 800));
		NullCheck(L_6);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_6, L_7, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 800));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 801));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 802));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		// foreach (var s in array)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 803));
		int32_t L_9 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// return MiniJson.JsonEncode(list);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 804));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 805));
		String_t* L_12;
		L_12 = MiniJson_JsonEncode_m41013803427D4F4AA5FE91C375330042C909DE23(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 805));
		V_4 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 806));
		String_t* L_13 = V_4;
		return L_13;
	}
}
// System.Collections.Generic.List`1<System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::ArrayListFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* MiniJsonExtensions_ArrayListFromJson_mCA4DC5E9B69CE1F39298E9498D7DBFD9DF66E02A (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_ArrayListFromJson_mCA4DC5E9B69CE1F39298E9498D7DBFD9DF66E02A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_json));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_ArrayListFromJson_mCA4DC5E9B69CE1F39298E9498D7DBFD9DF66E02A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 807));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 808));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 809));
		// return MiniJson.JsonDecode(json) as List<object>;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 810));
		String_t* L_0 = ___0_json;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 811));
		RuntimeObject* L_1;
		L_1 = MiniJson_JsonDecode_m5B62B33DF18A7AF5D050F9508ACAE7916B3B1C43(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 811));
		V_0 = ((List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)IsInstClass((RuntimeObject*)L_1, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 812));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Purchasing.MiniJSON.MiniJsonExtensions::HashtableFromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* MiniJsonExtensions_HashtableFromJson_m9700EAC23B195E012320EDFF5B6B18039A5CDB70 (String_t* ___0_json, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MiniJsonExtensions_HashtableFromJson_m9700EAC23B195E012320EDFF5B6B18039A5CDB70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_json));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MiniJsonExtensions_HashtableFromJson_m9700EAC23B195E012320EDFF5B6B18039A5CDB70_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 813));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsPurchasing_Common + 814));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 815));
		// return MiniJson.JsonDecode(json) as Dictionary<string, object>;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 816));
		String_t* L_0 = ___0_json;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 817));
		RuntimeObject* L_1;
		L_1 = MiniJson_JsonDecode_m5B62B33DF18A7AF5D050F9508ACAE7916B3B1C43(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 817));
		V_0 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_1, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsPurchasing_Common + 818));
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
