#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
struct String_t;
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317;
IL2CPP_EXTERN_C String_t* _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA;
IL2CPP_EXTERN_C String_t* _stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
IL2CPP_EXTERN_C String_t* _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral774D4BF54129BC524F2FC2ADFFD07EC2B34C8843;
IL2CPP_EXTERN_C String_t* _stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50;
IL2CPP_EXTERN_C String_t* _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t42F165DEA2597BD5AB2C914FCF80349ECF878162 
{
};
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys;
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	int32_t ___m_codePage;
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem;
	bool ___m_deserializedFromEverett;
	bool ___m_isReadOnly;
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback;
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	RuntimeObject* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity;
};
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary;
	bool ___containsFiles;
};
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B  : public RuntimeObject
{
};
struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask;
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore;
};
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	int64_t ____ticks;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer;
	int32_t ____origin;
	int32_t ____position;
	int32_t ____length;
	int32_t ____capacity;
	bool ____expandable;
	bool ____writable;
	bool ____exposable;
	bool ____isOpen;
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask;
};
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	int32_t ___value__;
};
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	int32_t ___value__;
};
struct UriKind_t6597BD6BF48C695D63244DF8541B5EA48FF7F9E7 
{
	int32_t ___value__;
};
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	uint64_t ___value__;
};
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout;
	String_t* ___pattern;
	int32_t ___roptions;
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist;
	int32_t ___capsize;
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref;
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref;
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code;
	bool ____refsInitialized;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	String_t* ___m_String;
	String_t* ___m_originalUnicodeString;
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax;
	String_t* ___m_DnsSafeHost;
	uint64_t ___m_Flags;
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info;
	bool ___m_iriParsing;
};
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding;
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings;
	RuntimeObject* ___s_InternalSyncObject;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal;
};
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ucHexChars;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lcHexChars;
	uint8_t ___urlEscapeChar;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlForbidden;
	uint8_t ___qpEscapeChar;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpSpace;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpForbidden;
};
struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields
{
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___domainRegex;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null;
};
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	int32_t ___s_cacheSize;
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache;
	int32_t ___s_cacheCount;
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst;
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout;
};
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	String_t* ___UriSchemeFile;
	String_t* ___UriSchemeFtp;
	String_t* ___UriSchemeGopher;
	String_t* ___UriSchemeHttp;
	String_t* ___UriSchemeHttps;
	String_t* ___UriSchemeWs;
	String_t* ___UriSchemeWss;
	String_t* ___UriSchemeMailto;
	String_t* ___UriSchemeNews;
	String_t* ___UriSchemeNntp;
	String_t* ___UriSchemeNetTcp;
	String_t* ___UriSchemeNetPipe;
	String_t* ___SchemeDelimiter;
	bool ___s_ConfigInitialized;
	bool ___s_ConfigInitializing;
	int32_t ___s_IdnScope;
	bool ___s_IriParsing;
	bool ___useDotNetRelativeOrAbsolute;
	bool ___IsWindowsFileSystem;
	RuntimeObject* ___s_initLock;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, int32_t ___1_uriKind, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_baseUri, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_relativeUri, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_mB030426417510BBEDC64D01C748B0D82A1FA3EE7 (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m66B8D55570840DBF0EA5EEB40C9ACB4DA431E87A (String_t* ___0_toEncode, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
inline int32_t List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_DataEncode_mA51FBA63F88AE0973EB6EF269AF34D205C287F1E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_toEncode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m86AA40F3F2DC0DADF1CBEB275121F4D81C91D4E4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, uint8_t ___1_escapeChar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_space, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_forbidden, bool ___4_uppercase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_mD433242C2C8505F3B71A9A0E7997F724FE789630 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m42C360DFB6FF4C8801AB5AED488B8FDFFA0BA651 (uint8_t ___0_b, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_hexChars, uint8_t* ___2_byte0, uint8_t* ___3_byte1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m1C57CAA2C5C2549819F89B447CA002464D245A1F (uint8_t* ___0_input, int32_t ___1_inputLength, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m63855E63B6B6EAFD4BCE65395BB744AAF5BD6AB4 (String_t* ___0_baseUri, String_t* ___1_redirectUri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___1_redirectUri;
		NullCheck(L_0);
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, 0, NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___1_redirectUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_4, L_3, 2, NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_001a:
	{
		String_t* L_5 = ___1_redirectUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_6, L_5, 0, NULL);
		V_0 = L_6;
	}

IL_0022:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF(L_7, NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_10, NULL);
		V_5 = L_11;
		goto IL_0052;
	}

IL_0038:
	{
		String_t* L_12 = ___0_baseUri;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_13, L_12, 1, NULL);
		V_1 = L_13;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_14 = V_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_15 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F(L_16, L_14, L_15, NULL);
		V_2 = L_16;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17 = V_2;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_17, NULL);
		V_5 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_19 = V_5;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m31ADEB75E00368144C8F223647D81A3B5ADD3D69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F, NULL);
		((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000 (const RuntimeMethod* method) 
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		__this->___containsFiles = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___formData = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formData), (void*)L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___fieldNames = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fieldNames), (void*)L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___fileNames = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileNames), (void*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___types = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___types), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___boundary = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boundary), (void*)L_4);
		V_0 = 0;
		goto IL_0080;
	}

