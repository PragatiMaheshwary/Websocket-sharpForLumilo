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

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A;
struct ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D;
struct AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419;
struct ECAlgorithms_t4489EA3F640D9EF1D369EE800CDD5F2067F43676;
struct ECCurve_t0364AF983299667828B922E48915D3E670F79711;
struct ECEndomorphism_t3F776B566084340D958092A1C1582846002D3DE8;
struct ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE;
struct ECMultiplier_t33BBB47C931BC2869309BD6C18262E513D5B4758;
struct ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4;
struct ECPointMap_tA17C2C6ECD103EF4BDFBA2580036C8258C4C0440;
struct FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510;
struct GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC;
struct GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34;
struct GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3;
struct IPolynomial_t3D3D4D4EFE9C1D67042A2B4D62F1D66D9EDEA52B;
struct IPolynomialExtensionField_t4EC8312ABF558C20522F399FE694C0E420D7BC1B;
struct Nat192_t985F716065F64647DCF703AC0CCD70E8E686DEF2;
struct Nat224_tCA71FC8C0DE76AC2EC8B2960EA6DF30F47875CAD;
struct Nat256_t667B8F3BF508A42E19A4899219A3B33B1EFC80A4;
struct Nat320_t1DE8606CD0A399C161FB50AD1BE7807EC3070890;
struct Nat384_t9F6C8F31B91B0070864BABF202B5B515B9955D08;
struct Nat448_t27F054A5EE8BC804D37DC4222802C4A552107D46;
struct Nat512_t99110FE3EC1EA92D2F11097F14F6742A874FBF18;
struct Nat576_tE9D8D4555CECFAC5EB15FD3AFFD8E1CB78FE269A;
struct PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SecureRandom_t8F56D000B80B8051436EFA01476419C2577B07D9;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8;

IL2CPP_EXTERN_C RuntimeClass* AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECEndomorphism_t3F776B566084340D958092A1C1582846002D3DE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPointMap_tA17C2C6ECD103EF4BDFBA2580036C8258C4C0440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPolynomialExtensionField_t4EC8312ABF558C20522F399FE694C0E420D7BC1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPolynomial_t3D3D4D4EFE9C1D67042A2B4D62F1D66D9EDEA52B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11458CB676B17FDBC854E855460B86C0F96BD86E;
IL2CPP_EXTERN_C String_t* _stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B;
IL2CPP_EXTERN_C String_t* _stringLiteral1A997B3A9A8B12CFDBF937AF62469873CB6FAADD;
IL2CPP_EXTERN_C String_t* _stringLiteral4756B4D24FB5D3DDD5FFD2182ED33AE3C826630A;
IL2CPP_EXTERN_C String_t* _stringLiteral6E7E5B27C32F322062A3E24D8F2436975287AD24;
IL2CPP_EXTERN_C String_t* _stringLiteralBC418DF12EFC3347B9249DB32348AF09079D4B8F;
IL2CPP_EXTERN_C String_t* _stringLiteralC85DD4565B10A03E31F133210FF2614019176D85;
IL2CPP_EXTERN_C String_t* _stringLiteralDC124196B821FEEA4E6C89B04C026563A557FFB2;
IL2CPP_EXTERN_C String_t* _stringLiteralE45EEE7E9244B0DA29A70539E1461DB5935D05F5;
IL2CPP_EXTERN_C const RuntimeMethod* ECAlgorithms_ImportPoint_m7405D7ADF4B5ECD799357A87D7A2BEA08632B931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ECAlgorithms_SumOfMultiplies_m71F49C1299DDC0E0AFA5906BE8D5DC5113E3781C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FiniteFields_GetBinaryExtensionField_mFDC9155286B7EA3A38927D9B64251D77F39C199E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FiniteFields_GetPrimeField_mF80F5ED5C4F8474C823C242CD23D38747EC76067_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat192_FromBigInteger64_mBAF193AC04F1CC48E4F9747BF2845C9C8AFD4FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat192_FromBigInteger_mCE2AE90B6488978D601C6BAB84DDBED806994F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat224_FromBigInteger_m950132C1661AED0EF57F41CCF521999CBD9F6D64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat256_FromBigInteger64_m5137EEEB82A1788879C4784703BC37C07E7B33BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat256_FromBigInteger_m2CED984C5FEC823D7D3957ADD47ABB79A6E59A88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat320_FromBigInteger64_mF3C34269302F5B95B4D114ECD074EBDA6B94B7DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat448_FromBigInteger64_mEB98B1ECB7616C458A1955849BB62E7EC9156265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nat576_FromBigInteger64_m2BF643F31B6FFC379BCA5E126BC7D903040FE9F2_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A;
struct ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude;
	int32_t ___sign;
	int32_t ___nBits;
	int32_t ___nBitLength;
	int32_t ___mQuote;
};
struct ECAlgorithms_t4489EA3F640D9EF1D369EE800CDD5F2067F43676  : public RuntimeObject
{
};
struct ECCurve_t0364AF983299667828B922E48915D3E670F79711  : public RuntimeObject
{
	RuntimeObject* ___m_field;
	ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* ___m_a;
	ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* ___m_b;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___m_order;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___m_cofactor;
	int32_t ___m_coord;
	RuntimeObject* ___m_endomorphism;
	RuntimeObject* ___m_multiplier;
};
struct ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE  : public RuntimeObject
{
};
struct ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4  : public RuntimeObject
{
	ECCurve_t0364AF983299667828B922E48915D3E670F79711* ___m_curve;
	ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* ___m_x;
	ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* ___m_y;
	ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* ___m_zs;
	bool ___m_withCompression;
	RuntimeObject* ___m_preCompTable;
};
struct FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510  : public RuntimeObject
{
};
struct GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___exponents;
};
struct GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34  : public RuntimeObject
{
	RuntimeObject* ___subfield;
	RuntimeObject* ___minimalPolynomial;
};
struct Nat192_t985F716065F64647DCF703AC0CCD70E8E686DEF2  : public RuntimeObject
{
};
struct Nat224_tCA71FC8C0DE76AC2EC8B2960EA6DF30F47875CAD  : public RuntimeObject
{
};
struct Nat256_t667B8F3BF508A42E19A4899219A3B33B1EFC80A4  : public RuntimeObject
{
};
struct Nat320_t1DE8606CD0A399C161FB50AD1BE7807EC3070890  : public RuntimeObject
{
};
struct Nat384_t9F6C8F31B91B0070864BABF202B5B515B9955D08  : public RuntimeObject
{
};
struct Nat448_t27F054A5EE8BC804D37DC4222802C4A552107D46  : public RuntimeObject
{
};
struct Nat512_t99110FE3EC1EA92D2F11097F14F6742A874FBF18  : public RuntimeObject
{
};
struct Nat576_tE9D8D4555CECFAC5EB15FD3AFFD8E1CB78FE269A  : public RuntimeObject
{
};
struct PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638  : public RuntimeObject
{
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___characteristic;
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
struct WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8  : public RuntimeObject
{
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___m_preComp;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___m_preCompNeg;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___m_twice;
};
struct AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104  : public ECCurve_t0364AF983299667828B922E48915D3E670F79711
{
	BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___si;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_StaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding;
	BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___SMALL_CONSTANTS;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___Zero;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___One;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___Two;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___Three;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___Ten;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix2;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix2E;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix8;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix8E;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix10;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix10E;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix16;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___radix16E;
	SecureRandom_t8F56D000B80B8051436EFA01476419C2577B07D9* ___RandomSource;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds;
};
struct ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4_StaticFields
{
	ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* ___EMPTY_ZS;
};
struct FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields
{
	RuntimeObject* ___GF_2;
	RuntimeObject* ___GF_3;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
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
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8  : public RuntimeArray
{
	ALIGN_FIELD (8) ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* m_Items[1];

	inline ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C  : public RuntimeArray
{
	ALIGN_FIELD (8) BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* m_Items[1];

	inline BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A  : public RuntimeArray
{
	ALIGN_FIELD (8) ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* m_Items[1];

	inline ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D  : public RuntimeArray
{
	ALIGN_FIELD (8) WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* m_Items[1];

	inline WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Gte_mC3661D2F9501FF5CDB500D1F2CE6CD6C0D76017A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_Sub_mA6394C85035ECE7520893E2BD901AEA4098A9099 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_Create_m44F131C01A64398660FB63F0E0F7A0B9393A40D4 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_IntValue_m05584D6A7C77090AAFD614D41AC11F04F0C65E74 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat192_Create64_mACCF22D6500F58EF827AF1B42456692DF1826BC2 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BigInteger_get_LongValue_mBA593F51D50A9E6DC7BAF26D224F29DC651605D6 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, int32_t ___2_zOff, int32_t ___3_zPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mC1F3FE5842A7ACFDCFAD8C602F3C97B9A660D89D (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, int32_t ___0_sign, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_mDD3A664874DD413CE9AC816A95B12612FA6E9B58 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_Gte_m43CFAD21934C90DDAB6A14F161083A6BFCD7F049 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_Sub_m7C7E3D4FCBA8ED391F6910FCF8BE69342C66F12A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat224_Create_mE7F1428760BA3E2155FBE001D27D595E98B2C233 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_m56204CBB05EBEAA6819142A16D6416C27C08FF59 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_Sub_m12C4A91AE6406A9C6CA3B3B6929CEA487110DFA2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_Create_m0DFB535CD022569F3CF22B6EC150A7A4B776E729 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat256_Create64_m0119E045DB36841B47FE6BC11ABB0F98ACD41E92 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat320_Create64_mA7F255FDD91895F15F4D8FEA451C137140BA9CC3 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_m2D39F1A2806A0440AA161F46DEA38C3106F270B7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_m0FD275CADC67725EC1A23CFE00A0ABF02677FAD7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddToEachOther_m858E95828091AEC75AA1CA99D57958D25003D2B8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddTo_mB63A66B9913B1D74618339239BCE46850392D799 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Diff_m6CC86C98045B35085034F520898C3C28779D45C0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_CreateExt_m733B350C00198156D856E0ACA9A97027CC7AC1AD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat_SubFrom_m0409B93F8C6486684B986EF1AEB0B0421376F8EB (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddTo_mAD5D2486926CA51E1558A71EFB4B31327C322E69 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_AddWordAt_m35F7C3455CB491996C5A649EF2267CE3676782E0 (int32_t ___0_len, uint32_t ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zPos, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m0290385D07CABF4F0660359F4CCE6C46528AABA4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m7CED50F5E87CBBAEC4E567CF9E9DF9E0AFEAEA48 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat448_Create64_m3824C1576C5F09439A8270A8CA08F698FC13EB3C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_m7B05CD2F2310C0EEFF81BD401AF0DA668D891ED3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_mCA7DA36B48072C2269E7AE54CE7040B9CEDBB93D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddToEachOther_mA38806D9CC6A65BA94639BA4034BD2E370AF58B3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddTo_mE25983E2F2B488AA6213A334054EB185BE2B9897 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Diff_mD41866D14BE486F806BA070720AA6BB733329539 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_CreateExt_m1034567363D97AC4EB8D492359DE3A052FE00355 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_m73A64C1B7958720A9C82342EDEF2960B12219997 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_m3AD442D83BB16BCAF3C38E8AA63D786E01488D55 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat576_Create64_mF5590C6196D08EC04FBA979F854B6D3F656D92E4 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF2Polynomial__ctor_mBAD261B38811EBFB0124F99D443006C798CB2DD3 (GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_exponents, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPolynomialExtensionField__ctor_m7F9180C93470FD5BAB031045EE93DA76DB7E6209 (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, RuntimeObject* ___0_subfield, RuntimeObject* ___1_polynomial, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeField__ctor_m8D1E637B292532360CA43DC144D067EBCCEB7E85 (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* __this, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_characteristic, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* BigInteger_ValueOf_m8B0655645A74B513F1D4F058E1BBB28F3E0F9A1B (int64_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Integers_RotateLeft_m19CD752B23A07D0044D89E309A9F8DF8336589AF (int32_t ___0_i, int32_t ___1_distance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Arrays_Clone_m4C6B03355C28189780ACF0A72D2D6ABA82610F9A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mB07284C014040F3DC8D4C5BAFDF4BE4FD64F1EB1 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_a, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Arrays_GetHashCode_mD49FE05FF2EDE70F019A957973705C2FB178B967 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsF2mField_m6DE3D30546505D761D2170CC05E552D0005BA1B1 (RuntimeObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsFpField_mCA3755DFF0CC8DCDA25B83CF89D44A99BE1DA0CB (RuntimeObject* ___0_field, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_SumOfTwoMultiplies_mE859889CBA9B786C2E13FF02ECBB9DCED3958692 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_a, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___2_Q, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImportPoint_m7405D7ADF4B5ECD799357A87D7A2BEA08632B931 (ECCurve_t0364AF983299667828B922E48915D3E670F79711* ___0_c, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___1_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultipliesGlv_m809B4317487085FE6AFFF33AB6824C4B3F45C319 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_ps, BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___1_ks, RuntimeObject* ___2_glvEndomorphism, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultiplies_m922A39837FB77F324C116A3AD0872994CC9886B5 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_ps, BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___1_ks, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplShamirsTrickWNaf_m37818BBD407F564937299A819862D1917DE624B1 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___2_Q, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplShamirsTrickJsf_m4D18AE2A22CD24911F6E2D1483D838050C45F8D6 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___2_Q, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_l, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECAlgorithms_MontgomeryTrick_m4DDB2D30A877B4B6F0E1F835403DB5FBF29DABB7 (ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* ___0_zs, int32_t ___1_off, int32_t ___2_len, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* ___3_scale, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_TestBit_mF7FBE27982BA143D9D180F9E2177965A1AA5F1FE (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, int32_t ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECPoint_IsValid_m73DB7C2615AEFAA33E5971354962182D0DBB2E09 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WNafUtilities_GenerateJsf_mDA3158C2F50BB23AE762CECD5D584656A49B799D (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_g, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_h, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WNafUtilities_GetWindowSize_mD5DDC3CE9DDB95912F3656768A89F5D681A214F0 (int32_t ___0_bits, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* WNafUtilities_Precompute_mD07E5A17860ECFE1E52658767973CE605538D2B9 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_p, int32_t ___1_width, bool ___2_includeNegated, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF (int32_t ___0_width, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplShamirsTrickWNaf_mF50E74C93C415C1E0427B275EF8DA71D2BC1D540 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_preCompP, ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___1_preCompNegP, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_wnafP, ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___3_preCompQ, ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___4_preCompNegQ, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_wnafQ, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* WNafUtilities_MapPointWithPrecomp_mEDFF6594F6E4B9344FCEA35DC76F941B024D843F (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_p, int32_t ___1_width, bool ___2_includeNegated, RuntimeObject* ___3_pointMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* WNafUtilities_GetWNafPreCompInfo_mECE3C81FAB9C745A81C765D38F46F3256DB6D865 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultiplies_mC182DA352CC2357995C4818C10D8E1816E7470FF (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_negs, WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* ___1_infos, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___2_wnafs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* BigInteger_Mod_mBD7796AD8736EFB82A31025D03AB4F8FD30FE894 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultiplies_mC90D59B059F06A9B0EA0529AF724B56CD8A7C626 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_ps, RuntimeObject* ___1_pointMap, BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___2_ks, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_Add_m331DA99CAB38D942ADF237BFCD9648E7A0541352 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		return ((int32_t)(uint32_t)L_60);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddBothTo_m8C2786733D0C357273CF5EA47FC67AED10114D8A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_y;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_z;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_z;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		return ((int32_t)(uint32_t)L_78);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddTo_m9F4658B8D70D95081E0EFF81923198334377CE2F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_z;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_z;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_z;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_z;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		return ((int32_t)(uint32_t)L_60);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddTo_mB63A66B9913B1D74618339239BCE46850392D799 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___4_cIn;
		V_0 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int32_t L_11 = ___3_zOff;
		uint64_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)L_12));
		uint64_t L_13 = V_0;
		V_0 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_18), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		uint64_t L_25 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_0;
		V_0 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_x;
		int32_t L_29 = ___1_xOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_31), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		uint64_t L_38 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 2))), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		int32_t L_42 = ___1_xOff;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 3));
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_z;
		int32_t L_46 = ___3_zOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_44), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int32_t L_50 = ___3_zOff;
		uint64_t L_51 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 3))), (uint32_t)((int32_t)(uint32_t)L_51));
		uint64_t L_52 = V_0;
		V_0 = ((int64_t)((uint64_t)L_52>>((int32_t)32)));
		uint64_t L_53 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		int32_t L_55 = ___1_xOff;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 4));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		int32_t L_59 = ___3_zOff;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 4));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_53, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_57), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int32_t L_63 = ___3_zOff;
		uint64_t L_64 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 4))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_0;
		V_0 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		int32_t L_68 = ___1_xOff;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 5));
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___2_z;
		int32_t L_72 = ___3_zOff;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 5));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_70), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int32_t L_76 = ___3_zOff;
		uint64_t L_77 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 5))), (uint32_t)((int32_t)(uint32_t)L_77));
		uint64_t L_78 = V_0;
		V_0 = ((int64_t)((uint64_t)L_78>>((int32_t)32)));
		uint64_t L_79 = V_0;
		return ((int32_t)(uint32_t)L_79);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_AddToEachOther_m858E95828091AEC75AA1CA99D57958D25003D2B8 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_u;
		int32_t L_2 = ___1_uOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_v;
		int32_t L_6 = ___3_vOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_u;
		int32_t L_10 = ___1_uOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_v;
		int32_t L_13 = ___3_vOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		uint64_t L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_u;
		int32_t L_18 = ___1_uOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_v;
		int32_t L_22 = ___3_vOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_20), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_u;
		int32_t L_26 = ___1_uOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_v;
		int32_t L_29 = ___3_vOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_u;
		int32_t L_34 = ___1_uOff;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 2));
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_v;
		int32_t L_38 = ___3_vOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_36), ((int64_t)(uint64_t)L_40)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_u;
		int32_t L_42 = ___1_uOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 2))), (uint32_t)((int32_t)(uint32_t)L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_v;
		int32_t L_45 = ___3_vOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___0_u;
		int32_t L_50 = ___1_uOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_v;
		int32_t L_54 = ___3_vOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 3));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_52), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_u;
		int32_t L_58 = ___1_uOff;
		uint64_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 3))), (uint32_t)((int32_t)(uint32_t)L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___2_v;
		int32_t L_61 = ___3_vOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		uint64_t L_64 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___0_u;
		int32_t L_66 = ___1_uOff;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 4));
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_v;
		int32_t L_70 = ___3_vOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___0_u;
		int32_t L_74 = ___1_uOff;
		uint64_t L_75 = V_0;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 4))), (uint32_t)((int32_t)(uint32_t)L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_v;
		int32_t L_77 = ___3_vOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___0_u;
		int32_t L_82 = ___1_uOff;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 5));
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_v;
		int32_t L_86 = ___3_vOff;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_84), ((int64_t)(uint64_t)L_88)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___0_u;
		int32_t L_90 = ___1_uOff;
		uint64_t L_91 = V_0;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 5))), (uint32_t)((int32_t)(uint32_t)L_91));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_v;
		int32_t L_93 = ___3_vOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_0;
		return ((int32_t)(uint32_t)L_96);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Copy_m837380E9CA09C682F2E2825EC816BCBA710D01E6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_23);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Copy64_mC146572024B71B32AA5134B1117BE50AB5B826CD (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_Create_m44F131C01A64398660FB63F0E0F7A0B9393A40D4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)6);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat192_Create64_mACCF22D6500F58EF827AF1B42456692DF1826BC2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)3);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_CreateExt_m733B350C00198156D856E0ACA9A97027CC7AC1AD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat192_CreateExt64_m703944435126FB2FA4068E2420CCE466D0079CFB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)6);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Diff_m6CC86C98045B35085034F520898C3C28779D45C0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_y;
		int32_t L_3 = ___3_yOff;
		bool L_4;
		L_4 = Nat192_Gte_mC3661D2F9501FF5CDB500D1F2CE6CD6C0D76017A(L_0, L_1, L_2, L_3, NULL);
		bool L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_001b;
		}
		G_B1_0 = L_5;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___4_z;
		int32_t L_11 = ___5_zOff;
		int32_t L_12;
		L_12 = Nat192_Sub_mA6394C85035ECE7520893E2BD901AEA4098A9099(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return G_B1_0;
	}

IL_001b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___2_y;
		int32_t L_14 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___4_z;
		int32_t L_18 = ___5_zOff;
		int32_t L_19;
		L_19 = Nat192_Sub_mA6394C85035ECE7520893E2BD901AEA4098A9099(L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Eq_m7CCE717FF106DD542D51FF8A51DEB92D8E190115 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 5;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Eq64_m3529595C2BCC8528FC651475E271B3215B5D7B21 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat192_FromBigInteger_mCE2AE90B6488978D601C6BAB84DDBED806994F2D (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)192))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat192_FromBigInteger_mCE2AE90B6488978D601C6BAB84DDBED806994F2D_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = Nat192_Create_m44F131C01A64398660FB63F0E0F7A0B9393A40D4(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = BigInteger_get_IntValue_m05584D6A7C77090AAFD614D41AC11F04F0C65E74(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)32), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat192_FromBigInteger64_mBAF193AC04F1CC48E4F9747BF2845C9C8AFD4FD1 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)192))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat192_FromBigInteger64_mBAF193AC04F1CC48E4F9747BF2845C9C8AFD4FD1_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5;
		L_5 = Nat192_Create64_mACCF22D6500F58EF827AF1B42456692DF1826BC2(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = BigInteger_get_LongValue_mBA593F51D50A9E6DC7BAF26D224F29DC651605D6(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)64), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_GetBit_m4807E9C3888CB248E7C7723A71EED754E83C6A70 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		V_0 = ((int32_t)(L_4>>5));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)6)))
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Gte_mBBE130F0A55E9471A6EAEA8EF91B478473418874 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 5;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_Gte_mC3661D2F9501FF5CDB500D1F2CE6CD6C0D76017A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 5;
		goto IL_0020;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) < ((uint32_t)L_11))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		uint32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_12) > ((uint32_t)L_13))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0020:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsOne_m654F177094AB70B26B3F1C6C5B8B7AD2F81AE477 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsOne64_mDAC6358AF278DBB142D35A64B467775C43565B63 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsZero_m49A3547C98CABA6C000BEE1DC29522FC59240CD5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)6)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat192_IsZero64_m28B2091688F9E138510657D1C4C24BA43F4C8680 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_m2D39F1A2806A0440AA161F46DEA38C3106F270B7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		V_6 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 0;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_7 = ((int64_t)(uint64_t)L_20);
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_7;
		uint64_t L_23 = V_0;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)il2cpp_codegen_multiply((int64_t)L_22, (int64_t)L_23))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_zz;
		uint64_t L_25 = V_6;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_6;
		V_6 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_6;
		uint64_t L_28 = V_7;
		uint64_t L_29 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_multiply((int64_t)L_28, (int64_t)L_29))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_zz;
		uint64_t L_31 = V_6;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_6;
		V_6 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_6;
		uint64_t L_34 = V_7;
		uint64_t L_35 = V_2;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		uint64_t L_37 = V_6;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_6;
		V_6 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_6;
		uint64_t L_40 = V_7;
		uint64_t L_41 = V_3;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)L_41))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_zz;
		uint64_t L_43 = V_6;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_6;
		V_6 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_6;
		uint64_t L_46 = V_7;
		uint64_t L_47 = V_4;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_multiply((int64_t)L_46, (int64_t)L_47))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_zz;
		uint64_t L_49 = V_6;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_49));
		uint64_t L_50 = V_6;
		V_6 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_7;
		uint64_t L_53 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)il2cpp_codegen_multiply((int64_t)L_52, (int64_t)L_53))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___2_zz;
		uint64_t L_55 = V_6;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_6;
		V_6 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_zz;
		uint64_t L_58 = V_6;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_58));
		V_8 = 1;
		goto IL_019c;
	}

IL_00be:
	{
		V_9 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___0_x;
		int32_t L_60 = V_8;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_10 = ((int64_t)(uint64_t)L_62);
		uint64_t L_63 = V_9;
		uint64_t L_64 = V_10;
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		int32_t L_67 = V_8;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65)), ((int64_t)(uint64_t)L_69)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_zz;
		int32_t L_71 = V_8;
		uint64_t L_72 = V_9;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (uint32_t)((int32_t)(uint32_t)L_72));
		uint64_t L_73 = V_9;
		V_9 = ((int64_t)((uint64_t)L_73>>((int32_t)32)));
		uint64_t L_74 = V_9;
		uint64_t L_75 = V_10;
		uint64_t L_76 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___2_zz;
		int32_t L_78 = V_8;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_74, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_75, (int64_t)L_76)), ((int64_t)(uint64_t)L_80)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___2_zz;
		int32_t L_82 = V_8;
		uint64_t L_83 = V_9;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 1))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_9;
		V_9 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_9;
		uint64_t L_86 = V_10;
		uint64_t L_87 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_zz;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 2));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_86, (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_zz;
		int32_t L_93 = V_8;
		uint64_t L_94 = V_9;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 2))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_9;
		V_9 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_9;
		uint64_t L_97 = V_10;
		uint64_t L_98 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___2_zz;
		int32_t L_100 = V_8;
		NullCheck(L_99);
		int32_t L_101 = ((int32_t)il2cpp_codegen_add(L_100, 3));
		uint32_t L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_97, (int64_t)L_98)), ((int64_t)(uint64_t)L_102)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___2_zz;
		int32_t L_104 = V_8;
		uint64_t L_105 = V_9;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_104, 3))), (uint32_t)((int32_t)(uint32_t)L_105));
		uint64_t L_106 = V_9;
		V_9 = ((int64_t)((uint64_t)L_106>>((int32_t)32)));
		uint64_t L_107 = V_9;
		uint64_t L_108 = V_10;
		uint64_t L_109 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ___2_zz;
		int32_t L_111 = V_8;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, 4));
		uint32_t L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_107, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_108, (int64_t)L_109)), ((int64_t)(uint64_t)L_113)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_114 = ___2_zz;
		int32_t L_115 = V_8;
		uint64_t L_116 = V_9;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_115, 4))), (uint32_t)((int32_t)(uint32_t)L_116));
		uint64_t L_117 = V_9;
		V_9 = ((int64_t)((uint64_t)L_117>>((int32_t)32)));
		uint64_t L_118 = V_9;
		uint64_t L_119 = V_10;
		uint64_t L_120 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___2_zz;
		int32_t L_122 = V_8;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 5));
		uint32_t L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_118, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_119, (int64_t)L_120)), ((int64_t)(uint64_t)L_124)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = ___2_zz;
		int32_t L_126 = V_8;
		uint64_t L_127 = V_9;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_126, 5))), (uint32_t)((int32_t)(uint32_t)L_127));
		uint64_t L_128 = V_9;
		V_9 = ((int64_t)((uint64_t)L_128>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = ___2_zz;
		int32_t L_130 = V_8;
		uint64_t L_131 = V_9;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_130, 6))), (uint32_t)((int32_t)(uint32_t)L_131));
		int32_t L_132 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_132, 1));
	}

IL_019c:
	{
		int32_t L_133 = V_8;
		if ((((int32_t)L_133) < ((int32_t)6)))
		{
			goto IL_00be;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Mul_m0FD275CADC67725EC1A23CFE00A0ABF02677FAD7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		V_6 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		int32_t L_25 = ___1_xOff;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_7 = ((int64_t)(uint64_t)L_27);
		uint64_t L_28 = V_6;
		uint64_t L_29 = V_7;
		uint64_t L_30 = V_0;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, ((int64_t)il2cpp_codegen_multiply((int64_t)L_29, (int64_t)L_30))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___4_zz;
		int32_t L_32 = ___5_zzOff;
		uint64_t L_33 = V_6;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint32_t)((int32_t)(uint32_t)L_33));
		uint64_t L_34 = V_6;
		V_6 = ((int64_t)((uint64_t)L_34>>((int32_t)32)));
		uint64_t L_35 = V_6;
		uint64_t L_36 = V_7;
		uint64_t L_37 = V_1;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_35, ((int64_t)il2cpp_codegen_multiply((int64_t)L_36, (int64_t)L_37))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___4_zz;
		int32_t L_39 = ___5_zzOff;
		uint64_t L_40 = V_6;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, 1))), (uint32_t)((int32_t)(uint32_t)L_40));
		uint64_t L_41 = V_6;
		V_6 = ((int64_t)((uint64_t)L_41>>((int32_t)32)));
		uint64_t L_42 = V_6;
		uint64_t L_43 = V_7;
		uint64_t L_44 = V_2;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_42, ((int64_t)il2cpp_codegen_multiply((int64_t)L_43, (int64_t)L_44))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___4_zz;
		int32_t L_46 = ___5_zzOff;
		uint64_t L_47 = V_6;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_46, 2))), (uint32_t)((int32_t)(uint32_t)L_47));
		uint64_t L_48 = V_6;
		V_6 = ((int64_t)((uint64_t)L_48>>((int32_t)32)));
		uint64_t L_49 = V_6;
		uint64_t L_50 = V_7;
		uint64_t L_51 = V_3;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)il2cpp_codegen_multiply((int64_t)L_50, (int64_t)L_51))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___4_zz;
		int32_t L_53 = ___5_zzOff;
		uint64_t L_54 = V_6;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, 3))), (uint32_t)((int32_t)(uint32_t)L_54));
		uint64_t L_55 = V_6;
		V_6 = ((int64_t)((uint64_t)L_55>>((int32_t)32)));
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_7;
		uint64_t L_58 = V_4;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, ((int64_t)il2cpp_codegen_multiply((int64_t)L_57, (int64_t)L_58))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___4_zz;
		int32_t L_60 = ___5_zzOff;
		uint64_t L_61 = V_6;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_60, 4))), (uint32_t)((int32_t)(uint32_t)L_61));
		uint64_t L_62 = V_6;
		V_6 = ((int64_t)((uint64_t)L_62>>((int32_t)32)));
		uint64_t L_63 = V_6;
		uint64_t L_64 = V_7;
		uint64_t L_65 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___4_zz;
		int32_t L_67 = ___5_zzOff;
		uint64_t L_68 = V_6;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 5))), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_6;
		V_6 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___4_zz;
		int32_t L_71 = ___5_zzOff;
		uint64_t L_72 = V_6;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 6))), (uint32_t)((int32_t)(uint32_t)L_72));
		V_8 = 1;
		goto IL_01d5;
	}

IL_00e2:
	{
		int32_t L_73 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_73, 1));
		V_9 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___0_x;
		int32_t L_75 = ___1_xOff;
		int32_t L_76 = V_8;
		NullCheck(L_74);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_75, L_76));
		uint32_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_10 = ((int64_t)(uint64_t)L_78);
		uint64_t L_79 = V_9;
		uint64_t L_80 = V_10;
		uint64_t L_81 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___4_zz;
		int32_t L_83 = ___5_zzOff;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint32_t L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_80, (int64_t)L_81)), ((int64_t)(uint64_t)L_85)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___4_zz;
		int32_t L_87 = ___5_zzOff;
		uint64_t L_88 = V_9;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (uint32_t)((int32_t)(uint32_t)L_88));
		uint64_t L_89 = V_9;
		V_9 = ((int64_t)((uint64_t)L_89>>((int32_t)32)));
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_10;
		uint64_t L_92 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___4_zz;
		int32_t L_94 = ___5_zzOff;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		uint32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_91, (int64_t)L_92)), ((int64_t)(uint64_t)L_96)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___4_zz;
		int32_t L_98 = ___5_zzOff;
		uint64_t L_99 = V_9;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_98, 1))), (uint32_t)((int32_t)(uint32_t)L_99));
		uint64_t L_100 = V_9;
		V_9 = ((int64_t)((uint64_t)L_100>>((int32_t)32)));
		uint64_t L_101 = V_9;
		uint64_t L_102 = V_10;
		uint64_t L_103 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___4_zz;
		int32_t L_105 = ___5_zzOff;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 2));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___4_zz;
		int32_t L_109 = ___5_zzOff;
		uint64_t L_110 = V_9;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 2))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_9;
		V_9 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_9;
		uint64_t L_113 = V_10;
		uint64_t L_114 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___4_zz;
		int32_t L_116 = ___5_zzOff;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 3));
		uint32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_113, (int64_t)L_114)), ((int64_t)(uint64_t)L_118)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___4_zz;
		int32_t L_120 = ___5_zzOff;
		uint64_t L_121 = V_9;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_120, 3))), (uint32_t)((int32_t)(uint32_t)L_121));
		uint64_t L_122 = V_9;
		V_9 = ((int64_t)((uint64_t)L_122>>((int32_t)32)));
		uint64_t L_123 = V_9;
		uint64_t L_124 = V_10;
		uint64_t L_125 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___4_zz;
		int32_t L_127 = ___5_zzOff;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 4));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_123, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125)), ((int64_t)(uint64_t)L_129)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___4_zz;
		int32_t L_131 = ___5_zzOff;
		uint64_t L_132 = V_9;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_131, 4))), (uint32_t)((int32_t)(uint32_t)L_132));
		uint64_t L_133 = V_9;
		V_9 = ((int64_t)((uint64_t)L_133>>((int32_t)32)));
		uint64_t L_134 = V_9;
		uint64_t L_135 = V_10;
		uint64_t L_136 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___4_zz;
		int32_t L_138 = ___5_zzOff;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 5));
		uint32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136)), ((int64_t)(uint64_t)L_140)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___4_zz;
		int32_t L_142 = ___5_zzOff;
		uint64_t L_143 = V_9;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_142, 5))), (uint32_t)((int32_t)(uint32_t)L_143));
		uint64_t L_144 = V_9;
		V_9 = ((int64_t)((uint64_t)L_144>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ___4_zz;
		int32_t L_146 = ___5_zzOff;
		uint64_t L_147 = V_9;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_146, 6))), (uint32_t)((int32_t)(uint32_t)L_147));
		int32_t L_148 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_01d5:
	{
		int32_t L_149 = V_8;
		if ((((int32_t)L_149) < ((int32_t)6)))
		{
			goto IL_00e2;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_MulAddTo_mFB6213240E2EF20ADA9583907A2CE96013E5318A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		V_6 = ((int64_t)0);
		V_7 = 0;
		goto IL_0120;
	}

IL_002c:
	{
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_9 = ((int64_t)(uint64_t)L_21);
		uint64_t L_22 = V_8;
		uint64_t L_23 = V_9;
		uint64_t L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___2_zz;
		int32_t L_26 = V_7;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint32_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_23, (int64_t)L_24)), ((int64_t)(uint64_t)L_28)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___2_zz;
		int32_t L_30 = V_7;
		uint64_t L_31 = V_8;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_8;
		V_8 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_8;
		uint64_t L_34 = V_9;
		uint64_t L_35 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35)), ((int64_t)(uint64_t)L_39)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_zz;
		int32_t L_41 = V_7;
		uint64_t L_42 = V_8;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_41, 1))), (uint32_t)((int32_t)(uint32_t)L_42));
		uint64_t L_43 = V_8;
		V_8 = ((int64_t)((uint64_t)L_43>>((int32_t)32)));
		uint64_t L_44 = V_8;
		uint64_t L_45 = V_9;
		uint64_t L_46 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_zz;
		int32_t L_48 = V_7;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 2));
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_45, (int64_t)L_46)), ((int64_t)(uint64_t)L_50)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___2_zz;
		int32_t L_52 = V_7;
		uint64_t L_53 = V_8;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_52, 2))), (uint32_t)((int32_t)(uint32_t)L_53));
		uint64_t L_54 = V_8;
		V_8 = ((int64_t)((uint64_t)L_54>>((int32_t)32)));
		uint64_t L_55 = V_8;
		uint64_t L_56 = V_9;
		uint64_t L_57 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_zz;
		int32_t L_59 = V_7;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 3));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_56, (int64_t)L_57)), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_zz;
		int32_t L_63 = V_7;
		uint64_t L_64 = V_8;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 3))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_8;
		V_8 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_8;
		uint64_t L_67 = V_9;
		uint64_t L_68 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_zz;
		int32_t L_70 = V_7;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_67, (int64_t)L_68)), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___2_zz;
		int32_t L_74 = V_7;
		uint64_t L_75 = V_8;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 4))), (uint32_t)((int32_t)(uint32_t)L_75));
		uint64_t L_76 = V_8;
		V_8 = ((int64_t)((uint64_t)L_76>>((int32_t)32)));
		uint64_t L_77 = V_8;
		uint64_t L_78 = V_9;
		uint64_t L_79 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___2_zz;
		int32_t L_81 = V_7;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_78, (int64_t)L_79)), ((int64_t)(uint64_t)L_83)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_zz;
		int32_t L_85 = V_7;
		uint64_t L_86 = V_8;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_85, 5))), (uint32_t)((int32_t)(uint32_t)L_86));
		uint64_t L_87 = V_8;
		V_8 = ((int64_t)((uint64_t)L_87>>((int32_t)32)));
		uint64_t L_88 = V_8;
		uint64_t L_89 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_zz;
		int32_t L_91 = V_7;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 6));
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add((int64_t)L_89, ((int64_t)(uint64_t)L_93)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___2_zz;
		int32_t L_95 = V_7;
		uint64_t L_96 = V_8;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_95, 6))), (uint32_t)((int32_t)(uint32_t)L_96));
		uint64_t L_97 = V_8;
		V_6 = ((int64_t)((uint64_t)L_97>>((int32_t)32)));
		int32_t L_98 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0120:
	{
		int32_t L_99 = V_7;
		if ((((int32_t)L_99) < ((int32_t)6)))
		{
			goto IL_002c;
		}
	}
	{
		uint64_t L_100 = V_6;
		return ((int32_t)(uint32_t)L_100);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_MulAddTo_m2624EF75E4CBC640143FACD6093C21BD6069D952 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	int32_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		V_6 = ((int64_t)0);
		V_7 = 0;
		goto IL_0140;
	}

IL_0036:
	{
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		int32_t L_25 = ___1_xOff;
		int32_t L_26 = V_7;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		uint32_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_9 = ((int64_t)(uint64_t)L_28);
		uint64_t L_29 = V_8;
		uint64_t L_30 = V_9;
		uint64_t L_31 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___4_zz;
		int32_t L_33 = ___5_zzOff;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_30, (int64_t)L_31)), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___4_zz;
		int32_t L_37 = ___5_zzOff;
		uint64_t L_38 = V_8;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_8;
		V_8 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_8;
		uint64_t L_41 = V_9;
		uint64_t L_42 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___4_zz;
		int32_t L_44 = ___5_zzOff;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_41, (int64_t)L_42)), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___4_zz;
		int32_t L_48 = ___5_zzOff;
		uint64_t L_49 = V_8;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 1))), (uint32_t)((int32_t)(uint32_t)L_49));
		uint64_t L_50 = V_8;
		V_8 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint64_t L_51 = V_8;
		uint64_t L_52 = V_9;
		uint64_t L_53 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___4_zz;
		int32_t L_55 = ___5_zzOff;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 2));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_52, (int64_t)L_53)), ((int64_t)(uint64_t)L_57)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___4_zz;
		int32_t L_59 = ___5_zzOff;
		uint64_t L_60 = V_8;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_59, 2))), (uint32_t)((int32_t)(uint32_t)L_60));
		uint64_t L_61 = V_8;
		V_8 = ((int64_t)((uint64_t)L_61>>((int32_t)32)));
		uint64_t L_62 = V_8;
		uint64_t L_63 = V_9;
		uint64_t L_64 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___4_zz;
		int32_t L_66 = ___5_zzOff;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 3));
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_62, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_63, (int64_t)L_64)), ((int64_t)(uint64_t)L_68)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___4_zz;
		int32_t L_70 = ___5_zzOff;
		uint64_t L_71 = V_8;
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_70, 3))), (uint32_t)((int32_t)(uint32_t)L_71));
		uint64_t L_72 = V_8;
		V_8 = ((int64_t)((uint64_t)L_72>>((int32_t)32)));
		uint64_t L_73 = V_8;
		uint64_t L_74 = V_9;
		uint64_t L_75 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___4_zz;
		int32_t L_77 = ___5_zzOff;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_add(L_77, 4));
		uint32_t L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_73, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), ((int64_t)(uint64_t)L_79)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___4_zz;
		int32_t L_81 = ___5_zzOff;
		uint64_t L_82 = V_8;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_81, 4))), (uint32_t)((int32_t)(uint32_t)L_82));
		uint64_t L_83 = V_8;
		V_8 = ((int64_t)((uint64_t)L_83>>((int32_t)32)));
		uint64_t L_84 = V_8;
		uint64_t L_85 = V_9;
		uint64_t L_86 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___4_zz;
		int32_t L_88 = ___5_zzOff;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 5));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_85, (int64_t)L_86)), ((int64_t)(uint64_t)L_90)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___4_zz;
		int32_t L_92 = ___5_zzOff;
		uint64_t L_93 = V_8;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_92, 5))), (uint32_t)((int32_t)(uint32_t)L_93));
		uint64_t L_94 = V_8;
		V_8 = ((int64_t)((uint64_t)L_94>>((int32_t)32)));
		uint64_t L_95 = V_8;
		uint64_t L_96 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___4_zz;
		int32_t L_98 = ___5_zzOff;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 6));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___4_zz;
		int32_t L_102 = ___5_zzOff;
		uint64_t L_103 = V_8;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_102, 6))), (uint32_t)((int32_t)(uint32_t)L_103));
		uint64_t L_104 = V_8;
		V_6 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		int32_t L_105 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_0140:
	{
		int32_t L_107 = V_7;
		if ((((int32_t)L_107) < ((int32_t)6)))
		{
			goto IL_0036;
		}
	}
	{
		uint64_t L_108 = V_6;
		return ((int32_t)(uint32_t)L_108);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat192_Mul33Add_m4C5BBE030632AACC98B35BA3A9955655182739E9 (uint32_t ___0_w, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_w;
		V_1 = ((int64_t)(uint64_t)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int64_t)(uint64_t)L_4);
		uint64_t L_5 = V_0;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___3_y;
		int32_t L_9 = ___4_yOff;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)L_7)), ((int64_t)(uint64_t)L_11)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___5_z;
		int32_t L_13 = ___6_zOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_x;
		int32_t L_17 = ___2_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int64_t)(uint64_t)L_19);
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_1;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___3_y;
		int32_t L_25 = ___4_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_21, (int64_t)L_22)), (int64_t)L_23)), ((int64_t)(uint64_t)L_27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___5_z;
		int32_t L_29 = ___6_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___1_x;
		int32_t L_33 = ___2_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_0;
		uint64_t L_37 = V_1;
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___3_y;
		int32_t L_41 = ___4_yOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___5_z;
		int32_t L_45 = ___6_zOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_x;
		int32_t L_49 = ___2_xOff;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_5 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_0;
		uint64_t L_53 = V_1;
		uint64_t L_54 = V_5;
		uint64_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___3_y;
		int32_t L_57 = ___4_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), (int64_t)L_55)), ((int64_t)(uint64_t)L_59)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___5_z;
		int32_t L_61 = ___6_zOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_x;
		int32_t L_65 = ___2_xOff;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)(uint64_t)L_67);
		uint64_t L_68 = V_0;
		uint64_t L_69 = V_1;
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___3_y;
		int32_t L_73 = ___4_yOff;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, (int64_t)L_70)), (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___5_z;
		int32_t L_77 = ___6_zOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_x;
		int32_t L_81 = ___2_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)(uint64_t)L_83);
		uint64_t L_84 = V_0;
		uint64_t L_85 = V_1;
		uint64_t L_86 = V_7;
		uint64_t L_87 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___3_y;
		int32_t L_89 = ___4_yOff;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 5));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_85, (int64_t)L_86)), (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___5_z;
		int32_t L_93 = ___6_zOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_0;
		uint64_t L_97 = V_7;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, (int64_t)L_97));
		uint64_t L_98 = V_0;
		return L_98;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_MulWordAddExt_m0C07274EB6701D551FE72F64469A1965BCD907AF (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_yy, int32_t ___2_yyOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_zz, int32_t ___4_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_yy;
		int32_t L_4 = ___2_yyOff;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___3_zz;
		int32_t L_8 = ___4_zzOff;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_10)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___3_zz;
		int32_t L_12 = ___4_zzOff;
		uint64_t L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((int32_t)(uint32_t)L_13));
		uint64_t L_14 = V_0;
		V_0 = ((int64_t)((uint64_t)L_14>>((int32_t)32)));
		uint64_t L_15 = V_0;
		uint64_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_yy;
		int32_t L_18 = ___2_yyOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___3_zz;
		int32_t L_22 = ___4_zzOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_16, ((int64_t)(uint64_t)L_20))), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___3_zz;
		int32_t L_26 = ___4_zzOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		uint64_t L_28 = V_0;
		V_0 = ((int64_t)((uint64_t)L_28>>((int32_t)32)));
		uint64_t L_29 = V_0;
		uint64_t L_30 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_yy;
		int32_t L_32 = ___2_yyOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___3_zz;
		int32_t L_36 = ___4_zzOff;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 2));
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_30, ((int64_t)(uint64_t)L_34))), ((int64_t)(uint64_t)L_38)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___3_zz;
		int32_t L_40 = ___4_zzOff;
		uint64_t L_41 = V_0;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, 2))), (uint32_t)((int32_t)(uint32_t)L_41));
		uint64_t L_42 = V_0;
		V_0 = ((int64_t)((uint64_t)L_42>>((int32_t)32)));
		uint64_t L_43 = V_0;
		uint64_t L_44 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___1_yy;
		int32_t L_46 = ___2_yyOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___3_zz;
		int32_t L_50 = ___4_zzOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_44, ((int64_t)(uint64_t)L_48))), ((int64_t)(uint64_t)L_52)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___3_zz;
		int32_t L_54 = ___4_zzOff;
		uint64_t L_55 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, 3))), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_0;
		V_0 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_0;
		uint64_t L_58 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___1_yy;
		int32_t L_60 = ___2_yyOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___3_zz;
		int32_t L_64 = ___4_zzOff;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 4));
		uint32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_58, ((int64_t)(uint64_t)L_62))), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___3_zz;
		int32_t L_68 = ___4_zzOff;
		uint64_t L_69 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 4))), (uint32_t)((int32_t)(uint32_t)L_69));
		uint64_t L_70 = V_0;
		V_0 = ((int64_t)((uint64_t)L_70>>((int32_t)32)));
		uint64_t L_71 = V_0;
		uint64_t L_72 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___1_yy;
		int32_t L_74 = ___2_yyOff;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 5));
		uint32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___3_zz;
		int32_t L_78 = ___4_zzOff;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 5));
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_72, ((int64_t)(uint64_t)L_76))), ((int64_t)(uint64_t)L_80)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___3_zz;
		int32_t L_82 = ___4_zzOff;
		uint64_t L_83 = V_0;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 5))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_0;
		V_0 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_0;
		return ((int32_t)(uint32_t)L_85);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_Mul33DWordAdd_mA66CADE2544EBE856BBC19CAE337D3D77CCFD819 (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = ___1_y;
		V_2 = ((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		uint64_t L_4 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = ___1_y;
		V_3 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_15, (int64_t)L_16)), (int64_t)L_17)), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		uint64_t L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint64_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 2))), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int32_t L_38 = ___3_zOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)(uint64_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_z;
		int32_t L_42 = ___3_zOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 3))), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0079;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		int32_t L_47 = ___3_zOff;
		uint32_t L_48;
		L_48 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(6, L_46, L_47, 4, NULL);
		return L_48;
	}

IL_0079:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_Mul33WordAdd_m3D5EF9326F8C894783A7E088DE4D6E90272D991E (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_y;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint32_t L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_3))), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)(uint64_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint64_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 2))), (uint32_t)((int32_t)(uint32_t)L_29));
		uint64_t L_30 = V_0;
		V_0 = ((int64_t)((uint64_t)L_30>>((int32_t)32)));
		uint64_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_0055;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint32_t L_34;
		L_34 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(6, L_32, L_33, 3, NULL);
		return L_34;
	}

IL_0055:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_MulWordDwordAdd_m0DB4C212372D460279F650B813FAB097672DFEB9 (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint64_t L_3 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)L_3)), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		uint64_t L_14 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___2_z;
		int32_t L_16 = ___3_zOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_13, ((int64_t)((uint64_t)L_14>>((int32_t)32))))), ((int64_t)(uint64_t)L_18)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		uint64_t L_21 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_20, 1))), (uint32_t)((int32_t)(uint32_t)L_21));
		uint64_t L_22 = V_0;
		V_0 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		uint64_t L_23 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 2));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, ((int64_t)(uint64_t)L_27)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 2))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		if (!L_32)
		{
			goto IL_0059;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		int32_t L_34 = ___3_zOff;
		uint32_t L_35;
		L_35 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(6, L_33, L_34, 3, NULL);
		return L_35;
	}

IL_0059:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat192_MulWord_m0D67BE0FFEAE5CB1ECAB12E8655A77B5C32BBBC0 (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		V_2 = 0;
	}

IL_0008:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int32_t L_8 = ___3_zOff;
		int32_t L_9 = V_2;
		uint64_t L_10 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, L_9))), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		int32_t L_12 = V_2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		V_2 = L_13;
		if ((((int32_t)L_13) < ((int32_t)6)))
		{
			goto IL_0008;
		}
	}
	{
		uint64_t L_14 = V_0;
		return ((int32_t)(uint32_t)L_14);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m0290385D07CABF4F0660359F4CCE6C46528AABA4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_18 = 5;
		V_19 = ((int32_t)12);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_18;
		int32_t L_5 = L_4;
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_20 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_19;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_19 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_20;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_19;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_19 = L_16;
		uint64_t L_17 = V_20;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_20;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_18;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_21 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_21;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_21;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_21;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_10 = ((int64_t)(uint64_t)L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___1_zz;
		NullCheck(L_73);
		int32_t L_74 = 6;
		uint32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_11 = ((int64_t)(uint64_t)L_75);
		uint64_t L_76 = V_7;
		uint64_t L_77 = V_9;
		uint64_t L_78 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_multiply((int64_t)L_77, (int64_t)L_78))));
		uint64_t L_79 = V_7;
		V_3 = ((int32_t)(uint32_t)L_79);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_zz;
		uint32_t L_81 = V_3;
		uint32_t L_82 = V_2;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_81<<1))|(int32_t)L_82)));
		uint32_t L_83 = V_3;
		V_2 = ((int32_t)((uint32_t)L_83>>((int32_t)31)));
		uint64_t L_84 = V_8;
		uint64_t L_85 = V_7;
		uint64_t L_86 = V_9;
		uint64_t L_87 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_85>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, (int64_t)L_87))))));
		uint64_t L_88 = V_10;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_8;
		V_8 = ((int64_t)((int64_t)L_92&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)((uint64_t)L_94>>((int32_t)32)))));
		uint64_t L_95 = V_10;
		V_10 = ((int64_t)((int64_t)L_95&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___0_x;
		NullCheck(L_96);
		int32_t L_97 = 4;
		uint32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_12 = ((int64_t)(uint64_t)L_98);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___1_zz;
		NullCheck(L_99);
		int32_t L_100 = 7;
		uint32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_13 = ((int64_t)(uint64_t)L_101);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = ___1_zz;
		NullCheck(L_102);
		int32_t L_103 = 8;
		uint32_t L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_14 = ((int64_t)(uint64_t)L_104);
		uint64_t L_105 = V_8;
		uint64_t L_106 = V_12;
		uint64_t L_107 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))));
		uint64_t L_108 = V_8;
		V_3 = ((int32_t)(uint32_t)L_108);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___1_zz;
		uint32_t L_110 = V_3;
		uint32_t L_111 = V_2;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_110<<1))|(int32_t)L_111)));
		uint32_t L_112 = V_3;
		V_2 = ((int32_t)((uint32_t)L_112>>((int32_t)31)));
		uint64_t L_113 = V_10;
		uint64_t L_114 = V_8;
		uint64_t L_115 = V_12;
		uint64_t L_116 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_114>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_115, (int64_t)L_116))))));
		uint64_t L_117 = V_11;
		uint64_t L_118 = V_10;
		uint64_t L_119 = V_12;
		uint64_t L_120 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_118>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_119, (int64_t)L_120))))));
		uint64_t L_121 = V_10;
		V_10 = ((int64_t)((int64_t)L_121&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_122 = V_13;
		uint64_t L_123 = V_11;
		uint64_t L_124 = V_12;
		uint64_t L_125 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_123>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125))))));
		uint64_t L_126 = V_11;
		V_11 = ((int64_t)((int64_t)L_126&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_127 = V_14;
		uint64_t L_128 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_127, ((int64_t)((uint64_t)L_128>>((int32_t)32)))));
		uint64_t L_129 = V_13;
		V_13 = ((int64_t)((int64_t)L_129&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___0_x;
		NullCheck(L_130);
		int32_t L_131 = 5;
		uint32_t L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_15 = ((int64_t)(uint64_t)L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ___1_zz;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)9);
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_16 = ((int64_t)(uint64_t)L_135);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ___1_zz;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)10);
		uint32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		V_17 = ((int64_t)(uint64_t)L_138);
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_15;
		uint64_t L_141 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, ((int64_t)il2cpp_codegen_multiply((int64_t)L_140, (int64_t)L_141))));
		uint64_t L_142 = V_10;
		V_3 = ((int32_t)(uint32_t)L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___1_zz;
		uint32_t L_144 = V_3;
		uint32_t L_145 = V_2;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_144<<1))|(int32_t)L_145)));
		uint32_t L_146 = V_3;
		V_2 = ((int32_t)((uint32_t)L_146>>((int32_t)31)));
		uint64_t L_147 = V_11;
		uint64_t L_148 = V_10;
		uint64_t L_149 = V_15;
		uint64_t L_150 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_148>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_149, (int64_t)L_150))))));
		uint64_t L_151 = V_13;
		uint64_t L_152 = V_11;
		uint64_t L_153 = V_15;
		uint64_t L_154 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_151, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_152>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_153, (int64_t)L_154))))));
		uint64_t L_155 = V_14;
		uint64_t L_156 = V_13;
		uint64_t L_157 = V_15;
		uint64_t L_158 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_156>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_157, (int64_t)L_158))))));
		uint64_t L_159 = V_16;
		uint64_t L_160 = V_14;
		uint64_t L_161 = V_15;
		uint64_t L_162 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_160>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)L_162))))));
		uint64_t L_163 = V_17;
		uint64_t L_164 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, ((int64_t)((uint64_t)L_164>>((int32_t)32)))));
		uint64_t L_165 = V_11;
		V_3 = ((int32_t)(uint32_t)L_165);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = ___1_zz;
		uint32_t L_167 = V_3;
		uint32_t L_168 = V_2;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_167<<1))|(int32_t)L_168)));
		uint32_t L_169 = V_3;
		V_2 = ((int32_t)((uint32_t)L_169>>((int32_t)31)));
		uint64_t L_170 = V_13;
		V_3 = ((int32_t)(uint32_t)L_170);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_171 = ___1_zz;
		uint32_t L_172 = V_3;
		uint32_t L_173 = V_2;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_172<<1))|(int32_t)L_173)));
		uint32_t L_174 = V_3;
		V_2 = ((int32_t)((uint32_t)L_174>>((int32_t)31)));
		uint64_t L_175 = V_14;
		V_3 = ((int32_t)(uint32_t)L_175);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_176 = ___1_zz;
		uint32_t L_177 = V_3;
		uint32_t L_178 = V_2;
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)((int32_t)L_177<<1))|(int32_t)L_178)));
		uint32_t L_179 = V_3;
		V_2 = ((int32_t)((uint32_t)L_179>>((int32_t)31)));
		uint64_t L_180 = V_16;
		V_3 = ((int32_t)(uint32_t)L_180);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = ___1_zz;
		uint32_t L_182 = V_3;
		uint32_t L_183 = V_2;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_182<<1))|(int32_t)L_183)));
		uint32_t L_184 = V_3;
		V_2 = ((int32_t)((uint32_t)L_184>>((int32_t)31)));
		uint64_t L_185 = V_17;
		V_3 = ((int32_t)(uint32_t)L_185);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = ___1_zz;
		uint32_t L_187 = V_3;
		uint32_t L_188 = V_2;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_187<<1))|(int32_t)L_188)));
		uint32_t L_189 = V_3;
		V_2 = ((int32_t)((uint32_t)L_189>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = ___1_zz;
		NullCheck(L_190);
		int32_t L_191 = ((int32_t)11);
		uint32_t L_192 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		uint64_t L_193 = V_17;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_192, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_193>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_194 = ___1_zz;
		uint32_t L_195 = V_3;
		uint32_t L_196 = V_2;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_195<<1))|(int32_t)L_196)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Square_m7CED50F5E87CBBAEC4E567CF9E9DF9E0AFEAEA48 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		V_2 = 0;
		V_18 = 5;
		V_19 = ((int32_t)12);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		int32_t L_6 = V_18;
		int32_t L_7 = L_6;
		V_18 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		uint32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int64_t L_10 = ((int64_t)(uint64_t)L_9);
		V_20 = ((int64_t)il2cpp_codegen_multiply(L_10, L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		int32_t L_12 = ___3_zzOff;
		int32_t L_13 = V_19;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_19 = L_14;
		uint32_t L_15 = V_2;
		uint64_t L_16 = V_20;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_14))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_15<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_16>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_zz;
		int32_t L_18 = ___3_zzOff;
		int32_t L_19 = V_19;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		V_19 = L_20;
		uint64_t L_21 = V_20;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_20))), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_21>>1))));
		uint64_t L_22 = V_20;
		V_2 = ((int32_t)(uint32_t)L_22);
		int32_t L_23 = V_18;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_0;
		V_21 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_24, (int64_t)L_25));
		uint32_t L_26 = V_2;
		uint64_t L_27 = V_21;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_26<<((int32_t)31)))))|((int64_t)((uint64_t)L_27>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_zz;
		int32_t L_29 = ___3_zzOff;
		uint64_t L_30 = V_21;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_21;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_31>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		int32_t L_37 = ___3_zzOff;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 2));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)(uint64_t)L_39);
		uint64_t L_40 = V_1;
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_multiply((int64_t)L_41, (int64_t)L_42))));
		uint64_t L_43 = V_1;
		V_3 = ((int32_t)(uint32_t)L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_zz;
		int32_t L_45 = ___3_zzOff;
		uint32_t L_46 = V_3;
		uint32_t L_47 = V_2;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_46<<1))|(int32_t)L_47)));
		uint32_t L_48 = V_3;
		V_2 = ((int32_t)((uint32_t)L_48>>((int32_t)31)));
		uint64_t L_49 = V_5;
		uint64_t L_50 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)((uint64_t)L_50>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		int32_t L_52 = ___1_xOff;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)(uint64_t)L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___2_zz;
		int32_t L_56 = ___3_zzOff;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 3));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_7 = ((int64_t)(uint64_t)L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_zz;
		int32_t L_60 = ___3_zzOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_8 = ((int64_t)(uint64_t)L_62);
		uint64_t L_63 = V_5;
		uint64_t L_64 = V_6;
		uint64_t L_65 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		uint64_t L_66 = V_5;
		V_3 = ((int32_t)(uint32_t)L_66);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_zz;
		int32_t L_68 = ___3_zzOff;
		uint32_t L_69 = V_3;
		uint32_t L_70 = V_2;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 2))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_69<<1))|(int32_t)L_70)));
		uint32_t L_71 = V_3;
		V_2 = ((int32_t)((uint32_t)L_71>>((int32_t)31)));
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_5;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_73>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75))))));
		uint64_t L_76 = V_8;
		uint64_t L_77 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)((uint64_t)L_77>>((int32_t)32)))));
		uint64_t L_78 = V_7;
		V_7 = ((int64_t)((int64_t)L_78&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 3));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_9 = ((int64_t)(uint64_t)L_82);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = ___3_zzOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 5));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_10 = ((int64_t)(uint64_t)L_86);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___2_zz;
		int32_t L_88 = ___3_zzOff;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 6));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_11 = ((int64_t)(uint64_t)L_90);
		uint64_t L_91 = V_7;
		uint64_t L_92 = V_9;
		uint64_t L_93 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_multiply((int64_t)L_92, (int64_t)L_93))));
		uint64_t L_94 = V_7;
		V_3 = ((int32_t)(uint32_t)L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___2_zz;
		int32_t L_96 = ___3_zzOff;
		uint32_t L_97 = V_3;
		uint32_t L_98 = V_2;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, 3))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_97<<1))|(int32_t)L_98)));
		uint32_t L_99 = V_3;
		V_2 = ((int32_t)((uint32_t)L_99>>((int32_t)31)));
		uint64_t L_100 = V_8;
		uint64_t L_101 = V_7;
		uint64_t L_102 = V_9;
		uint64_t L_103 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_101>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103))))));
		uint64_t L_104 = V_10;
		uint64_t L_105 = V_8;
		uint64_t L_106 = V_9;
		uint64_t L_107 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_105>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))))));
		uint64_t L_108 = V_8;
		V_8 = ((int64_t)((int64_t)L_108&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_109 = V_11;
		uint64_t L_110 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, ((int64_t)((uint64_t)L_110>>((int32_t)32)))));
		uint64_t L_111 = V_10;
		V_10 = ((int64_t)((int64_t)L_111&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___0_x;
		int32_t L_113 = ___1_xOff;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 4));
		uint32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_12 = ((int64_t)(uint64_t)L_115);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___2_zz;
		int32_t L_117 = ___3_zzOff;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 7));
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_13 = ((int64_t)(uint64_t)L_119);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___2_zz;
		int32_t L_121 = ___3_zzOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 8));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_14 = ((int64_t)(uint64_t)L_123);
		uint64_t L_124 = V_8;
		uint64_t L_125 = V_12;
		uint64_t L_126 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, ((int64_t)il2cpp_codegen_multiply((int64_t)L_125, (int64_t)L_126))));
		uint64_t L_127 = V_8;
		V_3 = ((int32_t)(uint32_t)L_127);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___2_zz;
		int32_t L_129 = ___3_zzOff;
		uint32_t L_130 = V_3;
		uint32_t L_131 = V_2;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_129, 4))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_130<<1))|(int32_t)L_131)));
		uint32_t L_132 = V_3;
		V_2 = ((int32_t)((uint32_t)L_132>>((int32_t)31)));
		uint64_t L_133 = V_10;
		uint64_t L_134 = V_8;
		uint64_t L_135 = V_12;
		uint64_t L_136 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_133, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_134>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136))))));
		uint64_t L_137 = V_11;
		uint64_t L_138 = V_10;
		uint64_t L_139 = V_12;
		uint64_t L_140 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_137, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_138>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_139, (int64_t)L_140))))));
		uint64_t L_141 = V_10;
		V_10 = ((int64_t)((int64_t)L_141&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_142 = V_13;
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_12;
		uint64_t L_145 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_142, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_143>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_144, (int64_t)L_145))))));
		uint64_t L_146 = V_11;
		V_11 = ((int64_t)((int64_t)L_146&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_147 = V_14;
		uint64_t L_148 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)((uint64_t)L_148>>((int32_t)32)))));
		uint64_t L_149 = V_13;
		V_13 = ((int64_t)((int64_t)L_149&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = ___0_x;
		int32_t L_151 = ___1_xOff;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 5));
		uint32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_15 = ((int64_t)(uint64_t)L_153);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = ___2_zz;
		int32_t L_155 = ___3_zzOff;
		NullCheck(L_154);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_155, ((int32_t)9)));
		uint32_t L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		V_16 = ((int64_t)(uint64_t)L_157);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = ___2_zz;
		int32_t L_159 = ___3_zzOff;
		NullCheck(L_158);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(L_159, ((int32_t)10)));
		uint32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_17 = ((int64_t)(uint64_t)L_161);
		uint64_t L_162 = V_10;
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_162, ((int64_t)il2cpp_codegen_multiply((int64_t)L_163, (int64_t)L_164))));
		uint64_t L_165 = V_10;
		V_3 = ((int32_t)(uint32_t)L_165);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = ___2_zz;
		int32_t L_167 = ___3_zzOff;
		uint32_t L_168 = V_3;
		uint32_t L_169 = V_2;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_167, 5))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_168<<1))|(int32_t)L_169)));
		uint32_t L_170 = V_3;
		V_2 = ((int32_t)((uint32_t)L_170>>((int32_t)31)));
		uint64_t L_171 = V_11;
		uint64_t L_172 = V_10;
		uint64_t L_173 = V_15;
		uint64_t L_174 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_172>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_173, (int64_t)L_174))))));
		uint64_t L_175 = V_13;
		uint64_t L_176 = V_11;
		uint64_t L_177 = V_15;
		uint64_t L_178 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_176>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_177, (int64_t)L_178))))));
		uint64_t L_179 = V_14;
		uint64_t L_180 = V_13;
		uint64_t L_181 = V_15;
		uint64_t L_182 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_179, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_180>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_181, (int64_t)L_182))))));
		uint64_t L_183 = V_16;
		uint64_t L_184 = V_14;
		uint64_t L_185 = V_15;
		uint64_t L_186 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_184>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_185, (int64_t)L_186))))));
		uint64_t L_187 = V_17;
		uint64_t L_188 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_187, ((int64_t)((uint64_t)L_188>>((int32_t)32)))));
		uint64_t L_189 = V_11;
		V_3 = ((int32_t)(uint32_t)L_189);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = ___2_zz;
		int32_t L_191 = ___3_zzOff;
		uint32_t L_192 = V_3;
		uint32_t L_193 = V_2;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_191, 6))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_192<<1))|(int32_t)L_193)));
		uint32_t L_194 = V_3;
		V_2 = ((int32_t)((uint32_t)L_194>>((int32_t)31)));
		uint64_t L_195 = V_13;
		V_3 = ((int32_t)(uint32_t)L_195);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_196 = ___2_zz;
		int32_t L_197 = ___3_zzOff;
		uint32_t L_198 = V_3;
		uint32_t L_199 = V_2;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_197, 7))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_198<<1))|(int32_t)L_199)));
		uint32_t L_200 = V_3;
		V_2 = ((int32_t)((uint32_t)L_200>>((int32_t)31)));
		uint64_t L_201 = V_14;
		V_3 = ((int32_t)(uint32_t)L_201);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = ___2_zz;
		int32_t L_203 = ___3_zzOff;
		uint32_t L_204 = V_3;
		uint32_t L_205 = V_2;
		NullCheck(L_202);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_203, 8))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_204<<1))|(int32_t)L_205)));
		uint32_t L_206 = V_3;
		V_2 = ((int32_t)((uint32_t)L_206>>((int32_t)31)));
		uint64_t L_207 = V_16;
		V_3 = ((int32_t)(uint32_t)L_207);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = ___2_zz;
		int32_t L_209 = ___3_zzOff;
		uint32_t L_210 = V_3;
		uint32_t L_211 = V_2;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_209, ((int32_t)9)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_210<<1))|(int32_t)L_211)));
		uint32_t L_212 = V_3;
		V_2 = ((int32_t)((uint32_t)L_212>>((int32_t)31)));
		uint64_t L_213 = V_17;
		V_3 = ((int32_t)(uint32_t)L_213);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_214 = ___2_zz;
		int32_t L_215 = ___3_zzOff;
		uint32_t L_216 = V_3;
		uint32_t L_217 = V_2;
		NullCheck(L_214);
		(L_214)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_215, ((int32_t)10)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_216<<1))|(int32_t)L_217)));
		uint32_t L_218 = V_3;
		V_2 = ((int32_t)((uint32_t)L_218>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = ___2_zz;
		int32_t L_220 = ___3_zzOff;
		NullCheck(L_219);
		int32_t L_221 = ((int32_t)il2cpp_codegen_add(L_220, ((int32_t)11)));
		uint32_t L_222 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		uint64_t L_223 = V_17;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_223>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_224 = ___2_zz;
		int32_t L_225 = ___3_zzOff;
		uint32_t L_226 = V_3;
		uint32_t L_227 = V_2;
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_225, ((int32_t)11)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_226<<1))|(int32_t)L_227)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_Sub_m5F8E99A35426E3E95853D0E24F8166F3AC24C60D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		return ((int32_t)L_60);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_Sub_mA6394C85035ECE7520893E2BD901AEA4098A9099 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_y;
		int32_t L_19 = ___3_yOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___4_z;
		int32_t L_23 = ___5_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		int32_t L_28 = ___1_xOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_y;
		int32_t L_32 = ___3_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_z;
		int32_t L_36 = ___5_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		int32_t L_41 = ___1_xOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_y;
		int32_t L_45 = ___3_yOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___4_z;
		int32_t L_49 = ___5_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		int32_t L_54 = ___1_xOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_y;
		int32_t L_58 = ___3_yOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___4_z;
		int32_t L_62 = ___5_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		int32_t L_67 = ___1_xOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_y;
		int32_t L_71 = ___3_yOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_z;
		int32_t L_75 = ___5_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		return ((int32_t)L_78);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_SubBothFrom_m3EA6C080B824191499A6E52B084E080D280EE5E0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_y;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_y;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___1_y;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_z;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_y;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___0_x;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___1_y;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_z;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___0_x;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		return ((int32_t)L_78);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_SubFrom_m90DCBF28E69301A9158AFED7EFC2A4F845653B34 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___1_z;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		return ((int32_t)L_60);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat192_SubFrom_m2A2D9E8632A020DF25CCC83F3032CB2996E3E43A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		int32_t L_2 = ___3_zOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		int32_t L_6 = ___1_xOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		int32_t L_19 = ___1_xOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		int32_t L_32 = ___1_xOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_z;
		int32_t L_36 = ___3_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_z;
		int32_t L_41 = ___3_zOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		int32_t L_45 = ___1_xOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_z;
		int32_t L_49 = ___3_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		int32_t L_54 = ___3_zOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_x;
		int32_t L_58 = ___1_xOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___2_z;
		int32_t L_62 = ___3_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_z;
		int32_t L_67 = ___3_zOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___0_x;
		int32_t L_71 = ___1_xOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___2_z;
		int32_t L_75 = ___3_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		return ((int32_t)L_78);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat192_ToBigInteger_m25840F4D0FB4F58A311A52A6A17CE85AB783F730 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_mC1F3FE5842A7ACFDCFAD8C602F3C97B9A660D89D(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(5, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat192_ToBigInteger64_m0D88319EBD41F55790013F37BE9C6BEC70B6F035 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mDD3A664874DD413CE9AC816A95B12612FA6E9B58(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(2, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192_Zero_m474A7D47A21BFDC90C867EF50294E0F2C1868ADB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_z;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_z;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_z;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_z;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_z;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat192__ctor_mBFAFB64A1E9E96EA0CDBFE85B827F7A4CB6EEBE5 (Nat192_t985F716065F64647DCF703AC0CCD70E8E686DEF2* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_Add_m68A5B9E2B78206CE1B7FA7D3E984214C4EC9CC9B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		uint64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_0;
		return ((int32_t)(uint32_t)L_70);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_Add_m0BBC8BC42D2A51EB312994CD1761824184EAD039 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_y;
		int32_t L_19 = ___3_yOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___4_z;
		int32_t L_23 = ___5_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		int32_t L_28 = ___1_xOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_y;
		int32_t L_32 = ___3_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_z;
		int32_t L_36 = ___5_zOff;
		uint64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		int32_t L_41 = ___1_xOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_y;
		int32_t L_45 = ___3_yOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___4_z;
		int32_t L_49 = ___5_zOff;
		uint64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		int32_t L_54 = ___1_xOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_y;
		int32_t L_58 = ___3_yOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___4_z;
		int32_t L_62 = ___5_zOff;
		uint64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		int32_t L_67 = ___1_xOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_y;
		int32_t L_71 = ___3_yOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_z;
		int32_t L_75 = ___5_zOff;
		uint64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 6));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_y;
		int32_t L_84 = ___3_yOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 6));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___4_z;
		int32_t L_88 = ___5_zOff;
		uint64_t L_89 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 6))), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_0;
		V_0 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_0;
		return ((int32_t)(uint32_t)L_91);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_AddBothTo_m86417BDD69DBC795A4008559A137217E92D9EBDF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_y;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_z;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_z;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		NullCheck(L_79);
		int32_t L_80 = 6;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___1_y;
		NullCheck(L_82);
		int32_t L_83 = 6;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_z;
		NullCheck(L_85);
		int32_t L_86 = 6;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_81), ((int64_t)(uint64_t)L_84))), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		uint64_t L_89 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_0;
		V_0 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_0;
		return ((int32_t)(uint32_t)L_91);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_AddBothTo_mAD06C76E27960756F135C78DA439F2D8CFA14A93 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8))), ((int64_t)(uint64_t)L_12)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___4_z;
		int32_t L_14 = ___5_zOff;
		uint64_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)(uint32_t)L_15));
		uint64_t L_16 = V_0;
		V_0 = ((int64_t)((uint64_t)L_16>>((int32_t)32)));
		uint64_t L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		int32_t L_19 = ___1_xOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_y;
		int32_t L_23 = ___3_yOff;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___4_z;
		int32_t L_27 = ___5_zOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_17, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_21), ((int64_t)(uint64_t)L_25))), ((int64_t)(uint64_t)L_29)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___4_z;
		int32_t L_31 = ___5_zOff;
		uint64_t L_32 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 1))), (uint32_t)((int32_t)(uint32_t)L_32));
		uint64_t L_33 = V_0;
		V_0 = ((int64_t)((uint64_t)L_33>>((int32_t)32)));
		uint64_t L_34 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___0_x;
		int32_t L_36 = ___1_xOff;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 2));
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_y;
		int32_t L_40 = ___3_yOff;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 2));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___4_z;
		int32_t L_44 = ___5_zOff;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 2));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_34, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_38), ((int64_t)(uint64_t)L_42))), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___4_z;
		int32_t L_48 = ___5_zOff;
		uint64_t L_49 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 2))), (uint32_t)((int32_t)(uint32_t)L_49));
		uint64_t L_50 = V_0;
		V_0 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint64_t L_51 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___0_x;
		int32_t L_53 = ___1_xOff;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 3));
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___2_y;
		int32_t L_57 = ___3_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___4_z;
		int32_t L_61 = ___5_zOff;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(L_61, 3));
		uint32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_59))), ((int64_t)(uint64_t)L_63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___4_z;
		int32_t L_65 = ___5_zOff;
		uint64_t L_66 = V_0;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_65, 3))), (uint32_t)((int32_t)(uint32_t)L_66));
		uint64_t L_67 = V_0;
		V_0 = ((int64_t)((uint64_t)L_67>>((int32_t)32)));
		uint64_t L_68 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___0_x;
		int32_t L_70 = ___1_xOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___2_y;
		int32_t L_74 = ___3_yOff;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 4));
		uint32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___4_z;
		int32_t L_78 = ___5_zOff;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 4));
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_72), ((int64_t)(uint64_t)L_76))), ((int64_t)(uint64_t)L_80)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___4_z;
		int32_t L_82 = ___5_zOff;
		uint64_t L_83 = V_0;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 4))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_0;
		V_0 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___0_x;
		int32_t L_87 = ___1_xOff;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 5));
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_y;
		int32_t L_91 = ___3_yOff;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 5));
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___4_z;
		int32_t L_95 = ___5_zOff;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 5));
		uint32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_89), ((int64_t)(uint64_t)L_93))), ((int64_t)(uint64_t)L_97)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___4_z;
		int32_t L_99 = ___5_zOff;
		uint64_t L_100 = V_0;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_99, 5))), (uint32_t)((int32_t)(uint32_t)L_100));
		uint64_t L_101 = V_0;
		V_0 = ((int64_t)((uint64_t)L_101>>((int32_t)32)));
		uint64_t L_102 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___0_x;
		int32_t L_104 = ___1_xOff;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 6));
		uint32_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = ___2_y;
		int32_t L_108 = ___3_yOff;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_add(L_108, 6));
		uint32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = ___4_z;
		int32_t L_112 = ___5_zOff;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(L_112, 6));
		uint32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_102, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_106), ((int64_t)(uint64_t)L_110))), ((int64_t)(uint64_t)L_114)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___4_z;
		int32_t L_116 = ___5_zOff;
		uint64_t L_117 = V_0;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_116, 6))), (uint32_t)((int32_t)(uint32_t)L_117));
		uint64_t L_118 = V_0;
		V_0 = ((int64_t)((uint64_t)L_118>>((int32_t)32)));
		uint64_t L_119 = V_0;
		return ((int32_t)(uint32_t)L_119);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_AddTo_m248FE914380DC19E3AA78A04BB07E4AE64E69401 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_z;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_z;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_z;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_z;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_z;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___1_z;
		uint64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_0;
		return ((int32_t)(uint32_t)L_70);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_AddTo_mD6B8E26C391743CE76B9B73C4F27EB574C9FADB4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___4_cIn;
		V_0 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int32_t L_11 = ___3_zOff;
		uint64_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)L_12));
		uint64_t L_13 = V_0;
		V_0 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_18), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		uint64_t L_25 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_0;
		V_0 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_x;
		int32_t L_29 = ___1_xOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_31), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		uint64_t L_38 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 2))), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		int32_t L_42 = ___1_xOff;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 3));
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_z;
		int32_t L_46 = ___3_zOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_44), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int32_t L_50 = ___3_zOff;
		uint64_t L_51 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 3))), (uint32_t)((int32_t)(uint32_t)L_51));
		uint64_t L_52 = V_0;
		V_0 = ((int64_t)((uint64_t)L_52>>((int32_t)32)));
		uint64_t L_53 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		int32_t L_55 = ___1_xOff;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 4));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		int32_t L_59 = ___3_zOff;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 4));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_53, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_57), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int32_t L_63 = ___3_zOff;
		uint64_t L_64 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 4))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_0;
		V_0 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		int32_t L_68 = ___1_xOff;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 5));
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___2_z;
		int32_t L_72 = ___3_zOff;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 5));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_70), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int32_t L_76 = ___3_zOff;
		uint64_t L_77 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 5))), (uint32_t)((int32_t)(uint32_t)L_77));
		uint64_t L_78 = V_0;
		V_0 = ((int64_t)((uint64_t)L_78>>((int32_t)32)));
		uint64_t L_79 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___0_x;
		int32_t L_81 = ___1_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 6));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_z;
		int32_t L_85 = ___3_zOff;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 6));
		uint32_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_83), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		int32_t L_89 = ___3_zOff;
		uint64_t L_90 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 6))), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_0;
		V_0 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		uint64_t L_92 = V_0;
		return ((int32_t)(uint32_t)L_92);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_AddToEachOther_m0B1FE99D4DDB1E1144BFE85897243D3C20645113 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_u;
		int32_t L_2 = ___1_uOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_v;
		int32_t L_6 = ___3_vOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_u;
		int32_t L_10 = ___1_uOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_v;
		int32_t L_13 = ___3_vOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		uint64_t L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_u;
		int32_t L_18 = ___1_uOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_v;
		int32_t L_22 = ___3_vOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_20), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_u;
		int32_t L_26 = ___1_uOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_v;
		int32_t L_29 = ___3_vOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_u;
		int32_t L_34 = ___1_uOff;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 2));
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_v;
		int32_t L_38 = ___3_vOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_36), ((int64_t)(uint64_t)L_40)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_u;
		int32_t L_42 = ___1_uOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 2))), (uint32_t)((int32_t)(uint32_t)L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_v;
		int32_t L_45 = ___3_vOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___0_u;
		int32_t L_50 = ___1_uOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_v;
		int32_t L_54 = ___3_vOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 3));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_52), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_u;
		int32_t L_58 = ___1_uOff;
		uint64_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 3))), (uint32_t)((int32_t)(uint32_t)L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___2_v;
		int32_t L_61 = ___3_vOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		uint64_t L_64 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___0_u;
		int32_t L_66 = ___1_uOff;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 4));
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_v;
		int32_t L_70 = ___3_vOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___0_u;
		int32_t L_74 = ___1_uOff;
		uint64_t L_75 = V_0;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 4))), (uint32_t)((int32_t)(uint32_t)L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_v;
		int32_t L_77 = ___3_vOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___0_u;
		int32_t L_82 = ___1_uOff;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 5));
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_v;
		int32_t L_86 = ___3_vOff;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_84), ((int64_t)(uint64_t)L_88)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___0_u;
		int32_t L_90 = ___1_uOff;
		uint64_t L_91 = V_0;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 5))), (uint32_t)((int32_t)(uint32_t)L_91));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_v;
		int32_t L_93 = ___3_vOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___0_u;
		int32_t L_98 = ___1_uOff;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 6));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_v;
		int32_t L_102 = ___3_vOff;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_add(L_102, 6));
		uint32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_100), ((int64_t)(uint64_t)L_104)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ___0_u;
		int32_t L_106 = ___1_uOff;
		uint64_t L_107 = V_0;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_106, 6))), (uint32_t)((int32_t)(uint32_t)L_107));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_v;
		int32_t L_109 = ___3_vOff;
		uint64_t L_110 = V_0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 6))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_0;
		return ((int32_t)(uint32_t)L_112);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Copy_m78E5BD14BC88006EED7D3A28912652E774B511CB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_x;
		NullCheck(L_25);
		int32_t L_26 = 6;
		uint32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat224_Create_mE7F1428760BA3E2155FBE001D27D595E98B2C233 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)7);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat224_CreateExt_mEF1B9BEB7E23FB1F10621335191951921FC60BC0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_Diff_m8BF74535F2ACBFEC98DFAB915051FC9890C7B9ED (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_y;
		int32_t L_3 = ___3_yOff;
		bool L_4;
		L_4 = Nat224_Gte_m43CFAD21934C90DDAB6A14F161083A6BFCD7F049(L_0, L_1, L_2, L_3, NULL);
		bool L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_001b;
		}
		G_B1_0 = L_5;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___4_z;
		int32_t L_11 = ___5_zOff;
		int32_t L_12;
		L_12 = Nat224_Sub_m7C7E3D4FCBA8ED391F6910FCF8BE69342C66F12A(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return G_B1_0;
	}

IL_001b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___2_y;
		int32_t L_14 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___4_z;
		int32_t L_18 = ___5_zOff;
		int32_t L_19;
		L_19 = Nat224_Sub_m7C7E3D4FCBA8ED391F6910FCF8BE69342C66F12A(L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_Eq_m92EA5956EC22124851A0F62FFF72B6E7C00C367A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 6;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat224_FromBigInteger_m950132C1661AED0EF57F41CCF521999CBD9F6D64 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)224))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat224_FromBigInteger_m950132C1661AED0EF57F41CCF521999CBD9F6D64_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = Nat224_Create_mE7F1428760BA3E2155FBE001D27D595E98B2C233(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = BigInteger_get_IntValue_m05584D6A7C77090AAFD614D41AC11F04F0C65E74(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)32), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_GetBit_mA9290AA0546E3E013495E0C38D3F91D3C1179B86 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		V_0 = ((int32_t)(L_4>>5));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)7)))
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		return 0;
	}

IL_0017:
	{
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_Gte_mED07A43A9152FD732337F67111C3013F9EBC8B90 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 6;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_Gte_m43CFAD21934C90DDAB6A14F161083A6BFCD7F049 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 6;
		goto IL_0020;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) < ((uint32_t)L_11))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		uint32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_12) > ((uint32_t)L_13))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0020:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_IsOne_mE737F514915620DA034266B3A78F0EF8B373DD29 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat224_IsZero_mB211FEE19765B49C95AD065E4C5D561CF9FF78DE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)7)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Mul_m2E06122D9EFE0434750DE79C4016857D0BE4DF9F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		V_7 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 0;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_8 = ((int64_t)(uint64_t)L_23);
		uint64_t L_24 = V_7;
		uint64_t L_25 = V_8;
		uint64_t L_26 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)il2cpp_codegen_multiply((int64_t)L_25, (int64_t)L_26))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_zz;
		uint64_t L_28 = V_7;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_7;
		V_7 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_7;
		uint64_t L_31 = V_8;
		uint64_t L_32 = V_1;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_multiply((int64_t)L_31, (int64_t)L_32))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_zz;
		uint64_t L_34 = V_7;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_7;
		V_7 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_7;
		uint64_t L_37 = V_8;
		uint64_t L_38 = V_2;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_zz;
		uint64_t L_40 = V_7;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_40));
		uint64_t L_41 = V_7;
		V_7 = ((int64_t)((uint64_t)L_41>>((int32_t)32)));
		uint64_t L_42 = V_7;
		uint64_t L_43 = V_8;
		uint64_t L_44 = V_3;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_42, ((int64_t)il2cpp_codegen_multiply((int64_t)L_43, (int64_t)L_44))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_zz;
		uint64_t L_46 = V_7;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_7;
		V_7 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_7;
		uint64_t L_49 = V_8;
		uint64_t L_50 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_multiply((int64_t)L_49, (int64_t)L_50))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___2_zz;
		uint64_t L_52 = V_7;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_52));
		uint64_t L_53 = V_7;
		V_7 = ((int64_t)((uint64_t)L_53>>((int32_t)32)));
		uint64_t L_54 = V_7;
		uint64_t L_55 = V_8;
		uint64_t L_56 = V_5;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_54, ((int64_t)il2cpp_codegen_multiply((int64_t)L_55, (int64_t)L_56))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_zz;
		uint64_t L_58 = V_7;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_7;
		V_7 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_8;
		uint64_t L_62 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___2_zz;
		uint64_t L_64 = V_7;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_7;
		V_7 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		uint64_t L_67 = V_7;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_67));
		V_9 = 1;
		goto IL_01db;
	}

IL_00db:
	{
		V_10 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___0_x;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		uint32_t L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_11 = ((int64_t)(uint64_t)L_71);
		uint64_t L_72 = V_10;
		uint64_t L_73 = V_11;
		uint64_t L_74 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_zz;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_73, (int64_t)L_74)), ((int64_t)(uint64_t)L_78)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_zz;
		int32_t L_80 = V_9;
		uint64_t L_81 = V_10;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (uint32_t)((int32_t)(uint32_t)L_81));
		uint64_t L_82 = V_10;
		V_10 = ((int64_t)((uint64_t)L_82>>((int32_t)32)));
		uint64_t L_83 = V_10;
		uint64_t L_84 = V_11;
		uint64_t L_85 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___2_zz;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 1));
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_84, (int64_t)L_85)), ((int64_t)(uint64_t)L_89)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_zz;
		int32_t L_91 = V_9;
		uint64_t L_92 = V_10;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 1))), (uint32_t)((int32_t)(uint32_t)L_92));
		uint64_t L_93 = V_10;
		V_10 = ((int64_t)((uint64_t)L_93>>((int32_t)32)));
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		uint64_t L_96 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___2_zz;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 2));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_95, (int64_t)L_96)), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_zz;
		int32_t L_102 = V_9;
		uint64_t L_103 = V_10;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_102, 2))), (uint32_t)((int32_t)(uint32_t)L_103));
		uint64_t L_104 = V_10;
		V_10 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		uint64_t L_105 = V_10;
		uint64_t L_106 = V_11;
		uint64_t L_107 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_zz;
		int32_t L_109 = V_9;
		NullCheck(L_108);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add(L_109, 3));
		uint32_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107)), ((int64_t)(uint64_t)L_111)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___2_zz;
		int32_t L_113 = V_9;
		uint64_t L_114 = V_10;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_113, 3))), (uint32_t)((int32_t)(uint32_t)L_114));
		uint64_t L_115 = V_10;
		V_10 = ((int64_t)((uint64_t)L_115>>((int32_t)32)));
		uint64_t L_116 = V_10;
		uint64_t L_117 = V_11;
		uint64_t L_118 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___2_zz;
		int32_t L_120 = V_9;
		NullCheck(L_119);
		int32_t L_121 = ((int32_t)il2cpp_codegen_add(L_120, 4));
		uint32_t L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_116, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_117, (int64_t)L_118)), ((int64_t)(uint64_t)L_122)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ___2_zz;
		int32_t L_124 = V_9;
		uint64_t L_125 = V_10;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_124, 4))), (uint32_t)((int32_t)(uint32_t)L_125));
		uint64_t L_126 = V_10;
		V_10 = ((int64_t)((uint64_t)L_126>>((int32_t)32)));
		uint64_t L_127 = V_10;
		uint64_t L_128 = V_11;
		uint64_t L_129 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___2_zz;
		int32_t L_131 = V_9;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, 5));
		uint32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_127, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_128, (int64_t)L_129)), ((int64_t)(uint64_t)L_133)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = ___2_zz;
		int32_t L_135 = V_9;
		uint64_t L_136 = V_10;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_135, 5))), (uint32_t)((int32_t)(uint32_t)L_136));
		uint64_t L_137 = V_10;
		V_10 = ((int64_t)((uint64_t)L_137>>((int32_t)32)));
		uint64_t L_138 = V_10;
		uint64_t L_139 = V_11;
		uint64_t L_140 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___2_zz;
		int32_t L_142 = V_9;
		NullCheck(L_141);
		int32_t L_143 = ((int32_t)il2cpp_codegen_add(L_142, 6));
		uint32_t L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_138, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_139, (int64_t)L_140)), ((int64_t)(uint64_t)L_144)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_145 = ___2_zz;
		int32_t L_146 = V_9;
		uint64_t L_147 = V_10;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_146, 6))), (uint32_t)((int32_t)(uint32_t)L_147));
		uint64_t L_148 = V_10;
		V_10 = ((int64_t)((uint64_t)L_148>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_149 = ___2_zz;
		int32_t L_150 = V_9;
		uint64_t L_151 = V_10;
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_150, 7))), (uint32_t)((int32_t)(uint32_t)L_151));
		int32_t L_152 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_01db:
	{
		int32_t L_153 = V_9;
		if ((((int32_t)L_153) < ((int32_t)7)))
		{
			goto IL_00db;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Mul_m109376C21DFCEB23F8DE1B74D78656FAD094E970 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_y;
		int32_t L_25 = ___3_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = ((int64_t)(uint64_t)L_27);
		V_7 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_x;
		int32_t L_29 = ___1_xOff;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_8 = ((int64_t)(uint64_t)L_31);
		uint64_t L_32 = V_7;
		uint64_t L_33 = V_8;
		uint64_t L_34 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, ((int64_t)il2cpp_codegen_multiply((int64_t)L_33, (int64_t)L_34))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_zz;
		int32_t L_36 = ___5_zzOff;
		uint64_t L_37 = V_7;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_7;
		V_7 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_7;
		uint64_t L_40 = V_8;
		uint64_t L_41 = V_1;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)L_41))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___4_zz;
		int32_t L_43 = ___5_zzOff;
		uint64_t L_44 = V_7;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_43, 1))), (uint32_t)((int32_t)(uint32_t)L_44));
		uint64_t L_45 = V_7;
		V_7 = ((int64_t)((uint64_t)L_45>>((int32_t)32)));
		uint64_t L_46 = V_7;
		uint64_t L_47 = V_8;
		uint64_t L_48 = V_2;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)il2cpp_codegen_multiply((int64_t)L_47, (int64_t)L_48))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___4_zz;
		int32_t L_50 = ___5_zzOff;
		uint64_t L_51 = V_7;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 2))), (uint32_t)((int32_t)(uint32_t)L_51));
		uint64_t L_52 = V_7;
		V_7 = ((int64_t)((uint64_t)L_52>>((int32_t)32)));
		uint64_t L_53 = V_7;
		uint64_t L_54 = V_8;
		uint64_t L_55 = V_3;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_53, ((int64_t)il2cpp_codegen_multiply((int64_t)L_54, (int64_t)L_55))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___4_zz;
		int32_t L_57 = ___5_zzOff;
		uint64_t L_58 = V_7;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_57, 3))), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_7;
		V_7 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_8;
		uint64_t L_62 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___4_zz;
		int32_t L_64 = ___5_zzOff;
		uint64_t L_65 = V_7;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_64, 4))), (uint32_t)((int32_t)(uint32_t)L_65));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((uint64_t)L_66>>((int32_t)32)));
		uint64_t L_67 = V_7;
		uint64_t L_68 = V_8;
		uint64_t L_69 = V_5;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_67, ((int64_t)il2cpp_codegen_multiply((int64_t)L_68, (int64_t)L_69))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___4_zz;
		int32_t L_71 = ___5_zzOff;
		uint64_t L_72 = V_7;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_71, 5))), (uint32_t)((int32_t)(uint32_t)L_72));
		uint64_t L_73 = V_7;
		V_7 = ((int64_t)((uint64_t)L_73>>((int32_t)32)));
		uint64_t L_74 = V_7;
		uint64_t L_75 = V_8;
		uint64_t L_76 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_74, ((int64_t)il2cpp_codegen_multiply((int64_t)L_75, (int64_t)L_76))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___4_zz;
		int32_t L_78 = ___5_zzOff;
		uint64_t L_79 = V_7;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_78, 6))), (uint32_t)((int32_t)(uint32_t)L_79));
		uint64_t L_80 = V_7;
		V_7 = ((int64_t)((uint64_t)L_80>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___4_zz;
		int32_t L_82 = ___5_zzOff;
		uint64_t L_83 = V_7;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 7))), (uint32_t)((int32_t)(uint32_t)L_83));
		V_9 = 1;
		goto IL_021c;
	}

IL_0105:
	{
		int32_t L_84 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_84, 1));
		V_10 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___0_x;
		int32_t L_86 = ___1_xOff;
		int32_t L_87 = V_9;
		NullCheck(L_85);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_86, L_87));
		uint32_t L_89 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_11 = ((int64_t)(uint64_t)L_89);
		uint64_t L_90 = V_10;
		uint64_t L_91 = V_11;
		uint64_t L_92 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___4_zz;
		int32_t L_94 = ___5_zzOff;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		uint32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_90, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_91, (int64_t)L_92)), ((int64_t)(uint64_t)L_96)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___4_zz;
		int32_t L_98 = ___5_zzOff;
		uint64_t L_99 = V_10;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_98), (uint32_t)((int32_t)(uint32_t)L_99));
		uint64_t L_100 = V_10;
		V_10 = ((int64_t)((uint64_t)L_100>>((int32_t)32)));
		uint64_t L_101 = V_10;
		uint64_t L_102 = V_11;
		uint64_t L_103 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___4_zz;
		int32_t L_105 = ___5_zzOff;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___4_zz;
		int32_t L_109 = ___5_zzOff;
		uint64_t L_110 = V_10;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 1))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_10;
		V_10 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_10;
		uint64_t L_113 = V_11;
		uint64_t L_114 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___4_zz;
		int32_t L_116 = ___5_zzOff;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 2));
		uint32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_113, (int64_t)L_114)), ((int64_t)(uint64_t)L_118)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___4_zz;
		int32_t L_120 = ___5_zzOff;
		uint64_t L_121 = V_10;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_120, 2))), (uint32_t)((int32_t)(uint32_t)L_121));
		uint64_t L_122 = V_10;
		V_10 = ((int64_t)((uint64_t)L_122>>((int32_t)32)));
		uint64_t L_123 = V_10;
		uint64_t L_124 = V_11;
		uint64_t L_125 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___4_zz;
		int32_t L_127 = ___5_zzOff;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 3));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_123, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125)), ((int64_t)(uint64_t)L_129)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___4_zz;
		int32_t L_131 = ___5_zzOff;
		uint64_t L_132 = V_10;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_131, 3))), (uint32_t)((int32_t)(uint32_t)L_132));
		uint64_t L_133 = V_10;
		V_10 = ((int64_t)((uint64_t)L_133>>((int32_t)32)));
		uint64_t L_134 = V_10;
		uint64_t L_135 = V_11;
		uint64_t L_136 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___4_zz;
		int32_t L_138 = ___5_zzOff;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 4));
		uint32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136)), ((int64_t)(uint64_t)L_140)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___4_zz;
		int32_t L_142 = ___5_zzOff;
		uint64_t L_143 = V_10;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_142, 4))), (uint32_t)((int32_t)(uint32_t)L_143));
		uint64_t L_144 = V_10;
		V_10 = ((int64_t)((uint64_t)L_144>>((int32_t)32)));
		uint64_t L_145 = V_10;
		uint64_t L_146 = V_11;
		uint64_t L_147 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = ___4_zz;
		int32_t L_149 = ___5_zzOff;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, 5));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_146, (int64_t)L_147)), ((int64_t)(uint64_t)L_151)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = ___4_zz;
		int32_t L_153 = ___5_zzOff;
		uint64_t L_154 = V_10;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_153, 5))), (uint32_t)((int32_t)(uint32_t)L_154));
		uint64_t L_155 = V_10;
		V_10 = ((int64_t)((uint64_t)L_155>>((int32_t)32)));
		uint64_t L_156 = V_10;
		uint64_t L_157 = V_11;
		uint64_t L_158 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_159 = ___4_zz;
		int32_t L_160 = ___5_zzOff;
		NullCheck(L_159);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add(L_160, 6));
		uint32_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_156, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_157, (int64_t)L_158)), ((int64_t)(uint64_t)L_162)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_163 = ___4_zz;
		int32_t L_164 = ___5_zzOff;
		uint64_t L_165 = V_10;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_164, 6))), (uint32_t)((int32_t)(uint32_t)L_165));
		uint64_t L_166 = V_10;
		V_10 = ((int64_t)((uint64_t)L_166>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_167 = ___4_zz;
		int32_t L_168 = ___5_zzOff;
		uint64_t L_169 = V_10;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_168, 7))), (uint32_t)((int32_t)(uint32_t)L_169));
		int32_t L_170 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_170, 1));
	}

IL_021c:
	{
		int32_t L_171 = V_9;
		if ((((int32_t)L_171) < ((int32_t)7)))
		{
			goto IL_0105;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulAddTo_m1132030035CBB6A54D998A4A22B476D3DD81E282 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		V_7 = ((int64_t)0);
		V_8 = 0;
		goto IL_0148;
	}

IL_0032:
	{
		V_9 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_10 = ((int64_t)(uint64_t)L_24);
		uint64_t L_25 = V_9;
		uint64_t L_26 = V_10;
		uint64_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_zz;
		int32_t L_29 = V_8;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_25, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_26, (int64_t)L_27)), ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_zz;
		int32_t L_33 = V_8;
		uint64_t L_34 = V_9;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_9;
		V_9 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_9;
		uint64_t L_37 = V_10;
		uint64_t L_38 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_zz;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), ((int64_t)(uint64_t)L_42)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___2_zz;
		int32_t L_44 = V_8;
		uint64_t L_45 = V_9;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, 1))), (uint32_t)((int32_t)(uint32_t)L_45));
		uint64_t L_46 = V_9;
		V_9 = ((int64_t)((uint64_t)L_46>>((int32_t)32)));
		uint64_t L_47 = V_9;
		uint64_t L_48 = V_10;
		uint64_t L_49 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___2_zz;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(L_51, 2));
		uint32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_47, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_48, (int64_t)L_49)), ((int64_t)(uint64_t)L_53)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___2_zz;
		int32_t L_55 = V_8;
		uint64_t L_56 = V_9;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_55, 2))), (uint32_t)((int32_t)(uint32_t)L_56));
		uint64_t L_57 = V_9;
		V_9 = ((int64_t)((uint64_t)L_57>>((int32_t)32)));
		uint64_t L_58 = V_9;
		uint64_t L_59 = V_10;
		uint64_t L_60 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___2_zz;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 3));
		uint32_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_58, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_59, (int64_t)L_60)), ((int64_t)(uint64_t)L_64)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___2_zz;
		int32_t L_66 = V_8;
		uint64_t L_67 = V_9;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_66, 3))), (uint32_t)((int32_t)(uint32_t)L_67));
		uint64_t L_68 = V_9;
		V_9 = ((int64_t)((uint64_t)L_68>>((int32_t)32)));
		uint64_t L_69 = V_9;
		uint64_t L_70 = V_10;
		uint64_t L_71 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_zz;
		int32_t L_73 = V_8;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_69, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_70, (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_zz;
		int32_t L_77 = V_8;
		uint64_t L_78 = V_9;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_9;
		V_9 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_9;
		uint64_t L_81 = V_10;
		uint64_t L_82 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = V_8;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 5));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_81, (int64_t)L_82)), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___2_zz;
		int32_t L_88 = V_8;
		uint64_t L_89 = V_9;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 5))), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_9;
		V_9 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_9;
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___2_zz;
		int32_t L_95 = V_8;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 6));
		uint32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_92, (int64_t)L_93)), ((int64_t)(uint64_t)L_97)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___2_zz;
		int32_t L_99 = V_8;
		uint64_t L_100 = V_9;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_99, 6))), (uint32_t)((int32_t)(uint32_t)L_100));
		uint64_t L_101 = V_9;
		V_9 = ((int64_t)((uint64_t)L_101>>((int32_t)32)));
		uint64_t L_102 = V_9;
		uint64_t L_103 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___2_zz;
		int32_t L_105 = V_8;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 7));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_102, ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_zz;
		int32_t L_109 = V_8;
		uint64_t L_110 = V_9;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 7))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_9;
		V_7 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		int32_t L_112 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_0148:
	{
		int32_t L_113 = V_8;
		if ((((int32_t)L_113) < ((int32_t)7)))
		{
			goto IL_0032;
		}
	}
	{
		uint64_t L_114 = V_7;
		return ((int32_t)(uint32_t)L_114);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulAddTo_m307625B6B1F831F9949D72221D2D3E5B5FD5A29E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	int32_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_y;
		int32_t L_25 = ___3_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = ((int64_t)(uint64_t)L_27);
		V_7 = ((int64_t)0);
		V_8 = 0;
		goto IL_016c;
	}

IL_003e:
	{
		V_9 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_x;
		int32_t L_29 = ___1_xOff;
		int32_t L_30 = V_8;
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
		uint32_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_9;
		uint64_t L_34 = V_10;
		uint64_t L_35 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___4_zz;
		int32_t L_37 = ___5_zzOff;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35)), ((int64_t)(uint64_t)L_39)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___4_zz;
		int32_t L_41 = ___5_zzOff;
		uint64_t L_42 = V_9;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint32_t)((int32_t)(uint32_t)L_42));
		uint64_t L_43 = V_9;
		V_9 = ((int64_t)((uint64_t)L_43>>((int32_t)32)));
		uint64_t L_44 = V_9;
		uint64_t L_45 = V_10;
		uint64_t L_46 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___4_zz;
		int32_t L_48 = ___5_zzOff;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		uint32_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_45, (int64_t)L_46)), ((int64_t)(uint64_t)L_50)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___4_zz;
		int32_t L_52 = ___5_zzOff;
		uint64_t L_53 = V_9;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_52, 1))), (uint32_t)((int32_t)(uint32_t)L_53));
		uint64_t L_54 = V_9;
		V_9 = ((int64_t)((uint64_t)L_54>>((int32_t)32)));
		uint64_t L_55 = V_9;
		uint64_t L_56 = V_10;
		uint64_t L_57 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___4_zz;
		int32_t L_59 = ___5_zzOff;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 2));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_56, (int64_t)L_57)), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___4_zz;
		int32_t L_63 = ___5_zzOff;
		uint64_t L_64 = V_9;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 2))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_9;
		V_9 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_9;
		uint64_t L_67 = V_10;
		uint64_t L_68 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___4_zz;
		int32_t L_70 = ___5_zzOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 3));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_67, (int64_t)L_68)), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___4_zz;
		int32_t L_74 = ___5_zzOff;
		uint64_t L_75 = V_9;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 3))), (uint32_t)((int32_t)(uint32_t)L_75));
		uint64_t L_76 = V_9;
		V_9 = ((int64_t)((uint64_t)L_76>>((int32_t)32)));
		uint64_t L_77 = V_9;
		uint64_t L_78 = V_10;
		uint64_t L_79 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___4_zz;
		int32_t L_81 = ___5_zzOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 4));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_77, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_78, (int64_t)L_79)), ((int64_t)(uint64_t)L_83)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___4_zz;
		int32_t L_85 = ___5_zzOff;
		uint64_t L_86 = V_9;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_85, 4))), (uint32_t)((int32_t)(uint32_t)L_86));
		uint64_t L_87 = V_9;
		V_9 = ((int64_t)((uint64_t)L_87>>((int32_t)32)));
		uint64_t L_88 = V_9;
		uint64_t L_89 = V_10;
		uint64_t L_90 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___4_zz;
		int32_t L_92 = ___5_zzOff;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 5));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_89, (int64_t)L_90)), ((int64_t)(uint64_t)L_94)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___4_zz;
		int32_t L_96 = ___5_zzOff;
		uint64_t L_97 = V_9;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, 5))), (uint32_t)((int32_t)(uint32_t)L_97));
		uint64_t L_98 = V_9;
		V_9 = ((int64_t)((uint64_t)L_98>>((int32_t)32)));
		uint64_t L_99 = V_9;
		uint64_t L_100 = V_10;
		uint64_t L_101 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = ___4_zz;
		int32_t L_103 = ___5_zzOff;
		NullCheck(L_102);
		int32_t L_104 = ((int32_t)il2cpp_codegen_add(L_103, 6));
		uint32_t L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_100, (int64_t)L_101)), ((int64_t)(uint64_t)L_105)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ___4_zz;
		int32_t L_107 = ___5_zzOff;
		uint64_t L_108 = V_9;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_107, 6))), (uint32_t)((int32_t)(uint32_t)L_108));
		uint64_t L_109 = V_9;
		V_9 = ((int64_t)((uint64_t)L_109>>((int32_t)32)));
		uint64_t L_110 = V_9;
		uint64_t L_111 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___4_zz;
		int32_t L_113 = ___5_zzOff;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 7));
		uint32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_110, ((int64_t)il2cpp_codegen_add((int64_t)L_111, ((int64_t)(uint64_t)L_115)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___4_zz;
		int32_t L_117 = ___5_zzOff;
		uint64_t L_118 = V_9;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_117, 7))), (uint32_t)((int32_t)(uint32_t)L_118));
		uint64_t L_119 = V_9;
		V_7 = ((int64_t)((uint64_t)L_119>>((int32_t)32)));
		int32_t L_120 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_120, 1));
		int32_t L_121 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_016c:
	{
		int32_t L_122 = V_8;
		if ((((int32_t)L_122) < ((int32_t)7)))
		{
			goto IL_003e;
		}
	}
	{
		uint64_t L_123 = V_7;
		return ((int32_t)(uint32_t)L_123);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat224_Mul33Add_m390957B90E41706F1BCDFA94178B540C2A1B96D7 (uint32_t ___0_w, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_w;
		V_1 = ((int64_t)(uint64_t)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int64_t)(uint64_t)L_4);
		uint64_t L_5 = V_0;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___3_y;
		int32_t L_9 = ___4_yOff;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)L_7)), ((int64_t)(uint64_t)L_11)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___5_z;
		int32_t L_13 = ___6_zOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_x;
		int32_t L_17 = ___2_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int64_t)(uint64_t)L_19);
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_1;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___3_y;
		int32_t L_25 = ___4_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_21, (int64_t)L_22)), (int64_t)L_23)), ((int64_t)(uint64_t)L_27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___5_z;
		int32_t L_29 = ___6_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___1_x;
		int32_t L_33 = ___2_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_0;
		uint64_t L_37 = V_1;
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___3_y;
		int32_t L_41 = ___4_yOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___5_z;
		int32_t L_45 = ___6_zOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_x;
		int32_t L_49 = ___2_xOff;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_5 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_0;
		uint64_t L_53 = V_1;
		uint64_t L_54 = V_5;
		uint64_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___3_y;
		int32_t L_57 = ___4_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), (int64_t)L_55)), ((int64_t)(uint64_t)L_59)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___5_z;
		int32_t L_61 = ___6_zOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_x;
		int32_t L_65 = ___2_xOff;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)(uint64_t)L_67);
		uint64_t L_68 = V_0;
		uint64_t L_69 = V_1;
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___3_y;
		int32_t L_73 = ___4_yOff;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, (int64_t)L_70)), (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___5_z;
		int32_t L_77 = ___6_zOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_x;
		int32_t L_81 = ___2_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)(uint64_t)L_83);
		uint64_t L_84 = V_0;
		uint64_t L_85 = V_1;
		uint64_t L_86 = V_7;
		uint64_t L_87 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___3_y;
		int32_t L_89 = ___4_yOff;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 5));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_85, (int64_t)L_86)), (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___5_z;
		int32_t L_93 = ___6_zOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___1_x;
		int32_t L_97 = ___2_xOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 6));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_8 = ((int64_t)(uint64_t)L_99);
		uint64_t L_100 = V_0;
		uint64_t L_101 = V_1;
		uint64_t L_102 = V_8;
		uint64_t L_103 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___3_y;
		int32_t L_105 = ___4_yOff;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 6));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_101, (int64_t)L_102)), (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___5_z;
		int32_t L_109 = ___6_zOff;
		uint64_t L_110 = V_0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 6))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_0;
		uint64_t L_113 = V_8;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, (int64_t)L_113));
		uint64_t L_114 = V_0;
		return L_114;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulByWord_mD8A6ED84EB3301A86922D264ED795FE802AC7899 (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_z;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_5)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_z;
		uint64_t L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_7));
		uint64_t L_8 = V_0;
		V_0 = ((int64_t)((uint64_t)L_8>>((int32_t)32)));
		uint64_t L_9 = V_0;
		uint64_t L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, ((int64_t)il2cpp_codegen_multiply((int64_t)L_10, ((int64_t)(uint64_t)L_13)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_z;
		uint64_t L_15 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_15));
		uint64_t L_16 = V_0;
		V_0 = ((int64_t)((uint64_t)L_16>>((int32_t)32)));
		uint64_t L_17 = V_0;
		uint64_t L_18 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___1_z;
		NullCheck(L_19);
		int32_t L_20 = 2;
		uint32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_17, ((int64_t)il2cpp_codegen_multiply((int64_t)L_18, ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___1_z;
		uint64_t L_23 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_23));
		uint64_t L_24 = V_0;
		V_0 = ((int64_t)((uint64_t)L_24>>((int32_t)32)));
		uint64_t L_25 = V_0;
		uint64_t L_26 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		NullCheck(L_27);
		int32_t L_28 = 3;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_25, ((int64_t)il2cpp_codegen_multiply((int64_t)L_26, ((int64_t)(uint64_t)L_29)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_z;
		uint64_t L_31 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_0;
		V_0 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_0;
		uint64_t L_34 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___1_z;
		NullCheck(L_35);
		int32_t L_36 = 4;
		uint32_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, ((int64_t)(uint64_t)L_37)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___1_z;
		uint64_t L_39 = V_0;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_39));
		uint64_t L_40 = V_0;
		V_0 = ((int64_t)((uint64_t)L_40>>((int32_t)32)));
		uint64_t L_41 = V_0;
		uint64_t L_42 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_z;
		NullCheck(L_43);
		int32_t L_44 = 5;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)il2cpp_codegen_multiply((int64_t)L_42, ((int64_t)(uint64_t)L_45)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_z;
		uint64_t L_47 = V_0;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_47));
		uint64_t L_48 = V_0;
		V_0 = ((int64_t)((uint64_t)L_48>>((int32_t)32)));
		uint64_t L_49 = V_0;
		uint64_t L_50 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 6;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)il2cpp_codegen_multiply((int64_t)L_50, ((int64_t)(uint64_t)L_53)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_z;
		uint64_t L_55 = V_0;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_0;
		V_0 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_0;
		return ((int32_t)(uint32_t)L_57);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulByWordAddTo_m483E270E3A3A7E488D3CF054D0FD425CE5CD69BC (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___2_z;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_5))), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		uint64_t L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_13, ((int64_t)(uint64_t)L_16))), ((int64_t)(uint64_t)L_19)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		uint64_t L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_21));
		uint64_t L_22 = V_0;
		V_0 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		uint64_t L_23 = V_0;
		uint64_t L_24 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___2_z;
		NullCheck(L_25);
		int32_t L_26 = 2;
		uint32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___1_y;
		NullCheck(L_28);
		int32_t L_29 = 2;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_24, ((int64_t)(uint64_t)L_27))), ((int64_t)(uint64_t)L_30)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_z;
		uint64_t L_32 = V_0;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_32));
		uint64_t L_33 = V_0;
		V_0 = ((int64_t)((uint64_t)L_33>>((int32_t)32)));
		uint64_t L_34 = V_0;
		uint64_t L_35 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		NullCheck(L_36);
		int32_t L_37 = 3;
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___1_y;
		NullCheck(L_39);
		int32_t L_40 = 3;
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_34, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_35, ((int64_t)(uint64_t)L_38))), ((int64_t)(uint64_t)L_41)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_z;
		uint64_t L_43 = V_0;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		uint64_t L_46 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		NullCheck(L_47);
		int32_t L_48 = 4;
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___1_y;
		NullCheck(L_50);
		int32_t L_51 = 4;
		uint32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_46, ((int64_t)(uint64_t)L_49))), ((int64_t)(uint64_t)L_52)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		uint64_t L_54 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_54));
		uint64_t L_55 = V_0;
		V_0 = ((int64_t)((uint64_t)L_55>>((int32_t)32)));
		uint64_t L_56 = V_0;
		uint64_t L_57 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		NullCheck(L_58);
		int32_t L_59 = 5;
		uint32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___1_y;
		NullCheck(L_61);
		int32_t L_62 = 5;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_57, ((int64_t)(uint64_t)L_60))), ((int64_t)(uint64_t)L_63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___2_z;
		uint64_t L_65 = V_0;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_65));
		uint64_t L_66 = V_0;
		V_0 = ((int64_t)((uint64_t)L_66>>((int32_t)32)));
		uint64_t L_67 = V_0;
		uint64_t L_68 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_z;
		NullCheck(L_69);
		int32_t L_70 = 6;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 6;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_67, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_68, ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		return ((int32_t)(uint32_t)L_78);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulWordAddTo_mF0E7BC8E847AE5996B2798D52FE4ECE0E23269CE (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, int32_t ___2_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		int32_t L_4 = ___2_yOff;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___3_z;
		int32_t L_8 = ___4_zOff;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_10)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___3_z;
		int32_t L_12 = ___4_zOff;
		uint64_t L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((int32_t)(uint32_t)L_13));
		uint64_t L_14 = V_0;
		V_0 = ((int64_t)((uint64_t)L_14>>((int32_t)32)));
		uint64_t L_15 = V_0;
		uint64_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		int32_t L_18 = ___2_yOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___3_z;
		int32_t L_22 = ___4_zOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_16, ((int64_t)(uint64_t)L_20))), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___3_z;
		int32_t L_26 = ___4_zOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		uint64_t L_28 = V_0;
		V_0 = ((int64_t)((uint64_t)L_28>>((int32_t)32)));
		uint64_t L_29 = V_0;
		uint64_t L_30 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_y;
		int32_t L_32 = ___2_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___3_z;
		int32_t L_36 = ___4_zOff;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 2));
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_30, ((int64_t)(uint64_t)L_34))), ((int64_t)(uint64_t)L_38)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___3_z;
		int32_t L_40 = ___4_zOff;
		uint64_t L_41 = V_0;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, 2))), (uint32_t)((int32_t)(uint32_t)L_41));
		uint64_t L_42 = V_0;
		V_0 = ((int64_t)((uint64_t)L_42>>((int32_t)32)));
		uint64_t L_43 = V_0;
		uint64_t L_44 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___1_y;
		int32_t L_46 = ___2_yOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___3_z;
		int32_t L_50 = ___4_zOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_44, ((int64_t)(uint64_t)L_48))), ((int64_t)(uint64_t)L_52)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___3_z;
		int32_t L_54 = ___4_zOff;
		uint64_t L_55 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, 3))), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_0;
		V_0 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_0;
		uint64_t L_58 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___1_y;
		int32_t L_60 = ___2_yOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___3_z;
		int32_t L_64 = ___4_zOff;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 4));
		uint32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_58, ((int64_t)(uint64_t)L_62))), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___3_z;
		int32_t L_68 = ___4_zOff;
		uint64_t L_69 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 4))), (uint32_t)((int32_t)(uint32_t)L_69));
		uint64_t L_70 = V_0;
		V_0 = ((int64_t)((uint64_t)L_70>>((int32_t)32)));
		uint64_t L_71 = V_0;
		uint64_t L_72 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___1_y;
		int32_t L_74 = ___2_yOff;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 5));
		uint32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___3_z;
		int32_t L_78 = ___4_zOff;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 5));
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_72, ((int64_t)(uint64_t)L_76))), ((int64_t)(uint64_t)L_80)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___3_z;
		int32_t L_82 = ___4_zOff;
		uint64_t L_83 = V_0;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 5))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_0;
		V_0 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_0;
		uint64_t L_86 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___1_y;
		int32_t L_88 = ___2_yOff;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 6));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___3_z;
		int32_t L_92 = ___4_zOff;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 6));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_86, ((int64_t)(uint64_t)L_90))), ((int64_t)(uint64_t)L_94)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___3_z;
		int32_t L_96 = ___4_zOff;
		uint64_t L_97 = V_0;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, 6))), (uint32_t)((int32_t)(uint32_t)L_97));
		uint64_t L_98 = V_0;
		V_0 = ((int64_t)((uint64_t)L_98>>((int32_t)32)));
		uint64_t L_99 = V_0;
		return ((int32_t)(uint32_t)L_99);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_Mul33DWordAdd_m2E20E9A44E3001B93A12A81D0941DADCCA6EFE89 (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = ___1_y;
		V_2 = ((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		uint64_t L_4 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = ___1_y;
		V_3 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_15, (int64_t)L_16)), (int64_t)L_17)), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		uint64_t L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint64_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 2))), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int32_t L_38 = ___3_zOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)(uint64_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_z;
		int32_t L_42 = ___3_zOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 3))), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0079;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		int32_t L_47 = ___3_zOff;
		uint32_t L_48;
		L_48 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(7, L_46, L_47, 4, NULL);
		return L_48;
	}

IL_0079:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_Mul33WordAdd_m885330AB1AA174889DD41DAECB1E0584D2A71542 (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_y;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint32_t L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_3))), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)(uint64_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint64_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 2))), (uint32_t)((int32_t)(uint32_t)L_29));
		uint64_t L_30 = V_0;
		V_0 = ((int64_t)((uint64_t)L_30>>((int32_t)32)));
		uint64_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_0055;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint32_t L_34;
		L_34 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(7, L_32, L_33, 3, NULL);
		return L_34;
	}

IL_0055:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulWordDwordAdd_mC1DBFBA6410BCF81B8F585CE4CDECCAE3C1AAA30 (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint64_t L_3 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)L_3)), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		uint64_t L_14 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___2_z;
		int32_t L_16 = ___3_zOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_13, ((int64_t)((uint64_t)L_14>>((int32_t)32))))), ((int64_t)(uint64_t)L_18)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		uint64_t L_21 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_20, 1))), (uint32_t)((int32_t)(uint32_t)L_21));
		uint64_t L_22 = V_0;
		V_0 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		uint64_t L_23 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 2));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, ((int64_t)(uint64_t)L_27)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 2))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		if (!L_32)
		{
			goto IL_0059;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		int32_t L_34 = ___3_zOff;
		uint32_t L_35;
		L_35 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(7, L_33, L_34, 3, NULL);
		return L_35;
	}

IL_0059:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat224_MulWord_m8DB05838819A1307019CCE338A5CDD34725BCEEF (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		V_2 = 0;
	}

IL_0008:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int32_t L_8 = ___3_zOff;
		int32_t L_9 = V_2;
		uint64_t L_10 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, L_9))), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		int32_t L_12 = V_2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		V_2 = L_13;
		if ((((int32_t)L_13) < ((int32_t)7)))
		{
			goto IL_0008;
		}
	}
	{
		uint64_t L_14 = V_0;
		return ((int32_t)(uint32_t)L_14);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Square_m28FBC2EEA42E27D29AA47411D0EFDF740AD62BFD (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	uint64_t V_23 = 0;
	uint64_t V_24 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_21 = 6;
		V_22 = ((int32_t)14);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_21;
		int32_t L_5 = L_4;
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_23 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_22;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_22 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_23;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_22;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_22 = L_16;
		uint64_t L_17 = V_23;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_23;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_21;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_24 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_24;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_24;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_24;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_10 = ((int64_t)(uint64_t)L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___1_zz;
		NullCheck(L_73);
		int32_t L_74 = 6;
		uint32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_11 = ((int64_t)(uint64_t)L_75);
		uint64_t L_76 = V_7;
		uint64_t L_77 = V_9;
		uint64_t L_78 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_multiply((int64_t)L_77, (int64_t)L_78))));
		uint64_t L_79 = V_7;
		V_3 = ((int32_t)(uint32_t)L_79);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_zz;
		uint32_t L_81 = V_3;
		uint32_t L_82 = V_2;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_81<<1))|(int32_t)L_82)));
		uint32_t L_83 = V_3;
		V_2 = ((int32_t)((uint32_t)L_83>>((int32_t)31)));
		uint64_t L_84 = V_8;
		uint64_t L_85 = V_7;
		uint64_t L_86 = V_9;
		uint64_t L_87 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_85>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, (int64_t)L_87))))));
		uint64_t L_88 = V_10;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_8;
		V_8 = ((int64_t)((int64_t)L_92&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)((uint64_t)L_94>>((int32_t)32)))));
		uint64_t L_95 = V_10;
		V_10 = ((int64_t)((int64_t)L_95&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___0_x;
		NullCheck(L_96);
		int32_t L_97 = 4;
		uint32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_12 = ((int64_t)(uint64_t)L_98);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___1_zz;
		NullCheck(L_99);
		int32_t L_100 = 7;
		uint32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_13 = ((int64_t)(uint64_t)L_101);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = ___1_zz;
		NullCheck(L_102);
		int32_t L_103 = 8;
		uint32_t L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_14 = ((int64_t)(uint64_t)L_104);
		uint64_t L_105 = V_8;
		uint64_t L_106 = V_12;
		uint64_t L_107 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))));
		uint64_t L_108 = V_8;
		V_3 = ((int32_t)(uint32_t)L_108);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___1_zz;
		uint32_t L_110 = V_3;
		uint32_t L_111 = V_2;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_110<<1))|(int32_t)L_111)));
		uint32_t L_112 = V_3;
		V_2 = ((int32_t)((uint32_t)L_112>>((int32_t)31)));
		uint64_t L_113 = V_10;
		uint64_t L_114 = V_8;
		uint64_t L_115 = V_12;
		uint64_t L_116 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_114>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_115, (int64_t)L_116))))));
		uint64_t L_117 = V_11;
		uint64_t L_118 = V_10;
		uint64_t L_119 = V_12;
		uint64_t L_120 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_118>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_119, (int64_t)L_120))))));
		uint64_t L_121 = V_10;
		V_10 = ((int64_t)((int64_t)L_121&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_122 = V_13;
		uint64_t L_123 = V_11;
		uint64_t L_124 = V_12;
		uint64_t L_125 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_123>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125))))));
		uint64_t L_126 = V_11;
		V_11 = ((int64_t)((int64_t)L_126&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_127 = V_14;
		uint64_t L_128 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_127, ((int64_t)((uint64_t)L_128>>((int32_t)32)))));
		uint64_t L_129 = V_13;
		V_13 = ((int64_t)((int64_t)L_129&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___0_x;
		NullCheck(L_130);
		int32_t L_131 = 5;
		uint32_t L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_15 = ((int64_t)(uint64_t)L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ___1_zz;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)9);
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_16 = ((int64_t)(uint64_t)L_135);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ___1_zz;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)10);
		uint32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		V_17 = ((int64_t)(uint64_t)L_138);
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_15;
		uint64_t L_141 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, ((int64_t)il2cpp_codegen_multiply((int64_t)L_140, (int64_t)L_141))));
		uint64_t L_142 = V_10;
		V_3 = ((int32_t)(uint32_t)L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___1_zz;
		uint32_t L_144 = V_3;
		uint32_t L_145 = V_2;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_144<<1))|(int32_t)L_145)));
		uint32_t L_146 = V_3;
		V_2 = ((int32_t)((uint32_t)L_146>>((int32_t)31)));
		uint64_t L_147 = V_11;
		uint64_t L_148 = V_10;
		uint64_t L_149 = V_15;
		uint64_t L_150 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_148>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_149, (int64_t)L_150))))));
		uint64_t L_151 = V_13;
		uint64_t L_152 = V_11;
		uint64_t L_153 = V_15;
		uint64_t L_154 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_151, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_152>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_153, (int64_t)L_154))))));
		uint64_t L_155 = V_11;
		V_11 = ((int64_t)((int64_t)L_155&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_156 = V_14;
		uint64_t L_157 = V_13;
		uint64_t L_158 = V_15;
		uint64_t L_159 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_156, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_157>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_158, (int64_t)L_159))))));
		uint64_t L_160 = V_13;
		V_13 = ((int64_t)((int64_t)L_160&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_161 = V_16;
		uint64_t L_162 = V_14;
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_161, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_162>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_163, (int64_t)L_164))))));
		uint64_t L_165 = V_14;
		V_14 = ((int64_t)((int64_t)L_165&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_166 = V_17;
		uint64_t L_167 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_166, ((int64_t)((uint64_t)L_167>>((int32_t)32)))));
		uint64_t L_168 = V_16;
		V_16 = ((int64_t)((int64_t)L_168&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = ___0_x;
		NullCheck(L_169);
		int32_t L_170 = 6;
		uint32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		V_18 = ((int64_t)(uint64_t)L_171);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = ___1_zz;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)11);
		uint32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		V_19 = ((int64_t)(uint64_t)L_174);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = ___1_zz;
		NullCheck(L_175);
		int32_t L_176 = ((int32_t)12);
		uint32_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_20 = ((int64_t)(uint64_t)L_177);
		uint64_t L_178 = V_11;
		uint64_t L_179 = V_18;
		uint64_t L_180 = V_0;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, ((int64_t)il2cpp_codegen_multiply((int64_t)L_179, (int64_t)L_180))));
		uint64_t L_181 = V_11;
		V_3 = ((int32_t)(uint32_t)L_181);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = ___1_zz;
		uint32_t L_183 = V_3;
		uint32_t L_184 = V_2;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_183<<1))|(int32_t)L_184)));
		uint32_t L_185 = V_3;
		V_2 = ((int32_t)((uint32_t)L_185>>((int32_t)31)));
		uint64_t L_186 = V_13;
		uint64_t L_187 = V_11;
		uint64_t L_188 = V_18;
		uint64_t L_189 = V_4;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_186, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_187>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_188, (int64_t)L_189))))));
		uint64_t L_190 = V_14;
		uint64_t L_191 = V_13;
		uint64_t L_192 = V_18;
		uint64_t L_193 = V_6;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_191>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_192, (int64_t)L_193))))));
		uint64_t L_194 = V_16;
		uint64_t L_195 = V_14;
		uint64_t L_196 = V_18;
		uint64_t L_197 = V_9;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_194, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_195>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_196, (int64_t)L_197))))));
		uint64_t L_198 = V_17;
		uint64_t L_199 = V_16;
		uint64_t L_200 = V_18;
		uint64_t L_201 = V_12;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_198, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_199>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_200, (int64_t)L_201))))));
		uint64_t L_202 = V_19;
		uint64_t L_203 = V_17;
		uint64_t L_204 = V_18;
		uint64_t L_205 = V_15;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_203>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_204, (int64_t)L_205))))));
		uint64_t L_206 = V_20;
		uint64_t L_207 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_206, ((int64_t)((uint64_t)L_207>>((int32_t)32)))));
		uint64_t L_208 = V_13;
		V_3 = ((int32_t)(uint32_t)L_208);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ___1_zz;
		uint32_t L_210 = V_3;
		uint32_t L_211 = V_2;
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_210<<1))|(int32_t)L_211)));
		uint32_t L_212 = V_3;
		V_2 = ((int32_t)((uint32_t)L_212>>((int32_t)31)));
		uint64_t L_213 = V_14;
		V_3 = ((int32_t)(uint32_t)L_213);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_214 = ___1_zz;
		uint32_t L_215 = V_3;
		uint32_t L_216 = V_2;
		NullCheck(L_214);
		(L_214)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)((int32_t)L_215<<1))|(int32_t)L_216)));
		uint32_t L_217 = V_3;
		V_2 = ((int32_t)((uint32_t)L_217>>((int32_t)31)));
		uint64_t L_218 = V_16;
		V_3 = ((int32_t)(uint32_t)L_218);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = ___1_zz;
		uint32_t L_220 = V_3;
		uint32_t L_221 = V_2;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_220<<1))|(int32_t)L_221)));
		uint32_t L_222 = V_3;
		V_2 = ((int32_t)((uint32_t)L_222>>((int32_t)31)));
		uint64_t L_223 = V_17;
		V_3 = ((int32_t)(uint32_t)L_223);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_224 = ___1_zz;
		uint32_t L_225 = V_3;
		uint32_t L_226 = V_2;
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_225<<1))|(int32_t)L_226)));
		uint32_t L_227 = V_3;
		V_2 = ((int32_t)((uint32_t)L_227>>((int32_t)31)));
		uint64_t L_228 = V_19;
		V_3 = ((int32_t)(uint32_t)L_228);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_229 = ___1_zz;
		uint32_t L_230 = V_3;
		uint32_t L_231 = V_2;
		NullCheck(L_229);
		(L_229)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_230<<1))|(int32_t)L_231)));
		uint32_t L_232 = V_3;
		V_2 = ((int32_t)((uint32_t)L_232>>((int32_t)31)));
		uint64_t L_233 = V_20;
		V_3 = ((int32_t)(uint32_t)L_233);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_234 = ___1_zz;
		uint32_t L_235 = V_3;
		uint32_t L_236 = V_2;
		NullCheck(L_234);
		(L_234)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_235<<1))|(int32_t)L_236)));
		uint32_t L_237 = V_3;
		V_2 = ((int32_t)((uint32_t)L_237>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_238 = ___1_zz;
		NullCheck(L_238);
		int32_t L_239 = ((int32_t)13);
		uint32_t L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		uint64_t L_241 = V_20;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_240, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_241>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_242 = ___1_zz;
		uint32_t L_243 = V_3;
		uint32_t L_244 = V_2;
		NullCheck(L_242);
		(L_242)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_243<<1))|(int32_t)L_244)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Square_m12FC5DEA55CB0176A4CCAA6921501F310950F982 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	uint64_t V_23 = 0;
	uint64_t V_24 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		V_2 = 0;
		V_21 = 6;
		V_22 = ((int32_t)14);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		int32_t L_6 = V_21;
		int32_t L_7 = L_6;
		V_21 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		uint32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int64_t L_10 = ((int64_t)(uint64_t)L_9);
		V_23 = ((int64_t)il2cpp_codegen_multiply(L_10, L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		int32_t L_12 = ___3_zzOff;
		int32_t L_13 = V_22;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_22 = L_14;
		uint32_t L_15 = V_2;
		uint64_t L_16 = V_23;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_14))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_15<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_16>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_zz;
		int32_t L_18 = ___3_zzOff;
		int32_t L_19 = V_22;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		V_22 = L_20;
		uint64_t L_21 = V_23;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_20))), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_21>>1))));
		uint64_t L_22 = V_23;
		V_2 = ((int32_t)(uint32_t)L_22);
		int32_t L_23 = V_21;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_0;
		V_24 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_24, (int64_t)L_25));
		uint32_t L_26 = V_2;
		uint64_t L_27 = V_24;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_26<<((int32_t)31)))))|((int64_t)((uint64_t)L_27>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_zz;
		int32_t L_29 = ___3_zzOff;
		uint64_t L_30 = V_24;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_24;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_31>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		int32_t L_37 = ___3_zzOff;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 2));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)(uint64_t)L_39);
		uint64_t L_40 = V_1;
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_multiply((int64_t)L_41, (int64_t)L_42))));
		uint64_t L_43 = V_1;
		V_3 = ((int32_t)(uint32_t)L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_zz;
		int32_t L_45 = ___3_zzOff;
		uint32_t L_46 = V_3;
		uint32_t L_47 = V_2;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_46<<1))|(int32_t)L_47)));
		uint32_t L_48 = V_3;
		V_2 = ((int32_t)((uint32_t)L_48>>((int32_t)31)));
		uint64_t L_49 = V_5;
		uint64_t L_50 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)((uint64_t)L_50>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		int32_t L_52 = ___1_xOff;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)(uint64_t)L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___2_zz;
		int32_t L_56 = ___3_zzOff;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 3));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_7 = ((int64_t)(uint64_t)L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_zz;
		int32_t L_60 = ___3_zzOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_8 = ((int64_t)(uint64_t)L_62);
		uint64_t L_63 = V_5;
		uint64_t L_64 = V_6;
		uint64_t L_65 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		uint64_t L_66 = V_5;
		V_3 = ((int32_t)(uint32_t)L_66);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_zz;
		int32_t L_68 = ___3_zzOff;
		uint32_t L_69 = V_3;
		uint32_t L_70 = V_2;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 2))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_69<<1))|(int32_t)L_70)));
		uint32_t L_71 = V_3;
		V_2 = ((int32_t)((uint32_t)L_71>>((int32_t)31)));
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_5;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_73>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75))))));
		uint64_t L_76 = V_8;
		uint64_t L_77 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)((uint64_t)L_77>>((int32_t)32)))));
		uint64_t L_78 = V_7;
		V_7 = ((int64_t)((int64_t)L_78&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 3));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_9 = ((int64_t)(uint64_t)L_82);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = ___3_zzOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 5));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_10 = ((int64_t)(uint64_t)L_86);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___2_zz;
		int32_t L_88 = ___3_zzOff;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 6));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_11 = ((int64_t)(uint64_t)L_90);
		uint64_t L_91 = V_7;
		uint64_t L_92 = V_9;
		uint64_t L_93 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_multiply((int64_t)L_92, (int64_t)L_93))));
		uint64_t L_94 = V_7;
		V_3 = ((int32_t)(uint32_t)L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___2_zz;
		int32_t L_96 = ___3_zzOff;
		uint32_t L_97 = V_3;
		uint32_t L_98 = V_2;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, 3))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_97<<1))|(int32_t)L_98)));
		uint32_t L_99 = V_3;
		V_2 = ((int32_t)((uint32_t)L_99>>((int32_t)31)));
		uint64_t L_100 = V_8;
		uint64_t L_101 = V_7;
		uint64_t L_102 = V_9;
		uint64_t L_103 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_101>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103))))));
		uint64_t L_104 = V_10;
		uint64_t L_105 = V_8;
		uint64_t L_106 = V_9;
		uint64_t L_107 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_105>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))))));
		uint64_t L_108 = V_8;
		V_8 = ((int64_t)((int64_t)L_108&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_109 = V_11;
		uint64_t L_110 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, ((int64_t)((uint64_t)L_110>>((int32_t)32)))));
		uint64_t L_111 = V_10;
		V_10 = ((int64_t)((int64_t)L_111&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___0_x;
		int32_t L_113 = ___1_xOff;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 4));
		uint32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_12 = ((int64_t)(uint64_t)L_115);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___2_zz;
		int32_t L_117 = ___3_zzOff;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 7));
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_13 = ((int64_t)(uint64_t)L_119);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___2_zz;
		int32_t L_121 = ___3_zzOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 8));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_14 = ((int64_t)(uint64_t)L_123);
		uint64_t L_124 = V_8;
		uint64_t L_125 = V_12;
		uint64_t L_126 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, ((int64_t)il2cpp_codegen_multiply((int64_t)L_125, (int64_t)L_126))));
		uint64_t L_127 = V_8;
		V_3 = ((int32_t)(uint32_t)L_127);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___2_zz;
		int32_t L_129 = ___3_zzOff;
		uint32_t L_130 = V_3;
		uint32_t L_131 = V_2;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_129, 4))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_130<<1))|(int32_t)L_131)));
		uint32_t L_132 = V_3;
		V_2 = ((int32_t)((uint32_t)L_132>>((int32_t)31)));
		uint64_t L_133 = V_10;
		uint64_t L_134 = V_8;
		uint64_t L_135 = V_12;
		uint64_t L_136 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_133, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_134>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136))))));
		uint64_t L_137 = V_11;
		uint64_t L_138 = V_10;
		uint64_t L_139 = V_12;
		uint64_t L_140 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_137, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_138>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_139, (int64_t)L_140))))));
		uint64_t L_141 = V_10;
		V_10 = ((int64_t)((int64_t)L_141&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_142 = V_13;
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_12;
		uint64_t L_145 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_142, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_143>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_144, (int64_t)L_145))))));
		uint64_t L_146 = V_11;
		V_11 = ((int64_t)((int64_t)L_146&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_147 = V_14;
		uint64_t L_148 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)((uint64_t)L_148>>((int32_t)32)))));
		uint64_t L_149 = V_13;
		V_13 = ((int64_t)((int64_t)L_149&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = ___0_x;
		int32_t L_151 = ___1_xOff;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 5));
		uint32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_15 = ((int64_t)(uint64_t)L_153);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = ___2_zz;
		int32_t L_155 = ___3_zzOff;
		NullCheck(L_154);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_155, ((int32_t)9)));
		uint32_t L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		V_16 = ((int64_t)(uint64_t)L_157);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = ___2_zz;
		int32_t L_159 = ___3_zzOff;
		NullCheck(L_158);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(L_159, ((int32_t)10)));
		uint32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_17 = ((int64_t)(uint64_t)L_161);
		uint64_t L_162 = V_10;
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_162, ((int64_t)il2cpp_codegen_multiply((int64_t)L_163, (int64_t)L_164))));
		uint64_t L_165 = V_10;
		V_3 = ((int32_t)(uint32_t)L_165);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = ___2_zz;
		int32_t L_167 = ___3_zzOff;
		uint32_t L_168 = V_3;
		uint32_t L_169 = V_2;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_167, 5))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_168<<1))|(int32_t)L_169)));
		uint32_t L_170 = V_3;
		V_2 = ((int32_t)((uint32_t)L_170>>((int32_t)31)));
		uint64_t L_171 = V_11;
		uint64_t L_172 = V_10;
		uint64_t L_173 = V_15;
		uint64_t L_174 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_172>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_173, (int64_t)L_174))))));
		uint64_t L_175 = V_13;
		uint64_t L_176 = V_11;
		uint64_t L_177 = V_15;
		uint64_t L_178 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_176>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_177, (int64_t)L_178))))));
		uint64_t L_179 = V_11;
		V_11 = ((int64_t)((int64_t)L_179&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_180 = V_14;
		uint64_t L_181 = V_13;
		uint64_t L_182 = V_15;
		uint64_t L_183 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_181>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_182, (int64_t)L_183))))));
		uint64_t L_184 = V_13;
		V_13 = ((int64_t)((int64_t)L_184&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_185 = V_16;
		uint64_t L_186 = V_14;
		uint64_t L_187 = V_15;
		uint64_t L_188 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_186>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_187, (int64_t)L_188))))));
		uint64_t L_189 = V_14;
		V_14 = ((int64_t)((int64_t)L_189&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_190 = V_17;
		uint64_t L_191 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, ((int64_t)((uint64_t)L_191>>((int32_t)32)))));
		uint64_t L_192 = V_16;
		V_16 = ((int64_t)((int64_t)L_192&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = ___0_x;
		int32_t L_194 = ___1_xOff;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 6));
		uint32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		V_18 = ((int64_t)(uint64_t)L_196);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = ___2_zz;
		int32_t L_198 = ___3_zzOff;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, ((int32_t)11)));
		uint32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		V_19 = ((int64_t)(uint64_t)L_200);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_201 = ___2_zz;
		int32_t L_202 = ___3_zzOff;
		NullCheck(L_201);
		int32_t L_203 = ((int32_t)il2cpp_codegen_add(L_202, ((int32_t)12)));
		uint32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		V_20 = ((int64_t)(uint64_t)L_204);
		uint64_t L_205 = V_11;
		uint64_t L_206 = V_18;
		uint64_t L_207 = V_0;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, ((int64_t)il2cpp_codegen_multiply((int64_t)L_206, (int64_t)L_207))));
		uint64_t L_208 = V_11;
		V_3 = ((int32_t)(uint32_t)L_208);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ___2_zz;
		int32_t L_210 = ___3_zzOff;
		uint32_t L_211 = V_3;
		uint32_t L_212 = V_2;
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_210, 6))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_211<<1))|(int32_t)L_212)));
		uint32_t L_213 = V_3;
		V_2 = ((int32_t)((uint32_t)L_213>>((int32_t)31)));
		uint64_t L_214 = V_13;
		uint64_t L_215 = V_11;
		uint64_t L_216 = V_18;
		uint64_t L_217 = V_4;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_214, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_215>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_216, (int64_t)L_217))))));
		uint64_t L_218 = V_14;
		uint64_t L_219 = V_13;
		uint64_t L_220 = V_18;
		uint64_t L_221 = V_6;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_219>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_220, (int64_t)L_221))))));
		uint64_t L_222 = V_16;
		uint64_t L_223 = V_14;
		uint64_t L_224 = V_18;
		uint64_t L_225 = V_9;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_222, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_223>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_224, (int64_t)L_225))))));
		uint64_t L_226 = V_17;
		uint64_t L_227 = V_16;
		uint64_t L_228 = V_18;
		uint64_t L_229 = V_12;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_226, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_227>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_228, (int64_t)L_229))))));
		uint64_t L_230 = V_19;
		uint64_t L_231 = V_17;
		uint64_t L_232 = V_18;
		uint64_t L_233 = V_15;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_231>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_232, (int64_t)L_233))))));
		uint64_t L_234 = V_20;
		uint64_t L_235 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_234, ((int64_t)((uint64_t)L_235>>((int32_t)32)))));
		uint64_t L_236 = V_13;
		V_3 = ((int32_t)(uint32_t)L_236);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_237 = ___2_zz;
		int32_t L_238 = ___3_zzOff;
		uint32_t L_239 = V_3;
		uint32_t L_240 = V_2;
		NullCheck(L_237);
		(L_237)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_238, 7))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_239<<1))|(int32_t)L_240)));
		uint32_t L_241 = V_3;
		V_2 = ((int32_t)((uint32_t)L_241>>((int32_t)31)));
		uint64_t L_242 = V_14;
		V_3 = ((int32_t)(uint32_t)L_242);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_243 = ___2_zz;
		int32_t L_244 = ___3_zzOff;
		uint32_t L_245 = V_3;
		uint32_t L_246 = V_2;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_244, 8))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_245<<1))|(int32_t)L_246)));
		uint32_t L_247 = V_3;
		V_2 = ((int32_t)((uint32_t)L_247>>((int32_t)31)));
		uint64_t L_248 = V_16;
		V_3 = ((int32_t)(uint32_t)L_248);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_249 = ___2_zz;
		int32_t L_250 = ___3_zzOff;
		uint32_t L_251 = V_3;
		uint32_t L_252 = V_2;
		NullCheck(L_249);
		(L_249)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_250, ((int32_t)9)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_251<<1))|(int32_t)L_252)));
		uint32_t L_253 = V_3;
		V_2 = ((int32_t)((uint32_t)L_253>>((int32_t)31)));
		uint64_t L_254 = V_17;
		V_3 = ((int32_t)(uint32_t)L_254);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_255 = ___2_zz;
		int32_t L_256 = ___3_zzOff;
		uint32_t L_257 = V_3;
		uint32_t L_258 = V_2;
		NullCheck(L_255);
		(L_255)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_256, ((int32_t)10)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_257<<1))|(int32_t)L_258)));
		uint32_t L_259 = V_3;
		V_2 = ((int32_t)((uint32_t)L_259>>((int32_t)31)));
		uint64_t L_260 = V_19;
		V_3 = ((int32_t)(uint32_t)L_260);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_261 = ___2_zz;
		int32_t L_262 = ___3_zzOff;
		uint32_t L_263 = V_3;
		uint32_t L_264 = V_2;
		NullCheck(L_261);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_262, ((int32_t)11)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_263<<1))|(int32_t)L_264)));
		uint32_t L_265 = V_3;
		V_2 = ((int32_t)((uint32_t)L_265>>((int32_t)31)));
		uint64_t L_266 = V_20;
		V_3 = ((int32_t)(uint32_t)L_266);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_267 = ___2_zz;
		int32_t L_268 = ___3_zzOff;
		uint32_t L_269 = V_3;
		uint32_t L_270 = V_2;
		NullCheck(L_267);
		(L_267)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_268, ((int32_t)12)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_269<<1))|(int32_t)L_270)));
		uint32_t L_271 = V_3;
		V_2 = ((int32_t)((uint32_t)L_271>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_272 = ___2_zz;
		int32_t L_273 = ___3_zzOff;
		NullCheck(L_272);
		int32_t L_274 = ((int32_t)il2cpp_codegen_add(L_273, ((int32_t)13)));
		uint32_t L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		uint64_t L_276 = V_20;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_275, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_276>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = ___2_zz;
		int32_t L_278 = ___3_zzOff;
		uint32_t L_279 = V_3;
		uint32_t L_280 = V_2;
		NullCheck(L_277);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_278, ((int32_t)13)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_279<<1))|(int32_t)L_280)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_Sub_mD1C1A8A75EF04904E42AEE5B24FD81FF7AB1DE08 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		return ((int32_t)L_70);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_Sub_m7C7E3D4FCBA8ED391F6910FCF8BE69342C66F12A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_y;
		int32_t L_19 = ___3_yOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___4_z;
		int32_t L_23 = ___5_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		int32_t L_28 = ___1_xOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_y;
		int32_t L_32 = ___3_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_z;
		int32_t L_36 = ___5_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		int32_t L_41 = ___1_xOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_y;
		int32_t L_45 = ___3_yOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___4_z;
		int32_t L_49 = ___5_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		int32_t L_54 = ___1_xOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_y;
		int32_t L_58 = ___3_yOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___4_z;
		int32_t L_62 = ___5_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		int32_t L_67 = ___1_xOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_y;
		int32_t L_71 = ___3_yOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_z;
		int32_t L_75 = ___5_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 6));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_y;
		int32_t L_84 = ___3_yOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 6));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int64_t)il2cpp_codegen_add(L_78, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___4_z;
		int32_t L_88 = ___5_zOff;
		int64_t L_89 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 6))), (uint32_t)((int32_t)(uint32_t)L_89));
		int64_t L_90 = V_0;
		V_0 = ((int64_t)(L_90>>((int32_t)32)));
		int64_t L_91 = V_0;
		return ((int32_t)L_91);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_SubBothFrom_mA074B0D781FE7F2E1C978867CE972B79A2A1D3B7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_y;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_y;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___1_y;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_z;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_y;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___0_x;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___1_y;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_z;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___0_x;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_z;
		NullCheck(L_79);
		int32_t L_80 = 6;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___0_x;
		NullCheck(L_82);
		int32_t L_83 = 6;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___1_y;
		NullCheck(L_85);
		int32_t L_86 = 6;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add(L_78, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_81), ((int64_t)(uint64_t)L_84))), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		int64_t L_89 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_89));
		int64_t L_90 = V_0;
		V_0 = ((int64_t)(L_90>>((int32_t)32)));
		int64_t L_91 = V_0;
		return ((int32_t)L_91);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_SubFrom_mB0268EE05B521F8D7062BD3B16E6138E12342065 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___1_z;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___1_z;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___0_x;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___1_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		return ((int32_t)L_70);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat224_SubFrom_m05886CB99C5CDE9FC00D058F564AC39B99D91E8B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		int32_t L_2 = ___3_zOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		int32_t L_6 = ___1_xOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		int32_t L_19 = ___1_xOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		int32_t L_32 = ___1_xOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_z;
		int32_t L_36 = ___3_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_z;
		int32_t L_41 = ___3_zOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		int32_t L_45 = ___1_xOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_z;
		int32_t L_49 = ___3_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		int32_t L_54 = ___3_zOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_x;
		int32_t L_58 = ___1_xOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___2_z;
		int32_t L_62 = ___3_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_z;
		int32_t L_67 = ___3_zOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___0_x;
		int32_t L_71 = ___1_xOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___2_z;
		int32_t L_75 = ___3_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_z;
		int32_t L_80 = ___3_zOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 6));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___0_x;
		int32_t L_84 = ___1_xOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 6));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int64_t)il2cpp_codegen_add(L_78, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___2_z;
		int32_t L_88 = ___3_zOff;
		int64_t L_89 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 6))), (uint32_t)((int32_t)(uint32_t)L_89));
		int64_t L_90 = V_0;
		V_0 = ((int64_t)(L_90>>((int32_t)32)));
		int64_t L_91 = V_0;
		return ((int32_t)L_91);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat224_ToBigInteger_m47EA9F13B44118164ACC4459E13E9B5994B7A1C1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_mC1F3FE5842A7ACFDCFAD8C602F3C97B9A660D89D(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(6, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)7)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224_Zero_m304E88644DA8FFCFCD2B7230C0D288DCF142C452 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_z;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_z;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_z;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_z;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_z;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_z;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat224__ctor_m96870978E7A3A5D97E8A6BAAA0D0E9DCCAF15097 (Nat224_tCA71FC8C0DE76AC2EC8B2960EA6DF30F47875CAD* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_Add_m59BCDAA8439AE393594EE64381BF240FCC6668A2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		uint64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___0_x;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___1_y;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___2_z;
		uint64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		return ((int32_t)(uint32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_Add_m0ED4895FA5272DAD8449A154275AC3B67849D589 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_y;
		int32_t L_19 = ___3_yOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___4_z;
		int32_t L_23 = ___5_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		int32_t L_28 = ___1_xOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_y;
		int32_t L_32 = ___3_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_z;
		int32_t L_36 = ___5_zOff;
		uint64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		int32_t L_41 = ___1_xOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_y;
		int32_t L_45 = ___3_yOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___4_z;
		int32_t L_49 = ___5_zOff;
		uint64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		int32_t L_54 = ___1_xOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_y;
		int32_t L_58 = ___3_yOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___4_z;
		int32_t L_62 = ___5_zOff;
		uint64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		int32_t L_67 = ___1_xOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_y;
		int32_t L_71 = ___3_yOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_z;
		int32_t L_75 = ___5_zOff;
		uint64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 6));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_y;
		int32_t L_84 = ___3_yOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 6));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___4_z;
		int32_t L_88 = ___5_zOff;
		uint64_t L_89 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 6))), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_0;
		V_0 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___0_x;
		int32_t L_93 = ___1_xOff;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add(L_93, 7));
		uint32_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___2_y;
		int32_t L_97 = ___3_yOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 7));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_95), ((int64_t)(uint64_t)L_99)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___4_z;
		int32_t L_101 = ___5_zOff;
		uint64_t L_102 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_101, 7))), (uint32_t)((int32_t)(uint32_t)L_102));
		uint64_t L_103 = V_0;
		V_0 = ((int64_t)((uint64_t)L_103>>((int32_t)32)));
		uint64_t L_104 = V_0;
		return ((int32_t)(uint32_t)L_104);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddBothTo_m17ED0AE9AD89554000550BF78CF5145921A10D4B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		uint64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		uint64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_y;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		uint64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_0;
		V_0 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_y;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		uint64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		uint64_t L_51 = V_0;
		V_0 = ((int64_t)((uint64_t)L_51>>((int32_t)32)));
		uint64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_y;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_z;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_z;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		NullCheck(L_79);
		int32_t L_80 = 6;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___1_y;
		NullCheck(L_82);
		int32_t L_83 = 6;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_z;
		NullCheck(L_85);
		int32_t L_86 = 6;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_81), ((int64_t)(uint64_t)L_84))), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		uint64_t L_89 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_89));
		uint64_t L_90 = V_0;
		V_0 = ((int64_t)((uint64_t)L_90>>((int32_t)32)));
		uint64_t L_91 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___0_x;
		NullCheck(L_92);
		int32_t L_93 = 7;
		uint32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___1_y;
		NullCheck(L_95);
		int32_t L_96 = 7;
		uint32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___2_z;
		NullCheck(L_98);
		int32_t L_99 = 7;
		uint32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_94), ((int64_t)(uint64_t)L_97))), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_z;
		uint64_t L_102 = V_0;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_102));
		uint64_t L_103 = V_0;
		V_0 = ((int64_t)((uint64_t)L_103>>((int32_t)32)));
		uint64_t L_104 = V_0;
		return ((int32_t)(uint32_t)L_104);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddBothTo_m71A0AA13B2CA138223D767018F5E794E79D9A5D5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8))), ((int64_t)(uint64_t)L_12)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___4_z;
		int32_t L_14 = ___5_zOff;
		uint64_t L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)(uint32_t)L_15));
		uint64_t L_16 = V_0;
		V_0 = ((int64_t)((uint64_t)L_16>>((int32_t)32)));
		uint64_t L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		int32_t L_19 = ___1_xOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_y;
		int32_t L_23 = ___3_yOff;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		uint32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___4_z;
		int32_t L_27 = ___5_zOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_17, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_21), ((int64_t)(uint64_t)L_25))), ((int64_t)(uint64_t)L_29)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___4_z;
		int32_t L_31 = ___5_zOff;
		uint64_t L_32 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, 1))), (uint32_t)((int32_t)(uint32_t)L_32));
		uint64_t L_33 = V_0;
		V_0 = ((int64_t)((uint64_t)L_33>>((int32_t)32)));
		uint64_t L_34 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___0_x;
		int32_t L_36 = ___1_xOff;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 2));
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___2_y;
		int32_t L_40 = ___3_yOff;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_40, 2));
		uint32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___4_z;
		int32_t L_44 = ___5_zOff;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 2));
		uint32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_34, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_38), ((int64_t)(uint64_t)L_42))), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___4_z;
		int32_t L_48 = ___5_zOff;
		uint64_t L_49 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 2))), (uint32_t)((int32_t)(uint32_t)L_49));
		uint64_t L_50 = V_0;
		V_0 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint64_t L_51 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___0_x;
		int32_t L_53 = ___1_xOff;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_add(L_53, 3));
		uint32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___2_y;
		int32_t L_57 = ___3_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___4_z;
		int32_t L_61 = ___5_zOff;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(L_61, 3));
		uint32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_59))), ((int64_t)(uint64_t)L_63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___4_z;
		int32_t L_65 = ___5_zOff;
		uint64_t L_66 = V_0;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_65, 3))), (uint32_t)((int32_t)(uint32_t)L_66));
		uint64_t L_67 = V_0;
		V_0 = ((int64_t)((uint64_t)L_67>>((int32_t)32)));
		uint64_t L_68 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___0_x;
		int32_t L_70 = ___1_xOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___2_y;
		int32_t L_74 = ___3_yOff;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 4));
		uint32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___4_z;
		int32_t L_78 = ___5_zOff;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 4));
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_72), ((int64_t)(uint64_t)L_76))), ((int64_t)(uint64_t)L_80)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___4_z;
		int32_t L_82 = ___5_zOff;
		uint64_t L_83 = V_0;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 4))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_0;
		V_0 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___0_x;
		int32_t L_87 = ___1_xOff;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 5));
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_y;
		int32_t L_91 = ___3_yOff;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 5));
		uint32_t L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = ___4_z;
		int32_t L_95 = ___5_zOff;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 5));
		uint32_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_89), ((int64_t)(uint64_t)L_93))), ((int64_t)(uint64_t)L_97)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___4_z;
		int32_t L_99 = ___5_zOff;
		uint64_t L_100 = V_0;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_99, 5))), (uint32_t)((int32_t)(uint32_t)L_100));
		uint64_t L_101 = V_0;
		V_0 = ((int64_t)((uint64_t)L_101>>((int32_t)32)));
		uint64_t L_102 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___0_x;
		int32_t L_104 = ___1_xOff;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add(L_104, 6));
		uint32_t L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_107 = ___2_y;
		int32_t L_108 = ___3_yOff;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_add(L_108, 6));
		uint32_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = ___4_z;
		int32_t L_112 = ___5_zOff;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_add(L_112, 6));
		uint32_t L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_102, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_106), ((int64_t)(uint64_t)L_110))), ((int64_t)(uint64_t)L_114)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___4_z;
		int32_t L_116 = ___5_zOff;
		uint64_t L_117 = V_0;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_116, 6))), (uint32_t)((int32_t)(uint32_t)L_117));
		uint64_t L_118 = V_0;
		V_0 = ((int64_t)((uint64_t)L_118>>((int32_t)32)));
		uint64_t L_119 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___0_x;
		int32_t L_121 = ___1_xOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 7));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ___2_y;
		int32_t L_125 = ___3_yOff;
		NullCheck(L_124);
		int32_t L_126 = ((int32_t)il2cpp_codegen_add(L_125, 7));
		uint32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___4_z;
		int32_t L_129 = ___5_zOff;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 7));
		uint32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_123), ((int64_t)(uint64_t)L_127))), ((int64_t)(uint64_t)L_131)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = ___4_z;
		int32_t L_133 = ___5_zOff;
		uint64_t L_134 = V_0;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_133, 7))), (uint32_t)((int32_t)(uint32_t)L_134));
		uint64_t L_135 = V_0;
		V_0 = ((int64_t)((uint64_t)L_135>>((int32_t)32)));
		uint64_t L_136 = V_0;
		return ((int32_t)(uint32_t)L_136);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddTo_m17D7D3D79065F01C292ECD78ADF7322BE1612064 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		uint64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		uint64_t L_9 = V_0;
		V_0 = ((int64_t)((uint64_t)L_9>>((int32_t)32)));
		uint64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		uint64_t L_19 = V_0;
		V_0 = ((int64_t)((uint64_t)L_19>>((int32_t)32)));
		uint64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_z;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		uint64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		uint64_t L_29 = V_0;
		V_0 = ((int64_t)((uint64_t)L_29>>((int32_t)32)));
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_z;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		uint64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_z;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		uint64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_0;
		V_0 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_z;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		uint64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		uint64_t L_59 = V_0;
		V_0 = ((int64_t)((uint64_t)L_59>>((int32_t)32)));
		uint64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_z;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___1_z;
		uint64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_0;
		V_0 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___0_x;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___1_z;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___1_z;
		uint64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		return ((int32_t)(uint32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddTo_mE25983E2F2B488AA6213A334054EB185BE2B9897 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, uint32_t ___4_cIn, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint32_t L_0 = ___4_cIn;
		V_0 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = ___1_xOff;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_5), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int32_t L_11 = ___3_zOff;
		uint64_t L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(uint32_t)L_12));
		uint64_t L_13 = V_0;
		V_0 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		uint32_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_18), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		uint64_t L_25 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 1))), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_0;
		V_0 = ((int64_t)((uint64_t)L_26>>((int32_t)32)));
		uint64_t L_27 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___0_x;
		int32_t L_29 = ___1_xOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_31), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int32_t L_37 = ___3_zOff;
		uint64_t L_38 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 2))), (uint32_t)((int32_t)(uint32_t)L_38));
		uint64_t L_39 = V_0;
		V_0 = ((int64_t)((uint64_t)L_39>>((int32_t)32)));
		uint64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		int32_t L_42 = ___1_xOff;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 3));
		uint32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___2_z;
		int32_t L_46 = ___3_zOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_44), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int32_t L_50 = ___3_zOff;
		uint64_t L_51 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_50, 3))), (uint32_t)((int32_t)(uint32_t)L_51));
		uint64_t L_52 = V_0;
		V_0 = ((int64_t)((uint64_t)L_52>>((int32_t)32)));
		uint64_t L_53 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		int32_t L_55 = ___1_xOff;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_55, 4));
		uint32_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		int32_t L_59 = ___3_zOff;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_add(L_59, 4));
		uint32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_53, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_57), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int32_t L_63 = ___3_zOff;
		uint64_t L_64 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, 4))), (uint32_t)((int32_t)(uint32_t)L_64));
		uint64_t L_65 = V_0;
		V_0 = ((int64_t)((uint64_t)L_65>>((int32_t)32)));
		uint64_t L_66 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		int32_t L_68 = ___1_xOff;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_add(L_68, 5));
		uint32_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___2_z;
		int32_t L_72 = ___3_zOff;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_add(L_72, 5));
		uint32_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_70), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int32_t L_76 = ___3_zOff;
		uint64_t L_77 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_76, 5))), (uint32_t)((int32_t)(uint32_t)L_77));
		uint64_t L_78 = V_0;
		V_0 = ((int64_t)((uint64_t)L_78>>((int32_t)32)));
		uint64_t L_79 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___0_x;
		int32_t L_81 = ___1_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 6));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_z;
		int32_t L_85 = ___3_zOff;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 6));
		uint32_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_83), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		int32_t L_89 = ___3_zOff;
		uint64_t L_90 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 6))), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_0;
		V_0 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		uint64_t L_92 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___0_x;
		int32_t L_94 = ___1_xOff;
		NullCheck(L_93);
		int32_t L_95 = ((int32_t)il2cpp_codegen_add(L_94, 7));
		uint32_t L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___2_z;
		int32_t L_98 = ___3_zOff;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 7));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_96), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_z;
		int32_t L_102 = ___3_zOff;
		uint64_t L_103 = V_0;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_102, 7))), (uint32_t)((int32_t)(uint32_t)L_103));
		uint64_t L_104 = V_0;
		V_0 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		uint64_t L_105 = V_0;
		return ((int32_t)(uint32_t)L_105);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_AddToEachOther_mA38806D9CC6A65BA94639BA4034BD2E370AF58B3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, int32_t ___1_uOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_v, int32_t ___3_vOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		uint64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_u;
		int32_t L_2 = ___1_uOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_v;
		int32_t L_6 = ___3_vOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_u;
		int32_t L_10 = ___1_uOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_v;
		int32_t L_13 = ___3_vOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		uint64_t L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_u;
		int32_t L_18 = ___1_uOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_v;
		int32_t L_22 = ___3_vOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_20), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_u;
		int32_t L_26 = ___1_uOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_v;
		int32_t L_29 = ___3_vOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_u;
		int32_t L_34 = ___1_uOff;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_34, 2));
		uint32_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_v;
		int32_t L_38 = ___3_vOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 2));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_36), ((int64_t)(uint64_t)L_40)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_u;
		int32_t L_42 = ___1_uOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 2))), (uint32_t)((int32_t)(uint32_t)L_43));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_v;
		int32_t L_45 = ___3_vOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___0_u;
		int32_t L_50 = ___1_uOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_v;
		int32_t L_54 = ___3_vOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 3));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_52), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_u;
		int32_t L_58 = ___1_uOff;
		uint64_t L_59 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 3))), (uint32_t)((int32_t)(uint32_t)L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___2_v;
		int32_t L_61 = ___3_vOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		uint64_t L_64 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ___0_u;
		int32_t L_66 = ___1_uOff;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 4));
		uint32_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_v;
		int32_t L_70 = ___3_vOff;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 4));
		uint32_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___0_u;
		int32_t L_74 = ___1_uOff;
		uint64_t L_75 = V_0;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 4))), (uint32_t)((int32_t)(uint32_t)L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___2_v;
		int32_t L_77 = ___3_vOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		uint64_t L_80 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___0_u;
		int32_t L_82 = ___1_uOff;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)il2cpp_codegen_add(L_82, 5));
		uint32_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___2_v;
		int32_t L_86 = ___3_vOff;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		uint32_t L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_84), ((int64_t)(uint64_t)L_88)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = ___0_u;
		int32_t L_90 = ___1_uOff;
		uint64_t L_91 = V_0;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_90, 5))), (uint32_t)((int32_t)(uint32_t)L_91));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_v;
		int32_t L_93 = ___3_vOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		uint64_t L_96 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___0_u;
		int32_t L_98 = ___1_uOff;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 6));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_v;
		int32_t L_102 = ___3_vOff;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_add(L_102, 6));
		uint32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_100), ((int64_t)(uint64_t)L_104)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ___0_u;
		int32_t L_106 = ___1_uOff;
		uint64_t L_107 = V_0;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_106, 6))), (uint32_t)((int32_t)(uint32_t)L_107));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_v;
		int32_t L_109 = ___3_vOff;
		uint64_t L_110 = V_0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 6))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = ___0_u;
		int32_t L_114 = ___1_uOff;
		NullCheck(L_113);
		int32_t L_115 = ((int32_t)il2cpp_codegen_add(L_114, 7));
		uint32_t L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___2_v;
		int32_t L_118 = ___3_vOff;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_118, 7));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)L_116), ((int64_t)(uint64_t)L_120)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___0_u;
		int32_t L_122 = ___1_uOff;
		uint64_t L_123 = V_0;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_122, 7))), (uint32_t)((int32_t)(uint32_t)L_123));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ___2_v;
		int32_t L_125 = ___3_vOff;
		uint64_t L_126 = V_0;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_125, 7))), (uint32_t)((int32_t)(uint32_t)L_126));
		uint64_t L_127 = V_0;
		V_0 = ((int64_t)((uint64_t)L_127>>((int32_t)32)));
		uint64_t L_128 = V_0;
		return ((int32_t)(uint32_t)L_128);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Copy_m1D709FAF6021425347A4A5E83B37558A144B8553 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___0_x;
		NullCheck(L_25);
		int32_t L_26 = 6;
		uint32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___0_x;
		NullCheck(L_29);
		int32_t L_30 = 7;
		uint32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_31);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Copy64_m658DAC37ED586B5D72CE3E1762C44008038D4789 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_Create_m0DFB535CD022569F3CF22B6EC150A7A4B776E729 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat256_Create64_m0119E045DB36841B47FE6BC11ABB0F98ACD41E92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_CreateExt_m1034567363D97AC4EB8D492359DE3A052FE00355 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat256_CreateExt64_m80AA4DCCA00D81F424513E92675FB135658A2F7A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Diff_mD41866D14BE486F806BA070720AA6BB733329539 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_y;
		int32_t L_3 = ___3_yOff;
		bool L_4;
		L_4 = Nat256_Gte_m56204CBB05EBEAA6819142A16D6416C27C08FF59(L_0, L_1, L_2, L_3, NULL);
		bool L_5 = L_4;
		if (!L_5)
		{
			G_B2_0 = L_5;
			goto IL_001b;
		}
		G_B1_0 = L_5;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___4_z;
		int32_t L_11 = ___5_zOff;
		int32_t L_12;
		L_12 = Nat256_Sub_m12C4A91AE6406A9C6CA3B3B6929CEA487110DFA2(L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return G_B1_0;
	}

IL_001b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___2_y;
		int32_t L_14 = ___3_yOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___4_z;
		int32_t L_18 = ___5_zOff;
		int32_t L_19;
		L_19 = Nat256_Sub_m12C4A91AE6406A9C6CA3B3B6929CEA487110DFA2(L_13, L_14, L_15, L_16, L_17, L_18, NULL);
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Eq_mC806BE17D5A22583A1D90BB8CAAE79131275CD6A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 7;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int32_t)L_3) == ((int32_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Eq64_mBF6838F6214C167C40A1F95B3AC2CDBDF74FD6E8 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 3;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Nat256_FromBigInteger_m2CED984C5FEC823D7D3957ADD47ABB79A6E59A88 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)256))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat256_FromBigInteger_m2CED984C5FEC823D7D3957ADD47ABB79A6E59A88_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = Nat256_Create_m0DFB535CD022569F3CF22B6EC150A7A4B776E729(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = BigInteger_get_IntValue_m05584D6A7C77090AAFD614D41AC11F04F0C65E74(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)32), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat256_FromBigInteger64_m5137EEEB82A1788879C4784703BC37C07E7B33BA (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)256))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat256_FromBigInteger64_m5137EEEB82A1788879C4784703BC37C07E7B33BA_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5;
		L_5 = Nat256_Create64_m0119E045DB36841B47FE6BC11ABB0F98ACD41E92(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = BigInteger_get_LongValue_mBA593F51D50A9E6DC7BAF26D224F29DC651605D6(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)64), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_GetBit_mABBB4276A7A14241FE44FAEE59EC54C3E274C513 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_bit, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_bit;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((int32_t)((int32_t)L_3&1));
	}

IL_0009:
	{
		int32_t L_4 = ___1_bit;
		int32_t L_5 = ___1_bit;
		if ((((int32_t)((int32_t)(L_4&((int32_t)255)))) == ((int32_t)L_5)))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		int32_t L_6 = ___1_bit;
		V_0 = ((int32_t)(L_6>>5));
		int32_t L_7 = ___1_bit;
		V_1 = ((int32_t)(L_7&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)(L_12&((int32_t)31)))))&1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_m25F3B23780788471619E10AFE8147C8401A61A3D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 7;
		goto IL_001c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) > ((uint32_t)L_11))))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_001c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_m56204CBB05EBEAA6819142A16D6416C27C08FF59 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = 7;
		goto IL_0020;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		uint32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint32_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		uint32_t L_10 = V_1;
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_10) < ((uint32_t)L_11))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		uint32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		if ((!(((uint32_t)L_12) > ((uint32_t)L_13))))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)1;
	}

IL_001c:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0020:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsOne_m7638063A9B2E4494F713E3261CC670FE86F801D7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		V_0 = 1;
		goto IL_0017;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0017:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsOne64_mA757755B61544F003DFED80C8619F07FA6C416A8 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsZero_mC7BA1D2C1C7DD376A622A03E4845EAD49C5899F2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_IsZero64_mF7C705D1DD4D73F8C808A00C5A70D835A90E8099 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_m7B05CD2F2310C0EEFF81BD401AF0DA668D891ED3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_y;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = ((int64_t)(uint64_t)L_23);
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 0;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_9 = ((int64_t)(uint64_t)L_26);
		uint64_t L_27 = V_8;
		uint64_t L_28 = V_9;
		uint64_t L_29 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)il2cpp_codegen_multiply((int64_t)L_28, (int64_t)L_29))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_zz;
		uint64_t L_31 = V_8;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_8;
		V_8 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_8;
		uint64_t L_34 = V_9;
		uint64_t L_35 = V_1;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		uint64_t L_37 = V_8;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_8;
		V_8 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_8;
		uint64_t L_40 = V_9;
		uint64_t L_41 = V_2;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)L_41))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_zz;
		uint64_t L_43 = V_8;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_8;
		V_8 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_8;
		uint64_t L_46 = V_9;
		uint64_t L_47 = V_3;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_multiply((int64_t)L_46, (int64_t)L_47))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_zz;
		uint64_t L_49 = V_8;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_49));
		uint64_t L_50 = V_8;
		V_8 = ((int64_t)((uint64_t)L_50>>((int32_t)32)));
		uint64_t L_51 = V_8;
		uint64_t L_52 = V_9;
		uint64_t L_53 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)il2cpp_codegen_multiply((int64_t)L_52, (int64_t)L_53))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___2_zz;
		uint64_t L_55 = V_8;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_8;
		V_8 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_8;
		uint64_t L_58 = V_9;
		uint64_t L_59 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_multiply((int64_t)L_58, (int64_t)L_59))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___2_zz;
		uint64_t L_61 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_61));
		uint64_t L_62 = V_8;
		V_8 = ((int64_t)((uint64_t)L_62>>((int32_t)32)));
		uint64_t L_63 = V_8;
		uint64_t L_64 = V_9;
		uint64_t L_65 = V_6;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_zz;
		uint64_t L_67 = V_8;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_67));
		uint64_t L_68 = V_8;
		V_8 = ((int64_t)((uint64_t)L_68>>((int32_t)32)));
		uint64_t L_69 = V_8;
		uint64_t L_70 = V_9;
		uint64_t L_71 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_69, ((int64_t)il2cpp_codegen_multiply((int64_t)L_70, (int64_t)L_71))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_zz;
		uint64_t L_73 = V_8;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_73));
		uint64_t L_74 = V_8;
		V_8 = ((int64_t)((uint64_t)L_74>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_zz;
		uint64_t L_76 = V_8;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(uint32_t)L_76));
		V_10 = 1;
		goto IL_021a;
	}

IL_00f8:
	{
		V_11 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___0_x;
		int32_t L_78 = V_10;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_12 = ((int64_t)(uint64_t)L_80);
		uint64_t L_81 = V_11;
		uint64_t L_82 = V_12;
		uint64_t L_83 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_zz;
		int32_t L_85 = V_10;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		uint32_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_81, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_zz;
		int32_t L_89 = V_10;
		uint64_t L_90 = V_11;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_11;
		V_11 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		uint64_t L_92 = V_11;
		uint64_t L_93 = V_12;
		uint64_t L_94 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___2_zz;
		int32_t L_96 = V_10;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_93, (int64_t)L_94)), ((int64_t)(uint64_t)L_98)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___2_zz;
		int32_t L_100 = V_10;
		uint64_t L_101 = V_11;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_100, 1))), (uint32_t)((int32_t)(uint32_t)L_101));
		uint64_t L_102 = V_11;
		V_11 = ((int64_t)((uint64_t)L_102>>((int32_t)32)));
		uint64_t L_103 = V_11;
		uint64_t L_104 = V_12;
		uint64_t L_105 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ___2_zz;
		int32_t L_107 = V_10;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_107, 2));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_104, (int64_t)L_105)), ((int64_t)(uint64_t)L_109)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ___2_zz;
		int32_t L_111 = V_10;
		uint64_t L_112 = V_11;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_111, 2))), (uint32_t)((int32_t)(uint32_t)L_112));
		uint64_t L_113 = V_11;
		V_11 = ((int64_t)((uint64_t)L_113>>((int32_t)32)));
		uint64_t L_114 = V_11;
		uint64_t L_115 = V_12;
		uint64_t L_116 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___2_zz;
		int32_t L_118 = V_10;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_118, 3));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_115, (int64_t)L_116)), ((int64_t)(uint64_t)L_120)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___2_zz;
		int32_t L_122 = V_10;
		uint64_t L_123 = V_11;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_122, 3))), (uint32_t)((int32_t)(uint32_t)L_123));
		uint64_t L_124 = V_11;
		V_11 = ((int64_t)((uint64_t)L_124>>((int32_t)32)));
		uint64_t L_125 = V_11;
		uint64_t L_126 = V_12;
		uint64_t L_127 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___2_zz;
		int32_t L_129 = V_10;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 4));
		uint32_t L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_126, (int64_t)L_127)), ((int64_t)(uint64_t)L_131)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = ___2_zz;
		int32_t L_133 = V_10;
		uint64_t L_134 = V_11;
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_133, 4))), (uint32_t)((int32_t)(uint32_t)L_134));
		uint64_t L_135 = V_11;
		V_11 = ((int64_t)((uint64_t)L_135>>((int32_t)32)));
		uint64_t L_136 = V_11;
		uint64_t L_137 = V_12;
		uint64_t L_138 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = ___2_zz;
		int32_t L_140 = V_10;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, 5));
		uint32_t L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_136, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_137, (int64_t)L_138)), ((int64_t)(uint64_t)L_142)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___2_zz;
		int32_t L_144 = V_10;
		uint64_t L_145 = V_11;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_144, 5))), (uint32_t)((int32_t)(uint32_t)L_145));
		uint64_t L_146 = V_11;
		V_11 = ((int64_t)((uint64_t)L_146>>((int32_t)32)));
		uint64_t L_147 = V_11;
		uint64_t L_148 = V_12;
		uint64_t L_149 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = ___2_zz;
		int32_t L_151 = V_10;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 6));
		uint32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_148, (int64_t)L_149)), ((int64_t)(uint64_t)L_153)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = ___2_zz;
		int32_t L_155 = V_10;
		uint64_t L_156 = V_11;
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_155, 6))), (uint32_t)((int32_t)(uint32_t)L_156));
		uint64_t L_157 = V_11;
		V_11 = ((int64_t)((uint64_t)L_157>>((int32_t)32)));
		uint64_t L_158 = V_11;
		uint64_t L_159 = V_12;
		uint64_t L_160 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_161 = ___2_zz;
		int32_t L_162 = V_10;
		NullCheck(L_161);
		int32_t L_163 = ((int32_t)il2cpp_codegen_add(L_162, 7));
		uint32_t L_164 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_163));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_159, (int64_t)L_160)), ((int64_t)(uint64_t)L_164)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_165 = ___2_zz;
		int32_t L_166 = V_10;
		uint64_t L_167 = V_11;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_166, 7))), (uint32_t)((int32_t)(uint32_t)L_167));
		uint64_t L_168 = V_11;
		V_11 = ((int64_t)((uint64_t)L_168>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = ___2_zz;
		int32_t L_170 = V_10;
		uint64_t L_171 = V_11;
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_170, 8))), (uint32_t)((int32_t)(uint32_t)L_171));
		int32_t L_172 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_172, 1));
	}

IL_021a:
	{
		int32_t L_173 = V_10;
		if ((((int32_t)L_173) < ((int32_t)8)))
		{
			goto IL_00f8;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Mul_mCA7DA36B48072C2269E7AE54CE7040B9CEDBB93D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	int32_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_y;
		int32_t L_25 = ___3_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = ((int64_t)(uint64_t)L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_y;
		int32_t L_29 = ___3_yOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_7 = ((int64_t)(uint64_t)L_31);
		V_8 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_9 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_8;
		uint64_t L_37 = V_9;
		uint64_t L_38 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___4_zz;
		int32_t L_40 = ___5_zzOff;
		uint64_t L_41 = V_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (uint32_t)((int32_t)(uint32_t)L_41));
		uint64_t L_42 = V_8;
		V_8 = ((int64_t)((uint64_t)L_42>>((int32_t)32)));
		uint64_t L_43 = V_8;
		uint64_t L_44 = V_9;
		uint64_t L_45 = V_1;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, ((int64_t)il2cpp_codegen_multiply((int64_t)L_44, (int64_t)L_45))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___4_zz;
		int32_t L_47 = ___5_zzOff;
		uint64_t L_48 = V_8;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 1))), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_8;
		V_8 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_8;
		uint64_t L_51 = V_9;
		uint64_t L_52 = V_2;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_multiply((int64_t)L_51, (int64_t)L_52))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___4_zz;
		int32_t L_54 = ___5_zzOff;
		uint64_t L_55 = V_8;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, 2))), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_8;
		V_8 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_8;
		uint64_t L_58 = V_9;
		uint64_t L_59 = V_3;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_multiply((int64_t)L_58, (int64_t)L_59))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___4_zz;
		int32_t L_61 = ___5_zzOff;
		uint64_t L_62 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_8;
		V_8 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_9;
		uint64_t L_66 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_multiply((int64_t)L_65, (int64_t)L_66))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___4_zz;
		int32_t L_68 = ___5_zzOff;
		uint64_t L_69 = V_8;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 4))), (uint32_t)((int32_t)(uint32_t)L_69));
		uint64_t L_70 = V_8;
		V_8 = ((int64_t)((uint64_t)L_70>>((int32_t)32)));
		uint64_t L_71 = V_8;
		uint64_t L_72 = V_9;
		uint64_t L_73 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)il2cpp_codegen_multiply((int64_t)L_72, (int64_t)L_73))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_zz;
		int32_t L_75 = ___5_zzOff;
		uint64_t L_76 = V_8;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_8;
		V_8 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_8;
		uint64_t L_79 = V_9;
		uint64_t L_80 = V_6;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_multiply((int64_t)L_79, (int64_t)L_80))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___4_zz;
		int32_t L_82 = ___5_zzOff;
		uint64_t L_83 = V_8;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 6))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_8;
		V_8 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_8;
		uint64_t L_86 = V_9;
		uint64_t L_87 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, (int64_t)L_87))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___4_zz;
		int32_t L_89 = ___5_zzOff;
		uint64_t L_90 = V_8;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 7))), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_8;
		V_8 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___4_zz;
		int32_t L_93 = ___5_zzOff;
		uint64_t L_94 = V_8;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 8))), (uint32_t)((int32_t)(uint32_t)L_94));
		V_10 = 1;
		goto IL_0263;
	}

IL_0128:
	{
		int32_t L_95 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_95, 1));
		V_11 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___0_x;
		int32_t L_97 = ___1_xOff;
		int32_t L_98 = V_10;
		NullCheck(L_96);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_97, L_98));
		uint32_t L_100 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_12 = ((int64_t)(uint64_t)L_100);
		uint64_t L_101 = V_11;
		uint64_t L_102 = V_12;
		uint64_t L_103 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___4_zz;
		int32_t L_105 = ___5_zzOff;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___4_zz;
		int32_t L_109 = ___5_zzOff;
		uint64_t L_110 = V_11;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_11;
		V_11 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		uint64_t L_112 = V_11;
		uint64_t L_113 = V_12;
		uint64_t L_114 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___4_zz;
		int32_t L_116 = ___5_zzOff;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		uint32_t L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_113, (int64_t)L_114)), ((int64_t)(uint64_t)L_118)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___4_zz;
		int32_t L_120 = ___5_zzOff;
		uint64_t L_121 = V_11;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_120, 1))), (uint32_t)((int32_t)(uint32_t)L_121));
		uint64_t L_122 = V_11;
		V_11 = ((int64_t)((uint64_t)L_122>>((int32_t)32)));
		uint64_t L_123 = V_11;
		uint64_t L_124 = V_12;
		uint64_t L_125 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_126 = ___4_zz;
		int32_t L_127 = ___5_zzOff;
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_add(L_127, 2));
		uint32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_123, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125)), ((int64_t)(uint64_t)L_129)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___4_zz;
		int32_t L_131 = ___5_zzOff;
		uint64_t L_132 = V_11;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_131, 2))), (uint32_t)((int32_t)(uint32_t)L_132));
		uint64_t L_133 = V_11;
		V_11 = ((int64_t)((uint64_t)L_133>>((int32_t)32)));
		uint64_t L_134 = V_11;
		uint64_t L_135 = V_12;
		uint64_t L_136 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___4_zz;
		int32_t L_138 = ___5_zzOff;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 3));
		uint32_t L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136)), ((int64_t)(uint64_t)L_140)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___4_zz;
		int32_t L_142 = ___5_zzOff;
		uint64_t L_143 = V_11;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_142, 3))), (uint32_t)((int32_t)(uint32_t)L_143));
		uint64_t L_144 = V_11;
		V_11 = ((int64_t)((uint64_t)L_144>>((int32_t)32)));
		uint64_t L_145 = V_11;
		uint64_t L_146 = V_12;
		uint64_t L_147 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_148 = ___4_zz;
		int32_t L_149 = ___5_zzOff;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, 4));
		uint32_t L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_146, (int64_t)L_147)), ((int64_t)(uint64_t)L_151)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = ___4_zz;
		int32_t L_153 = ___5_zzOff;
		uint64_t L_154 = V_11;
		NullCheck(L_152);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_153, 4))), (uint32_t)((int32_t)(uint32_t)L_154));
		uint64_t L_155 = V_11;
		V_11 = ((int64_t)((uint64_t)L_155>>((int32_t)32)));
		uint64_t L_156 = V_11;
		uint64_t L_157 = V_12;
		uint64_t L_158 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_159 = ___4_zz;
		int32_t L_160 = ___5_zzOff;
		NullCheck(L_159);
		int32_t L_161 = ((int32_t)il2cpp_codegen_add(L_160, 5));
		uint32_t L_162 = (L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_156, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_157, (int64_t)L_158)), ((int64_t)(uint64_t)L_162)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_163 = ___4_zz;
		int32_t L_164 = ___5_zzOff;
		uint64_t L_165 = V_11;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_164, 5))), (uint32_t)((int32_t)(uint32_t)L_165));
		uint64_t L_166 = V_11;
		V_11 = ((int64_t)((uint64_t)L_166>>((int32_t)32)));
		uint64_t L_167 = V_11;
		uint64_t L_168 = V_12;
		uint64_t L_169 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_170 = ___4_zz;
		int32_t L_171 = ___5_zzOff;
		NullCheck(L_170);
		int32_t L_172 = ((int32_t)il2cpp_codegen_add(L_171, 6));
		uint32_t L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_167, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_168, (int64_t)L_169)), ((int64_t)(uint64_t)L_173)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_174 = ___4_zz;
		int32_t L_175 = ___5_zzOff;
		uint64_t L_176 = V_11;
		NullCheck(L_174);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_175, 6))), (uint32_t)((int32_t)(uint32_t)L_176));
		uint64_t L_177 = V_11;
		V_11 = ((int64_t)((uint64_t)L_177>>((int32_t)32)));
		uint64_t L_178 = V_11;
		uint64_t L_179 = V_12;
		uint64_t L_180 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = ___4_zz;
		int32_t L_182 = ___5_zzOff;
		NullCheck(L_181);
		int32_t L_183 = ((int32_t)il2cpp_codegen_add(L_182, 7));
		uint32_t L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_179, (int64_t)L_180)), ((int64_t)(uint64_t)L_184)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ___4_zz;
		int32_t L_186 = ___5_zzOff;
		uint64_t L_187 = V_11;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_186, 7))), (uint32_t)((int32_t)(uint32_t)L_187));
		uint64_t L_188 = V_11;
		V_11 = ((int64_t)((uint64_t)L_188>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = ___4_zz;
		int32_t L_190 = ___5_zzOff;
		uint64_t L_191 = V_11;
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_190, 8))), (uint32_t)((int32_t)(uint32_t)L_191));
		int32_t L_192 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_192, 1));
	}

IL_0263:
	{
		int32_t L_193 = V_10;
		if ((((int32_t)L_193) < ((int32_t)8)))
		{
			goto IL_0128;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulAddTo_m18D720E1656CF001460BEEF70C227C02439EE9BD (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___1_y;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int64_t)(uint64_t)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = ((int64_t)(uint64_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = ((int64_t)(uint64_t)L_14);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = ((int64_t)(uint64_t)L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = ((int64_t)(uint64_t)L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_y;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = ((int64_t)(uint64_t)L_23);
		V_8 = ((int64_t)0);
		V_9 = 0;
		goto IL_0170;
	}

IL_0038:
	{
		V_10 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		int32_t L_25 = V_9;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_11 = ((int64_t)(uint64_t)L_27);
		uint64_t L_28 = V_10;
		uint64_t L_29 = V_11;
		uint64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_zz;
		int32_t L_32 = V_9;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_28, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_29, (int64_t)L_30)), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_zz;
		int32_t L_36 = V_9;
		uint64_t L_37 = V_10;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (uint32_t)((int32_t)(uint32_t)L_37));
		uint64_t L_38 = V_10;
		V_10 = ((int64_t)((uint64_t)L_38>>((int32_t)32)));
		uint64_t L_39 = V_10;
		uint64_t L_40 = V_11;
		uint64_t L_41 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_zz;
		int32_t L_43 = V_9;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		uint32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_39, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_40, (int64_t)L_41)), ((int64_t)(uint64_t)L_45)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_zz;
		int32_t L_47 = V_9;
		uint64_t L_48 = V_10;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, 1))), (uint32_t)((int32_t)(uint32_t)L_48));
		uint64_t L_49 = V_10;
		V_10 = ((int64_t)((uint64_t)L_49>>((int32_t)32)));
		uint64_t L_50 = V_10;
		uint64_t L_51 = V_11;
		uint64_t L_52 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_zz;
		int32_t L_54 = V_9;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 2));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_50, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_51, (int64_t)L_52)), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_zz;
		int32_t L_58 = V_9;
		uint64_t L_59 = V_10;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_58, 2))), (uint32_t)((int32_t)(uint32_t)L_59));
		uint64_t L_60 = V_10;
		V_10 = ((int64_t)((uint64_t)L_60>>((int32_t)32)));
		uint64_t L_61 = V_10;
		uint64_t L_62 = V_11;
		uint64_t L_63 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___2_zz;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 3));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_61, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63)), ((int64_t)(uint64_t)L_67)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = ___2_zz;
		int32_t L_69 = V_9;
		uint64_t L_70 = V_10;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_69, 3))), (uint32_t)((int32_t)(uint32_t)L_70));
		uint64_t L_71 = V_10;
		V_10 = ((int64_t)((uint64_t)L_71>>((int32_t)32)));
		uint64_t L_72 = V_10;
		uint64_t L_73 = V_11;
		uint64_t L_74 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_zz;
		int32_t L_76 = V_9;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 4));
		uint32_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_73, (int64_t)L_74)), ((int64_t)(uint64_t)L_78)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_zz;
		int32_t L_80 = V_9;
		uint64_t L_81 = V_10;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_80, 4))), (uint32_t)((int32_t)(uint32_t)L_81));
		uint64_t L_82 = V_10;
		V_10 = ((int64_t)((uint64_t)L_82>>((int32_t)32)));
		uint64_t L_83 = V_10;
		uint64_t L_84 = V_11;
		uint64_t L_85 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___2_zz;
		int32_t L_87 = V_9;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_add(L_87, 5));
		uint32_t L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_84, (int64_t)L_85)), ((int64_t)(uint64_t)L_89)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_zz;
		int32_t L_91 = V_9;
		uint64_t L_92 = V_10;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_91, 5))), (uint32_t)((int32_t)(uint32_t)L_92));
		uint64_t L_93 = V_10;
		V_10 = ((int64_t)((uint64_t)L_93>>((int32_t)32)));
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		uint64_t L_96 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___2_zz;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = ((int32_t)il2cpp_codegen_add(L_98, 6));
		uint32_t L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_95, (int64_t)L_96)), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_zz;
		int32_t L_102 = V_9;
		uint64_t L_103 = V_10;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_102, 6))), (uint32_t)((int32_t)(uint32_t)L_103));
		uint64_t L_104 = V_10;
		V_10 = ((int64_t)((uint64_t)L_104>>((int32_t)32)));
		uint64_t L_105 = V_10;
		uint64_t L_106 = V_11;
		uint64_t L_107 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_zz;
		int32_t L_109 = V_9;
		NullCheck(L_108);
		int32_t L_110 = ((int32_t)il2cpp_codegen_add(L_109, 7));
		uint32_t L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107)), ((int64_t)(uint64_t)L_111)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___2_zz;
		int32_t L_113 = V_9;
		uint64_t L_114 = V_10;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_113, 7))), (uint32_t)((int32_t)(uint32_t)L_114));
		uint64_t L_115 = V_10;
		V_10 = ((int64_t)((uint64_t)L_115>>((int32_t)32)));
		uint64_t L_116 = V_10;
		uint64_t L_117 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_118 = ___2_zz;
		int32_t L_119 = V_9;
		NullCheck(L_118);
		int32_t L_120 = ((int32_t)il2cpp_codegen_add(L_119, 8));
		uint32_t L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_116, ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)(uint64_t)L_121)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = ___2_zz;
		int32_t L_123 = V_9;
		uint64_t L_124 = V_10;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_123, 8))), (uint32_t)((int32_t)(uint32_t)L_124));
		uint64_t L_125 = V_10;
		V_8 = ((int64_t)((uint64_t)L_125>>((int32_t)32)));
		int32_t L_126 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_0170:
	{
		int32_t L_127 = V_9;
		if ((((int32_t)L_127) < ((int32_t)8)))
		{
			goto IL_0038;
		}
	}
	{
		uint64_t L_128 = V_8;
		return ((int32_t)(uint32_t)L_128);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulAddTo_m819FC0E3789860E22E0FFF29FA1851AC142EB344 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_zz, int32_t ___5_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_y;
		int32_t L_1 = ___3_yOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_y;
		int32_t L_5 = ___3_yOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int64_t)(uint64_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int64_t)(uint64_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_y;
		int32_t L_13 = ___3_yOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = ((int64_t)(uint64_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_y;
		int32_t L_17 = ___3_yOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = ((int64_t)(uint64_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_y;
		int32_t L_21 = ___3_yOff;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = ((int64_t)(uint64_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_y;
		int32_t L_25 = ___3_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = ((int64_t)(uint64_t)L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_y;
		int32_t L_29 = ___3_yOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_7 = ((int64_t)(uint64_t)L_31);
		V_8 = ((int64_t)0);
		V_9 = 0;
		goto IL_0198;
	}

IL_0046:
	{
		V_10 = ((int64_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		int32_t L_34 = V_9;
		NullCheck(L_32);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(L_33, L_34));
		uint32_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_11 = ((int64_t)(uint64_t)L_36);
		uint64_t L_37 = V_10;
		uint64_t L_38 = V_11;
		uint64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___4_zz;
		int32_t L_41 = ___5_zzOff;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_37, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_38, (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___4_zz;
		int32_t L_45 = ___5_zzOff;
		uint64_t L_46 = V_10;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_10;
		V_10 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		uint64_t L_48 = V_10;
		uint64_t L_49 = V_11;
		uint64_t L_50 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___4_zz;
		int32_t L_52 = ___5_zzOff;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_49, (int64_t)L_50)), ((int64_t)(uint64_t)L_54)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___4_zz;
		int32_t L_56 = ___5_zzOff;
		uint64_t L_57 = V_10;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_56, 1))), (uint32_t)((int32_t)(uint32_t)L_57));
		uint64_t L_58 = V_10;
		V_10 = ((int64_t)((uint64_t)L_58>>((int32_t)32)));
		uint64_t L_59 = V_10;
		uint64_t L_60 = V_11;
		uint64_t L_61 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___4_zz;
		int32_t L_63 = ___5_zzOff;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 2));
		uint32_t L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_59, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_60, (int64_t)L_61)), ((int64_t)(uint64_t)L_65)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___4_zz;
		int32_t L_67 = ___5_zzOff;
		uint64_t L_68 = V_10;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_67, 2))), (uint32_t)((int32_t)(uint32_t)L_68));
		uint64_t L_69 = V_10;
		V_10 = ((int64_t)((uint64_t)L_69>>((int32_t)32)));
		uint64_t L_70 = V_10;
		uint64_t L_71 = V_11;
		uint64_t L_72 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___4_zz;
		int32_t L_74 = ___5_zzOff;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 3));
		uint32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_71, (int64_t)L_72)), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___4_zz;
		int32_t L_78 = ___5_zzOff;
		uint64_t L_79 = V_10;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_78, 3))), (uint32_t)((int32_t)(uint32_t)L_79));
		uint64_t L_80 = V_10;
		V_10 = ((int64_t)((uint64_t)L_80>>((int32_t)32)));
		uint64_t L_81 = V_10;
		uint64_t L_82 = V_11;
		uint64_t L_83 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___4_zz;
		int32_t L_85 = ___5_zzOff;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 4));
		uint32_t L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_81, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___4_zz;
		int32_t L_89 = ___5_zzOff;
		uint64_t L_90 = V_10;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 4))), (uint32_t)((int32_t)(uint32_t)L_90));
		uint64_t L_91 = V_10;
		V_10 = ((int64_t)((uint64_t)L_91>>((int32_t)32)));
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___4_zz;
		int32_t L_96 = ___5_zzOff;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 5));
		uint32_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_93, (int64_t)L_94)), ((int64_t)(uint64_t)L_98)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___4_zz;
		int32_t L_100 = ___5_zzOff;
		uint64_t L_101 = V_10;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_100, 5))), (uint32_t)((int32_t)(uint32_t)L_101));
		uint64_t L_102 = V_10;
		V_10 = ((int64_t)((uint64_t)L_102>>((int32_t)32)));
		uint64_t L_103 = V_10;
		uint64_t L_104 = V_11;
		uint64_t L_105 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = ___4_zz;
		int32_t L_107 = ___5_zzOff;
		NullCheck(L_106);
		int32_t L_108 = ((int32_t)il2cpp_codegen_add(L_107, 6));
		uint32_t L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_104, (int64_t)L_105)), ((int64_t)(uint64_t)L_109)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = ___4_zz;
		int32_t L_111 = ___5_zzOff;
		uint64_t L_112 = V_10;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_111, 6))), (uint32_t)((int32_t)(uint32_t)L_112));
		uint64_t L_113 = V_10;
		V_10 = ((int64_t)((uint64_t)L_113>>((int32_t)32)));
		uint64_t L_114 = V_10;
		uint64_t L_115 = V_11;
		uint64_t L_116 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___4_zz;
		int32_t L_118 = ___5_zzOff;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_118, 7));
		uint32_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_115, (int64_t)L_116)), ((int64_t)(uint64_t)L_120)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___4_zz;
		int32_t L_122 = ___5_zzOff;
		uint64_t L_123 = V_10;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_122, 7))), (uint32_t)((int32_t)(uint32_t)L_123));
		uint64_t L_124 = V_10;
		V_10 = ((int64_t)((uint64_t)L_124>>((int32_t)32)));
		uint64_t L_125 = V_10;
		uint64_t L_126 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = ___4_zz;
		int32_t L_128 = ___5_zzOff;
		NullCheck(L_127);
		int32_t L_129 = ((int32_t)il2cpp_codegen_add(L_128, 8));
		uint32_t L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_add((int64_t)L_126, ((int64_t)(uint64_t)L_130)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = ___4_zz;
		int32_t L_132 = ___5_zzOff;
		uint64_t L_133 = V_10;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_132, 8))), (uint32_t)((int32_t)(uint32_t)L_133));
		uint64_t L_134 = V_10;
		V_8 = ((int64_t)((uint64_t)L_134>>((int32_t)32)));
		int32_t L_135 = ___5_zzOff;
		___5_zzOff = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int32_t L_136 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_0198:
	{
		int32_t L_137 = V_9;
		if ((((int32_t)L_137) < ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		uint64_t L_138 = V_8;
		return ((int32_t)(uint32_t)L_138);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Nat256_Mul33Add_m1F8A98B72CD565FF06B871B10BE5413B17AFED26 (uint32_t ___0_w, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, int32_t ___4_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___5_z, int32_t ___6_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_w;
		V_1 = ((int64_t)(uint64_t)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_x;
		int32_t L_2 = ___2_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = ((int64_t)(uint64_t)L_4);
		uint64_t L_5 = V_0;
		uint64_t L_6 = V_1;
		uint64_t L_7 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___3_y;
		int32_t L_9 = ___4_yOff;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)L_7)), ((int64_t)(uint64_t)L_11)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___5_z;
		int32_t L_13 = ___6_zOff;
		uint64_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(uint32_t)L_14));
		uint64_t L_15 = V_0;
		V_0 = ((int64_t)((uint64_t)L_15>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_x;
		int32_t L_17 = ___2_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		uint32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = ((int64_t)(uint64_t)L_19);
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_1;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___3_y;
		int32_t L_25 = ___4_yOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_21, (int64_t)L_22)), (int64_t)L_23)), ((int64_t)(uint64_t)L_27)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___5_z;
		int32_t L_29 = ___6_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___1_x;
		int32_t L_33 = ___2_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 2));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		uint64_t L_36 = V_0;
		uint64_t L_37 = V_1;
		uint64_t L_38 = V_4;
		uint64_t L_39 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___3_y;
		int32_t L_41 = ___4_yOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 2));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_37, (int64_t)L_38)), (int64_t)L_39)), ((int64_t)(uint64_t)L_43)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___5_z;
		int32_t L_45 = ___6_zOff;
		uint64_t L_46 = V_0;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 2))), (uint32_t)((int32_t)(uint32_t)L_46));
		uint64_t L_47 = V_0;
		V_0 = ((int64_t)((uint64_t)L_47>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_x;
		int32_t L_49 = ___2_xOff;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 3));
		uint32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_5 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_0;
		uint64_t L_53 = V_1;
		uint64_t L_54 = V_5;
		uint64_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___3_y;
		int32_t L_57 = ___4_yOff;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 3));
		uint32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54)), (int64_t)L_55)), ((int64_t)(uint64_t)L_59)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___5_z;
		int32_t L_61 = ___6_zOff;
		uint64_t L_62 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_61, 3))), (uint32_t)((int32_t)(uint32_t)L_62));
		uint64_t L_63 = V_0;
		V_0 = ((int64_t)((uint64_t)L_63>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_x;
		int32_t L_65 = ___2_xOff;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_add(L_65, 4));
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)(uint64_t)L_67);
		uint64_t L_68 = V_0;
		uint64_t L_69 = V_1;
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___3_y;
		int32_t L_73 = ___4_yOff;
		NullCheck(L_72);
		int32_t L_74 = ((int32_t)il2cpp_codegen_add(L_73, 4));
		uint32_t L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_69, (int64_t)L_70)), (int64_t)L_71)), ((int64_t)(uint64_t)L_75)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___5_z;
		int32_t L_77 = ___6_zOff;
		uint64_t L_78 = V_0;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 4))), (uint32_t)((int32_t)(uint32_t)L_78));
		uint64_t L_79 = V_0;
		V_0 = ((int64_t)((uint64_t)L_79>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_x;
		int32_t L_81 = ___2_xOff;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 5));
		uint32_t L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)(uint64_t)L_83);
		uint64_t L_84 = V_0;
		uint64_t L_85 = V_1;
		uint64_t L_86 = V_7;
		uint64_t L_87 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___3_y;
		int32_t L_89 = ___4_yOff;
		NullCheck(L_88);
		int32_t L_90 = ((int32_t)il2cpp_codegen_add(L_89, 5));
		uint32_t L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_85, (int64_t)L_86)), (int64_t)L_87)), ((int64_t)(uint64_t)L_91)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___5_z;
		int32_t L_93 = ___6_zOff;
		uint64_t L_94 = V_0;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 5))), (uint32_t)((int32_t)(uint32_t)L_94));
		uint64_t L_95 = V_0;
		V_0 = ((int64_t)((uint64_t)L_95>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___1_x;
		int32_t L_97 = ___2_xOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 6));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_8 = ((int64_t)(uint64_t)L_99);
		uint64_t L_100 = V_0;
		uint64_t L_101 = V_1;
		uint64_t L_102 = V_8;
		uint64_t L_103 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = ___3_y;
		int32_t L_105 = ___4_yOff;
		NullCheck(L_104);
		int32_t L_106 = ((int32_t)il2cpp_codegen_add(L_105, 6));
		uint32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_101, (int64_t)L_102)), (int64_t)L_103)), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___5_z;
		int32_t L_109 = ___6_zOff;
		uint64_t L_110 = V_0;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_109, 6))), (uint32_t)((int32_t)(uint32_t)L_110));
		uint64_t L_111 = V_0;
		V_0 = ((int64_t)((uint64_t)L_111>>((int32_t)32)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___1_x;
		int32_t L_113 = ___2_xOff;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 7));
		uint32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_9 = ((int64_t)(uint64_t)L_115);
		uint64_t L_116 = V_0;
		uint64_t L_117 = V_1;
		uint64_t L_118 = V_9;
		uint64_t L_119 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___3_y;
		int32_t L_121 = ___4_yOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 7));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_116, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_117, (int64_t)L_118)), (int64_t)L_119)), ((int64_t)(uint64_t)L_123)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_124 = ___5_z;
		int32_t L_125 = ___6_zOff;
		uint64_t L_126 = V_0;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_125, 7))), (uint32_t)((int32_t)(uint32_t)L_126));
		uint64_t L_127 = V_0;
		V_0 = ((int64_t)((uint64_t)L_127>>((int32_t)32)));
		uint64_t L_128 = V_0;
		uint64_t L_129 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_128, (int64_t)L_129));
		uint64_t L_130 = V_0;
		return L_130;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulByWord_mD88D0A0F403B597AB4BADBD3D5B00200C9EAEA9B (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_z;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_5)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_z;
		uint64_t L_7 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_7));
		uint64_t L_8 = V_0;
		V_0 = ((int64_t)((uint64_t)L_8>>((int32_t)32)));
		uint64_t L_9 = V_0;
		uint64_t L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, ((int64_t)il2cpp_codegen_multiply((int64_t)L_10, ((int64_t)(uint64_t)L_13)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_z;
		uint64_t L_15 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_15));
		uint64_t L_16 = V_0;
		V_0 = ((int64_t)((uint64_t)L_16>>((int32_t)32)));
		uint64_t L_17 = V_0;
		uint64_t L_18 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___1_z;
		NullCheck(L_19);
		int32_t L_20 = 2;
		uint32_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_17, ((int64_t)il2cpp_codegen_multiply((int64_t)L_18, ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___1_z;
		uint64_t L_23 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_23));
		uint64_t L_24 = V_0;
		V_0 = ((int64_t)((uint64_t)L_24>>((int32_t)32)));
		uint64_t L_25 = V_0;
		uint64_t L_26 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		NullCheck(L_27);
		int32_t L_28 = 3;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_25, ((int64_t)il2cpp_codegen_multiply((int64_t)L_26, ((int64_t)(uint64_t)L_29)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_z;
		uint64_t L_31 = V_0;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_31));
		uint64_t L_32 = V_0;
		V_0 = ((int64_t)((uint64_t)L_32>>((int32_t)32)));
		uint64_t L_33 = V_0;
		uint64_t L_34 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___1_z;
		NullCheck(L_35);
		int32_t L_36 = 4;
		uint32_t L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, ((int64_t)(uint64_t)L_37)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___1_z;
		uint64_t L_39 = V_0;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_39));
		uint64_t L_40 = V_0;
		V_0 = ((int64_t)((uint64_t)L_40>>((int32_t)32)));
		uint64_t L_41 = V_0;
		uint64_t L_42 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___1_z;
		NullCheck(L_43);
		int32_t L_44 = 5;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)il2cpp_codegen_multiply((int64_t)L_42, ((int64_t)(uint64_t)L_45)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_z;
		uint64_t L_47 = V_0;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_47));
		uint64_t L_48 = V_0;
		V_0 = ((int64_t)((uint64_t)L_48>>((int32_t)32)));
		uint64_t L_49 = V_0;
		uint64_t L_50 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 6;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)il2cpp_codegen_multiply((int64_t)L_50, ((int64_t)(uint64_t)L_53)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_z;
		uint64_t L_55 = V_0;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_0;
		V_0 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_0;
		uint64_t L_58 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___1_z;
		NullCheck(L_59);
		int32_t L_60 = 7;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_multiply((int64_t)L_58, ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___1_z;
		uint64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_63));
		uint64_t L_64 = V_0;
		V_0 = ((int64_t)((uint64_t)L_64>>((int32_t)32)));
		uint64_t L_65 = V_0;
		return ((int32_t)(uint32_t)L_65);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulByWordAddTo_m976DA0F2E77CC2B87538172508AC83E7B054A504 (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___2_z;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		NullCheck(L_6);
		int32_t L_7 = 0;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_5))), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		uint64_t L_10 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_13, ((int64_t)(uint64_t)L_16))), ((int64_t)(uint64_t)L_19)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		uint64_t L_21 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_21));
		uint64_t L_22 = V_0;
		V_0 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		uint64_t L_23 = V_0;
		uint64_t L_24 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___2_z;
		NullCheck(L_25);
		int32_t L_26 = 2;
		uint32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___1_y;
		NullCheck(L_28);
		int32_t L_29 = 2;
		uint32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_24, ((int64_t)(uint64_t)L_27))), ((int64_t)(uint64_t)L_30)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_z;
		uint64_t L_32 = V_0;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_32));
		uint64_t L_33 = V_0;
		V_0 = ((int64_t)((uint64_t)L_33>>((int32_t)32)));
		uint64_t L_34 = V_0;
		uint64_t L_35 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		NullCheck(L_36);
		int32_t L_37 = 3;
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___1_y;
		NullCheck(L_39);
		int32_t L_40 = 3;
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_34, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_35, ((int64_t)(uint64_t)L_38))), ((int64_t)(uint64_t)L_41)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___2_z;
		uint64_t L_43 = V_0;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		uint64_t L_46 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		NullCheck(L_47);
		int32_t L_48 = 4;
		uint32_t L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = ___1_y;
		NullCheck(L_50);
		int32_t L_51 = 4;
		uint32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_45, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_46, ((int64_t)(uint64_t)L_49))), ((int64_t)(uint64_t)L_52)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		uint64_t L_54 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_54));
		uint64_t L_55 = V_0;
		V_0 = ((int64_t)((uint64_t)L_55>>((int32_t)32)));
		uint64_t L_56 = V_0;
		uint64_t L_57 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ___2_z;
		NullCheck(L_58);
		int32_t L_59 = 5;
		uint32_t L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___1_y;
		NullCheck(L_61);
		int32_t L_62 = 5;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_57, ((int64_t)(uint64_t)L_60))), ((int64_t)(uint64_t)L_63)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___2_z;
		uint64_t L_65 = V_0;
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_65));
		uint64_t L_66 = V_0;
		V_0 = ((int64_t)((uint64_t)L_66>>((int32_t)32)));
		uint64_t L_67 = V_0;
		uint64_t L_68 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___2_z;
		NullCheck(L_69);
		int32_t L_70 = 6;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 6;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_67, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_68, ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		uint64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_76));
		uint64_t L_77 = V_0;
		V_0 = ((int64_t)((uint64_t)L_77>>((int32_t)32)));
		uint64_t L_78 = V_0;
		uint64_t L_79 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___2_z;
		NullCheck(L_80);
		int32_t L_81 = 7;
		uint32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___1_y;
		NullCheck(L_83);
		int32_t L_84 = 7;
		uint32_t L_85 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_79, ((int64_t)(uint64_t)L_82))), ((int64_t)(uint64_t)L_85)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = ___2_z;
		uint64_t L_87 = V_0;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_87));
		uint64_t L_88 = V_0;
		V_0 = ((int64_t)((uint64_t)L_88>>((int32_t)32)));
		uint64_t L_89 = V_0;
		return ((int32_t)(uint32_t)L_89);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulWordAddTo_m4983D3DC4B90BAF64811FFFF6C9C0F864889968F (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, int32_t ___2_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		int32_t L_4 = ___2_yOff;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___3_z;
		int32_t L_8 = ___4_zOff;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_10)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___3_z;
		int32_t L_12 = ___4_zOff;
		uint64_t L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((int32_t)(uint32_t)L_13));
		uint64_t L_14 = V_0;
		V_0 = ((int64_t)((uint64_t)L_14>>((int32_t)32)));
		uint64_t L_15 = V_0;
		uint64_t L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_y;
		int32_t L_18 = ___2_yOff;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___3_z;
		int32_t L_22 = ___4_zOff;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_16, ((int64_t)(uint64_t)L_20))), ((int64_t)(uint64_t)L_24)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___3_z;
		int32_t L_26 = ___4_zOff;
		uint64_t L_27 = V_0;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_26, 1))), (uint32_t)((int32_t)(uint32_t)L_27));
		uint64_t L_28 = V_0;
		V_0 = ((int64_t)((uint64_t)L_28>>((int32_t)32)));
		uint64_t L_29 = V_0;
		uint64_t L_30 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_y;
		int32_t L_32 = ___2_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___3_z;
		int32_t L_36 = ___4_zOff;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 2));
		uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_30, ((int64_t)(uint64_t)L_34))), ((int64_t)(uint64_t)L_38)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___3_z;
		int32_t L_40 = ___4_zOff;
		uint64_t L_41 = V_0;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, 2))), (uint32_t)((int32_t)(uint32_t)L_41));
		uint64_t L_42 = V_0;
		V_0 = ((int64_t)((uint64_t)L_42>>((int32_t)32)));
		uint64_t L_43 = V_0;
		uint64_t L_44 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___1_y;
		int32_t L_46 = ___2_yOff;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_add(L_46, 3));
		uint32_t L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___3_z;
		int32_t L_50 = ___4_zOff;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_add(L_50, 3));
		uint32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_43, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_44, ((int64_t)(uint64_t)L_48))), ((int64_t)(uint64_t)L_52)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___3_z;
		int32_t L_54 = ___4_zOff;
		uint64_t L_55 = V_0;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, 3))), (uint32_t)((int32_t)(uint32_t)L_55));
		uint64_t L_56 = V_0;
		V_0 = ((int64_t)((uint64_t)L_56>>((int32_t)32)));
		uint64_t L_57 = V_0;
		uint64_t L_58 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___1_y;
		int32_t L_60 = ___2_yOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___3_z;
		int32_t L_64 = ___4_zOff;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 4));
		uint32_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_57, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_58, ((int64_t)(uint64_t)L_62))), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___3_z;
		int32_t L_68 = ___4_zOff;
		uint64_t L_69 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 4))), (uint32_t)((int32_t)(uint32_t)L_69));
		uint64_t L_70 = V_0;
		V_0 = ((int64_t)((uint64_t)L_70>>((int32_t)32)));
		uint64_t L_71 = V_0;
		uint64_t L_72 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___1_y;
		int32_t L_74 = ___2_yOff;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_add(L_74, 5));
		uint32_t L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___3_z;
		int32_t L_78 = ___4_zOff;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 5));
		uint32_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_72, ((int64_t)(uint64_t)L_76))), ((int64_t)(uint64_t)L_80)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___3_z;
		int32_t L_82 = ___4_zOff;
		uint64_t L_83 = V_0;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_82, 5))), (uint32_t)((int32_t)(uint32_t)L_83));
		uint64_t L_84 = V_0;
		V_0 = ((int64_t)((uint64_t)L_84>>((int32_t)32)));
		uint64_t L_85 = V_0;
		uint64_t L_86 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___1_y;
		int32_t L_88 = ___2_yOff;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 6));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___3_z;
		int32_t L_92 = ___4_zOff;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 6));
		uint32_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_86, ((int64_t)(uint64_t)L_90))), ((int64_t)(uint64_t)L_94)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___3_z;
		int32_t L_96 = ___4_zOff;
		uint64_t L_97 = V_0;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, 6))), (uint32_t)((int32_t)(uint32_t)L_97));
		uint64_t L_98 = V_0;
		V_0 = ((int64_t)((uint64_t)L_98>>((int32_t)32)));
		uint64_t L_99 = V_0;
		uint64_t L_100 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___1_y;
		int32_t L_102 = ___2_yOff;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_add(L_102, 7));
		uint32_t L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = ___3_z;
		int32_t L_106 = ___4_zOff;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, 7));
		uint32_t L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_100, ((int64_t)(uint64_t)L_104))), ((int64_t)(uint64_t)L_108)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___3_z;
		int32_t L_110 = ___4_zOff;
		uint64_t L_111 = V_0;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_110, 7))), (uint32_t)((int32_t)(uint32_t)L_111));
		uint64_t L_112 = V_0;
		V_0 = ((int64_t)((uint64_t)L_112>>((int32_t)32)));
		uint64_t L_113 = V_0;
		return ((int32_t)(uint32_t)L_113);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_Mul33DWordAdd_m238826CE702B2207725F590ECADEFB912DF1A68E (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = ___1_y;
		V_2 = ((int64_t)((int64_t)L_1&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_2 = V_0;
		uint64_t L_3 = V_1;
		uint64_t L_4 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		int32_t L_6 = ___3_zOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_3, (int64_t)L_4)), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		uint64_t L_12 = V_0;
		V_0 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		uint64_t L_13 = ___1_y;
		V_3 = ((int64_t)((uint64_t)L_13>>((int32_t)32)));
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		uint64_t L_16 = V_3;
		uint64_t L_17 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_14, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_15, (int64_t)L_16)), (int64_t)L_17)), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		uint64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		uint64_t L_25 = V_0;
		V_0 = ((int64_t)((uint64_t)L_25>>((int32_t)32)));
		uint64_t L_26 = V_0;
		uint64_t L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 2));
		uint32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)il2cpp_codegen_add((int64_t)L_27, ((int64_t)(uint64_t)L_31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint64_t L_34 = V_0;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_33, 2))), (uint32_t)((int32_t)(uint32_t)L_34));
		uint64_t L_35 = V_0;
		V_0 = ((int64_t)((uint64_t)L_35>>((int32_t)32)));
		uint64_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int32_t L_38 = ___3_zOff;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 3));
		uint32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)(uint64_t)L_40)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_z;
		int32_t L_42 = ___3_zOff;
		uint64_t L_43 = V_0;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, 3))), (uint32_t)((int32_t)(uint32_t)L_43));
		uint64_t L_44 = V_0;
		V_0 = ((int64_t)((uint64_t)L_44>>((int32_t)32)));
		uint64_t L_45 = V_0;
		if (!L_45)
		{
			goto IL_0079;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___2_z;
		int32_t L_47 = ___3_zOff;
		uint32_t L_48;
		L_48 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(8, L_46, L_47, 4, NULL);
		return L_48;
	}

IL_0079:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_Mul33WordAdd_m52205BD091469795076480DE190AD77B57F400B3 (uint32_t ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___1_y;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint32_t L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_3))), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add((int64_t)L_13, ((int64_t)(uint64_t)L_17)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_z;
		int32_t L_19 = ___3_zOff;
		uint64_t L_20 = V_0;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_19, 1))), (uint32_t)((int32_t)(uint32_t)L_20));
		uint64_t L_21 = V_0;
		V_0 = ((int64_t)((uint64_t)L_21>>((int32_t)32)));
		uint64_t L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 2));
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)(uint64_t)L_26)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint64_t L_29 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 2))), (uint32_t)((int32_t)(uint32_t)L_29));
		uint64_t L_30 = V_0;
		V_0 = ((int64_t)((uint64_t)L_30>>((int32_t)32)));
		uint64_t L_31 = V_0;
		if (!L_31)
		{
			goto IL_0055;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___2_z;
		int32_t L_33 = ___3_zOff;
		uint32_t L_34;
		L_34 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(8, L_32, L_33, 3, NULL);
		return L_34;
	}

IL_0055:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulWordDwordAdd_mB53299BD28E1AE551A37D3D63265AA3A54F14478 (uint32_t ___0_x, uint64_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		uint64_t L_3 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		int32_t L_5 = ___3_zOff;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_2, (int64_t)L_3)), ((int64_t)(uint64_t)L_7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		int32_t L_9 = ___3_zOff;
		uint64_t L_10 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		uint64_t L_12 = V_0;
		uint64_t L_13 = V_1;
		uint64_t L_14 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___2_z;
		int32_t L_16 = ___3_zOff;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_13, ((int64_t)((uint64_t)L_14>>((int32_t)32))))), ((int64_t)(uint64_t)L_18)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		uint64_t L_21 = V_0;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_20, 1))), (uint32_t)((int32_t)(uint32_t)L_21));
		uint64_t L_22 = V_0;
		V_0 = ((int64_t)((uint64_t)L_22>>((int32_t)32)));
		uint64_t L_23 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___2_z;
		int32_t L_25 = ___3_zOff;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 2));
		uint32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_23, ((int64_t)(uint64_t)L_27)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_z;
		int32_t L_29 = ___3_zOff;
		uint64_t L_30 = V_0;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 2))), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_0;
		V_0 = ((int64_t)((uint64_t)L_31>>((int32_t)32)));
		uint64_t L_32 = V_0;
		if (!L_32)
		{
			goto IL_0059;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___2_z;
		int32_t L_34 = ___3_zOff;
		uint32_t L_35;
		L_35 = Nat_IncAt_m8795D07F00419AF2BB026045FAA918D8327C28E5(8, L_33, L_34, 3, NULL);
		return L_35;
	}

IL_0059:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulWord_m7C12BD563A0F58E06D61D7CD9FC8475B75A7FACF (uint32_t ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int64_t)0);
		uint32_t L_0 = ___0_x;
		V_1 = ((int64_t)(uint64_t)L_0);
		V_2 = 0;
	}

IL_0008:
	{
		uint64_t L_1 = V_0;
		uint64_t L_2 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_multiply((int64_t)L_2, ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int32_t L_8 = ___3_zOff;
		int32_t L_9 = V_2;
		uint64_t L_10 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, L_9))), (uint32_t)((int32_t)(uint32_t)L_10));
		uint64_t L_11 = V_0;
		V_0 = ((int64_t)((uint64_t)L_11>>((int32_t)32)));
		int32_t L_12 = V_2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		V_2 = L_13;
		if ((((int32_t)L_13) < ((int32_t)8)))
		{
			goto IL_0008;
		}
	}
	{
		uint64_t L_14 = V_0;
		return ((int32_t)(uint32_t)L_14);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_m73A64C1B7958720A9C82342EDEF2960B12219997 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	uint64_t V_26 = 0;
	uint64_t V_27 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int64_t)(uint64_t)L_2);
		V_2 = 0;
		V_24 = 7;
		V_25 = ((int32_t)16);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = V_24;
		int32_t L_5 = L_4;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		NullCheck(L_3);
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int64_t L_8 = ((int64_t)(uint64_t)L_7);
		V_26 = ((int64_t)il2cpp_codegen_multiply(L_8, L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		int32_t L_10 = V_25;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_25 = L_11;
		uint32_t L_12 = V_2;
		uint64_t L_13 = V_26;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_13>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_zz;
		int32_t L_15 = V_25;
		int32_t L_16 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		V_25 = L_16;
		uint64_t L_17 = V_26;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_17>>1))));
		uint64_t L_18 = V_26;
		V_2 = ((int32_t)(uint32_t)L_18);
		int32_t L_19 = V_24;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_20 = V_0;
		uint64_t L_21 = V_0;
		V_27 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21));
		uint32_t L_22 = V_2;
		uint64_t L_23 = V_27;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_22<<((int32_t)31)))))|((int64_t)((uint64_t)L_23>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_zz;
		uint64_t L_25 = V_27;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_25));
		uint64_t L_26 = V_27;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_26>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 1;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_4 = ((int64_t)(uint64_t)L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___1_zz;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_5 = ((int64_t)(uint64_t)L_32);
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_33, ((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))));
		uint64_t L_36 = V_1;
		V_3 = ((int32_t)(uint32_t)L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_zz;
		uint32_t L_38 = V_3;
		uint32_t L_39 = V_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((int32_t)L_38<<1))|(int32_t)L_39)));
		uint32_t L_40 = V_3;
		V_2 = ((int32_t)((uint32_t)L_40>>((int32_t)31)));
		uint64_t L_41 = V_5;
		uint64_t L_42 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)((uint64_t)L_42>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 2;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = ((int64_t)(uint64_t)L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_zz;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_7 = ((int64_t)(uint64_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___1_zz;
		NullCheck(L_49);
		int32_t L_50 = 4;
		uint32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)(uint64_t)L_51);
		uint64_t L_52 = V_5;
		uint64_t L_53 = V_6;
		uint64_t L_54 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_multiply((int64_t)L_53, (int64_t)L_54))));
		uint64_t L_55 = V_5;
		V_3 = ((int32_t)(uint32_t)L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___1_zz;
		uint32_t L_57 = V_3;
		uint32_t L_58 = V_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((int32_t)L_57<<1))|(int32_t)L_58)));
		uint32_t L_59 = V_3;
		V_2 = ((int32_t)((uint32_t)L_59>>((int32_t)31)));
		uint64_t L_60 = V_7;
		uint64_t L_61 = V_5;
		uint64_t L_62 = V_6;
		uint64_t L_63 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_61>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_62, (int64_t)L_63))))));
		uint64_t L_64 = V_8;
		uint64_t L_65 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)((uint64_t)L_65>>((int32_t)32)))));
		uint64_t L_66 = V_7;
		V_7 = ((int64_t)((int64_t)L_66&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___0_x;
		NullCheck(L_67);
		int32_t L_68 = 3;
		uint32_t L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = ((int64_t)(uint64_t)L_69);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___1_zz;
		NullCheck(L_70);
		int32_t L_71 = 5;
		uint32_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_10 = ((int64_t)(uint64_t)L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___1_zz;
		NullCheck(L_73);
		int32_t L_74 = 6;
		uint32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_11 = ((int64_t)(uint64_t)L_75);
		uint64_t L_76 = V_7;
		uint64_t L_77 = V_9;
		uint64_t L_78 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_multiply((int64_t)L_77, (int64_t)L_78))));
		uint64_t L_79 = V_7;
		V_3 = ((int32_t)(uint32_t)L_79);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = ___1_zz;
		uint32_t L_81 = V_3;
		uint32_t L_82 = V_2;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((int32_t)L_81<<1))|(int32_t)L_82)));
		uint32_t L_83 = V_3;
		V_2 = ((int32_t)((uint32_t)L_83>>((int32_t)31)));
		uint64_t L_84 = V_8;
		uint64_t L_85 = V_7;
		uint64_t L_86 = V_9;
		uint64_t L_87 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_85>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, (int64_t)L_87))))));
		uint64_t L_88 = V_10;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		uint64_t L_91 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_89>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, (int64_t)L_91))))));
		uint64_t L_92 = V_8;
		V_8 = ((int64_t)((int64_t)L_92&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)((uint64_t)L_94>>((int32_t)32)))));
		uint64_t L_95 = V_10;
		V_10 = ((int64_t)((int64_t)L_95&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___0_x;
		NullCheck(L_96);
		int32_t L_97 = 4;
		uint32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_12 = ((int64_t)(uint64_t)L_98);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_99 = ___1_zz;
		NullCheck(L_99);
		int32_t L_100 = 7;
		uint32_t L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		V_13 = ((int64_t)(uint64_t)L_101);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = ___1_zz;
		NullCheck(L_102);
		int32_t L_103 = 8;
		uint32_t L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_14 = ((int64_t)(uint64_t)L_104);
		uint64_t L_105 = V_8;
		uint64_t L_106 = V_12;
		uint64_t L_107 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))));
		uint64_t L_108 = V_8;
		V_3 = ((int32_t)(uint32_t)L_108);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___1_zz;
		uint32_t L_110 = V_3;
		uint32_t L_111 = V_2;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)((int32_t)L_110<<1))|(int32_t)L_111)));
		uint32_t L_112 = V_3;
		V_2 = ((int32_t)((uint32_t)L_112>>((int32_t)31)));
		uint64_t L_113 = V_10;
		uint64_t L_114 = V_8;
		uint64_t L_115 = V_12;
		uint64_t L_116 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_114>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_115, (int64_t)L_116))))));
		uint64_t L_117 = V_11;
		uint64_t L_118 = V_10;
		uint64_t L_119 = V_12;
		uint64_t L_120 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_118>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_119, (int64_t)L_120))))));
		uint64_t L_121 = V_10;
		V_10 = ((int64_t)((int64_t)L_121&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_122 = V_13;
		uint64_t L_123 = V_11;
		uint64_t L_124 = V_12;
		uint64_t L_125 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_123>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_124, (int64_t)L_125))))));
		uint64_t L_126 = V_11;
		V_11 = ((int64_t)((int64_t)L_126&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_127 = V_14;
		uint64_t L_128 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_127, ((int64_t)((uint64_t)L_128>>((int32_t)32)))));
		uint64_t L_129 = V_13;
		V_13 = ((int64_t)((int64_t)L_129&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = ___0_x;
		NullCheck(L_130);
		int32_t L_131 = 5;
		uint32_t L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_15 = ((int64_t)(uint64_t)L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ___1_zz;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)9);
		uint32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		V_16 = ((int64_t)(uint64_t)L_135);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136 = ___1_zz;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)10);
		uint32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		V_17 = ((int64_t)(uint64_t)L_138);
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_15;
		uint64_t L_141 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, ((int64_t)il2cpp_codegen_multiply((int64_t)L_140, (int64_t)L_141))));
		uint64_t L_142 = V_10;
		V_3 = ((int32_t)(uint32_t)L_142);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___1_zz;
		uint32_t L_144 = V_3;
		uint32_t L_145 = V_2;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(((int32_t)((int32_t)L_144<<1))|(int32_t)L_145)));
		uint32_t L_146 = V_3;
		V_2 = ((int32_t)((uint32_t)L_146>>((int32_t)31)));
		uint64_t L_147 = V_11;
		uint64_t L_148 = V_10;
		uint64_t L_149 = V_15;
		uint64_t L_150 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_148>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_149, (int64_t)L_150))))));
		uint64_t L_151 = V_13;
		uint64_t L_152 = V_11;
		uint64_t L_153 = V_15;
		uint64_t L_154 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_151, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_152>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_153, (int64_t)L_154))))));
		uint64_t L_155 = V_11;
		V_11 = ((int64_t)((int64_t)L_155&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_156 = V_14;
		uint64_t L_157 = V_13;
		uint64_t L_158 = V_15;
		uint64_t L_159 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_156, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_157>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_158, (int64_t)L_159))))));
		uint64_t L_160 = V_13;
		V_13 = ((int64_t)((int64_t)L_160&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_161 = V_16;
		uint64_t L_162 = V_14;
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_161, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_162>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_163, (int64_t)L_164))))));
		uint64_t L_165 = V_14;
		V_14 = ((int64_t)((int64_t)L_165&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_166 = V_17;
		uint64_t L_167 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_166, ((int64_t)((uint64_t)L_167>>((int32_t)32)))));
		uint64_t L_168 = V_16;
		V_16 = ((int64_t)((int64_t)L_168&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_169 = ___0_x;
		NullCheck(L_169);
		int32_t L_170 = 6;
		uint32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		V_18 = ((int64_t)(uint64_t)L_171);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_172 = ___1_zz;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)11);
		uint32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		V_19 = ((int64_t)(uint64_t)L_174);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_175 = ___1_zz;
		NullCheck(L_175);
		int32_t L_176 = ((int32_t)12);
		uint32_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_20 = ((int64_t)(uint64_t)L_177);
		uint64_t L_178 = V_11;
		uint64_t L_179 = V_18;
		uint64_t L_180 = V_0;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, ((int64_t)il2cpp_codegen_multiply((int64_t)L_179, (int64_t)L_180))));
		uint64_t L_181 = V_11;
		V_3 = ((int32_t)(uint32_t)L_181);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = ___1_zz;
		uint32_t L_183 = V_3;
		uint32_t L_184 = V_2;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)((int32_t)L_183<<1))|(int32_t)L_184)));
		uint32_t L_185 = V_3;
		V_2 = ((int32_t)((uint32_t)L_185>>((int32_t)31)));
		uint64_t L_186 = V_13;
		uint64_t L_187 = V_11;
		uint64_t L_188 = V_18;
		uint64_t L_189 = V_4;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_186, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_187>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_188, (int64_t)L_189))))));
		uint64_t L_190 = V_14;
		uint64_t L_191 = V_13;
		uint64_t L_192 = V_18;
		uint64_t L_193 = V_6;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_191>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_192, (int64_t)L_193))))));
		uint64_t L_194 = V_13;
		V_13 = ((int64_t)((int64_t)L_194&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_195 = V_16;
		uint64_t L_196 = V_14;
		uint64_t L_197 = V_18;
		uint64_t L_198 = V_9;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_196>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_197, (int64_t)L_198))))));
		uint64_t L_199 = V_14;
		V_14 = ((int64_t)((int64_t)L_199&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_200 = V_17;
		uint64_t L_201 = V_16;
		uint64_t L_202 = V_18;
		uint64_t L_203 = V_12;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_201>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_202, (int64_t)L_203))))));
		uint64_t L_204 = V_16;
		V_16 = ((int64_t)((int64_t)L_204&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_205 = V_19;
		uint64_t L_206 = V_17;
		uint64_t L_207 = V_18;
		uint64_t L_208 = V_15;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_206>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_207, (int64_t)L_208))))));
		uint64_t L_209 = V_17;
		V_17 = ((int64_t)((int64_t)L_209&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_210 = V_20;
		uint64_t L_211 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_210, ((int64_t)((uint64_t)L_211>>((int32_t)32)))));
		uint64_t L_212 = V_19;
		V_19 = ((int64_t)((int64_t)L_212&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_213 = ___0_x;
		NullCheck(L_213);
		int32_t L_214 = 7;
		uint32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		V_21 = ((int64_t)(uint64_t)L_215);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_216 = ___1_zz;
		NullCheck(L_216);
		int32_t L_217 = ((int32_t)13);
		uint32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		V_22 = ((int64_t)(uint64_t)L_218);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_219 = ___1_zz;
		NullCheck(L_219);
		int32_t L_220 = ((int32_t)14);
		uint32_t L_221 = (L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_220));
		V_23 = ((int64_t)(uint64_t)L_221);
		uint64_t L_222 = V_13;
		uint64_t L_223 = V_21;
		uint64_t L_224 = V_0;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_222, ((int64_t)il2cpp_codegen_multiply((int64_t)L_223, (int64_t)L_224))));
		uint64_t L_225 = V_13;
		V_3 = ((int32_t)(uint32_t)L_225);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_226 = ___1_zz;
		uint32_t L_227 = V_3;
		uint32_t L_228 = V_2;
		NullCheck(L_226);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)((int32_t)L_227<<1))|(int32_t)L_228)));
		uint32_t L_229 = V_3;
		V_2 = ((int32_t)((uint32_t)L_229>>((int32_t)31)));
		uint64_t L_230 = V_14;
		uint64_t L_231 = V_13;
		uint64_t L_232 = V_21;
		uint64_t L_233 = V_4;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_231>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_232, (int64_t)L_233))))));
		uint64_t L_234 = V_16;
		uint64_t L_235 = V_14;
		uint64_t L_236 = V_21;
		uint64_t L_237 = V_6;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_234, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_235>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_236, (int64_t)L_237))))));
		uint64_t L_238 = V_17;
		uint64_t L_239 = V_16;
		uint64_t L_240 = V_21;
		uint64_t L_241 = V_9;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_239>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_240, (int64_t)L_241))))));
		uint64_t L_242 = V_19;
		uint64_t L_243 = V_17;
		uint64_t L_244 = V_21;
		uint64_t L_245 = V_12;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_242, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_243>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_244, (int64_t)L_245))))));
		uint64_t L_246 = V_20;
		uint64_t L_247 = V_19;
		uint64_t L_248 = V_21;
		uint64_t L_249 = V_15;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_246, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_247>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_248, (int64_t)L_249))))));
		uint64_t L_250 = V_22;
		uint64_t L_251 = V_20;
		uint64_t L_252 = V_21;
		uint64_t L_253 = V_18;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_251>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_252, (int64_t)L_253))))));
		uint64_t L_254 = V_23;
		uint64_t L_255 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_254, ((int64_t)((uint64_t)L_255>>((int32_t)32)))));
		uint64_t L_256 = V_14;
		V_3 = ((int32_t)(uint32_t)L_256);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_257 = ___1_zz;
		uint32_t L_258 = V_3;
		uint32_t L_259 = V_2;
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)((int32_t)L_258<<1))|(int32_t)L_259)));
		uint32_t L_260 = V_3;
		V_2 = ((int32_t)((uint32_t)L_260>>((int32_t)31)));
		uint64_t L_261 = V_16;
		V_3 = ((int32_t)(uint32_t)L_261);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_262 = ___1_zz;
		uint32_t L_263 = V_3;
		uint32_t L_264 = V_2;
		NullCheck(L_262);
		(L_262)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_263<<1))|(int32_t)L_264)));
		uint32_t L_265 = V_3;
		V_2 = ((int32_t)((uint32_t)L_265>>((int32_t)31)));
		uint64_t L_266 = V_17;
		V_3 = ((int32_t)(uint32_t)L_266);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_267 = ___1_zz;
		uint32_t L_268 = V_3;
		uint32_t L_269 = V_2;
		NullCheck(L_267);
		(L_267)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_268<<1))|(int32_t)L_269)));
		uint32_t L_270 = V_3;
		V_2 = ((int32_t)((uint32_t)L_270>>((int32_t)31)));
		uint64_t L_271 = V_19;
		V_3 = ((int32_t)(uint32_t)L_271);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_272 = ___1_zz;
		uint32_t L_273 = V_3;
		uint32_t L_274 = V_2;
		NullCheck(L_272);
		(L_272)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_273<<1))|(int32_t)L_274)));
		uint32_t L_275 = V_3;
		V_2 = ((int32_t)((uint32_t)L_275>>((int32_t)31)));
		uint64_t L_276 = V_20;
		V_3 = ((int32_t)(uint32_t)L_276);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_277 = ___1_zz;
		uint32_t L_278 = V_3;
		uint32_t L_279 = V_2;
		NullCheck(L_277);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_278<<1))|(int32_t)L_279)));
		uint32_t L_280 = V_3;
		V_2 = ((int32_t)((uint32_t)L_280>>((int32_t)31)));
		uint64_t L_281 = V_22;
		V_3 = ((int32_t)(uint32_t)L_281);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_282 = ___1_zz;
		uint32_t L_283 = V_3;
		uint32_t L_284 = V_2;
		NullCheck(L_282);
		(L_282)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_283<<1))|(int32_t)L_284)));
		uint32_t L_285 = V_3;
		V_2 = ((int32_t)((uint32_t)L_285>>((int32_t)31)));
		uint64_t L_286 = V_23;
		V_3 = ((int32_t)(uint32_t)L_286);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_287 = ___1_zz;
		uint32_t L_288 = V_3;
		uint32_t L_289 = V_2;
		NullCheck(L_287);
		(L_287)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_288<<1))|(int32_t)L_289)));
		uint32_t L_290 = V_3;
		V_2 = ((int32_t)((uint32_t)L_290>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_291 = ___1_zz;
		NullCheck(L_291);
		int32_t L_292 = ((int32_t)15);
		uint32_t L_293 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		uint64_t L_294 = V_23;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_293, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_294>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = ___1_zz;
		uint32_t L_296 = V_3;
		uint32_t L_297 = V_2;
		NullCheck(L_295);
		(L_295)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(((int32_t)((int32_t)L_296<<1))|(int32_t)L_297)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Square_m3AD442D83BB16BCAF3C38E8AA63D786E01488D55 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, int32_t ___3_zzOff, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	uint64_t V_26 = 0;
	uint64_t V_27 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int64_t)(uint64_t)L_3);
		V_2 = 0;
		V_24 = 7;
		V_25 = ((int32_t)16);
	}

IL_000e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		int32_t L_6 = V_24;
		int32_t L_7 = L_6;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		NullCheck(L_4);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_5, L_7));
		uint32_t L_9 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int64_t L_10 = ((int64_t)(uint64_t)L_9);
		V_26 = ((int64_t)il2cpp_codegen_multiply(L_10, L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		int32_t L_12 = ___3_zzOff;
		int32_t L_13 = V_25;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		V_25 = L_14;
		uint32_t L_15 = V_2;
		uint64_t L_16 = V_26;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_14))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_15<<((int32_t)31)))|((int32_t)(uint32_t)((int64_t)((uint64_t)L_16>>((int32_t)33)))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_zz;
		int32_t L_18 = ___3_zzOff;
		int32_t L_19 = V_25;
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		V_25 = L_20;
		uint64_t L_21 = V_26;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_18, L_20))), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_21>>1))));
		uint64_t L_22 = V_26;
		V_2 = ((int32_t)(uint32_t)L_22);
		int32_t L_23 = V_24;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_0;
		V_27 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_24, (int64_t)L_25));
		uint32_t L_26 = V_2;
		uint64_t L_27 = V_27;
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_26<<((int32_t)31)))))|((int64_t)((uint64_t)L_27>>((int32_t)33)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___2_zz;
		int32_t L_29 = ___3_zzOff;
		uint64_t L_30 = V_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)(uint32_t)L_30));
		uint64_t L_31 = V_27;
		V_2 = ((int32_t)(((int32_t)(uint32_t)((int64_t)((uint64_t)L_31>>((int32_t)32))))&1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___0_x;
		int32_t L_33 = ___1_xOff;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		uint32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)(uint64_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_zz;
		int32_t L_37 = ___3_zzOff;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 2));
		uint32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)(uint64_t)L_39);
		uint64_t L_40 = V_1;
		uint64_t L_41 = V_4;
		uint64_t L_42 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, ((int64_t)il2cpp_codegen_multiply((int64_t)L_41, (int64_t)L_42))));
		uint64_t L_43 = V_1;
		V_3 = ((int32_t)(uint32_t)L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_zz;
		int32_t L_45 = ___3_zzOff;
		uint32_t L_46 = V_3;
		uint32_t L_47 = V_2;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 1))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_46<<1))|(int32_t)L_47)));
		uint32_t L_48 = V_3;
		V_2 = ((int32_t)((uint32_t)L_48>>((int32_t)31)));
		uint64_t L_49 = V_5;
		uint64_t L_50 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_49, ((int64_t)((uint64_t)L_50>>((int32_t)32)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		int32_t L_52 = ___1_xOff;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 2));
		uint32_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)(uint64_t)L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___2_zz;
		int32_t L_56 = ___3_zzOff;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 3));
		uint32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_7 = ((int64_t)(uint64_t)L_58);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___2_zz;
		int32_t L_60 = ___3_zzOff;
		NullCheck(L_59);
		int32_t L_61 = ((int32_t)il2cpp_codegen_add(L_60, 4));
		uint32_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_8 = ((int64_t)(uint64_t)L_62);
		uint64_t L_63 = V_5;
		uint64_t L_64 = V_6;
		uint64_t L_65 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply((int64_t)L_64, (int64_t)L_65))));
		uint64_t L_66 = V_5;
		V_3 = ((int32_t)(uint32_t)L_66);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_zz;
		int32_t L_68 = ___3_zzOff;
		uint32_t L_69 = V_3;
		uint32_t L_70 = V_2;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, 2))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_69<<1))|(int32_t)L_70)));
		uint32_t L_71 = V_3;
		V_2 = ((int32_t)((uint32_t)L_71>>((int32_t)31)));
		uint64_t L_72 = V_7;
		uint64_t L_73 = V_5;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_4;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_73>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75))))));
		uint64_t L_76 = V_8;
		uint64_t L_77 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)((uint64_t)L_77>>((int32_t)32)))));
		uint64_t L_78 = V_7;
		V_7 = ((int64_t)((int64_t)L_78&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 3));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_9 = ((int64_t)(uint64_t)L_82);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_zz;
		int32_t L_84 = ___3_zzOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 5));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_10 = ((int64_t)(uint64_t)L_86);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___2_zz;
		int32_t L_88 = ___3_zzOff;
		NullCheck(L_87);
		int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 6));
		uint32_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_11 = ((int64_t)(uint64_t)L_90);
		uint64_t L_91 = V_7;
		uint64_t L_92 = V_9;
		uint64_t L_93 = V_0;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_multiply((int64_t)L_92, (int64_t)L_93))));
		uint64_t L_94 = V_7;
		V_3 = ((int32_t)(uint32_t)L_94);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___2_zz;
		int32_t L_96 = ___3_zzOff;
		uint32_t L_97 = V_3;
		uint32_t L_98 = V_2;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_96, 3))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_97<<1))|(int32_t)L_98)));
		uint32_t L_99 = V_3;
		V_2 = ((int32_t)((uint32_t)L_99>>((int32_t)31)));
		uint64_t L_100 = V_8;
		uint64_t L_101 = V_7;
		uint64_t L_102 = V_9;
		uint64_t L_103 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_101>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_102, (int64_t)L_103))))));
		uint64_t L_104 = V_10;
		uint64_t L_105 = V_8;
		uint64_t L_106 = V_9;
		uint64_t L_107 = V_6;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_105>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, (int64_t)L_107))))));
		uint64_t L_108 = V_8;
		V_8 = ((int64_t)((int64_t)L_108&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_109 = V_11;
		uint64_t L_110 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, ((int64_t)((uint64_t)L_110>>((int32_t)32)))));
		uint64_t L_111 = V_10;
		V_10 = ((int64_t)((int64_t)L_111&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_112 = ___0_x;
		int32_t L_113 = ___1_xOff;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_add(L_113, 4));
		uint32_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		V_12 = ((int64_t)(uint64_t)L_115);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___2_zz;
		int32_t L_117 = ___3_zzOff;
		NullCheck(L_116);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_117, 7));
		uint32_t L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		V_13 = ((int64_t)(uint64_t)L_119);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_120 = ___2_zz;
		int32_t L_121 = ___3_zzOff;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, 8));
		uint32_t L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_14 = ((int64_t)(uint64_t)L_123);
		uint64_t L_124 = V_8;
		uint64_t L_125 = V_12;
		uint64_t L_126 = V_0;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, ((int64_t)il2cpp_codegen_multiply((int64_t)L_125, (int64_t)L_126))));
		uint64_t L_127 = V_8;
		V_3 = ((int32_t)(uint32_t)L_127);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___2_zz;
		int32_t L_129 = ___3_zzOff;
		uint32_t L_130 = V_3;
		uint32_t L_131 = V_2;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_129, 4))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_130<<1))|(int32_t)L_131)));
		uint32_t L_132 = V_3;
		V_2 = ((int32_t)((uint32_t)L_132>>((int32_t)31)));
		uint64_t L_133 = V_10;
		uint64_t L_134 = V_8;
		uint64_t L_135 = V_12;
		uint64_t L_136 = V_4;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_133, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_134>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_135, (int64_t)L_136))))));
		uint64_t L_137 = V_11;
		uint64_t L_138 = V_10;
		uint64_t L_139 = V_12;
		uint64_t L_140 = V_6;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_137, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_138>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_139, (int64_t)L_140))))));
		uint64_t L_141 = V_10;
		V_10 = ((int64_t)((int64_t)L_141&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_142 = V_13;
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_12;
		uint64_t L_145 = V_9;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_142, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_143>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_144, (int64_t)L_145))))));
		uint64_t L_146 = V_11;
		V_11 = ((int64_t)((int64_t)L_146&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_147 = V_14;
		uint64_t L_148 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_147, ((int64_t)((uint64_t)L_148>>((int32_t)32)))));
		uint64_t L_149 = V_13;
		V_13 = ((int64_t)((int64_t)L_149&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_150 = ___0_x;
		int32_t L_151 = ___1_xOff;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 5));
		uint32_t L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		V_15 = ((int64_t)(uint64_t)L_153);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_154 = ___2_zz;
		int32_t L_155 = ___3_zzOff;
		NullCheck(L_154);
		int32_t L_156 = ((int32_t)il2cpp_codegen_add(L_155, ((int32_t)9)));
		uint32_t L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		V_16 = ((int64_t)(uint64_t)L_157);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_158 = ___2_zz;
		int32_t L_159 = ___3_zzOff;
		NullCheck(L_158);
		int32_t L_160 = ((int32_t)il2cpp_codegen_add(L_159, ((int32_t)10)));
		uint32_t L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		V_17 = ((int64_t)(uint64_t)L_161);
		uint64_t L_162 = V_10;
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_0;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_162, ((int64_t)il2cpp_codegen_multiply((int64_t)L_163, (int64_t)L_164))));
		uint64_t L_165 = V_10;
		V_3 = ((int32_t)(uint32_t)L_165);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_166 = ___2_zz;
		int32_t L_167 = ___3_zzOff;
		uint32_t L_168 = V_3;
		uint32_t L_169 = V_2;
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_167, 5))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_168<<1))|(int32_t)L_169)));
		uint32_t L_170 = V_3;
		V_2 = ((int32_t)((uint32_t)L_170>>((int32_t)31)));
		uint64_t L_171 = V_11;
		uint64_t L_172 = V_10;
		uint64_t L_173 = V_15;
		uint64_t L_174 = V_4;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_172>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_173, (int64_t)L_174))))));
		uint64_t L_175 = V_13;
		uint64_t L_176 = V_11;
		uint64_t L_177 = V_15;
		uint64_t L_178 = V_6;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_176>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_177, (int64_t)L_178))))));
		uint64_t L_179 = V_11;
		V_11 = ((int64_t)((int64_t)L_179&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_180 = V_14;
		uint64_t L_181 = V_13;
		uint64_t L_182 = V_15;
		uint64_t L_183 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_181>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_182, (int64_t)L_183))))));
		uint64_t L_184 = V_13;
		V_13 = ((int64_t)((int64_t)L_184&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_185 = V_16;
		uint64_t L_186 = V_14;
		uint64_t L_187 = V_15;
		uint64_t L_188 = V_12;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_186>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_187, (int64_t)L_188))))));
		uint64_t L_189 = V_14;
		V_14 = ((int64_t)((int64_t)L_189&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_190 = V_17;
		uint64_t L_191 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, ((int64_t)((uint64_t)L_191>>((int32_t)32)))));
		uint64_t L_192 = V_16;
		V_16 = ((int64_t)((int64_t)L_192&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = ___0_x;
		int32_t L_194 = ___1_xOff;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 6));
		uint32_t L_196 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		V_18 = ((int64_t)(uint64_t)L_196);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = ___2_zz;
		int32_t L_198 = ___3_zzOff;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, ((int32_t)11)));
		uint32_t L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		V_19 = ((int64_t)(uint64_t)L_200);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_201 = ___2_zz;
		int32_t L_202 = ___3_zzOff;
		NullCheck(L_201);
		int32_t L_203 = ((int32_t)il2cpp_codegen_add(L_202, ((int32_t)12)));
		uint32_t L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		V_20 = ((int64_t)(uint64_t)L_204);
		uint64_t L_205 = V_11;
		uint64_t L_206 = V_18;
		uint64_t L_207 = V_0;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, ((int64_t)il2cpp_codegen_multiply((int64_t)L_206, (int64_t)L_207))));
		uint64_t L_208 = V_11;
		V_3 = ((int32_t)(uint32_t)L_208);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ___2_zz;
		int32_t L_210 = ___3_zzOff;
		uint32_t L_211 = V_3;
		uint32_t L_212 = V_2;
		NullCheck(L_209);
		(L_209)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_210, 6))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_211<<1))|(int32_t)L_212)));
		uint32_t L_213 = V_3;
		V_2 = ((int32_t)((uint32_t)L_213>>((int32_t)31)));
		uint64_t L_214 = V_13;
		uint64_t L_215 = V_11;
		uint64_t L_216 = V_18;
		uint64_t L_217 = V_4;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_214, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_215>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_216, (int64_t)L_217))))));
		uint64_t L_218 = V_14;
		uint64_t L_219 = V_13;
		uint64_t L_220 = V_18;
		uint64_t L_221 = V_6;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_219>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_220, (int64_t)L_221))))));
		uint64_t L_222 = V_13;
		V_13 = ((int64_t)((int64_t)L_222&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_223 = V_16;
		uint64_t L_224 = V_14;
		uint64_t L_225 = V_18;
		uint64_t L_226 = V_9;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_223, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_224>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_225, (int64_t)L_226))))));
		uint64_t L_227 = V_14;
		V_14 = ((int64_t)((int64_t)L_227&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_228 = V_17;
		uint64_t L_229 = V_16;
		uint64_t L_230 = V_18;
		uint64_t L_231 = V_12;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_229>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_230, (int64_t)L_231))))));
		uint64_t L_232 = V_16;
		V_16 = ((int64_t)((int64_t)L_232&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_233 = V_19;
		uint64_t L_234 = V_17;
		uint64_t L_235 = V_18;
		uint64_t L_236 = V_15;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_233, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_234>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_235, (int64_t)L_236))))));
		uint64_t L_237 = V_17;
		V_17 = ((int64_t)((int64_t)L_237&((int64_t)(uint64_t)((uint32_t)(-1)))));
		uint64_t L_238 = V_20;
		uint64_t L_239 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, ((int64_t)((uint64_t)L_239>>((int32_t)32)))));
		uint64_t L_240 = V_19;
		V_19 = ((int64_t)((int64_t)L_240&((int64_t)(uint64_t)((uint32_t)(-1)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_241 = ___0_x;
		int32_t L_242 = ___1_xOff;
		NullCheck(L_241);
		int32_t L_243 = ((int32_t)il2cpp_codegen_add(L_242, 7));
		uint32_t L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		V_21 = ((int64_t)(uint64_t)L_244);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_245 = ___2_zz;
		int32_t L_246 = ___3_zzOff;
		NullCheck(L_245);
		int32_t L_247 = ((int32_t)il2cpp_codegen_add(L_246, ((int32_t)13)));
		uint32_t L_248 = (L_245)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		V_22 = ((int64_t)(uint64_t)L_248);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_249 = ___2_zz;
		int32_t L_250 = ___3_zzOff;
		NullCheck(L_249);
		int32_t L_251 = ((int32_t)il2cpp_codegen_add(L_250, ((int32_t)14)));
		uint32_t L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		V_23 = ((int64_t)(uint64_t)L_252);
		uint64_t L_253 = V_13;
		uint64_t L_254 = V_21;
		uint64_t L_255 = V_0;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_253, ((int64_t)il2cpp_codegen_multiply((int64_t)L_254, (int64_t)L_255))));
		uint64_t L_256 = V_13;
		V_3 = ((int32_t)(uint32_t)L_256);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_257 = ___2_zz;
		int32_t L_258 = ___3_zzOff;
		uint32_t L_259 = V_3;
		uint32_t L_260 = V_2;
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_258, 7))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_259<<1))|(int32_t)L_260)));
		uint32_t L_261 = V_3;
		V_2 = ((int32_t)((uint32_t)L_261>>((int32_t)31)));
		uint64_t L_262 = V_14;
		uint64_t L_263 = V_13;
		uint64_t L_264 = V_21;
		uint64_t L_265 = V_4;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_262, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_263>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_264, (int64_t)L_265))))));
		uint64_t L_266 = V_16;
		uint64_t L_267 = V_14;
		uint64_t L_268 = V_21;
		uint64_t L_269 = V_6;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_266, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_267>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_268, (int64_t)L_269))))));
		uint64_t L_270 = V_17;
		uint64_t L_271 = V_16;
		uint64_t L_272 = V_21;
		uint64_t L_273 = V_9;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_270, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_271>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_272, (int64_t)L_273))))));
		uint64_t L_274 = V_19;
		uint64_t L_275 = V_17;
		uint64_t L_276 = V_21;
		uint64_t L_277 = V_12;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_274, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_275>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_276, (int64_t)L_277))))));
		uint64_t L_278 = V_20;
		uint64_t L_279 = V_19;
		uint64_t L_280 = V_21;
		uint64_t L_281 = V_15;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_279>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_280, (int64_t)L_281))))));
		uint64_t L_282 = V_22;
		uint64_t L_283 = V_20;
		uint64_t L_284 = V_21;
		uint64_t L_285 = V_18;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_282, ((int64_t)il2cpp_codegen_add(((int64_t)((uint64_t)L_283>>((int32_t)32))), ((int64_t)il2cpp_codegen_multiply((int64_t)L_284, (int64_t)L_285))))));
		uint64_t L_286 = V_23;
		uint64_t L_287 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_286, ((int64_t)((uint64_t)L_287>>((int32_t)32)))));
		uint64_t L_288 = V_14;
		V_3 = ((int32_t)(uint32_t)L_288);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_289 = ___2_zz;
		int32_t L_290 = ___3_zzOff;
		uint32_t L_291 = V_3;
		uint32_t L_292 = V_2;
		NullCheck(L_289);
		(L_289)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_290, 8))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_291<<1))|(int32_t)L_292)));
		uint32_t L_293 = V_3;
		V_2 = ((int32_t)((uint32_t)L_293>>((int32_t)31)));
		uint64_t L_294 = V_16;
		V_3 = ((int32_t)(uint32_t)L_294);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = ___2_zz;
		int32_t L_296 = ___3_zzOff;
		uint32_t L_297 = V_3;
		uint32_t L_298 = V_2;
		NullCheck(L_295);
		(L_295)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_296, ((int32_t)9)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_297<<1))|(int32_t)L_298)));
		uint32_t L_299 = V_3;
		V_2 = ((int32_t)((uint32_t)L_299>>((int32_t)31)));
		uint64_t L_300 = V_17;
		V_3 = ((int32_t)(uint32_t)L_300);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_301 = ___2_zz;
		int32_t L_302 = ___3_zzOff;
		uint32_t L_303 = V_3;
		uint32_t L_304 = V_2;
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_302, ((int32_t)10)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_303<<1))|(int32_t)L_304)));
		uint32_t L_305 = V_3;
		V_2 = ((int32_t)((uint32_t)L_305>>((int32_t)31)));
		uint64_t L_306 = V_19;
		V_3 = ((int32_t)(uint32_t)L_306);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_307 = ___2_zz;
		int32_t L_308 = ___3_zzOff;
		uint32_t L_309 = V_3;
		uint32_t L_310 = V_2;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_308, ((int32_t)11)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_309<<1))|(int32_t)L_310)));
		uint32_t L_311 = V_3;
		V_2 = ((int32_t)((uint32_t)L_311>>((int32_t)31)));
		uint64_t L_312 = V_20;
		V_3 = ((int32_t)(uint32_t)L_312);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_313 = ___2_zz;
		int32_t L_314 = ___3_zzOff;
		uint32_t L_315 = V_3;
		uint32_t L_316 = V_2;
		NullCheck(L_313);
		(L_313)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_314, ((int32_t)12)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_315<<1))|(int32_t)L_316)));
		uint32_t L_317 = V_3;
		V_2 = ((int32_t)((uint32_t)L_317>>((int32_t)31)));
		uint64_t L_318 = V_22;
		V_3 = ((int32_t)(uint32_t)L_318);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_319 = ___2_zz;
		int32_t L_320 = ___3_zzOff;
		uint32_t L_321 = V_3;
		uint32_t L_322 = V_2;
		NullCheck(L_319);
		(L_319)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_320, ((int32_t)13)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_321<<1))|(int32_t)L_322)));
		uint32_t L_323 = V_3;
		V_2 = ((int32_t)((uint32_t)L_323>>((int32_t)31)));
		uint64_t L_324 = V_23;
		V_3 = ((int32_t)(uint32_t)L_324);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_325 = ___2_zz;
		int32_t L_326 = ___3_zzOff;
		uint32_t L_327 = V_3;
		uint32_t L_328 = V_2;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_326, ((int32_t)14)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_327<<1))|(int32_t)L_328)));
		uint32_t L_329 = V_3;
		V_2 = ((int32_t)((uint32_t)L_329>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_330 = ___2_zz;
		int32_t L_331 = ___3_zzOff;
		NullCheck(L_330);
		int32_t L_332 = ((int32_t)il2cpp_codegen_add(L_331, ((int32_t)15)));
		uint32_t L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		uint64_t L_334 = V_23;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_333, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_334>>((int32_t)32))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_335 = ___2_zz;
		int32_t L_336 = ___3_zzOff;
		uint32_t L_337 = V_3;
		uint32_t L_338 = V_2;
		NullCheck(L_335);
		(L_335)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_336, ((int32_t)15)))), (uint32_t)((int32_t)(((int32_t)((int32_t)L_337<<1))|(int32_t)L_338)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_Sub_mAB605C37CA62D4BC45DBFFDC886C149006E1A012 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_x;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___1_y;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___1_y;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___0_x;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___1_y;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___2_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___0_x;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___0_x;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___1_y;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___2_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___0_x;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___1_y;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add(L_70, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___2_z;
		int64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)(L_79>>((int32_t)32)));
		int64_t L_80 = V_0;
		return ((int32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_Sub_m12C4A91AE6406A9C6CA3B3B6929CEA487110DFA2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, int32_t ___3_yOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = ___1_xOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___4_z;
		int32_t L_10 = ___5_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		int32_t L_15 = ___1_xOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___2_y;
		int32_t L_19 = ___3_yOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___4_z;
		int32_t L_23 = ___5_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		int32_t L_28 = ___1_xOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___2_y;
		int32_t L_32 = ___3_yOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___4_z;
		int32_t L_36 = ___5_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___0_x;
		int32_t L_41 = ___1_xOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___2_y;
		int32_t L_45 = ___3_yOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___4_z;
		int32_t L_49 = ___5_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___0_x;
		int32_t L_54 = ___1_xOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___2_y;
		int32_t L_58 = ___3_yOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___4_z;
		int32_t L_62 = ___5_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___0_x;
		int32_t L_67 = ___1_xOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___2_y;
		int32_t L_71 = ___3_yOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___4_z;
		int32_t L_75 = ___5_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___0_x;
		int32_t L_80 = ___1_xOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 6));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___2_y;
		int32_t L_84 = ___3_yOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 6));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int64_t)il2cpp_codegen_add(L_78, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___4_z;
		int32_t L_88 = ___5_zOff;
		int64_t L_89 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 6))), (uint32_t)((int32_t)(uint32_t)L_89));
		int64_t L_90 = V_0;
		V_0 = ((int64_t)(L_90>>((int32_t)32)));
		int64_t L_91 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___0_x;
		int32_t L_93 = ___1_xOff;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add(L_93, 7));
		uint32_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___2_y;
		int32_t L_97 = ___3_yOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 7));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_0 = ((int64_t)il2cpp_codegen_add(L_91, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_95), ((int64_t)(uint64_t)L_99)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___4_z;
		int32_t L_101 = ___5_zOff;
		int64_t L_102 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_101, 7))), (uint32_t)((int32_t)(uint32_t)L_102));
		int64_t L_103 = V_0;
		V_0 = ((int64_t)(L_103>>((int32_t)32)));
		int64_t L_104 = V_0;
		return ((int32_t)L_104);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_SubBothFrom_m59C824C573685F027CC6AAA301520AA14426C6AA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_y;
		NullCheck(L_7);
		int32_t L_8 = 0;
		uint32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6))), ((int64_t)(uint64_t)L_9)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_z;
		int64_t L_11 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 1;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_y;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_16), ((int64_t)(uint64_t)L_19))), ((int64_t)(uint64_t)L_22)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		int64_t L_24 = V_0;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = 2;
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___1_y;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_29), ((int64_t)(uint64_t)L_32))), ((int64_t)(uint64_t)L_35)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___2_z;
		int64_t L_37 = V_0;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_z;
		NullCheck(L_40);
		int32_t L_41 = 3;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		NullCheck(L_43);
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = ___1_y;
		NullCheck(L_46);
		int32_t L_47 = 3;
		uint32_t L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_42), ((int64_t)(uint64_t)L_45))), ((int64_t)(uint64_t)L_48)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___2_z;
		int64_t L_50 = V_0;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		NullCheck(L_53);
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___0_x;
		NullCheck(L_56);
		int32_t L_57 = 4;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = ___1_y;
		NullCheck(L_59);
		int32_t L_60 = 4;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_55), ((int64_t)(uint64_t)L_58))), ((int64_t)(uint64_t)L_61)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ___2_z;
		int64_t L_63 = V_0;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_z;
		NullCheck(L_66);
		int32_t L_67 = 5;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___0_x;
		NullCheck(L_69);
		int32_t L_70 = 5;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 5;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_68), ((int64_t)(uint64_t)L_71))), ((int64_t)(uint64_t)L_74)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___2_z;
		int64_t L_76 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_z;
		NullCheck(L_79);
		int32_t L_80 = 6;
		uint32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = ___0_x;
		NullCheck(L_82);
		int32_t L_83 = 6;
		uint32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___1_y;
		NullCheck(L_85);
		int32_t L_86 = 6;
		uint32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_0 = ((int64_t)il2cpp_codegen_add(L_78, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_81), ((int64_t)(uint64_t)L_84))), ((int64_t)(uint64_t)L_87)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ___2_z;
		int64_t L_89 = V_0;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_89));
		int64_t L_90 = V_0;
		V_0 = ((int64_t)(L_90>>((int32_t)32)));
		int64_t L_91 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_z;
		NullCheck(L_92);
		int32_t L_93 = 7;
		uint32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = ___0_x;
		NullCheck(L_95);
		int32_t L_96 = 7;
		uint32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_98 = ___1_y;
		NullCheck(L_98);
		int32_t L_99 = 7;
		uint32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_0 = ((int64_t)il2cpp_codegen_add(L_91, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_94), ((int64_t)(uint64_t)L_97))), ((int64_t)(uint64_t)L_100)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = ___2_z;
		int64_t L_102 = V_0;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_102));
		int64_t L_103 = V_0;
		V_0 = ((int64_t)(L_103>>((int32_t)32)));
		int64_t L_104 = V_0;
		return ((int32_t)L_104);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_SubFrom_m8F6DFCF81BC9E02D44B07E7E95864516878FE885 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_3), ((int64_t)(uint64_t)L_6)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		int64_t L_8 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(uint32_t)L_8));
		int64_t L_9 = V_0;
		V_0 = ((int64_t)(L_9>>((int32_t)32)));
		int64_t L_10 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_z;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		NullCheck(L_14);
		int32_t L_15 = 1;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_0 = ((int64_t)il2cpp_codegen_add(L_10, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_13), ((int64_t)(uint64_t)L_16)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___1_z;
		int64_t L_18 = V_0;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(uint32_t)L_18));
		int64_t L_19 = V_0;
		V_0 = ((int64_t)(L_19>>((int32_t)32)));
		int64_t L_20 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_z;
		NullCheck(L_21);
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 2;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_23), ((int64_t)(uint64_t)L_26)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___1_z;
		int64_t L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(uint32_t)L_28));
		int64_t L_29 = V_0;
		V_0 = ((int64_t)(L_29>>((int32_t)32)));
		int64_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___1_z;
		NullCheck(L_31);
		int32_t L_32 = 3;
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ___0_x;
		NullCheck(L_34);
		int32_t L_35 = 3;
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((int64_t)il2cpp_codegen_add(L_30, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_33), ((int64_t)(uint64_t)L_36)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___1_z;
		int64_t L_38 = V_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(uint32_t)L_38));
		int64_t L_39 = V_0;
		V_0 = ((int64_t)(L_39>>((int32_t)32)));
		int64_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___1_z;
		NullCheck(L_41);
		int32_t L_42 = 4;
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		NullCheck(L_44);
		int32_t L_45 = 4;
		uint32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_0 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_46)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___1_z;
		int64_t L_48 = V_0;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(uint32_t)L_48));
		int64_t L_49 = V_0;
		V_0 = ((int64_t)(L_49>>((int32_t)32)));
		int64_t L_50 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_z;
		NullCheck(L_51);
		int32_t L_52 = 5;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___0_x;
		NullCheck(L_54);
		int32_t L_55 = 5;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_0 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_53), ((int64_t)(uint64_t)L_56)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_z;
		int64_t L_58 = V_0;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)(uint32_t)L_58));
		int64_t L_59 = V_0;
		V_0 = ((int64_t)(L_59>>((int32_t)32)));
		int64_t L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___1_z;
		NullCheck(L_61);
		int32_t L_62 = 6;
		uint32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = ___0_x;
		NullCheck(L_64);
		int32_t L_65 = 6;
		uint32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_0 = ((int64_t)il2cpp_codegen_add(L_60, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_63), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___1_z;
		int64_t L_68 = V_0;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(uint32_t)L_68));
		int64_t L_69 = V_0;
		V_0 = ((int64_t)(L_69>>((int32_t)32)));
		int64_t L_70 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___1_z;
		NullCheck(L_71);
		int32_t L_72 = 7;
		uint32_t L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___0_x;
		NullCheck(L_74);
		int32_t L_75 = 7;
		uint32_t L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		V_0 = ((int64_t)il2cpp_codegen_add(L_70, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_73), ((int64_t)(uint64_t)L_76)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = ___1_z;
		int64_t L_78 = V_0;
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(uint32_t)L_78));
		int64_t L_79 = V_0;
		V_0 = ((int64_t)(L_79>>((int32_t)32)));
		int64_t L_80 = V_0;
		return ((int32_t)L_80);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nat256_SubFrom_mD1A31893A9A623CEC3EB79B7CFB89E7971F6BA6A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		int64_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		int32_t L_2 = ___3_zOff;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		int32_t L_6 = ___1_xOff;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_4), ((int64_t)(uint64_t)L_8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		int64_t L_11 = V_0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)L_11));
		int64_t L_12 = V_0;
		V_0 = ((int64_t)(L_12>>((int32_t)32)));
		int64_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		int32_t L_15 = ___3_zOff;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		int32_t L_19 = ___1_xOff;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int64_t)il2cpp_codegen_add(L_13, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_17), ((int64_t)(uint64_t)L_21)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___2_z;
		int32_t L_23 = ___3_zOff;
		int64_t L_24 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_23, 1))), (uint32_t)((int32_t)(uint32_t)L_24));
		int64_t L_25 = V_0;
		V_0 = ((int64_t)(L_25>>((int32_t)32)));
		int64_t L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		NullCheck(L_27);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 2));
		uint32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___0_x;
		int32_t L_32 = ___1_xOff;
		NullCheck(L_31);
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 2));
		uint32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_0 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_30), ((int64_t)(uint64_t)L_34)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_z;
		int32_t L_36 = ___3_zOff;
		int64_t L_37 = V_0;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(uint32_t)L_37));
		int64_t L_38 = V_0;
		V_0 = ((int64_t)(L_38>>((int32_t)32)));
		int64_t L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___2_z;
		int32_t L_41 = ___3_zOff;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_41, 3));
		uint32_t L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___0_x;
		int32_t L_45 = ___1_xOff;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_45, 3));
		uint32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_0 = ((int64_t)il2cpp_codegen_add(L_39, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_43), ((int64_t)(uint64_t)L_47)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___2_z;
		int32_t L_49 = ___3_zOff;
		int64_t L_50 = V_0;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 3))), (uint32_t)((int32_t)(uint32_t)L_50));
		int64_t L_51 = V_0;
		V_0 = ((int64_t)(L_51>>((int32_t)32)));
		int64_t L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = ___2_z;
		int32_t L_54 = ___3_zOff;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_add(L_54, 4));
		uint32_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___0_x;
		int32_t L_58 = ___1_xOff;
		NullCheck(L_57);
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 4));
		uint32_t L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_0 = ((int64_t)il2cpp_codegen_add(L_52, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_60)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = ___2_z;
		int32_t L_62 = ___3_zOff;
		int64_t L_63 = V_0;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 4))), (uint32_t)((int32_t)(uint32_t)L_63));
		int64_t L_64 = V_0;
		V_0 = ((int64_t)(L_64>>((int32_t)32)));
		int64_t L_65 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_z;
		int32_t L_67 = ___3_zOff;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 5));
		uint32_t L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = ___0_x;
		int32_t L_71 = ___1_xOff;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 5));
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_0 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_69), ((int64_t)(uint64_t)L_73)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = ___2_z;
		int32_t L_75 = ___3_zOff;
		int64_t L_76 = V_0;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_75, 5))), (uint32_t)((int32_t)(uint32_t)L_76));
		int64_t L_77 = V_0;
		V_0 = ((int64_t)(L_77>>((int32_t)32)));
		int64_t L_78 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___2_z;
		int32_t L_80 = ___3_zOff;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 6));
		uint32_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___0_x;
		int32_t L_84 = ___1_xOff;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)il2cpp_codegen_add(L_84, 6));
		uint32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_0 = ((int64_t)il2cpp_codegen_add(L_78, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_86)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___2_z;
		int32_t L_88 = ___3_zOff;
		int64_t L_89 = V_0;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_88, 6))), (uint32_t)((int32_t)(uint32_t)L_89));
		int64_t L_90 = V_0;
		V_0 = ((int64_t)(L_90>>((int32_t)32)));
		int64_t L_91 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = ___2_z;
		int32_t L_93 = ___3_zOff;
		NullCheck(L_92);
		int32_t L_94 = ((int32_t)il2cpp_codegen_add(L_93, 7));
		uint32_t L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___0_x;
		int32_t L_97 = ___1_xOff;
		NullCheck(L_96);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(L_97, 7));
		uint32_t L_99 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_0 = ((int64_t)il2cpp_codegen_add(L_91, ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_95), ((int64_t)(uint64_t)L_99)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_100 = ___2_z;
		int32_t L_101 = ___3_zOff;
		int64_t L_102 = V_0;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_101, 7))), (uint32_t)((int32_t)(uint32_t)L_102));
		int64_t L_103 = V_0;
		V_0 = ((int64_t)(L_103>>((int32_t)32)));
		int64_t L_104 = V_0;
		return ((int32_t)L_104);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat256_ToBigInteger_mF26988E3827C5D993D248D502E8DA6C9F02076ED (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint32_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt32_To_BE_mC1F3FE5842A7ACFDCFAD8C602F3C97B9A660D89D(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(7, L_8))<<2)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat256_ToBigInteger64_mADEBBBFDEC3E173A25DD26CC0F7E18B40D60AADF (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mDD3A664874DD413CE9AC816A95B12612FA6E9B58(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(3, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256_Zero_mE760DEBF52F13175A29686D78F63107E5AABFD99 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_z;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_z;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_z;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_z;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_z;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_z;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___0_z;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat256__ctor_mE6313FE0C4EF4130A6B1BE16234F0A114EE5AC0F (Nat256_t667B8F3BF508A42E19A4899219A3B33B1EFC80A4* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat320_Copy64_mC585A8D4EBAA535999498138233CC96C59DCDE27 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_19);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat320_Create64_mA7F255FDD91895F15F4D8FEA451C137140BA9CC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)5);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat320_CreateExt64_m528A1A339DDA8E337587613BA0A1373F24A0603F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat320_Eq64_mBE663E3526DB7B2479465B70FD68CCAB770CF3E8 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 4;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat320_FromBigInteger64_mF3C34269302F5B95B4D114ECD074EBDA6B94B7DA (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)320))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat320_FromBigInteger64_mF3C34269302F5B95B4D114ECD074EBDA6B94B7DA_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5;
		L_5 = Nat320_Create64_mA7F255FDD91895F15F4D8FEA451C137140BA9CC3(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = BigInteger_get_LongValue_mBA593F51D50A9E6DC7BAF26D224F29DC651605D6(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)64), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat320_IsOne64_m5670CBC4801AAAA0A55F79E90BB5700A2E74456B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat320_IsZero64_m2A90B1E32FEFF1DAFDD5E1762B95F36595843FB9 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat320_ToBigInteger64_m3E4B928462F29A57FAB00531F1F64647BB814E76 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mDD3A664874DD413CE9AC816A95B12612FA6E9B58(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(4, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)5)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat320__ctor_m084EECD8D2EDC73E25BB8D66AC8D95B9E241B9DB (Nat320_t1DE8606CD0A399C161FB50AD1BE7807EC3070890* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat384_Mul_m970B67D59F05E584B43C351FD219D8CA0877B579 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	bool V_4 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t G_B2_0 = 0;
	uint32_t G_B1_0 = 0;
	uint32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_zz;
		Nat192_Mul_m2D39F1A2806A0440AA161F46DEA38C3106F270B7(L_0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_zz;
		Nat192_Mul_m0FD275CADC67725EC1A23CFE00A0ABF02677FAD7(L_3, 6, L_4, 6, L_5, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_zz;
		uint32_t L_8;
		L_8 = Nat192_AddToEachOther_m858E95828091AEC75AA1CA99D57958D25003D2B8(L_6, 6, L_7, ((int32_t)12), NULL);
		V_0 = L_8;
		uint32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		uint32_t L_12;
		L_12 = Nat192_AddTo_mB63A66B9913B1D74618339239BCE46850392D799(L_10, 0, L_11, 6, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_12));
		uint32_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___2_zz;
		uint32_t L_16 = V_1;
		uint32_t L_17;
		L_17 = Nat192_AddTo_mB63A66B9913B1D74618339239BCE46850392D799(L_14, ((int32_t)18), L_15, ((int32_t)12), L_16, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = Nat192_Create_m44F131C01A64398660FB63F0E0F7A0B9393A40D4(NULL);
		V_2 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19;
		L_19 = Nat192_Create_m44F131C01A64398660FB63F0E0F7A0B9393A40D4(NULL);
		V_3 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		bool L_23;
		L_23 = Nat192_Diff_m6CC86C98045B35085034F520898C3C28779D45C0(L_20, 6, L_21, 0, L_22, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		bool L_27;
		L_27 = Nat192_Diff_m6CC86C98045B35085034F520898C3C28779D45C0(L_24, 6, L_25, 0, L_26, 0, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28;
		L_28 = Nat192_CreateExt_m733B350C00198156D856E0ACA9A97027CC7AC1AD(NULL);
		V_5 = L_28;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_5;
		Nat192_Mul_m2D39F1A2806A0440AA161F46DEA38C3106F270B7(L_29, L_30, L_31, NULL);
		uint32_t L_32 = V_0;
		bool L_33 = V_4;
		if (L_33)
		{
			G_B2_0 = L_32;
			goto IL_0087;
		}
		G_B1_0 = L_32;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_zz;
		int32_t L_36;
		L_36 = Nat_SubFrom_m0409B93F8C6486684B986EF1AEB0B0421376F8EB(((int32_t)12), L_34, 0, L_35, 6, NULL);
		G_B3_0 = ((uint32_t)(L_36));
		G_B3_1 = G_B1_0;
		goto IL_0093;
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___2_zz;
		uint32_t L_39;
		L_39 = Nat_AddTo_mAD5D2486926CA51E1558A71EFB4B31327C322E69(((int32_t)12), L_37, 0, L_38, 6, NULL);
		G_B3_0 = L_39;
		G_B3_1 = G_B2_0;
	}

IL_0093:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		uint32_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_zz;
		uint32_t L_42;
		L_42 = Nat_AddWordAt_m35F7C3455CB491996C5A649EF2267CE3676782E0(((int32_t)24), L_40, L_41, ((int32_t)18), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat384_Square_m15FA89BF77F329769491E4F0664AE08D16757835 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_zz;
		Nat192_Square_m0290385D07CABF4F0660359F4CCE6C46528AABA4(L_0, L_1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_zz;
		Nat192_Square_m7CED50F5E87CBBAEC4E567CF9E9DF9E0AFEAEA48(L_2, 6, L_3, ((int32_t)12), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_zz;
		uint32_t L_6;
		L_6 = Nat192_AddToEachOther_m858E95828091AEC75AA1CA99D57958D25003D2B8(L_4, 6, L_5, ((int32_t)12), NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		uint32_t L_10;
		L_10 = Nat192_AddTo_mB63A66B9913B1D74618339239BCE46850392D799(L_8, 0, L_9, 6, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_10));
		uint32_t L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___1_zz;
		uint32_t L_14 = V_1;
		uint32_t L_15;
		L_15 = Nat192_AddTo_mB63A66B9913B1D74618339239BCE46850392D799(L_12, ((int32_t)18), L_13, ((int32_t)12), L_14, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = Nat192_Create_m44F131C01A64398660FB63F0E0F7A0B9393A40D4(NULL);
		V_2 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		bool L_20;
		L_20 = Nat192_Diff_m6CC86C98045B35085034F520898C3C28779D45C0(L_17, 6, L_18, 0, L_19, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21;
		L_21 = Nat192_CreateExt_m733B350C00198156D856E0ACA9A97027CC7AC1AD(NULL);
		V_3 = L_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		Nat192_Square_m0290385D07CABF4F0660359F4CCE6C46528AABA4(L_22, L_23, NULL);
		uint32_t L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___1_zz;
		int32_t L_27;
		L_27 = Nat_SubFrom_m0409B93F8C6486684B986EF1AEB0B0421376F8EB(((int32_t)12), L_25, 0, L_26, 6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, L_27));
		uint32_t L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___1_zz;
		uint32_t L_30;
		L_30 = Nat_AddWordAt_m35F7C3455CB491996C5A649EF2267CE3676782E0(((int32_t)24), L_28, L_29, ((int32_t)18), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat384__ctor_m3DE7A97D6E68AC50F84912F0B5EEA0B00EA2F030 (Nat384_t9F6C8F31B91B0070864BABF202B5B515B9955D08* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat448_Copy64_m7068B8D90F5DAC0647897F3806167DAF9062042A (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_19);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_23);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = ___0_x;
		NullCheck(L_25);
		int32_t L_26 = 6;
		int64_t L_27 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat448_Create64_m3824C1576C5F09439A8270A8CA08F698FC13EB3C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)7);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat448_CreateExt64_mA20651C0DD3C8B1021318152743A1B5E75408F2A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat448_Eq64_m7A9EE81C19D50B0F89BA45AD0245364315F7D9CA (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 6;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat448_FromBigInteger64_mEB98B1ECB7616C458A1955849BB62E7EC9156265 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)448))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat448_FromBigInteger64_mEB98B1ECB7616C458A1955849BB62E7EC9156265_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5;
		L_5 = Nat448_Create64_m3824C1576C5F09439A8270A8CA08F698FC13EB3C(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = BigInteger_get_LongValue_mBA593F51D50A9E6DC7BAF26D224F29DC651605D6(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)64), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat448_IsOne64_mDACDC7EC767030F5AA26DD5AF625473C2522F1BC (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)7)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat448_IsZero64_mD7DD7305447CC98F252D36D330424587B35A4ECD (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)7)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat448_ToBigInteger64_m9FE3D9A249C7EB4C9C3F97B329DB3F8D2CE61B8D (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)56));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mDD3A664874DD413CE9AC816A95B12612FA6E9B58(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(6, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)7)))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat448__ctor_m0A22F1D7AEBE1FD308A19AEB961E27FE7B7207D8 (Nat448_t27F054A5EE8BC804D37DC4222802C4A552107D46* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat512_Mul_m4150B31FC577FD8B413A0F844147F3F617F3DBD6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	bool V_4 = false;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	uint32_t G_B2_0 = 0;
	uint32_t G_B1_0 = 0;
	uint32_t G_B3_0 = 0;
	uint32_t G_B3_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_zz;
		Nat256_Mul_m7B05CD2F2310C0EEFF81BD401AF0DA668D891ED3(L_0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_zz;
		Nat256_Mul_mCA7DA36B48072C2269E7AE54CE7040B9CEDBB93D(L_3, 8, L_4, 8, L_5, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_zz;
		uint32_t L_8;
		L_8 = Nat256_AddToEachOther_mA38806D9CC6A65BA94639BA4034BD2E370AF58B3(L_6, 8, L_7, ((int32_t)16), NULL);
		V_0 = L_8;
		uint32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_zz;
		uint32_t L_12;
		L_12 = Nat256_AddTo_mE25983E2F2B488AA6213A334054EB185BE2B9897(L_10, 0, L_11, 8, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_12));
		uint32_t L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___2_zz;
		uint32_t L_16 = V_1;
		uint32_t L_17;
		L_17 = Nat256_AddTo_mE25983E2F2B488AA6213A334054EB185BE2B9897(L_14, ((int32_t)24), L_15, ((int32_t)16), L_16, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = Nat256_Create_m0DFB535CD022569F3CF22B6EC150A7A4B776E729(NULL);
		V_2 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19;
		L_19 = Nat256_Create_m0DFB535CD022569F3CF22B6EC150A7A4B776E729(NULL);
		V_3 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		bool L_23;
		L_23 = Nat256_Diff_mD41866D14BE486F806BA070720AA6BB733329539(L_20, 8, L_21, 0, L_22, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		bool L_27;
		L_27 = Nat256_Diff_mD41866D14BE486F806BA070720AA6BB733329539(L_24, 8, L_25, 0, L_26, 0, NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28;
		L_28 = Nat256_CreateExt_m1034567363D97AC4EB8D492359DE3A052FE00355(NULL);
		V_5 = L_28;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_5;
		Nat256_Mul_m7B05CD2F2310C0EEFF81BD401AF0DA668D891ED3(L_29, L_30, L_31, NULL);
		uint32_t L_32 = V_0;
		bool L_33 = V_4;
		if (L_33)
		{
			G_B2_0 = L_32;
			goto IL_0087;
		}
		G_B1_0 = L_32;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___2_zz;
		int32_t L_36;
		L_36 = Nat_SubFrom_m0409B93F8C6486684B986EF1AEB0B0421376F8EB(((int32_t)16), L_34, 0, L_35, 8, NULL);
		G_B3_0 = ((uint32_t)(L_36));
		G_B3_1 = G_B1_0;
		goto IL_0093;
	}

IL_0087:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = ___2_zz;
		uint32_t L_39;
		L_39 = Nat_AddTo_mAD5D2486926CA51E1558A71EFB4B31327C322E69(((int32_t)16), L_37, 0, L_38, 8, NULL);
		G_B3_0 = L_39;
		G_B3_1 = G_B2_0;
	}

IL_0093:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		uint32_t L_40 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ___2_zz;
		uint32_t L_42;
		L_42 = Nat_AddWordAt_m35F7C3455CB491996C5A649EF2267CE3676782E0(((int32_t)32), L_40, L_41, ((int32_t)24), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat512_Square_m43F0F22D065C6566B46823AF930E22132D7007AA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_zz, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_zz;
		Nat256_Square_m73A64C1B7958720A9C82342EDEF2960B12219997(L_0, L_1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_zz;
		Nat256_Square_m3AD442D83BB16BCAF3C38E8AA63D786E01488D55(L_2, 8, L_3, ((int32_t)16), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_zz;
		uint32_t L_6;
		L_6 = Nat256_AddToEachOther_mA38806D9CC6A65BA94639BA4034BD2E370AF58B3(L_4, 8, L_5, ((int32_t)16), NULL);
		V_0 = L_6;
		uint32_t L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_zz;
		uint32_t L_10;
		L_10 = Nat256_AddTo_mE25983E2F2B488AA6213A334054EB185BE2B9897(L_8, 0, L_9, 8, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_10));
		uint32_t L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_zz;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___1_zz;
		uint32_t L_14 = V_1;
		uint32_t L_15;
		L_15 = Nat256_AddTo_mE25983E2F2B488AA6213A334054EB185BE2B9897(L_12, ((int32_t)24), L_13, ((int32_t)16), L_14, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_15));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = Nat256_Create_m0DFB535CD022569F3CF22B6EC150A7A4B776E729(NULL);
		V_2 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		bool L_20;
		L_20 = Nat256_Diff_mD41866D14BE486F806BA070720AA6BB733329539(L_17, 8, L_18, 0, L_19, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21;
		L_21 = Nat256_CreateExt_m1034567363D97AC4EB8D492359DE3A052FE00355(NULL);
		V_3 = L_21;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		Nat256_Square_m73A64C1B7958720A9C82342EDEF2960B12219997(L_22, L_23, NULL);
		uint32_t L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = ___1_zz;
		int32_t L_27;
		L_27 = Nat_SubFrom_m0409B93F8C6486684B986EF1AEB0B0421376F8EB(((int32_t)16), L_25, 0, L_26, 8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, L_27));
		uint32_t L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___1_zz;
		uint32_t L_30;
		L_30 = Nat_AddWordAt_m35F7C3455CB491996C5A649EF2267CE3676782E0(((int32_t)32), L_28, L_29, ((int32_t)24), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat512__ctor_mB7543B7B71D86DF58A2B9C141514ECA41DADAE1C (Nat512_t99110FE3EC1EA92D2F11097F14F6742A874FBF18* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat576_Copy64_mD69138722736D88D21F327FC1AD8EA9F510F56AA (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___0_x;
		NullCheck(L_5);
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_11);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 3;
		int64_t L_15 = (int64_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_x;
		NullCheck(L_17);
		int32_t L_18 = 4;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_19);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 5;
		int64_t L_23 = (int64_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_23);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = ___0_x;
		NullCheck(L_25);
		int32_t L_26 = 6;
		int64_t L_27 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_27);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_x;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_31);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___1_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = ___0_x;
		NullCheck(L_33);
		int32_t L_34 = 8;
		int64_t L_35 = (int64_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_35);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat576_Create64_mF5590C6196D08EC04FBA979F854B6D3F656D92E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat576_CreateExt64_m36CA5A83A4765D086386F103F3AE4EBC932E491B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat576_Eq64_mDC2010BC1CE25300EEE79B32E29B623B6A251C67 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 8;
		goto IL_0012;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((((int64_t)L_3) == ((int64_t)L_7)))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)0;
	}

IL_000e:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Nat576_FromBigInteger64_m2BF643F31B6FFC379BCA5E126BC7D903040FE9F2 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_x, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_x;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)576))))
		{
			goto IL_001c;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Nat576_FromBigInteger64_m2BF643F31B6FFC379BCA5E126BC7D903040FE9F2_RuntimeMethod_var)));
	}

IL_001c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5;
		L_5 = Nat576_Create64_mF5590C6196D08EC04FBA979F854B6D3F656D92E4(NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_003d;
	}

IL_0026:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_9 = ___0_x;
		NullCheck(L_9);
		int64_t L_10;
		L_10 = BigInteger_get_LongValue_mBA593F51D50A9E6DC7BAF26D224F29DC651605D6(L_9, NULL);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint64_t)L_10);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_11 = ___0_x;
		NullCheck(L_11);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12;
		L_12 = BigInteger_ShiftRight_m25B21BBBCA51C21B2F5BF9ACDB03E3DC68FB8DE3(L_11, ((int32_t)64), NULL);
		___0_x = L_12;
	}

IL_003d:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		if (L_14)
		{
			goto IL_0026;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat576_IsOne64_mAF75E9FC2853AF77AC703AA7B8FF8C1CEF6AB4EA (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if ((((int64_t)L_2) == ((int64_t)((int64_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		return (bool)0;
	}

IL_0009:
	{
		V_0 = 1;
		goto IL_0018;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if (!L_6)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat576_IsZero64_mF7083694496A529B6D3D631487824FC92F766404 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000f:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* Nat576_ToBigInteger64_mE6E87F258B1D1690128DEF917B321DB2715BDD7F (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)72));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000c:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		uint64_t L_5 = V_2;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		Pack_UInt64_To_BE_mDD3A664874DD413CE9AC816A95B12612FA6E9B58(L_6, L_7, ((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_8))<<3)), NULL);
	}

IL_001f:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)9))))
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)il2cpp_codegen_object_new(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger__ctor_m25E6912DF736F3E29CFDA4D5E3DCAC8596B7EC96(L_12, 1, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nat576__ctor_mF2CBCAE39B04118948591512150A6E37788644D2 (Nat576_tE9D8D4555CECFAC5EB15FD3AFFD8E1CB78FE269A* __this, const RuntimeMethod* method) 
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FiniteFields_GetBinaryExtensionField_mFDC9155286B7EA3A38927D9B64251D77F39C199E (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_exponents, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_exponents;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC418DF12EFC3347B9249DB32348AF09079D4B8F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC124196B821FEEA4E6C89B04C026563A557FFB2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FiniteFields_GetBinaryExtensionField_mFDC9155286B7EA3A38927D9B64251D77F39C199E_RuntimeMethod_var)));
	}

IL_0015:
	{
		V_0 = 1;
		goto IL_0037;
	}

IL_0019:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_exponents;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_exponents;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) > ((int32_t)L_11)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E7E5B27C32F322062A3E24D8F2436975287AD24)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC124196B821FEEA4E6C89B04C026563A557FFB2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FiniteFields_GetBinaryExtensionField_mFDC9155286B7EA3A38927D9B64251D77F39C199E_RuntimeMethod_var)));
	}

IL_0033:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0037:
	{
		int32_t L_14 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___0_exponents;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var))->___GF_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___0_exponents;
		GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* L_18 = (GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC*)il2cpp_codegen_object_new(GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC_il2cpp_TypeInfo_var);
		GF2Polynomial__ctor_mBAD261B38811EBFB0124F99D443006C798CB2DD3(L_18, L_17, NULL);
		GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* L_19 = (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34*)il2cpp_codegen_object_new(GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34_il2cpp_TypeInfo_var);
		GenericPolynomialExtensionField__ctor_m7F9180C93470FD5BAB031045EE93DA76DB7E6209(L_19, L_16, L_18, NULL);
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FiniteFields_GetPrimeField_mF80F5ED5C4F8474C823C242CD23D38747EC76067 (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_characteristic, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_characteristic;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_0, NULL);
		V_0 = L_1;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___0_characteristic;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)2)))
		{
			goto IL_0024;
		}
	}

IL_0014:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A997B3A9A8B12CFDBF937AF62469873CB6FAADD)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11458CB676B17FDBC854E855460B86C0F96BD86E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FiniteFields_GetPrimeField_mF80F5ED5C4F8474C823C242CD23D38747EC76067_RuntimeMethod_var)));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)3)))
		{
			goto IL_0045;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_7 = ___0_characteristic;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = BigInteger_get_IntValue_m05584D6A7C77090AAFD614D41AC11F04F0C65E74(L_7, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)3)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0045;
	}

IL_0039:
	{
		il2cpp_codegen_runtime_class_init_inline(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = ((FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var))->___GF_2;
		return L_11;
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = ((FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var))->___GF_3;
		return L_12;
	}

IL_0045:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___0_characteristic;
		PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* L_14 = (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638*)il2cpp_codegen_object_new(PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var);
		PrimeField__ctor_m8D1E637B292532360CA43DC144D067EBCCEB7E85(L_14, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiniteFields__ctor_m6F063F6EC314E4BBEE71ED0613A33283B659444B (FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FiniteFields__cctor_m0C6F250DE90E0903E752D1AC4D39BD4F634B1B08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0;
		L_0 = BigInteger_ValueOf_m8B0655645A74B513F1D4F058E1BBB28F3E0F9A1B(((int64_t)2), NULL);
		PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* L_1 = (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638*)il2cpp_codegen_object_new(PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var);
		PrimeField__ctor_m8D1E637B292532360CA43DC144D067EBCCEB7E85(L_1, L_0, NULL);
		((FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var))->___GF_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var))->___GF_2), (void*)L_1);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2;
		L_2 = BigInteger_ValueOf_m8B0655645A74B513F1D4F058E1BBB28F3E0F9A1B(((int64_t)3), NULL);
		PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* L_3 = (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638*)il2cpp_codegen_object_new(PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var);
		PrimeField__ctor_m8D1E637B292532360CA43DC144D067EBCCEB7E85(L_3, L_2, NULL);
		((FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var))->___GF_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_StaticFields*)il2cpp_codegen_static_fields_for(FiniteFields_t07C257B653399FFCA9E4F3CCC305D44EA6DD8510_il2cpp_TypeInfo_var))->___GF_3), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericPolynomialExtensionField__ctor_m7F9180C93470FD5BAB031045EE93DA76DB7E6209 (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, RuntimeObject* ___0_subfield, RuntimeObject* ___1_polynomial, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_subfield;
		__this->___subfield = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subfield), (void*)L_0);
		RuntimeObject* L_1 = ___1_polynomial;
		__this->___minimalPolynomial = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___minimalPolynomial), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* GenericPolynomialExtensionField_get_Characteristic_mE8180D811EB1BAED1D3AA451237A023AE9C6BF10 (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___subfield;
		NullCheck(L_0);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_1;
		L_1 = InterfaceFuncInvoker0< BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* >::Invoke(0, IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericPolynomialExtensionField_get_Dimension_mF0495CCC622157C2865DEC6A39169E2E4904878E (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPolynomial_t3D3D4D4EFE9C1D67042A2B4D62F1D66D9EDEA52B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___subfield;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = __this->___minimalPolynomial;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IPolynomial_t3D3D4D4EFE9C1D67042A2B4D62F1D66D9EDEA52B_il2cpp_TypeInfo_var, L_2);
		return ((int32_t)il2cpp_codegen_multiply(L_1, L_3));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GenericPolynomialExtensionField_get_Subfield_m636AE020E2B462DAD894430574F7AFF118F467B7 (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___subfield;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericPolynomialExtensionField_get_Degree_m2BDE566DD5EC650CAA354472CA589D6058E09086 (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPolynomial_t3D3D4D4EFE9C1D67042A2B4D62F1D66D9EDEA52B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___minimalPolynomial;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IPolynomial_t3D3D4D4EFE9C1D67042A2B4D62F1D66D9EDEA52B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GenericPolynomialExtensionField_get_MinimalPolynomial_m2E67F73846350ABC45DE0ECF524E96A1187C4461 (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___minimalPolynomial;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericPolynomialExtensionField_Equals_m3BD8C2B39952C0839F8B67FE33A225B9658828F2 (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34*)IsInstClass((RuntimeObject*)L_1, GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34_il2cpp_TypeInfo_var));
		GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		RuntimeObject* L_3 = __this->___subfield;
		GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___subfield;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_3, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_7 = __this->___minimalPolynomial;
		GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___minimalPolynomial;
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_7, L_9);
		return L_10;
	}

IL_0037:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericPolynomialExtensionField_GetHashCode_mCDBFF55B781B0C7E034758220F2A66CAF931FC4F (GenericPolynomialExtensionField_tA37D9202FEADE9AA63CDB416B901D6EAA30ADB34* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___subfield;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_0);
		RuntimeObject* L_2 = __this->___minimalPolynomial;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_2);
		int32_t L_4;
		L_4 = Integers_RotateLeft_m19CD752B23A07D0044D89E309A9F8DF8336589AF(L_3, ((int32_t)16), NULL);
		return ((int32_t)(L_1^L_4));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GF2Polynomial__ctor_mBAD261B38811EBFB0124F99D443006C798CB2DD3 (GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_exponents, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_exponents;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Arrays_Clone_m4C6B03355C28189780ACF0A72D2D6ABA82610F9A(L_0, NULL);
		__this->___exponents = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exponents), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GF2Polynomial_get_Degree_mC827D38CCF5EE77F4733285BA94DB1895EED4FE1 (GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___exponents;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___exponents;
		NullCheck(L_1);
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GF2Polynomial_GetExponentsPresent_m1A47023B3801E84ADC0876EAF4CB3E3D31B1E332 (GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___exponents;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Arrays_Clone_m4C6B03355C28189780ACF0A72D2D6ABA82610F9A(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GF2Polynomial_Equals_mD82878E739DECD894BC848E8B240B7D994AEED4E (GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC*)IsInstClass((RuntimeObject*)L_1, GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC_il2cpp_TypeInfo_var));
		GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___exponents;
		GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* L_4 = V_0;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___exponents;
		bool L_6;
		L_6 = Arrays_AreEqual_mB07284C014040F3DC8D4C5BAFDF4BE4FD64F1EB1(L_3, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GF2Polynomial_GetHashCode_m1F2AE4D2BD188FC03A1D827A8A4CBC1668DCEACD (GF2Polynomial_t243A8042F3AE492962B8EEA0A7F546328A6C7ACC* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___exponents;
		int32_t L_1;
		L_1 = Arrays_GetHashCode_mD49FE05FF2EDE70F019A957973705C2FB178B967(L_0, NULL);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimeField__ctor_m8D1E637B292532360CA43DC144D067EBCCEB7E85 (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* __this, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___0_characteristic, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___0_characteristic;
		__this->___characteristic = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characteristic), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* PrimeField_get_Characteristic_m154945B9B463D6B1D605B2913E7F94A2DC817BC5 (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = __this->___characteristic;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeField_get_Dimension_m0AA91A3E28E270413371D9FCE4E1B298518DF969 (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* __this, const RuntimeMethod* method) 
{
	{
		return 1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimeField_Equals_m1D01278487AC548E493E00D01FB7F8E5F4B10F34 (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638*)IsInstClass((RuntimeObject*)L_1, PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638_il2cpp_TypeInfo_var));
		PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* L_2 = V_0;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_3 = __this->___characteristic;
		PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* L_4 = V_0;
		NullCheck(L_4);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_5 = L_4->___characteristic;
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_3, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimeField_GetHashCode_m8E57E20901E62813C1CD36C57883A327707FDA01 (PrimeField_t56430704DB9C4B9BEDCC7B6B0975CF3AB847A638* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = __this->___characteristic;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsF2mCurve_mADC0BDD2414CCF0DA96AA467948F2A1E51D5B651 (ECCurve_t0364AF983299667828B922E48915D3E670F79711* ___0_c, const RuntimeMethod* method) 
{
	{
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_0 = ___0_c;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(23, L_0);
		bool L_2;
		L_2 = ECAlgorithms_IsF2mField_m6DE3D30546505D761D2170CC05E552D0005BA1B1(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsF2mField_m6DE3D30546505D761D2170CC05E552D0005BA1B1 (RuntimeObject* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPolynomialExtensionField_t4EC8312ABF558C20522F399FE694C0E420D7BC1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_field;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___0_field;
		NullCheck(L_2);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_3;
		L_3 = InterfaceFuncInvoker0< BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* >::Invoke(0, IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_4 = ((BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419_il2cpp_TypeInfo_var))->___Two;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, L_3, L_4);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_6 = ___0_field;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IPolynomialExtensionField_t4EC8312ABF558C20522F399FE694C0E420D7BC1B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsFpCurve_m62228EF78BDDF4478F7D1AC04AC7FDBC3EE8250E (ECCurve_t0364AF983299667828B922E48915D3E670F79711* ___0_c, const RuntimeMethod* method) 
{
	{
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_0 = ___0_c;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(23, L_0);
		bool L_2;
		L_2 = ECAlgorithms_IsFpField_mCA3755DFF0CC8DCDA25B83CF89D44A99BE1DA0CB(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ECAlgorithms_IsFpField_mCA3755DFF0CC8DCDA25B83CF89D44A99BE1DA0CB (RuntimeObject* ___0_field, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_field;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IFiniteField_tF71A808019AD65C81BB962F341D0329333AA8CB3_il2cpp_TypeInfo_var, L_0);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_SumOfMultiplies_m71F49C1299DDC0E0AFA5906BE8D5DC5113E3781C (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_ps, BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_1 = NULL;
	ECCurve_t0364AF983299667828B922E48915D3E670F79711* V_2 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_0 = ___0_ps;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_1 = ___1_ks;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_2 = ___0_ps;
		NullCheck(L_2);
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_3 = ___1_ks;
		NullCheck(L_3);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_4 = ___0_ps;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)1)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4756B4D24FB5D3DDD5FFD2182ED33AE3C826630A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ECAlgorithms_SumOfMultiplies_m71F49C1299DDC0E0AFA5906BE8D5DC5113E3781C_RuntimeMethod_var)));
	}

IL_001f:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_6 = ___0_ps;
		NullCheck(L_6);
		V_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_004b;
	}

IL_002d:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_9 = ___0_ps;
		NullCheck(L_9);
		int32_t L_10 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_12 = ___1_ks;
		NullCheck(L_12);
		int32_t L_13 = 0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_11);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_15;
		L_15 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* >::Invoke(32, L_11, L_14);
		return L_15;
	}

IL_0039:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_16 = ___0_ps;
		NullCheck(L_16);
		int32_t L_17 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_19 = ___1_ks;
		NullCheck(L_19);
		int32_t L_20 = 0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_22 = ___0_ps;
		NullCheck(L_22);
		int32_t L_23 = 1;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_25 = ___1_ks;
		NullCheck(L_25);
		int32_t L_26 = 1;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_28;
		L_28 = ECAlgorithms_SumOfTwoMultiplies_mE859889CBA9B786C2E13FF02ECBB9DCED3958692(L_18, L_21, L_24, L_27, NULL);
		return L_28;
	}

IL_004b:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_29 = ___0_ps;
		NullCheck(L_29);
		int32_t L_30 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_1 = L_31;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_32 = V_1;
		NullCheck(L_32);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_33;
		L_33 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_32);
		V_2 = L_33;
		int32_t L_34 = V_0;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_35 = (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)SZArrayNew(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var, (uint32_t)L_34);
		V_3 = L_35;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_36 = V_3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_37 = V_1;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_37);
		V_5 = 1;
		goto IL_007a;
	}

IL_0066:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_38 = V_3;
		int32_t L_39 = V_5;
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_40 = V_2;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_41 = ___0_ps;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_45;
		L_45 = ECAlgorithms_ImportPoint_m7405D7ADF4B5ECD799357A87D7A2BEA08632B931(L_40, L_44, NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_45);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_45);
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_007a:
	{
		int32_t L_47 = V_5;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0066;
		}
	}
	{
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_49 = V_2;
		NullCheck(L_49);
		RuntimeObject* L_50;
		L_50 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(34, L_49);
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_50, GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E_il2cpp_TypeInfo_var));
		RuntimeObject* L_51 = V_4;
		if (!L_51)
		{
			goto IL_009f;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_52 = V_3;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_53 = ___1_ks;
		RuntimeObject* L_54 = V_4;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_55;
		L_55 = ECAlgorithms_ImplSumOfMultipliesGlv_m809B4317487085FE6AFFF33AB6824C4B3F45C319(L_52, L_53, L_54, NULL);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_56;
		L_56 = ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03(L_55, NULL);
		return L_56;
	}

IL_009f:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_57 = V_3;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_58 = ___1_ks;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_59;
		L_59 = ECAlgorithms_ImplSumOfMultiplies_m922A39837FB77F324C116A3AD0872994CC9886B5(L_57, L_58, NULL);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_60;
		L_60 = ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03(L_59, NULL);
		return L_60;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_SumOfTwoMultiplies_mE859889CBA9B786C2E13FF02ECBB9DCED3958692 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_a, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___2_Q, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t0364AF983299667828B922E48915D3E670F79711* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104* V_2 = NULL;
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_0 = ___0_P;
		NullCheck(L_0);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_0);
		V_0 = L_1;
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_2 = V_0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_3 = ___2_Q;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_4;
		L_4 = ECAlgorithms_ImportPoint_m7405D7ADF4B5ECD799357A87D7A2BEA08632B931(L_2, L_3, NULL);
		___2_Q = L_4;
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_5 = V_0;
		V_2 = ((AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104*)IsInstClass((RuntimeObject*)L_5, AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104_il2cpp_TypeInfo_var));
		AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104* L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		AbstractF2mCurve_t6379F48B5EBFE3D60A7783C0BFDBC480023C1104* L_7 = V_2;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(38, L_7);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_9 = ___0_P;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_10 = ___1_a;
		NullCheck(L_9);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_11;
		L_11 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* >::Invoke(32, L_9, L_10);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_12 = ___2_Q;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___3_b;
		NullCheck(L_12);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_14;
		L_14 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* >::Invoke(32, L_12, L_13);
		NullCheck(L_11);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_15;
		L_15 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(27, L_11, L_14);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_16;
		L_16 = ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03(L_15, NULL);
		return L_16;
	}

IL_003b:
	{
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(34, L_17);
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E_il2cpp_TypeInfo_var));
		RuntimeObject* L_19 = V_1;
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_20 = (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)SZArrayNew(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var, (uint32_t)2);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_21 = L_20;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_22 = ___0_P;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_22);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_23 = L_21;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_24 = ___2_Q;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_24);
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_25 = (BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C*)(BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C*)SZArrayNew(BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C_il2cpp_TypeInfo_var, (uint32_t)2);
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_26 = L_25;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_27 = ___1_a;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)L_27);
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_28 = L_26;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_29 = ___3_b;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)L_29);
		RuntimeObject* L_30 = V_1;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_31;
		L_31 = ECAlgorithms_ImplSumOfMultipliesGlv_m809B4317487085FE6AFFF33AB6824C4B3F45C319(L_23, L_28, L_30, NULL);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_32;
		L_32 = ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03(L_31, NULL);
		return L_32;
	}

IL_0072:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_33 = ___0_P;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_34 = ___1_a;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_35 = ___2_Q;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_36 = ___3_b;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_37;
		L_37 = ECAlgorithms_ImplShamirsTrickWNaf_m37818BBD407F564937299A819862D1917DE624B1(L_33, L_34, L_35, L_36, NULL);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_38;
		L_38 = ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03(L_37, NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ShamirsTrick_mA61B3682A8B85B7B901376E2DD8082493BC3EA30 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___2_Q, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_l, const RuntimeMethod* method) 
{
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_0 = ___0_P;
		NullCheck(L_0);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_0);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_2 = ___2_Q;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_3;
		L_3 = ECAlgorithms_ImportPoint_m7405D7ADF4B5ECD799357A87D7A2BEA08632B931(L_1, L_2, NULL);
		___2_Q = L_3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_4 = ___0_P;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_5 = ___1_k;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_6 = ___2_Q;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_7 = ___3_l;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_8;
		L_8 = ECAlgorithms_ImplShamirsTrickJsf_m4D18AE2A22CD24911F6E2D1483D838050C45F8D6(L_4, L_5, L_6, L_7, NULL);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_9;
		L_9 = ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03(L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImportPoint_m7405D7ADF4B5ECD799357A87D7A2BEA08632B931 (ECCurve_t0364AF983299667828B922E48915D3E670F79711* ___0_c, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___1_p, const RuntimeMethod* method) 
{
	ECCurve_t0364AF983299667828B922E48915D3E670F79711* V_0 = NULL;
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_0 = ___1_p;
		NullCheck(L_0);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_0);
		V_0 = L_1;
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_2 = ___0_c;
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(32, L_2, L_3);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC85DD4565B10A03E31F133210FF2614019176D85)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ECAlgorithms_ImportPoint_m7405D7ADF4B5ECD799357A87D7A2BEA08632B931_RuntimeMethod_var)));
	}

IL_001b:
	{
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_6 = ___0_c;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_7 = ___1_p;
		NullCheck(L_6);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_8;
		L_8 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(19, L_6, L_7);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECAlgorithms_MontgomeryTrick_m6249B2F36A80E63AE1958BC9A50A078790A280C3 (ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* ___0_zs, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_0 = ___0_zs;
		int32_t L_1 = ___1_off;
		int32_t L_2 = ___2_len;
		ECAlgorithms_MontgomeryTrick_m4DDB2D30A877B4B6F0E1F835403DB5FBF29DABB7(L_0, L_1, L_2, (ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECAlgorithms_MontgomeryTrick_m4DDB2D30A877B4B6F0E1F835403DB5FBF29DABB7 (ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* ___0_zs, int32_t ___1_off, int32_t ___2_len, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* ___3_scale, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* V_0 = NULL;
	int32_t V_1 = 0;
	ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* V_2 = NULL;
	int32_t V_3 = 0;
	ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* V_4 = NULL;
	{
		int32_t L_0 = ___2_len;
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_1 = (ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A*)(ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A*)SZArrayNew(ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_2 = V_0;
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_3 = ___0_zs;
		int32_t L_4 = ___1_off;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*)L_6);
		V_1 = 0;
		goto IL_0023;
	}

IL_0011:
	{
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_7 = V_0;
		int32_t L_8 = V_1;
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_13 = ___0_zs;
		int32_t L_14 = ___1_off;
		int32_t L_15 = V_1;
		NullCheck(L_13);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_18;
		L_18 = VirtualFuncInvoker1< ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* >::Invoke(10, L_12, L_17);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_18);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*)L_18);
	}

IL_0023:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		V_1 = L_20;
		int32_t L_21 = ___2_len;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_23 = ___3_scale;
		if (!L_23)
		{
			goto IL_003e;
		}
	}
	{
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_24 = V_0;
		int32_t L_25 = V_1;
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_30 = ___3_scale;
		NullCheck(L_29);
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_31;
		L_31 = VirtualFuncInvoker1< ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* >::Invoke(10, L_29, L_30);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_31);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*)L_31);
	}

IL_003e:
	{
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_32 = V_0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_36;
		L_36 = VirtualFuncInvoker0< ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* >::Invoke(14, L_35);
		V_2 = L_36;
		goto IL_006b;
	}

IL_0049:
	{
		int32_t L_37 = ___1_off;
		int32_t L_38 = V_1;
		int32_t L_39 = L_38;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, L_39));
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_40 = ___0_zs;
		int32_t L_41 = V_3;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_4 = L_43;
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_44 = ___0_zs;
		int32_t L_45 = V_3;
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_46 = V_0;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_50 = V_2;
		NullCheck(L_49);
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_51;
		L_51 = VirtualFuncInvoker1< ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* >::Invoke(10, L_49, L_50);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_51);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(L_45), (ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*)L_51);
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_52 = V_2;
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_53 = V_4;
		NullCheck(L_52);
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_54;
		L_54 = VirtualFuncInvoker1< ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*, ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* >::Invoke(10, L_52, L_53);
		V_2 = L_54;
	}

IL_006b:
	{
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) > ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ECFieldElementU5BU5D_t02CF1E31B813DEF38631C23308B6FCEE42DE1F3A* L_56 = ___0_zs;
		int32_t L_57 = ___1_off;
		ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE* L_58 = V_2;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_58);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (ECFieldElement_t46D58376C86E321A41772293FDE742BAA57221DE*)L_58);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ReferenceMultiply_mDFF7F6C70BF6C7535F3638A14A50FCF227A933F0 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_p, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, const RuntimeMethod* method) 
{
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* V_0 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___1_k;
		NullCheck(L_0);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_1;
		L_1 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_0, NULL);
		V_0 = L_1;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_2 = ___0_p;
		NullCheck(L_2);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_3;
		L_3 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_2);
		NullCheck(L_3);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_4;
		L_4 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(22, L_3);
		V_1 = L_4;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_5, NULL);
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = BigInteger_TestBit_mF7FBE27982BA143D9D180F9E2177965A1AA5F1FE(L_8, 0, NULL);
		if (!L_9)
		{
			goto IL_0029;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_10 = ___0_p;
		V_1 = L_10;
	}

IL_0029:
	{
		V_3 = 1;
		goto IL_004a;
	}

IL_002d:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_11 = ___0_p;
		NullCheck(L_11);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_12;
		L_12 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(31, L_11);
		___0_p = L_12;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = V_0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		bool L_15;
		L_15 = BigInteger_TestBit_mF7FBE27982BA143D9D180F9E2177965A1AA5F1FE(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0046;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_16 = V_1;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_17 = ___0_p;
		NullCheck(L_16);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_18;
		L_18 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(27, L_16, L_17);
		V_1 = L_18;
	}

IL_0046:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_004a:
	{
		int32_t L_20 = V_3;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_002d;
		}
	}

IL_004e:
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_22 = ___1_k;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_22, NULL);
		if ((((int32_t)L_23) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_24 = V_1;
		return L_24;
	}

IL_0059:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_25 = V_1;
		NullCheck(L_25);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_26;
		L_26 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(29, L_25);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_0 = ___0_p;
		NullCheck(L_0);
		bool L_1;
		L_1 = ECPoint_IsValid_m73DB7C2615AEFAA33E5971354962182D0DBB2E09(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE45EEE7E9244B0DA29A70539E1461DB5935D05F5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral198AA065BF0F912BD6F5F93869BD5C361671F98B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ECAlgorithms_ValidatePoint_m4784BF47E6F4E7D474AB0F8FCA7F678B8568DE03_RuntimeMethod_var)));
	}

IL_0018:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_3 = ___0_p;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplShamirsTrickJsf_m4D18AE2A22CD24911F6E2D1483D838050C45F8D6 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___2_Q, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECCurve_t0364AF983299667828B922E48915D3E670F79711* V_0 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_1 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_2 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_3 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_4 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_0 = ___0_P;
		NullCheck(L_0);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_1;
		L_1 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_0);
		V_0 = L_1;
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_2 = V_0;
		NullCheck(L_2);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_3;
		L_3 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(22, L_2);
		V_1 = L_3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_4 = ___0_P;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_5 = ___2_Q;
		NullCheck(L_4);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_6;
		L_6 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(27, L_4, L_5);
		V_2 = L_6;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_7 = ___0_P;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_8 = ___2_Q;
		NullCheck(L_7);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_9;
		L_9 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(28, L_7, L_8);
		V_3 = L_9;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_10 = (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)SZArrayNew(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var, (uint32_t)4);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_11 = L_10;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_12 = ___2_Q;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_12);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_13 = L_11;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_14 = V_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_14);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_15 = L_13;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_16 = ___0_P;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_16);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_17 = L_15;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_18 = V_2;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_18);
		V_4 = L_17;
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_19 = V_0;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_20 = V_4;
		NullCheck(L_19);
		VirtualActionInvoker1< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(20, L_19, L_20);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_21 = (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)SZArrayNew(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_22 = L_21;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_23 = V_4;
		NullCheck(L_23);
		int32_t L_24 = 3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_26;
		L_26 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(29, L_25);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_26);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_26);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_27 = L_22;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = 2;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_31;
		L_31 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(29, L_30);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_31);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_31);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_32 = L_27;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = 1;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_36;
		L_36 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(29, L_35);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_36);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_37 = L_32;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_41;
		L_41 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(29, L_40);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_41);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_41);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_42 = L_37;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_43 = V_1;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_43);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_44 = L_42;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_45 = V_4;
		NullCheck(L_45);
		int32_t L_46 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(5), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_47);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_48 = L_44;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_49 = V_4;
		NullCheck(L_49);
		int32_t L_50 = 1;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(6), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_51);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_52 = L_48;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_53 = V_4;
		NullCheck(L_53);
		int32_t L_54 = 2;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(7), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_55);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_56 = L_52;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_57 = V_4;
		NullCheck(L_57);
		int32_t L_58 = 3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(8), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_59);
		V_5 = L_56;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_60 = ___1_k;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_61 = ___3_l;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = WNafUtilities_GenerateJsf_mDA3158C2F50BB23AE762CECD5D584656A49B799D(L_60, L_61, NULL);
		V_6 = L_62;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_63 = V_1;
		V_7 = L_63;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_6;
		NullCheck(L_64);
		V_8 = ((int32_t)(((RuntimeArray*)L_64)->max_length));
		goto IL_00da;
	}

IL_00ab:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_6;
		int32_t L_66 = V_8;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		uint8_t L_69 = L_68;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_69<<((int32_t)24)))>>((int32_t)28)));
		V_10 = ((int32_t)(((int32_t)((int32_t)L_69<<((int32_t)28)))>>((int32_t)28)));
		int32_t L_70 = V_9;
		int32_t L_71 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(4, ((int32_t)il2cpp_codegen_multiply(L_70, 3)))), L_71));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_72 = V_7;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_73 = V_5;
		int32_t L_74 = V_11;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_72);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_77;
		L_77 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(33, L_72, L_76);
		V_7 = L_77;
	}

IL_00da:
	{
		int32_t L_78 = V_8;
		int32_t L_79 = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
		V_8 = L_79;
		if ((((int32_t)L_79) >= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_80 = V_7;
		return L_80;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplShamirsTrickWNaf_m37818BBD407F564937299A819862D1917DE624B1 (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___2_Q, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* V_3 = NULL;
	WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* V_4 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_5 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_6 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_7 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B9_0 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B12_0 = NULL;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___1_k;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___3_l;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_4 = ___1_k;
		NullCheck(L_4);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_5;
		L_5 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_4, NULL);
		___1_k = L_5;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_6 = ___3_l;
		NullCheck(L_6);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_7;
		L_7 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_6, NULL);
		___3_l = L_7;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_8 = ___1_k;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = WNafUtilities_GetWindowSize_mD5DDC3CE9DDB95912F3656768A89F5D681A214F0(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)16), L_10, NULL);
		int32_t L_12;
		L_12 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(2, L_11, NULL);
		V_1 = L_12;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = ___3_l;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_13, NULL);
		int32_t L_15;
		L_15 = WNafUtilities_GetWindowSize_mD5DDC3CE9DDB95912F3656768A89F5D681A214F0(L_14, NULL);
		int32_t L_16;
		L_16 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)16), L_15, NULL);
		int32_t L_17;
		L_17 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(2, L_16, NULL);
		V_2 = L_17;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_18 = ___0_P;
		int32_t L_19 = V_1;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_20;
		L_20 = WNafUtilities_Precompute_mD07E5A17860ECFE1E52658767973CE605538D2B9(L_18, L_19, (bool)1, NULL);
		V_3 = L_20;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_21 = ___2_Q;
		int32_t L_22 = V_2;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_23;
		L_23 = WNafUtilities_Precompute_mD07E5A17860ECFE1E52658767973CE605538D2B9(L_21, L_22, (bool)1, NULL);
		V_4 = L_23;
		int32_t L_24 = ((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		if (L_24)
		{
			G_B2_0 = L_24;
			goto IL_0073;
		}
		G_B1_0 = L_24;
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_25 = V_3;
		NullCheck(L_25);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_26;
		L_26 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_25);
		G_B3_0 = L_26;
		G_B3_1 = G_B1_0;
		goto IL_0079;
	}

IL_0073:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_27 = V_3;
		NullCheck(L_27);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_28;
		L_28 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_27);
		G_B3_0 = L_28;
		G_B3_1 = G_B2_0;
	}

IL_0079:
	{
		V_5 = G_B3_0;
		bool L_29 = V_0;
		if (L_29)
		{
			G_B5_0 = G_B3_1;
			goto IL_0087;
		}
		G_B4_0 = G_B3_1;
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_30 = V_4;
		NullCheck(L_30);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_31;
		L_31 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_30);
		G_B6_0 = L_31;
		G_B6_1 = G_B4_0;
		goto IL_008e;
	}

IL_0087:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_32 = V_4;
		NullCheck(L_32);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_33;
		L_33 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_32);
		G_B6_0 = L_33;
		G_B6_1 = G_B5_0;
	}

IL_008e:
	{
		V_6 = G_B6_0;
		if (G_B6_1)
		{
			goto IL_009a;
		}
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_34 = V_3;
		NullCheck(L_34);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_35;
		L_35 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_34);
		G_B9_0 = L_35;
		goto IL_00a0;
	}

IL_009a:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_36 = V_3;
		NullCheck(L_36);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_37;
		L_37 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_36);
		G_B9_0 = L_37;
	}

IL_00a0:
	{
		V_7 = G_B9_0;
		bool L_38 = V_0;
		if (L_38)
		{
			goto IL_00ae;
		}
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_39 = V_4;
		NullCheck(L_39);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_40;
		L_40 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_39);
		G_B12_0 = L_40;
		goto IL_00b5;
	}

IL_00ae:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_41 = V_4;
		NullCheck(L_41);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_42;
		L_42 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_41);
		G_B12_0 = L_42;
	}

IL_00b5:
	{
		V_8 = G_B12_0;
		int32_t L_43 = V_1;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_44 = ___1_k;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF(L_43, L_44, NULL);
		V_9 = L_45;
		int32_t L_46 = V_2;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_47 = ___3_l;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF(L_46, L_47, NULL);
		V_10 = L_48;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_49 = V_5;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_50 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_9;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_52 = V_6;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_53 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_10;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_55;
		L_55 = ECAlgorithms_ImplShamirsTrickWNaf_mF50E74C93C415C1E0427B275EF8DA71D2BC1D540(L_49, L_50, L_51, L_52, L_53, L_54, NULL);
		return L_55;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplShamirsTrickWNaf_mECC9A2F46D62D6A485F64A33B8BE2A87A515329A (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ___0_P, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___1_k, RuntimeObject* ___2_pointMapQ, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* ___3_l, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* V_2 = NULL;
	WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* V_3 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_4 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_5 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_6 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B9_0 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B12_0 = NULL;
	{
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_0 = ___1_k;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_0, NULL);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_2 = ___3_l;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_2, NULL);
		V_0 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_4 = ___1_k;
		NullCheck(L_4);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_5;
		L_5 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_4, NULL);
		___1_k = L_5;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_6 = ___3_l;
		NullCheck(L_6);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_7;
		L_7 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_6, NULL);
		___3_l = L_7;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_8 = ___1_k;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_8, NULL);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_10 = ___3_l;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_9, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = WNafUtilities_GetWindowSize_mD5DDC3CE9DDB95912F3656768A89F5D681A214F0(L_12, NULL);
		int32_t L_14;
		L_14 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)16), L_13, NULL);
		int32_t L_15;
		L_15 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(2, L_14, NULL);
		V_1 = L_15;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_16 = ___0_P;
		int32_t L_17 = V_1;
		RuntimeObject* L_18 = ___2_pointMapQ;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_19;
		L_19 = WNafUtilities_MapPointWithPrecomp_mEDFF6594F6E4B9344FCEA35DC76F941B024D843F(L_16, L_17, (bool)1, L_18, NULL);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_20 = ___0_P;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_21;
		L_21 = WNafUtilities_GetWNafPreCompInfo_mECE3C81FAB9C745A81C765D38F46F3256DB6D865(L_20, NULL);
		V_2 = L_21;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_22;
		L_22 = WNafUtilities_GetWNafPreCompInfo_mECE3C81FAB9C745A81C765D38F46F3256DB6D865(L_19, NULL);
		V_3 = L_22;
		int32_t L_23 = ((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		if (L_23)
		{
			G_B2_0 = L_23;
			goto IL_0068;
		}
		G_B1_0 = L_23;
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_24 = V_2;
		NullCheck(L_24);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_25;
		L_25 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_24);
		G_B3_0 = L_25;
		G_B3_1 = G_B1_0;
		goto IL_006e;
	}

IL_0068:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_26 = V_2;
		NullCheck(L_26);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_27;
		L_27 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_26);
		G_B3_0 = L_27;
		G_B3_1 = G_B2_0;
	}

IL_006e:
	{
		V_4 = G_B3_0;
		bool L_28 = V_0;
		if (L_28)
		{
			G_B5_0 = G_B3_1;
			goto IL_007b;
		}
		G_B4_0 = G_B3_1;
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_29 = V_3;
		NullCheck(L_29);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_30;
		L_30 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_29);
		G_B6_0 = L_30;
		G_B6_1 = G_B4_0;
		goto IL_0081;
	}

IL_007b:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_31 = V_3;
		NullCheck(L_31);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_32;
		L_32 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_31);
		G_B6_0 = L_32;
		G_B6_1 = G_B5_0;
	}

IL_0081:
	{
		V_5 = G_B6_0;
		if (G_B6_1)
		{
			goto IL_008d;
		}
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_33 = V_2;
		NullCheck(L_33);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_34;
		L_34 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_33);
		G_B9_0 = L_34;
		goto IL_0093;
	}

IL_008d:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_35 = V_2;
		NullCheck(L_35);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_36;
		L_36 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_35);
		G_B9_0 = L_36;
	}

IL_0093:
	{
		V_6 = G_B9_0;
		bool L_37 = V_0;
		if (L_37)
		{
			goto IL_00a0;
		}
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_38 = V_3;
		NullCheck(L_38);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_39;
		L_39 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_38);
		G_B12_0 = L_39;
		goto IL_00a6;
	}

IL_00a0:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_40 = V_3;
		NullCheck(L_40);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_41;
		L_41 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_40);
		G_B12_0 = L_41;
	}

IL_00a6:
	{
		V_7 = G_B12_0;
		int32_t L_42 = V_1;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_43 = ___1_k;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF(L_42, L_43, NULL);
		V_8 = L_44;
		int32_t L_45 = V_1;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_46 = ___3_l;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF(L_45, L_46, NULL);
		V_9 = L_47;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_48 = V_4;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_49 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_8;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_51 = V_5;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_52 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_9;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_54;
		L_54 = ECAlgorithms_ImplShamirsTrickWNaf_mF50E74C93C415C1E0427B275EF8DA71D2BC1D540(L_48, L_49, L_50, L_51, L_52, L_53, NULL);
		return L_54;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplShamirsTrickWNaf_mF50E74C93C415C1E0427B275EF8DA71D2BC1D540 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_preCompP, ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___1_preCompNegP, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_wnafP, ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___3_preCompQ, ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___4_preCompNegQ, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_wnafQ, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_0 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_6 = NULL;
	int32_t V_7 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_8 = NULL;
	int32_t V_9 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_10 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B13_0 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B18_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_wnafP;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___5_wnafQ;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_3 = ___0_preCompP;
		NullCheck(L_3);
		int32_t L_4 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_6;
		L_6 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_5);
		NullCheck(L_6);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_7;
		L_7 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(22, L_6);
		V_0 = L_7;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_8 = V_0;
		V_1 = L_8;
		V_2 = 0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		goto IL_00c2;
	}

IL_0026:
	{
		int32_t L_9 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_wnafP;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0033;
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_wnafP;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		G_B4_0 = ((int32_t)(((int8_t)L_14)));
	}

IL_0033:
	{
		V_4 = G_B4_0;
		int32_t L_15 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___5_wnafQ;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		G_B7_0 = 0;
		goto IL_0044;
	}

IL_003f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___5_wnafQ;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		G_B7_0 = ((int32_t)(((int8_t)L_20)));
	}

IL_0044:
	{
		V_5 = G_B7_0;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		if (((int32_t)(L_21|L_22)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		goto IL_00be;
	}

IL_0053:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_24 = V_0;
		V_6 = L_24;
		int32_t L_25 = V_4;
		if (!L_25)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_26 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = il2cpp_codegen_abs(L_26);
		V_7 = L_27;
		int32_t L_28 = V_4;
		if ((((int32_t)L_28) < ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_29 = ___0_preCompP;
		G_B13_0 = L_29;
		goto IL_006c;
	}

IL_006b:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_30 = ___1_preCompNegP;
		G_B13_0 = L_30;
	}

IL_006c:
	{
		V_8 = G_B13_0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_31 = V_6;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_32 = V_8;
		int32_t L_33 = V_7;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)(L_33>>1));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_36;
		L_36 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(27, L_31, L_35);
		V_6 = L_36;
	}

IL_007e:
	{
		int32_t L_37 = V_5;
		if (!L_37)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_38 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_39;
		L_39 = il2cpp_codegen_abs(L_38);
		V_9 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_41 = ___3_preCompQ;
		G_B18_0 = L_41;
		goto IL_0095;
	}

IL_0093:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_42 = ___4_preCompNegQ;
		G_B18_0 = L_42;
	}

IL_0095:
	{
		V_10 = G_B18_0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_43 = V_6;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_44 = V_10;
		int32_t L_45 = V_9;
		NullCheck(L_44);
		int32_t L_46 = ((int32_t)(L_45>>1));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_43);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_48;
		L_48 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(27, L_43, L_47);
		V_6 = L_48;
	}

IL_00a7:
	{
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_50 = V_1;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_52;
		L_52 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, int32_t >::Invoke(30, L_50, L_51);
		V_1 = L_52;
		V_2 = 0;
	}

IL_00b5:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_53 = V_1;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_54 = V_6;
		NullCheck(L_53);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_55;
		L_55 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(33, L_53, L_54);
		V_1 = L_55;
	}

IL_00be:
	{
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
	}

IL_00c2:
	{
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_58 = V_2;
		if ((((int32_t)L_58) <= ((int32_t)0)))
		{
			goto IL_00d5;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_59 = V_1;
		int32_t L_60 = V_2;
		NullCheck(L_59);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_61;
		L_61 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, int32_t >::Invoke(30, L_59, L_60);
		V_1 = L_61;
	}

IL_00d5:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_62 = V_1;
		return L_62;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultiplies_m922A39837FB77F324C116A3AD0872994CC9886B5 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_ps, BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___1_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* V_2 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_3 = NULL;
	int32_t V_4 = 0;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* V_5 = NULL;
	int32_t V_6 = 0;
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_0 = ___0_ps;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_4 = (WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D*)(WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D*)SZArrayNew(WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		int32_t L_5 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0079;
	}

IL_001e:
	{
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_7 = ___1_ks;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = L_10;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = V_1;
		int32_t L_12 = V_4;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_13, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (bool)((((int32_t)L_14) < ((int32_t)0))? 1 : 0));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_15 = V_5;
		NullCheck(L_15);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_16;
		L_16 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_15, NULL);
		V_5 = L_16;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_17 = V_5;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = WNafUtilities_GetWindowSize_mD5DDC3CE9DDB95912F3656768A89F5D681A214F0(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_20;
		L_20 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)16), L_19, NULL);
		int32_t L_21;
		L_21 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(2, L_20, NULL);
		V_6 = L_21;
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_22 = V_2;
		int32_t L_23 = V_4;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_24 = ___0_ps;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		int32_t L_28 = V_6;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_29;
		L_29 = WNafUtilities_Precompute_mD07E5A17860ECFE1E52658767973CE605538D2B9(L_27, L_28, (bool)1, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_29);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8*)L_29);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_30 = V_3;
		int32_t L_31 = V_4;
		int32_t L_32 = V_6;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_33 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34;
		L_34 = WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF(L_32, L_33, NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_34);
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0079:
	{
		int32_t L_36 = V_4;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_001e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_38 = V_1;
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_39 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_40 = V_3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_41;
		L_41 = ECAlgorithms_ImplSumOfMultiplies_mC182DA352CC2357995C4818C10D8E1816E7470FF(L_38, L_39, L_40, NULL);
		return L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultipliesGlv_m809B4317487085FE6AFFF33AB6824C4B3F45C319 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_ps, BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___1_ks, RuntimeObject* ___2_glvEndomorphism, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECEndomorphism_t3F776B566084340D958092A1C1582846002D3DE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointMap_tA17C2C6ECD103EF4BDFBA2580036C8258C4C0440_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* V_0 = NULL;
	int32_t V_1 = 0;
	BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_10 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_11 = NULL;
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_0 = ___0_ps;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_3;
		L_3 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_2);
		NullCheck(L_3);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_4;
		L_4 = VirtualFuncInvoker0< BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* >::Invoke(26, L_3);
		V_0 = L_4;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_5 = ___0_ps;
		NullCheck(L_5);
		V_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		int32_t L_6 = V_1;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_7 = (BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C*)(BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C*)SZArrayNew(BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_6<<1)));
		V_2 = L_7;
		V_5 = 0;
		V_6 = 0;
		goto IL_0055;
	}

IL_0023:
	{
		RuntimeObject* L_8 = ___2_glvEndomorphism;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_9 = ___1_ks;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_13 = V_0;
		NullCheck(L_12);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_14;
		L_14 = BigInteger_Mod_mBD7796AD8736EFB82A31025D03AB4F8FD30FE894(L_12, L_13, NULL);
		NullCheck(L_8);
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_15;
		L_15 = InterfaceFuncInvoker1< BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C*, BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* >::Invoke(0, GlvEndomorphism_tF0A8BFD1617142F594C9A31B3C89C7231533FB3E_il2cpp_TypeInfo_var, L_8, L_14);
		V_7 = L_15;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_16 = V_2;
		int32_t L_17 = V_6;
		int32_t L_18 = L_17;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_19 = V_7;
		NullCheck(L_19);
		int32_t L_20 = 0;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_21);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)L_21);
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_22 = V_2;
		int32_t L_23 = V_6;
		int32_t L_24 = L_23;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_25 = V_7;
		NullCheck(L_25);
		int32_t L_26 = 1;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_27);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419*)L_27);
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0055:
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_31 = ___2_glvEndomorphism;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, ECEndomorphism_t3F776B566084340D958092A1C1582846002D3DE8_il2cpp_TypeInfo_var, L_31);
		V_3 = L_32;
		RuntimeObject* L_33 = ___2_glvEndomorphism;
		NullCheck(L_33);
		bool L_34;
		L_34 = InterfaceFuncInvoker0< bool >::Invoke(1, ECEndomorphism_t3F776B566084340D958092A1C1582846002D3DE8_il2cpp_TypeInfo_var, L_33);
		if (!L_34)
		{
			goto IL_0072;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_35 = ___0_ps;
		RuntimeObject* L_36 = V_3;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_37 = V_2;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_38;
		L_38 = ECAlgorithms_ImplSumOfMultiplies_mC90D59B059F06A9B0EA0529AF724B56CD8A7C626(L_35, L_36, L_37, NULL);
		return L_38;
	}

IL_0072:
	{
		int32_t L_39 = V_1;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_40 = (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8*)SZArrayNew(ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_39<<1)));
		V_4 = L_40;
		V_8 = 0;
		V_9 = 0;
		goto IL_00b2;
	}

IL_0084:
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_41 = ___0_ps;
		int32_t L_42 = V_8;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_10 = L_44;
		RuntimeObject* L_45 = V_3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_46 = V_10;
		NullCheck(L_45);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_47;
		L_47 = InterfaceFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(0, ECPointMap_tA17C2C6ECD103EF4BDFBA2580036C8258C4C0440_il2cpp_TypeInfo_var, L_45, L_46);
		V_11 = L_47;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_48 = V_4;
		int32_t L_49 = V_9;
		int32_t L_50 = L_49;
		V_9 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_51 = V_10;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_51);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_52 = V_4;
		int32_t L_53 = V_9;
		int32_t L_54 = L_53;
		V_9 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_55 = V_11;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_55);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_55);
		int32_t L_56 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00b2:
	{
		int32_t L_57 = V_8;
		int32_t L_58 = V_1;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0084;
		}
	}
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_59 = V_4;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_60 = V_2;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_61;
		L_61 = ECAlgorithms_ImplSumOfMultiplies_m922A39837FB77F324C116A3AD0872994CC9886B5(L_59, L_60, NULL);
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultiplies_mC90D59B059F06A9B0EA0529AF724B56CD8A7C626 (ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* ___0_ps, RuntimeObject* ___1_pointMap, BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* ___2_ks, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* V_2 = NULL;
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* V_7 = NULL;
	BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* V_8 = NULL;
	int32_t V_9 = 0;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_10 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_11 = NULL;
	{
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_0 = ___0_ps;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		int32_t L_2 = ((int32_t)(L_1<<1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		int32_t L_4 = L_2;
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_5 = (WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D*)(WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D*)SZArrayNew(WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_2 = L_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_3 = L_6;
		V_4 = 0;
		goto IL_00d9;
	}

IL_0023:
	{
		int32_t L_7 = V_4;
		V_5 = ((int32_t)(L_7<<1));
		int32_t L_8 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_9 = ___2_ks;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_7 = L_12;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = V_1;
		int32_t L_14 = V_5;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_15 = V_7;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_15, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (bool)((((int32_t)L_16) < ((int32_t)0))? 1 : 0));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_17 = V_7;
		NullCheck(L_17);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_18;
		L_18 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_17, NULL);
		V_7 = L_18;
		BigIntegerU5BU5D_tE096E8616F7B68512B66B7A377D03330B78C5C0C* L_19 = ___2_ks;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_23 = V_1;
		int32_t L_24 = V_6;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_25 = V_8;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline(L_25, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (bool)((((int32_t)L_26) < ((int32_t)0))? 1 : 0));
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_27 = V_8;
		NullCheck(L_27);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_28;
		L_28 = BigInteger_Abs_m27C3562613FF68861841D088505133DF87194C35(L_27, NULL);
		V_8 = L_28;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_29 = V_7;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_29, NULL);
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_31 = V_8;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = BigInteger_get_BitLength_m0DEDD5D4102BA59C59930FC474980014214BC3FE(L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_30, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t0B70CF7C72B6402E32BA6F9CD85FA4F4477E7CB0_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = WNafUtilities_GetWindowSize_mD5DDC3CE9DDB95912F3656768A89F5D681A214F0(L_33, NULL);
		int32_t L_35;
		L_35 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)16), L_34, NULL);
		int32_t L_36;
		L_36 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(2, L_35, NULL);
		V_9 = L_36;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_37 = ___0_ps;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_10 = L_40;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_41 = V_10;
		int32_t L_42 = V_9;
		RuntimeObject* L_43 = ___1_pointMap;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_44;
		L_44 = WNafUtilities_MapPointWithPrecomp_mEDFF6594F6E4B9344FCEA35DC76F941B024D843F(L_41, L_42, (bool)1, L_43, NULL);
		V_11 = L_44;
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_45 = V_2;
		int32_t L_46 = V_5;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_47 = V_10;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_48;
		L_48 = WNafUtilities_GetWNafPreCompInfo_mECE3C81FAB9C745A81C765D38F46F3256DB6D865(L_47, NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8*)L_48);
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_49 = V_2;
		int32_t L_50 = V_6;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_51 = V_11;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_52;
		L_52 = WNafUtilities_GetWNafPreCompInfo_mECE3C81FAB9C745A81C765D38F46F3256DB6D865(L_51, NULL);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8*)L_52);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_53 = V_3;
		int32_t L_54 = V_5;
		int32_t L_55 = V_9;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_56 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57;
		L_57 = WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF(L_55, L_56, NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_57);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_58 = V_3;
		int32_t L_59 = V_6;
		int32_t L_60 = V_9;
		BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* L_61 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = WNafUtilities_GenerateWindowNaf_m84F9E74426060651BD9CEF6F49E98F2BD0A899DF(L_60, L_61, NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_62);
		int32_t L_63 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_00d9:
	{
		int32_t L_64 = V_4;
		int32_t L_65 = V_0;
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0023;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_66 = V_1;
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_67 = V_2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_68 = V_3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_69;
		L_69 = ECAlgorithms_ImplSumOfMultiplies_mC182DA352CC2357995C4818C10D8E1816E7470FF(L_66, L_67, L_68, NULL);
		return L_69;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* ECAlgorithms_ImplSumOfMultiplies_mC182DA352CC2357995C4818C10D8E1816E7470FF (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_negs, WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* ___1_infos, ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___2_wnafs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_2 = NULL;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* V_7 = NULL;
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* V_12 = NULL;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* V_13 = NULL;
	int32_t G_B8_0 = 0;
	ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* G_B12_0 = NULL;
	{
		V_0 = 0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = ___2_wnafs;
		NullCheck(L_0);
		V_1 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_5 = 0;
		goto IL_001e;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_2 = ___2_wnafs;
		int32_t L_3 = V_5;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_1, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		V_0 = L_6;
		int32_t L_7 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001e:
	{
		int32_t L_8 = V_5;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_10 = ___1_infos;
		NullCheck(L_10);
		int32_t L_11 = 0;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_13;
		L_13 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_12);
		NullCheck(L_13);
		int32_t L_14 = 0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		ECCurve_t0364AF983299667828B922E48915D3E670F79711* L_16;
		L_16 = VirtualFuncInvoker0< ECCurve_t0364AF983299667828B922E48915D3E670F79711* >::Invoke(5, L_15);
		NullCheck(L_16);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_17;
		L_17 = VirtualFuncInvoker0< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(22, L_16);
		V_2 = L_17;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_18 = V_2;
		V_3 = L_18;
		V_4 = 0;
		int32_t L_19 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		goto IL_00e0;
	}

IL_0047:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_20 = V_2;
		V_7 = L_20;
		V_8 = 0;
		goto IL_00ae;
	}

IL_004f:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_21 = ___2_wnafs;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_9 = L_24;
		int32_t L_25 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_9;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0060;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0066;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_9;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		G_B8_0 = ((int32_t)(((int8_t)L_30)));
	}

IL_0066:
	{
		V_10 = G_B8_0;
		int32_t L_31 = V_10;
		if (!L_31)
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_32 = V_10;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = il2cpp_codegen_abs(L_32);
		V_11 = L_33;
		WNafPreCompInfoU5BU5D_t8076FBDF53DD9D82650DDEEBDE353273BE7B685D* L_34 = ___1_infos;
		int32_t L_35 = V_8;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_12 = L_37;
		int32_t L_38 = V_10;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_39 = ___0_negs;
		int32_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (uint8_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((((int32_t)((((int32_t)L_38) < ((int32_t)0))? 1 : 0)) == ((int32_t)L_42)))
		{
			goto IL_008f;
		}
	}
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_43 = V_12;
		NullCheck(L_43);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_44;
		L_44 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(6, L_43);
		G_B12_0 = L_44;
		goto IL_0096;
	}

IL_008f:
	{
		WNafPreCompInfo_t613A250A22A985C5C98A082FCDFAF8A9E75758A8* L_45 = V_12;
		NullCheck(L_45);
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_46;
		L_46 = VirtualFuncInvoker0< ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* >::Invoke(4, L_45);
		G_B12_0 = L_46;
	}

IL_0096:
	{
		V_13 = G_B12_0;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_47 = V_7;
		ECPointU5BU5D_tA1BF675320C5B635E2076AD3591890D2363B67D8* L_48 = V_13;
		int32_t L_49 = V_11;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)(L_49>>1));
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_47);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_52;
		L_52 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(27, L_47, L_51);
		V_7 = L_52;
	}

IL_00a8:
	{
		int32_t L_53 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00ae:
	{
		int32_t L_54 = V_8;
		int32_t L_55 = V_1;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_004f;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_56 = V_7;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_57 = V_2;
		if ((!(((RuntimeObject*)(ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_56) == ((RuntimeObject*)(ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*)L_57))))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_58 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		goto IL_00da;
	}

IL_00c0:
	{
		int32_t L_59 = V_4;
		if ((((int32_t)L_59) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_60 = V_3;
		int32_t L_61 = V_4;
		NullCheck(L_60);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_62;
		L_62 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, int32_t >::Invoke(30, L_60, L_61);
		V_3 = L_62;
		V_4 = 0;
	}

IL_00d1:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_63 = V_3;
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_64 = V_7;
		NullCheck(L_63);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_65;
		L_65 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* >::Invoke(33, L_63, L_64);
		V_3 = L_65;
	}

IL_00da:
	{
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_66, 1));
	}

IL_00e0:
	{
		int32_t L_67 = V_6;
		if ((((int32_t)L_67) >= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_68 = V_4;
		if ((((int32_t)L_68) <= ((int32_t)0)))
		{
			goto IL_00f6;
		}
	}
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_69 = V_3;
		int32_t L_70 = V_4;
		NullCheck(L_69);
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_71;
		L_71 = VirtualFuncInvoker1< ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4*, int32_t >::Invoke(30, L_69, L_70);
		V_3 = L_71;
	}

IL_00f6:
	{
		ECPoint_t5D76D31157947630F9313C8D7703E9B83C4897C4* L_72 = V_3;
		return L_72;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECAlgorithms__ctor_mA0018BD2A3EB9720D263992ED810CD138F18DD05 (ECAlgorithms_t4489EA3F640D9EF1D369EE800CDD5F2067F43676* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BigInteger_get_SignValue_mA43F69E2B10BB968292494DD9DE0E53046489CB6_inline (BigInteger_t9A7FE5A974600B9E8047FB3BF8E4120879264419* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___sign;
		return L_0;
	}
}
