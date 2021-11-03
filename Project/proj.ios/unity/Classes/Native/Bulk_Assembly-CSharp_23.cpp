#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef METHODKEY_TF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_H
#define METHODKEY_TF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// XLua.Utils_MethodKey
struct  MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3 
{
public:
	// System.String XLua.Utils_MethodKey::Name
	String_t* ___Name_0;
	// System.Boolean XLua.Utils_MethodKey::IsStatic
	bool ___IsStatic_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_IsStatic_1() { return static_cast<int32_t>(offsetof(MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3, ___IsStatic_1)); }
	inline bool get_IsStatic_1() const { return ___IsStatic_1; }
	inline bool* get_address_of_IsStatic_1() { return &___IsStatic_1; }
	inline void set_IsStatic_1(bool value)
	{
		___IsStatic_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of XLua.Utils/MethodKey
struct MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___IsStatic_1;
};
// Native definition for COM marshalling of XLua.Utils/MethodKey
struct MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___IsStatic_1;
};
#endif // METHODKEY_TF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_H



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: XLua.Utils/MethodKey
extern "C" void MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshal_pinvoke(const MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3& unmarshaled, MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_pinvoke& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Name_0());
	marshaled.___IsStatic_1 = static_cast<int32_t>(unmarshaled.get_IsStatic_1());
}
extern "C" void MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshal_pinvoke_back(const MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_pinvoke& marshaled, MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___Name_0));
	bool unmarshaled_IsStatic_temp_1 = false;
	unmarshaled_IsStatic_temp_1 = static_cast<bool>(marshaled.___IsStatic_1);
	unmarshaled.set_IsStatic_1(unmarshaled_IsStatic_temp_1);
}
// Conversion method for clean up from marshalling of: XLua.Utils/MethodKey
extern "C" void MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshal_pinvoke_cleanup(MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
// Conversion methods for marshalling of: XLua.Utils/MethodKey
extern "C" void MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshal_com(const MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3& unmarshaled, MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_com& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Name_0());
	marshaled.___IsStatic_1 = static_cast<int32_t>(unmarshaled.get_IsStatic_1());
}
extern "C" void MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshal_com_back(const MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_com& marshaled, MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3& unmarshaled)
{
	unmarshaled.set_Name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Name_0));
	bool unmarshaled_IsStatic_temp_1 = false;
	unmarshaled_IsStatic_temp_1 = static_cast<bool>(marshaled.___IsStatic_1);
	unmarshaled.set_IsStatic_1(unmarshaled_IsStatic_temp_1);
}
// Conversion method for clean up from marshalling of: XLua.Utils/MethodKey
extern "C" void MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshal_com_cleanup(MethodKey_tF58D628D6FB36FBDC6C19C0D8472EDFB9E8923F3_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