IL_004c:
	{
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)48), ((int32_t)110), NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) > ((int32_t)((int32_t)57)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 7));
	}

IL_0064:
	{
		int32_t L_9 = V_1;
		V_3 = (bool)((((int32_t)L_9) > ((int32_t)((int32_t)90)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 6));
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___boundary;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)L_14));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0080:
	{
		int32_t L_16 = V_0;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)40)))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m5309EB3D9652AF0CFBEBFB42324E6AF0BCFB350E (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___0_fieldName, String_t* ___1_value, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___2_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral774D4BF54129BC524F2FC2ADFFD07EC2B34C8843);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___fieldNames;
		String_t* L_1 = ___0_fieldName;
		NullCheck(L_0);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_1, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___fileNames;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, (String_t*)NULL, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = __this->___formData;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4 = ___2_e;
		String_t* L_5 = ___1_value;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_4, L_5);
		NullCheck(L_3);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___types;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8 = ___2_e;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(10, L_8);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral774D4BF54129BC524F2FC2ADFFD07EC2B34C8843, L_9, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_10, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m47F69B41BEF235B6C7D8643630251E134BFF167C (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___0_fieldName, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_contents, String_t* ___2_fileName, String_t* ___3_mimeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B10_0 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	{
		__this->___containsFiles = (bool)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_contents;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_contents;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)137)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_contents;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_contents;
		NullCheck(L_7);
		int32_t L_8 = 2;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_contents;
		NullCheck(L_10);
		int32_t L_11 = 3;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_contents;
		NullCheck(L_13);
		int32_t L_14 = 4;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___1_contents;
		NullCheck(L_16);
		int32_t L_17 = 5;
		uint8_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_contents;
		NullCheck(L_19);
		int32_t L_20 = 6;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___1_contents;
		NullCheck(L_22);
		int32_t L_23 = 7;
		uint8_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		G_B10_0 = ((((int32_t)L_24) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B10_0 = 0;
	}

IL_004c:
	{
		V_0 = (bool)G_B10_0;
		String_t* L_25 = ___2_fileName;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_27 = ___0_fieldName;
		bool L_28 = V_0;
		if (L_28)
		{
			G_B13_0 = L_27;
			goto IL_0061;
		}
		G_B12_0 = L_27;
	}
	{
		G_B14_0 = _stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309;
		G_B14_1 = G_B12_0;
		goto IL_0066;
	}

IL_0061:
	{
		G_B14_0 = _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
		G_B14_1 = G_B13_0;
	}

IL_0066:
	{
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B14_1, G_B14_0, NULL);
		___2_fileName = L_29;
	}

IL_006e:
	{
		String_t* L_30 = ___3_mimeType;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_30) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_31 = V_2;
		if (!L_31)
		{
			goto IL_008e;
		}
	}
	{
		bool L_32 = V_0;
		V_3 = L_32;
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_0086;
		}
	}
	{
		___3_mimeType = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_008d;
	}

IL_0086:
	{
		___3_mimeType = _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
	}

IL_008d:
	{
	}

