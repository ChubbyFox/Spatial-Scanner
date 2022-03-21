#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver
struct IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// meshScript
struct meshScript_tB3053B131BC173FC1C66A31E4B780C876E108F41;
// sceneObjects
struct sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_tBD5EECA158921324285270FA4CA73335FACC1408, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// meshScript
struct meshScript_tB3053B131BC173FC1C66A31E4B780C876E108F41  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean meshScript::isActive
	bool ___isActive_4;

public:
	inline static int32_t get_offset_of_isActive_4() { return static_cast<int32_t>(offsetof(meshScript_tB3053B131BC173FC1C66A31E4B780C876E108F41, ___isActive_4)); }
	inline bool get_isActive_4() const { return ___isActive_4; }
	inline bool* get_address_of_isActive_4() { return &___isActive_4; }
	inline void set_isActive_4(bool value)
	{
		___isActive_4 = value;
	}
};


// sceneObjects
struct sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject sceneObjects::Model
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Model_4;
	// System.Boolean sceneObjects::isActive
	bool ___isActive_5;

public:
	inline static int32_t get_offset_of_Model_4() { return static_cast<int32_t>(offsetof(sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C, ___Model_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Model_4() const { return ___Model_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Model_4() { return &___Model_4; }
	inline void set_Model_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Model_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Model_4), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_5() { return static_cast<int32_t>(offsetof(sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C, ___isActive_5)); }
	inline bool get_isActive_5() const { return ___isActive_5; }
	inline bool* get_address_of_isActive_5() { return &___isActive_5; }
	inline void set_isActive_5(bool value)
	{
		___isActive_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_mD3A30387912E89BB802ACD7ABFBC50D026901256_gshared (const RuntimeMethod* method);

// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver>()
inline RuntimeObject* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_mD3A30387912E89BB802ACD7ABFBC50D026901256_gshared)(method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
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
// System.Void meshScript::toggleMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript_toggleMesh_mDACCD84ECA534C32540133954650398C42A27706 (meshScript_tB3053B131BC173FC1C66A31E4B780C876E108F41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79(/*hidden argument*/CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var);
		V_0 = L_0;
		// if (isActive)
		bool L_1 = __this->get_isActive_4();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var, L_2, 0);
		// isActive = false;
		__this->set_isActive_4((bool)0);
	}

IL_001c:
	{
		// if (isActive)
		bool L_3 = __this->get_isActive_4();
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var, L_4, 1);
		// isActive = true;
		__this->set_isActive_4((bool)1);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void meshScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript__ctor_mF2B326980449FAB072A80EE4F466623D8DACBA1D (meshScript_tB3053B131BC173FC1C66A31E4B780C876E108F41 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void sceneObjects::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneObjects_Start_mA78AF5BCAD4CC72D5240663ADF3ADFE2CCF8A0A6 (sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C * __this, const RuntimeMethod* method)
{
	{
		// isActive = false;
		__this->set_isActive_5((bool)0);
		// Model.SetActive(false); // hide objects when starts
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Model_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void sceneObjects::toggleModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneObjects_toggleModel_m2BAFF7F9A62F034B7994FCEB58D0DD46EFF741D6 (sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C * __this, const RuntimeMethod* method)
{
	{
		// isActive = !isActive;   // swap current value
		bool L_0 = __this->get_isActive_5();
		__this->set_isActive_5((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// Model.SetActive(isActive); // set active varable  model
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Model_4();
		bool L_2 = __this->get_isActive_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void sceneObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sceneObjects__ctor_mD46DC270CB5DBEB91A9AF3559A62948C916A73D1 (sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