IL_008e:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = __this->___fieldNames;
		String_t* L_35 = ___0_fieldName;
		NullCheck(L_34);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_34, L_35, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = __this->___fileNames;
		String_t* L_37 = ___2_fileName;
		NullCheck(L_36);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_36, L_37, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_38 = __this->___formData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___1_contents;
		NullCheck(L_38);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_38, L_39, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40 = __this->___types;
		String_t* L_41 = ___3_mimeType;
		NullCheck(L_40);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_40, L_41, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* WWWForm_get_headers_mF6508B8C984B76EF984495FF01BA7185CFD0C63E (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_2 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->___containsFiles;
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___boundary;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___boundary;
		NullCheck(L_6);
		NullCheck(L_4);
		String_t* L_7;
		L_7 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		NullCheck(L_3);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_3, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_8, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_0058;
	}

IL_0047:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = V_0;
		NullCheck(L_9);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_9, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0058:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = V_0;
		V_2 = L_10;
		goto IL_005c;
	}

IL_005c:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWForm_get_data_mE064CFB866D49D1E49FA9E0811CE71D039BB0145 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	String_t* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_20 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)1024), NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d1:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_03db;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_03db:
				{
					return;
				}
			}
		});
		try
		{
			{
				bool L_3 = __this->___containsFiles;
				V_1 = L_3;
				bool L_4 = V_1;
				if (!L_4)
				{
					goto IL_0318_1;
				}
			}
			{
				V_2 = 0;
				goto IL_0295_1;
			}

IL_0022_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				NullCheck(L_7);
				NullCheck(L_5);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_5, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash;
				NullCheck(L_10);
				NullCheck(L_8);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___boundary;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___boundary;
				NullCheck(L_13);
				NullCheck(L_11);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_11, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				NullCheck(L_16);
				NullCheck(L_14);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_14, L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader;
				NullCheck(L_19);
				NullCheck(L_17);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_17, L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_20;
				L_20 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = __this->___types;
				int32_t L_22 = V_2;
				NullCheck(L_21);
				String_t* L_23;
				L_23 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_21, L_22, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				NullCheck(L_20);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
				L_24 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_20, L_23);
				V_3 = L_24;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
				NullCheck(L_27);
				NullCheck(L_25);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_25, L_26, 0, ((int32_t)(((RuntimeArray*)L_27)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				NullCheck(L_30);
				NullCheck(L_28);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_28, L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_31 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader;
				NullCheck(L_33);
				NullCheck(L_31);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_31, L_32, 0, ((int32_t)(((RuntimeArray*)L_33)->max_length)));
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
				L_34 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				NullCheck(L_34);
				String_t* L_35;
				L_35 = VirtualFuncInvoker0< String_t* >::Invoke(9, L_34);
				V_4 = L_35;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = __this->___fieldNames;
				int32_t L_37 = V_2;
				NullCheck(L_36);
				String_t* L_38;
				L_38 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_36, L_37, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_5 = L_38;
				String_t* L_39 = V_5;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_40;
				L_40 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_41;
				L_41 = WWWTranscoder_SevenBitClean_mB030426417510BBEDC64D01C748B0D82A1FA3EE7(L_39, L_40, NULL);
				if (!L_41)
				{
					goto IL_010d_1;
				}
			}
			{
				String_t* L_42 = V_5;
				NullCheck(L_42);
				int32_t L_43;
				L_43 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_42, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86, NULL);
				G_B6_0 = ((((int32_t)L_43) > ((int32_t)(-1)))? 1 : 0);
				goto IL_010e_1;
			}

IL_010d_1:
			{
				G_B6_0 = 1;
			}

IL_010e_1:
			{
				V_8 = (bool)G_B6_0;
				bool L_44 = V_8;
				if (!L_44)
				{
					goto IL_014f_1;
				}
			}
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
				NullCheck(L_46);
				(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
				String_t* L_48 = V_4;
				NullCheck(L_47);
				(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_48);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_47;
				NullCheck(L_49);
				(L_49)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
				String_t* L_51 = V_5;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_52;
				L_52 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				String_t* L_53;
				L_53 = WWWTranscoder_QPEncode_m66B8D55570840DBF0EA5EEB40C9ACB4DA431E87A(L_51, L_52, NULL);
				NullCheck(L_50);
				(L_50)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_53);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_50;
				NullCheck(L_54);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
				String_t* L_55;
				L_55 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_54, NULL);
				V_5 = L_55;
			}

IL_014f_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_56;
				L_56 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				String_t* L_57 = V_5;
				NullCheck(L_56);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58;
				L_58 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_56, L_57);
				V_6 = L_58;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_59 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_6;
				NullCheck(L_61);
				NullCheck(L_59);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_59, L_60, 0, ((int32_t)(((RuntimeArray*)L_61)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_62 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote;
				NullCheck(L_64);
				NullCheck(L_62);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_62, L_63, 0, ((int32_t)(((RuntimeArray*)L_64)->max_length)));
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_65 = __this->___fileNames;
				int32_t L_66 = V_2;
				NullCheck(L_65);
				String_t* L_67;
				L_67 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_65, L_66, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_9 = (bool)((!(((RuntimeObject*)(String_t*)L_67) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_68 = V_9;
				if (!L_68)
				{
					goto IL_024c_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_69 = __this->___fileNames;
				int32_t L_70 = V_2;
				NullCheck(L_69);
				String_t* L_71;
				L_71 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_69, L_70, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_10 = L_71;
				String_t* L_72 = V_10;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_73;
				L_73 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_74;
				L_74 = WWWTranscoder_SevenBitClean_mB030426417510BBEDC64D01C748B0D82A1FA3EE7(L_72, L_73, NULL);
				if (!L_74)
				{
					goto IL_01c5_1;
				}
			}
			{
				String_t* L_75 = V_10;
				NullCheck(L_75);
				int32_t L_76;
				L_76 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_75, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86, NULL);
				G_B12_0 = ((((int32_t)L_76) > ((int32_t)(-1)))? 1 : 0);
				goto IL_01c6_1;
			}

IL_01c5_1:
			{
				G_B12_0 = 1;
			}

IL_01c6_1:
			{
				V_12 = (bool)G_B12_0;
				bool L_77 = V_12;
				if (!L_77)
				{
					goto IL_0207_1;
				}
			}
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
				NullCheck(L_79);
				(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79;
				String_t* L_81 = V_4;
				NullCheck(L_80);
				(L_80)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_81);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_80;
				NullCheck(L_82);
				(L_82)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
				String_t* L_84 = V_10;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_85;
				L_85 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				String_t* L_86;
				L_86 = WWWTranscoder_QPEncode_m66B8D55570840DBF0EA5EEB40C9ACB4DA431E87A(L_84, L_85, NULL);
				NullCheck(L_83);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_86);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_83;
				NullCheck(L_87);
				(L_87)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
				String_t* L_88;
				L_88 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_87, NULL);
				V_10 = L_88;
			}

IL_0207_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_89;
				L_89 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				String_t* L_90 = V_10;
				NullCheck(L_89);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91;
				L_91 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_89, L_90);
				V_11 = L_91;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_92 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField;
				NullCheck(L_94);
				NullCheck(L_92);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_92, L_93, 0, ((int32_t)(((RuntimeArray*)L_94)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_95 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_11;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = V_11;
				NullCheck(L_97);
				NullCheck(L_95);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_95, L_96, 0, ((int32_t)(((RuntimeArray*)L_97)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_98 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote;
				NullCheck(L_100);
				NullCheck(L_98);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_98, L_99, 0, ((int32_t)(((RuntimeArray*)L_100)->max_length)));
			}

IL_024c_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_101 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				NullCheck(L_103);
				NullCheck(L_101);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_101, L_102, 0, ((int32_t)(((RuntimeArray*)L_103)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_104 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				NullCheck(L_106);
				NullCheck(L_104);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_104, L_105, 0, ((int32_t)(((RuntimeArray*)L_106)->max_length)));
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_107 = __this->___formData;
				int32_t L_108 = V_2;
				NullCheck(L_107);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109;
				L_109 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_107, L_108, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
				V_7 = L_109;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_110 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_7;
				NullCheck(L_112);
				NullCheck(L_110);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_110, L_111, 0, ((int32_t)(((RuntimeArray*)L_112)->max_length)));
				int32_t L_113 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_113, 1));
			}

IL_0295_1:
			{
				int32_t L_114 = V_2;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_115 = __this->___formData;
				NullCheck(L_115);
				int32_t L_116;
				L_116 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_115, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
				V_13 = (bool)((((int32_t)L_114) < ((int32_t)L_116))? 1 : 0);
				bool L_117 = V_13;
				if (L_117)
				{
					goto IL_0022_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_118 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				NullCheck(L_120);
				NullCheck(L_118);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_118, L_119, 0, ((int32_t)(((RuntimeArray*)L_120)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_121 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash;
				NullCheck(L_123);
				NullCheck(L_121);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_121, L_122, 0, ((int32_t)(((RuntimeArray*)L_123)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_124 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = __this->___boundary;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = __this->___boundary;
				NullCheck(L_126);
				NullCheck(L_124);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_124, L_125, 0, ((int32_t)(((RuntimeArray*)L_126)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_127 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash;
				NullCheck(L_129);
				NullCheck(L_127);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_127, L_128, 0, ((int32_t)(((RuntimeArray*)L_129)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_130 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf;
				NullCheck(L_132);
				NullCheck(L_130);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_130, L_131, 0, ((int32_t)(((RuntimeArray*)L_132)->max_length)));
				goto IL_03c7_1;
			}

IL_0318_1:
			{
				V_14 = 0;
				goto IL_03ae_1;
			}

IL_0321_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_133;
				L_133 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_134 = __this->___fieldNames;
				int32_t L_135 = V_14;
				NullCheck(L_134);
				String_t* L_136;
				L_136 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_134, L_135, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				NullCheck(L_133);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137;
				L_137 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_133, L_136);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_138;
				L_138 = WWWTranscoder_DataEncode_mA51FBA63F88AE0973EB6EF269AF34D205C287F1E(L_137, NULL);
				V_15 = L_138;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_139 = __this->___formData;
				int32_t L_140 = V_14;
				NullCheck(L_139);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141;
				L_141 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_139, L_140, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
				V_16 = L_141;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_142 = V_16;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143;
				L_143 = WWWTranscoder_DataEncode_mA51FBA63F88AE0973EB6EF269AF34D205C287F1E(L_142, NULL);
				V_17 = L_143;
				int32_t L_144 = V_14;
				V_18 = (bool)((((int32_t)L_144) > ((int32_t)0))? 1 : 0);
				bool L_145 = V_18;
				if (!L_145)
				{
					goto IL_0377_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_146 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand;
				NullCheck(L_148);
				NullCheck(L_146);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_146, L_147, 0, ((int32_t)(((RuntimeArray*)L_148)->max_length)));
			}

IL_0377_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_149 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_150 = V_15;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_151 = V_15;
				NullCheck(L_151);
				NullCheck(L_149);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_149, L_150, 0, ((int32_t)(((RuntimeArray*)L_151)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_152 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_154 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal;
				NullCheck(L_154);
				NullCheck(L_152);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_152, L_153, 0, ((int32_t)(((RuntimeArray*)L_154)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_155 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_156 = V_17;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = V_17;
				NullCheck(L_157);
				NullCheck(L_155);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_155, L_156, 0, ((int32_t)(((RuntimeArray*)L_157)->max_length)));
				int32_t L_158 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_158, 1));
			}

IL_03ae_1:
			{
				int32_t L_159 = V_14;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_160 = __this->___formData;
				NullCheck(L_160);
				int32_t L_161;
				L_161 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_160, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
				V_19 = (bool)((((int32_t)L_159) < ((int32_t)L_161))? 1 : 0);
				bool L_162 = V_19;
				if (L_162)
				{
					goto IL_0321_1;
				}
			}
			{
			}

IL_03c7_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_163 = V_0;
				NullCheck(L_163);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164;
				L_164 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42, L_163);
				V_20 = L_164;
				goto IL_03dc;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03dc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_165 = V_20;
		return L_165;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__cctor_m272C4A10B85A1DEC11809F9EEADD0B2DE9166B5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_2, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf), (void*)L_3);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_4, _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_6, _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote), (void*)L_9);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_10, _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_12, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand), (void*)L_13);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_14, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal), (void*)L_15);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m42C360DFB6FF4C8801AB5AED488B8FDFFA0BA651 (uint8_t ___0_b, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_hexChars, uint8_t* ___2_byte0, uint8_t* ___3_byte1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___2_byte0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_hexChars;
		uint8_t L_2 = ___0_b;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)((int32_t)L_2>>4));
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		uint8_t* L_5 = ___3_byte1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_hexChars;
		uint8_t L_7 = ___0_b;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7&((int32_t)15)));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		*((int8_t*)L_5) = (int8_t)L_9;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_DataEncode_mA51FBA63F88AE0973EB6EF269AF34D205C287F1E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_toEncode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_toEncode;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = WWWTranscoder_Encode_m86AA40F3F2DC0DADF1CBEB275121F4D81C91D4E4(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m66B8D55570840DBF0EA5EEB40C9ACB4DA431E87A (String_t* ___0_toEncode, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___1_e;
		String_t* L_1 = ___0_toEncode;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpEscapeChar;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = WWWTranscoder_Encode_m86AA40F3F2DC0DADF1CBEB275121F4D81C91D4E4(L_2, L_3, L_4, L_5, (bool)1, NULL);
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		String_t* L_10;
		L_10 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
		V_1 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m86AA40F3F2DC0DADF1CBEB275121F4D81C91D4E4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, uint8_t ___1_escapeChar, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_space, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_forbidden, bool ___4_uppercase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		NullCheck(L_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00bd;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00bd:
				{
					return;
				}
			}
		});
		try
		{
			{
				V_1 = 0;
				goto IL_009a_1;
			}

IL_0014_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
				int32_t L_5 = V_1;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)32)))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0030_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_space;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_space;
				NullCheck(L_11);
				NullCheck(L_9);
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
				goto IL_0095_1;
			}

IL_0030_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
				int32_t L_13 = V_1;
				NullCheck(L_12);
				int32_t L_14 = L_13;
				uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
				if ((((int32_t)L_15) < ((int32_t)((int32_t)32))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_input;
				int32_t L_17 = V_1;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				if ((((int32_t)L_19) > ((int32_t)((int32_t)126))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___3_forbidden;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_input;
				int32_t L_22 = V_1;
				NullCheck(L_21);
				int32_t L_23 = L_22;
				uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = WWWTranscoder_ByteArrayContains_mD433242C2C8505F3B71A9A0E7997F724FE789630(L_20, L_24, NULL);
				G_B8_0 = ((int32_t)(L_25));
				goto IL_004a_1;
			}

IL_0049_1:
			{
				G_B8_0 = 1;
			}

IL_004a_1:
			{
				V_3 = (bool)G_B8_0;
				bool L_26 = V_3;
				if (!L_26)
				{
					goto IL_0089_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_0;
				uint8_t L_28 = ___1_escapeChar;
				NullCheck(L_27);
				VirtualActionInvoker1< uint8_t >::Invoke(38, L_27, L_28);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___0_input;
				int32_t L_30 = V_1;
				NullCheck(L_29);
				int32_t L_31 = L_30;
				uint8_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
				bool L_33 = ___4_uppercase;
				if (L_33)
				{
					G_B11_0 = ((int32_t)(L_32));
					goto IL_0065_1;
				}
				G_B10_0 = ((int32_t)(L_32));
			}
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars;
				G_B12_0 = L_34;
				G_B12_1 = G_B10_0;
				goto IL_006a_1;
			}

IL_0065_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars;
				G_B12_0 = L_35;
				G_B12_1 = G_B11_0;
			}

IL_006a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				WWWTranscoder_Byte2Hex_m42C360DFB6FF4C8801AB5AED488B8FDFFA0BA651((uint8_t)G_B12_1, G_B12_0, (&V_4), (&V_5), NULL);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_36 = V_0;
				uint8_t L_37 = V_4;
				NullCheck(L_36);
				VirtualActionInvoker1< uint8_t >::Invoke(38, L_36, L_37);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_38 = V_0;
				uint8_t L_39 = V_5;
				NullCheck(L_38);
				VirtualActionInvoker1< uint8_t >::Invoke(38, L_38, L_39);
				goto IL_0095_1;
			}

IL_0089_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_40 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___0_input;
				int32_t L_42 = V_1;
				NullCheck(L_41);
				int32_t L_43 = L_42;
				uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
				NullCheck(L_40);
				VirtualActionInvoker1< uint8_t >::Invoke(38, L_40, L_44);
			}

IL_0095_1:
			{
				int32_t L_45 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			}

IL_009a_1:
			{
				int32_t L_46 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___0_input;
				NullCheck(L_47);
				V_6 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
				bool L_48 = V_6;
				if (L_48)
				{
					goto IL_0014_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_49 = V_0;
				NullCheck(L_49);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
				L_50 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(42, L_49);
				V_7 = L_50;
				goto IL_00be;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_7;
		return L_51;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_mD433242C2C8505F3B71A9A0E7997F724FE789630 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_001d;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___1_b;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_002b;
	}

IL_0018:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0009;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_mB030426417510BBEDC64D01C748B0D82A1FA3EE7 (String_t* ___0_s, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppChar* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		String_t* L_0 = ___0_s;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_0056;
	}

IL_0011:
	{
		String_t* L_3 = ___0_s;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 2));
		int32_t L_5 = V_0;
		uintptr_t L_6 = ((uintptr_t)L_5);
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		V_1 = (uint8_t*)(L_7);
		String_t* L_8 = ___0_s;
		V_6 = L_8;
		String_t* L_9 = V_6;
		V_5 = (Il2CppChar*)((uintptr_t)L_9);
		Il2CppChar* L_10 = V_5;
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		Il2CppChar* L_11 = V_5;
		int32_t L_12;
		L_12 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
		V_5 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, L_12));
	}

IL_0035:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13 = ___1_e;
		Il2CppChar* L_14 = V_5;
		String_t* L_15 = ___0_s;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		uint8_t* L_17 = V_1;
		int32_t L_18 = V_0;
		NullCheck(L_13);
		int32_t L_19;
		L_19 = VirtualFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(22, L_13, L_14, L_16, L_17, L_18);
		V_2 = L_19;
		V_6 = (String_t*)NULL;
		uint8_t* L_20 = V_1;
		int32_t L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = WWWTranscoder_SevenBitClean_m1C57CAA2C5C2549819F89B447CA002464D245A1F(L_20, L_21, NULL);
		V_4 = L_22;
		goto IL_0056;
	}

IL_0056:
	{
		bool L_23 = V_4;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m1C57CAA2C5C2549819F89B447CA002464D245A1F (uint8_t* ___0_input, int32_t ___1_inputLength, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		uint8_t* L_0 = ___0_input;
		int32_t L_1 = V_0;
		int32_t L_2 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1))));
		if ((((int32_t)L_2) < ((int32_t)((int32_t)32))))
		{
			goto IL_0018;
		}
	}
	{
		uint8_t* L_3 = ___0_input;
		int32_t L_4 = V_0;
		int32_t L_5 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4))));
		G_B4_0 = ((((int32_t)L_5) > ((int32_t)((int32_t)126)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B4_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___1_inputLength;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_m105AD5C901F1A72DCDD5956E3FDDE83B65AB0152 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars), (void*)L_3);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar = (uint8_t)((int32_t)37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden), (void*)L_9);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpEscapeChar = (uint8_t)((int32_t)61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_mC56870DA395B6E753E8551AE82DAF128B2547000(NULL);
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden), (void*)L_13);
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
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m81E194684391CA512FFC7C3A9172B56D6A1E2752 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_certificateData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m73467B32D9B40F6897951F71F80CDDA92F5FD785 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_certificateData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_certificateData;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
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
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr = unmarshaled.___m_Ptr;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr;
	unmarshaled.___m_Ptr = unmarshaledm_Ptr_temp_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DownloadHandler_ReceiveData_mF892EB77524A60DF1F82A2DA00F17BECB480CD93 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_dataLength, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLengthHeader_m545073C4FB5AB9BB6640D24FC2F32070E5FE3F17 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, uint64_t ___0_contentLength, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_contentLength;
		VirtualActionInvoker1< int32_t >::Invoke(6, __this, ((int32_t)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLength_m058DE0B56C3EBE8ECE3F9570852024EE2A84DE4F (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, int32_t ___0_contentLength, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_CompleteContent_m0FFC337906FF9BF8BDD546906D48DA57F52F81CA (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DownloadHandler_GetProgress_mB440AC38C72F2E14DD53259E1D0C9D7612F0791F (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		goto IL_0009;
	}

IL_0009:
	{
		float L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
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
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
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
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
