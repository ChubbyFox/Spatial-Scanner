#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t82E05038F75AC719F3B4316F5EAA7D69D4B4058D;
// System.Collections.Generic.IEnumerable`1<System.Numerics.Vector3>
struct IEnumerable_1_tE8E8DBCBDF0D389D7BA93B9209FC751738290FA9;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.SceneUnderstanding.SceneMesh>
struct IReadOnlyList_1_tF9A61246B4FD1B9C1C0BA69A0F0B83A85830C9B4;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct IReadOnlyList_1_tB5B19C1CBDF287DBE28B987E76BC9C0CF47EBE92;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct List_1_t884C040642DCB159A123549C8F62D3860DCC52FF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>
struct List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB;
// System.Collections.Generic.List`1<UnityEngine.TextAsset>
struct List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731;
// System.Collections.Generic.List`1<System.Numerics.Vector3>
struct List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<Windows.Storage.StorageFile>
struct Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment[]
struct SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B;
// Microsoft.MixedReality.SceneUnderstanding.SceneObject[]
struct SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA;
// Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind[]
struct SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478;
// UnityEngine.TextAsset[]
struct TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Numerics.Vector3[]
struct Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Windows.Storage.ApplicationData
struct ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Windows.Storage.IApplicationDataStatics
struct IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;
// Windows.Storage.IApplicationDataStatics2
struct IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tAE063F84A60E1058FCA4E3EA9F555D3462641F7D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver
struct IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C;
// Windows.Storage.IStorageFile
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
// Windows.Storage.IStorageFileStatics2
struct IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
// Windows.Storage.IStorageFolderStatics2
struct IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.MixedReality.SceneUnderstanding.Scene
struct Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D;
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment
struct SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538;
// Microsoft.MixedReality.SceneUnderstanding.SceneMesh
struct SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF;
// Microsoft.MixedReality.SceneUnderstanding.SceneObject
struct SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF;
// Windows.Storage.StorageFolder
struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript
struct meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217;
// sceneObjects
struct sceneObjects_t0B041D31DAA6187D69420BAABBA25A734A00D54C;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;

IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA431B9CBD909811A2D75413BCADE1EADDEC10297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tAED27680B76302011A159BB575807FA666117ABA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC2AB25C0A0087DD17FECC9CEA0A70196CDA10814_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tC63F95E6BE7630C140ECEF20D623332C90D67911_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1A549F31F9F2AF26BF27ED095F4169E5F95994CC;
IL2CPP_EXTERN_C String_t* _stringLiteral246C6E6EC2252F47C327DDDFC23980081CF24321;
IL2CPP_EXTERN_C String_t* _stringLiteral33D3C0AEF8C266168530C8D0BED3A31C2B498C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral3999CC5DC68116AA2A402A1939A3D04F033E1546;
IL2CPP_EXTERN_C String_t* _stringLiteral49309EB5A327BE56A61BF2CC70192B4739B2ACA3;
IL2CPP_EXTERN_C String_t* _stringLiteral51B701A0FDB41E749212AA746F1FD14C05709093;
IL2CPP_EXTERN_C String_t* _stringLiteralA9D839B936FC49FCDA257D5AD2A82B703872911D;
IL2CPP_EXTERN_C String_t* _stringLiteralBB87370D19C007D145960DF2A456363EB622BE20;
IL2CPP_EXTERN_C String_t* _stringLiteralE775FC4FED578FD0A0EA171D66073894DB693287;
IL2CPP_EXTERN_C String_t* _stringLiteralECA7D17E28BC58E4F7D9F94DE1F32FEFBB3183CE;
IL2CPP_EXTERN_C String_t* _stringLiteralFE298226A64EE7559D694BA8C15916059988007E;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m380F52624E899A4D3A85FCCB6654FF8295A151E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m5BC72E540C8FCA9F3A99CD1ED5686E2964D7C30E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m0C1B4A6871083C55CAC972BAD66E34CB9657E77D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m6D57CA467B841FC8E2DA2A0FF27B6C5DC51CF0D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_m30DA030F901C9667633DE2C3AADAE56057D891D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m522DA460FB9420E4F3DD1F8C49C1A1EDD2002016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m2890BD7B21AAAE17E9BE6F167F03D98FDA85768F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m1911B28BE96376A590210D2A7B70DBD90923BA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_mE55F1DC77998CE00FBA7A68125F93F405F980680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m2A2954483DA7ADBCDF21B965DCB03A4D186FE252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7E0EF05706416D515B9AA5714B9E571C4C5A4BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCBDC14DE09DB4E44E6E4AA11047A72345A640DB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA6424F7DFCE092927A55FC40416CD36804F9EB9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m650090C7C94CFD65CB77F22D052649A198247821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m15854CFD65C119833B7C4FAD79A649BDA2DED3BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m26102483E4814F7C5FB7BA9EDEB68946D4C068D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m312AFE69432FF330A16B5FBFC0FA772A9412BAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IApplicationData_t9F64C19F82A7E76B06A42E9BA3CE5105E2C3FA6E;
struct IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper;
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;
struct IStorageFolder_t582A78BB94B49B6AD89A1B8CE57B5B1B9832F9F1;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B;
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
struct Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m108CBA2BE6D19F6A961970FF1AC3DE4761942818(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9773816D15B923B84BCE4CB70D52BBB55D61421B(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8071D5CC72DC722A092D03B8725B40398F216758(IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8** comReturnValue) = 0;
};

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};

// Windows.Storage.IApplicationDataStatics
struct NOVTABLE IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics_get_Current_m5BA6206F759AD3CAA45D14D57E671A16E6927345(IApplicationData_t9F64C19F82A7E76B06A42E9BA3CE5105E2C3FA6E** comReturnValue) = 0;
};
// Windows.Storage.IApplicationDataStatics2
struct NOVTABLE IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics2_U24__Stripped0_GetForUserAsync_mC778BB22D3226DC4B393311724CE1947CAC5830C() = 0;
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_tA69CE29E39880E68BF0456395F3B1462DC29BA06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_mE1223109A7CBD5DA29413156BA2C75157F169C87(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mEEA8DB3EB0D4FE9F33A54B6A16D65902B70DCB39(IAsyncActionCompletedHandler_t8671E86B99AED1FD2C6DDBF3351570231D8CC9B1_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mD06D8F02D7793FED272208F851EF8A2D9B25FE38() = 0;
};
// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m034E89518CD8F6472E7FC470D89C0A16BF0D5D84() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m3B942B5956DEBCB0AAA0999BEE84395370583EEC() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenAsync_m5173C7923B0F7CF3B7D167A72ED1A58EBD9A27B9() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_OpenTransactedWriteAsync_m70E453524C3018BCFA35F3E0751EC819D8DB4768() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m7CCAA2A3977161ECA34C5FAB3B47F44918976546() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m64DA01A608DAB25246571BB50971DEFAAAD9D24E() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAsync_m9DF7B02522E2B78D630D88635809A4082895CF76() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_CopyAndReplaceAsync_m396CC1A3D011EB184AD47BEE8E702D2AC13E866C() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m94C30646D222693C1AD16D6772693F212E1B18B3() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m4C48231F9DF7A47A4EA644C52582419C0EE337A5() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAsync_m0A5A95CDF5DD8586EEEB04F6A0CC19B2B6F6911A() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped11_MoveAndReplaceAsync_m4C6BD5C531D018CF47CFD7D8AAAAC70136D6E88C() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_GetFileFromPathAsync_mA5DD9BB3BEE88251EA4F76F7D065EA8AA97842F0(Il2CppHString ___path0, IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromApplicationUriAsync_mA130F9405BF6DFAFE3A7A5655D0E448B565AAC25() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_CreateStreamedFileAsync_mC210197BD102173EEBF26FBC1B487806933E2487() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_ReplaceWithStreamedFileAsync_mC3906DC246F9F645E7AEE5B1B35817A006FA5A8D() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_CreateStreamedFileFromUriAsync_m5A19ECE1A7FC0A0519E0593D8A5CAAC590909285() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_ReplaceWithStreamedFileFromUriAsync_mD500AAFE3DE80D11B598BAAAB9FA704A5219C558() = 0;
};
// Windows.Storage.IStorageFileStatics2
struct NOVTABLE IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics2_U24__Stripped0_GetFileFromPathForUserAsync_m5A8E30130D34379E1839986B2C9B36B50A4A3A88() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_U24__Stripped0_GetFolderFromPathAsync_m23EFE828CA0A0A608D1001D6DA413353FA1A2E6F() = 0;
};
// Windows.Storage.IStorageFolderStatics2
struct NOVTABLE IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics2_U24__Stripped0_GetFolderFromPathForUserAsync_m4652AB072776181F1FE707A64521DE3877EE2C28() = 0;
};

// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct List_1_t884C040642DCB159A123549C8F62D3860DCC52FF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____items_1)); }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* get__items_1() const { return ____items_1; }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_StaticFields, ____emptyArray_5)); }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneObjectU5BU5D_t28497916AFD7087192C488A9C2E8A27DCDC6D8EA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>
struct List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____items_1)); }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* get__items_1() const { return ____items_1; }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_StaticFields, ____emptyArray_5)); }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneObjectKindU5BU5D_t2A1865A9FB4B3925FE0D337C1435E698CB55DFA5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____items_1)); }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* get__items_1() const { return ____items_1; }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_StaticFields, ____emptyArray_5)); }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TaskU5BU5D_t6A5B1C18F541D14C31FF11E9121670A18C80F478* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.TextAsset>
struct List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____items_1)); }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* get__items_1() const { return ____items_1; }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E_StaticFields, ____emptyArray_5)); }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextAssetU5BU5D_t7C56C596DDCA0C9547F4102E163AC9E1D56BB8D8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____items_1)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Numerics.Vector3>
struct List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C, ____items_1)); }
	inline Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


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

// System.__Il2CppComObject


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObject>
struct Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF, ___list_0)); }
	inline List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * get_list_0() const { return ___list_0; }
	inline List_1_t884C040642DCB159A123549C8F62D3860DCC52FF ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF, ___current_3)); }
	inline SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * get_current_3() const { return ___current_3; }
	inline SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>
struct Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___list_0)); }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * get_list_0() const { return ___list_0; }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF, ___current_3)); }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * get_current_3() const { return ___current_3; }
	inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>
struct TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531, ___m_task_0)); }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC77936D26AED5ABCE70796F9A21A519DB946DF46 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// Windows.Storage.ApplicationData
struct ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9  : public Il2CppComObject
{
public:

public:
};

struct ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IApplicationDataStatics
	IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C* ____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;
	// Cached pointer to Windows.Storage.IApplicationDataStatics2
	IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131* ____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.ApplicationData"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C* get_____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C()
	{
		IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C* returnValue = ____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics_t99706F39E2BB10D5F121534BB4D79D3908BE9C7C;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131* get_____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131()
	{
		IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131* returnValue = ____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics2_t084AB246C259F961800F59917C501AB1589A2131;
			}
		}
		return returnValue;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34, ___m_defaultContextAction_1)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// System.Numerics.Matrix4x4
struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504_StaticFields, ____identity_16)); }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  value)
	{
		____identity_16 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// Windows.Storage.StorageFile
struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF  : public Il2CppComObject
{
public:

public:
};

struct StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics2
	IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* get_____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314()
	{
		IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314* returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics2_t07038787D5CAEA4A1B1FB8EBD79037AD077C3314;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* get_____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0()
	{
		IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0* returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t411C90A2626B69D72BB561B20F4AB5E15911EDB0;
			}
		}
		return returnValue;
	}
};


// Windows.Storage.StorageFolder
struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA  : public Il2CppComObject
{
public:

public:
};

struct StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
	// Cached pointer to Windows.Storage.IStorageFolderStatics2
	IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* get_____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F()
	{
		IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F* returnValue = ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t38832CBB2B803B3848A9A87E5A22AC4D921A132F;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* get_____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF()
	{
		IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF* returnValue = ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics2_t46DF3BA0BE36A6FDAF466BED1C69A4F32DF454CF;
			}
		}
		return returnValue;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C, ___m_task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_pinvoke
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_marshaled_com
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_task_0;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2C85055E04767C52B9F66144476FCBF500DBFA34  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD, ___m_task_2)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Windows.Storage.CreationCollisionOption
struct CreationCollisionOption_t1DD3DB5A11ACB9F9A6F911FC1451CC64D8840F51 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t1DD3DB5A11ACB9F9A6F911FC1451CC64D8840F51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.HolograhicFrameData
struct HolograhicFrameData_t52728719CA424E2E7A93D93A454FD00649FA87C7 
{
public:
	// System.UInt32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.HolograhicFrameData::VersionNumber
	uint32_t ___VersionNumber_0;
	// System.UInt32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.HolograhicFrameData::MaxNumberOfCameras
	uint32_t ___MaxNumberOfCameras_1;
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.HolograhicFrameData::ISpatialCoordinateSystemPtr
	intptr_t ___ISpatialCoordinateSystemPtr_2;
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.HolograhicFrameData::IHolographicFramePtr
	intptr_t ___IHolographicFramePtr_3;
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.HolograhicFrameData::IHolographicCameraPtr
	intptr_t ___IHolographicCameraPtr_4;

public:
	inline static int32_t get_offset_of_VersionNumber_0() { return static_cast<int32_t>(offsetof(HolograhicFrameData_t52728719CA424E2E7A93D93A454FD00649FA87C7, ___VersionNumber_0)); }
	inline uint32_t get_VersionNumber_0() const { return ___VersionNumber_0; }
	inline uint32_t* get_address_of_VersionNumber_0() { return &___VersionNumber_0; }
	inline void set_VersionNumber_0(uint32_t value)
	{
		___VersionNumber_0 = value;
	}

	inline static int32_t get_offset_of_MaxNumberOfCameras_1() { return static_cast<int32_t>(offsetof(HolograhicFrameData_t52728719CA424E2E7A93D93A454FD00649FA87C7, ___MaxNumberOfCameras_1)); }
	inline uint32_t get_MaxNumberOfCameras_1() const { return ___MaxNumberOfCameras_1; }
	inline uint32_t* get_address_of_MaxNumberOfCameras_1() { return &___MaxNumberOfCameras_1; }
	inline void set_MaxNumberOfCameras_1(uint32_t value)
	{
		___MaxNumberOfCameras_1 = value;
	}

	inline static int32_t get_offset_of_ISpatialCoordinateSystemPtr_2() { return static_cast<int32_t>(offsetof(HolograhicFrameData_t52728719CA424E2E7A93D93A454FD00649FA87C7, ___ISpatialCoordinateSystemPtr_2)); }
	inline intptr_t get_ISpatialCoordinateSystemPtr_2() const { return ___ISpatialCoordinateSystemPtr_2; }
	inline intptr_t* get_address_of_ISpatialCoordinateSystemPtr_2() { return &___ISpatialCoordinateSystemPtr_2; }
	inline void set_ISpatialCoordinateSystemPtr_2(intptr_t value)
	{
		___ISpatialCoordinateSystemPtr_2 = value;
	}

	inline static int32_t get_offset_of_IHolographicFramePtr_3() { return static_cast<int32_t>(offsetof(HolograhicFrameData_t52728719CA424E2E7A93D93A454FD00649FA87C7, ___IHolographicFramePtr_3)); }
	inline intptr_t get_IHolographicFramePtr_3() const { return ___IHolographicFramePtr_3; }
	inline intptr_t* get_address_of_IHolographicFramePtr_3() { return &___IHolographicFramePtr_3; }
	inline void set_IHolographicFramePtr_3(intptr_t value)
	{
		___IHolographicFramePtr_3 = value;
	}

	inline static int32_t get_offset_of_IHolographicCameraPtr_4() { return static_cast<int32_t>(offsetof(HolograhicFrameData_t52728719CA424E2E7A93D93A454FD00649FA87C7, ___IHolographicCameraPtr_4)); }
	inline intptr_t get_IHolographicCameraPtr_4() const { return ___IHolographicCameraPtr_4; }
	inline intptr_t* get_address_of_IHolographicCameraPtr_4() { return &___IHolographicCameraPtr_4; }
	inline void set_IHolographicCameraPtr_4(intptr_t value)
	{
		___IHolographicCameraPtr_4 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode
struct RenderMode_t911BEE8CB7FE53C84C22017FF8A9B3936664DB68 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_t911BEE8CB7FE53C84C22017FF8A9B3936664DB68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Scene
struct Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.Scene::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneComponent
struct SceneComponent_t96DA3B45D4A6E5F36A31849DC1EABD77B4F73A8C  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.SceneComponent::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SceneComponent_t96DA3B45D4A6E5F36A31849DC1EABD77B4F73A8C, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneFragment
struct SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538  : public RuntimeObject
{
public:
	// System.IntPtr Microsoft.MixedReality.SceneUnderstanding.SceneFragment::handle
	intptr_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}
};


// Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind
struct SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___list_0)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_list_0() const { return ___list_0; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>
struct Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___list_0)); }
	inline List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * get_list_0() const { return ___list_0; }
	inline List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_marshaled_com
{
	AsyncTaskMethodBuilder_1_t3E10C35B53D8718724E2BF748600FB762F4719AD  ___m_builder_1;
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


// Microsoft.MixedReality.SceneUnderstanding.SceneMesh
struct SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF  : public SceneComponent_t96DA3B45D4A6E5F36A31849DC1EABD77B4F73A8C
{
public:

public:
};


// Microsoft.MixedReality.SceneUnderstanding.SceneObject
struct SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC  : public SceneComponent_t96DA3B45D4A6E5F36A31849DC1EABD77B4F73A8C
{
public:

public:
};


// UnityEngine.TextAsset
struct TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17
struct U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::sceneObjects
	List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * ___sceneObjects_2;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::<>4__this
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * ___U3CU3E4__this_3;
	// System.Nullable`1<UnityEngine.Color> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::color
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color_4;
	// System.String Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::fileName
	String_t* ___fileName_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sceneObjects_2() { return static_cast<int32_t>(offsetof(U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4, ___sceneObjects_2)); }
	inline List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * get_sceneObjects_2() const { return ___sceneObjects_2; }
	inline List_1_t884C040642DCB159A123549C8F62D3860DCC52FF ** get_address_of_sceneObjects_2() { return &___sceneObjects_2; }
	inline void set_sceneObjects_2(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * value)
	{
		___sceneObjects_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneObjects_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4, ___U3CU3E4__this_3)); }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4, ___color_4)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_color_4() const { return ___color_4; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_fileName_5() { return static_cast<int32_t>(offsetof(U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4, ___fileName_5)); }
	inline String_t* get_fileName_5() const { return ___fileName_5; }
	inline String_t** get_address_of_fileName_5() { return &___fileName_5; }
	inline void set_fileName_5(String_t* value)
	{
		___fileName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15
struct U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::<>4__this
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * ___U3CU3E4__this_2;
	// System.Byte[] Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::<OnDeviceBytes>5__2
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___U3COnDeviceBytesU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::<>u__1
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB, ___U3CU3E4__this_2)); }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDeviceBytesU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB, ___U3COnDeviceBytesU3E5__2_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_U3COnDeviceBytesU3E5__2_3() const { return ___U3COnDeviceBytesU3E5__2_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_U3COnDeviceBytesU3E5__2_3() { return &___U3COnDeviceBytesU3E5__2_3; }
	inline void set_U3COnDeviceBytesU3E5__2_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___U3COnDeviceBytesU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDeviceBytesU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16
struct U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::<>4__this
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::<>u__1
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251, ___U3CU3E4__this_2)); }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18
struct U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 
{
public:
	// System.Int32 Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::<>t__builder
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::data
	String_t* ___data_2;
	// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::<>4__this
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * ___U3CU3E4__this_3;
	// System.String Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::fileName
	String_t* ___fileName_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::<>u__1
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::<>u__2
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487, ___U3CU3E4__this_3)); }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_fileName_4() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487, ___fileName_4)); }
	inline String_t* get_fileName_4() const { return ___fileName_4; }
	inline String_t** get_address_of_fileName_4() { return &___fileName_4; }
	inline void set_fileName_4(String_t* value)
	{
		___fileName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  value)
	{
		___U3CU3Eu__1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript
struct meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::QuerySceneFromDevice
	bool ___QuerySceneFromDevice_4;
	// System.Collections.Generic.List`1<UnityEngine.TextAsset> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SUSerializedScenePaths
	List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * ___SUSerializedScenePaths_5;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForBackgroundObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForBackgroundObjects_6;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForWallObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForWallObjects_7;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForFloorObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForFloorObjects_8;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForCeilingObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForCeilingObjects_9;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForPlatformsObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForPlatformsObjects_10;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForUnknownObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForUnknownObjects_11;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForInferredObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForInferredObjects_12;
	// UnityEngine.Color Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::ColorForWorldObjects
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ColorForWorldObjects_13;
	// System.Byte[] Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::LatestSUSceneData
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___LatestSUSceneData_14;
	// System.Object Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SUDataLock
	RuntimeObject * ___SUDataLock_15;

public:
	inline static int32_t get_offset_of_QuerySceneFromDevice_4() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___QuerySceneFromDevice_4)); }
	inline bool get_QuerySceneFromDevice_4() const { return ___QuerySceneFromDevice_4; }
	inline bool* get_address_of_QuerySceneFromDevice_4() { return &___QuerySceneFromDevice_4; }
	inline void set_QuerySceneFromDevice_4(bool value)
	{
		___QuerySceneFromDevice_4 = value;
	}

	inline static int32_t get_offset_of_SUSerializedScenePaths_5() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___SUSerializedScenePaths_5)); }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * get_SUSerializedScenePaths_5() const { return ___SUSerializedScenePaths_5; }
	inline List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E ** get_address_of_SUSerializedScenePaths_5() { return &___SUSerializedScenePaths_5; }
	inline void set_SUSerializedScenePaths_5(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * value)
	{
		___SUSerializedScenePaths_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SUSerializedScenePaths_5), (void*)value);
	}

	inline static int32_t get_offset_of_ColorForBackgroundObjects_6() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForBackgroundObjects_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForBackgroundObjects_6() const { return ___ColorForBackgroundObjects_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForBackgroundObjects_6() { return &___ColorForBackgroundObjects_6; }
	inline void set_ColorForBackgroundObjects_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForBackgroundObjects_6 = value;
	}

	inline static int32_t get_offset_of_ColorForWallObjects_7() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForWallObjects_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForWallObjects_7() const { return ___ColorForWallObjects_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForWallObjects_7() { return &___ColorForWallObjects_7; }
	inline void set_ColorForWallObjects_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForWallObjects_7 = value;
	}

	inline static int32_t get_offset_of_ColorForFloorObjects_8() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForFloorObjects_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForFloorObjects_8() const { return ___ColorForFloorObjects_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForFloorObjects_8() { return &___ColorForFloorObjects_8; }
	inline void set_ColorForFloorObjects_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForFloorObjects_8 = value;
	}

	inline static int32_t get_offset_of_ColorForCeilingObjects_9() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForCeilingObjects_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForCeilingObjects_9() const { return ___ColorForCeilingObjects_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForCeilingObjects_9() { return &___ColorForCeilingObjects_9; }
	inline void set_ColorForCeilingObjects_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForCeilingObjects_9 = value;
	}

	inline static int32_t get_offset_of_ColorForPlatformsObjects_10() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForPlatformsObjects_10)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForPlatformsObjects_10() const { return ___ColorForPlatformsObjects_10; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForPlatformsObjects_10() { return &___ColorForPlatformsObjects_10; }
	inline void set_ColorForPlatformsObjects_10(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForPlatformsObjects_10 = value;
	}

	inline static int32_t get_offset_of_ColorForUnknownObjects_11() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForUnknownObjects_11)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForUnknownObjects_11() const { return ___ColorForUnknownObjects_11; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForUnknownObjects_11() { return &___ColorForUnknownObjects_11; }
	inline void set_ColorForUnknownObjects_11(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForUnknownObjects_11 = value;
	}

	inline static int32_t get_offset_of_ColorForInferredObjects_12() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForInferredObjects_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForInferredObjects_12() const { return ___ColorForInferredObjects_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForInferredObjects_12() { return &___ColorForInferredObjects_12; }
	inline void set_ColorForInferredObjects_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForInferredObjects_12 = value;
	}

	inline static int32_t get_offset_of_ColorForWorldObjects_13() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___ColorForWorldObjects_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ColorForWorldObjects_13() const { return ___ColorForWorldObjects_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ColorForWorldObjects_13() { return &___ColorForWorldObjects_13; }
	inline void set_ColorForWorldObjects_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ColorForWorldObjects_13 = value;
	}

	inline static int32_t get_offset_of_LatestSUSceneData_14() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___LatestSUSceneData_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_LatestSUSceneData_14() const { return ___LatestSUSceneData_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_LatestSUSceneData_14() { return &___LatestSUSceneData_14; }
	inline void set_LatestSUSceneData_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___LatestSUSceneData_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LatestSUSceneData_14), (void*)value);
	}

	inline static int32_t get_offset_of_SUDataLock_15() { return static_cast<int32_t>(offsetof(meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217, ___SUDataLock_15)); }
	inline RuntimeObject * get_SUDataLock_15() const { return ___SUDataLock_15; }
	inline RuntimeObject ** get_address_of_SUDataLock_15() { return &___SUDataLock_15; }
	inline void set_SUDataLock_15(RuntimeObject * value)
	{
		___SUDataLock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SUDataLock_15), (void*)value);
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Numerics.Vector3[]
struct Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  m_Items[1];

public:
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment[]
struct SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * m_Items[1];

public:
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m1911B28BE96376A590210D2A7B70DBD90923BA48_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_mE55F1DC77998CE00FBA7A68125F93F405F980680_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m2890BD7B21AAAE17E9BE6F167F03D98FDA85768F_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m2A2954483DA7ADBCDF21B965DCB03A4D186FE252_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * ___stateMachine0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_mD3A30387912E89BB802ACD7ABFBC50D026901256_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Numerics.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m312AFE69432FF330A16B5FBFC0FA772A9412BAF5_gshared (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_gshared (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Numerics.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_gshared_inline (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Numerics.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m650090C7C94CFD65CB77F22D052649A198247821_gshared (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_gshared (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, uint32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Numerics.Vector3>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_gshared_inline (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m0C1B4A6871083C55CAC972BAD66E34CB9657E77D_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * ___stateMachine1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_mF8CA57933617F1CE59E75BAB70AC8D503B734FB2_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m6D57CA467B841FC8E2DA2A0FF27B6C5DC51CF0D7_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  List_1_GetEnumerator_m727BA8689385EAF30E46DD5720E3C36A2EE2048E_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9905093718C2F34CB58BC1D8E16860E029C08456_gshared (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_m30DA030F901C9667633DE2C3AADAE56057D891D4_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_mD7ED12755C7E7F5E41914766F0A4604FA4546E99_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m522DA460FB9420E4F3DD1F8C49C1A1EDD2002016_gshared (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * ___stateMachine1, const RuntimeMethod* method);

// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment Microsoft.MixedReality.SceneUnderstanding.SceneFragment::Deserialize(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * SceneFragment_Deserialize_m31FC02F1B5882ED8D63A1A4F3CCE6B33F50D9777 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___serializedSceneFragment0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(!0)
inline void Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_gshared)(__this, ___value0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m1911B28BE96376A590210D2A7B70DBD90923BA48 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m1911B28BE96376A590210D2A7B70DBD90923BA48_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_mE55F1DC77998CE00FBA7A68125F93F405F980680 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_mE55F1DC77998CE00FBA7A68125F93F405F980680_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m2890BD7B21AAAE17E9BE6F167F03D98FDA85768F (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m2890BD7B21AAAE17E9BE6F167F03D98FDA85768F_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m2A2954483DA7ADBCDF21B965DCB03A4D186FE252 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m2A2954483DA7ADBCDF21B965DCB03A4D186FE252_gshared)(__this, ___stateMachine0, method);
}
// System.Numerics.Vector3 System.Numerics.Vector3::Transform(System.Numerics.Vector3,System.Numerics.Matrix4x4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  Vector3_Transform_mD804FF9D5DF3DCB0235DC44C6D2A634CF27CC4F0_inline (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___position0, Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___matrix1, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver>()
inline RuntimeObject* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_mD3A30387912E89BB802ACD7ABFBC50D026901256_gshared)(method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.TextAsset>::.ctor(System.Int32)
inline void List_1__ctor_m26102483E4814F7C5FB7BA9EDEB68946D4C068D6 (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Numerics.Vector3>::.ctor()
inline void List_1__ctor_m312AFE69432FF330A16B5FBFC0FA772A9412BAF5 (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C *, const RuntimeMethod*))List_1__ctor_m312AFE69432FF330A16B5FBFC0FA772A9412BAF5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.UInt32>::.ctor()
inline void List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56 (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::GetEnumerator()
inline Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF  List_1_GetEnumerator_m15854CFD65C119833B7C4FAD79A649BDA2DED3BD (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF  (*) (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::get_Current()
inline SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * Enumerator_get_Current_mA6424F7DFCE092927A55FC40416CD36804F9EB9C_inline (Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF * __this, const RuntimeMethod* method)
{
	return ((  SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * (*) (Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.SceneUnderstanding.SceneMesh> Microsoft.MixedReality.SceneUnderstanding.SceneObject::get_Meshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneObject_get_Meshes_m2F2D9315B53C56638C56B5BDF920BBE9AAC30ADE (SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.SceneUnderstanding.SceneMesh::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SceneMesh_get_VertexCount_m6CB8A4D7A83F6EEE07BA8E4227348011BFB2164B (SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.SceneMesh::GetVertexPositions(System.Numerics.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMesh_GetVertexPositions_m463700B4680F213A2BB70E740E6098736220BB61 (SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * __this, Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* ___vertices0, const RuntimeMethod* method);
// System.Numerics.Matrix4x4 Microsoft.MixedReality.SceneUnderstanding.SceneObject::GetLocationAsMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  SceneObject_GetLocationAsMatrix_m38CD7C84956CA8B05E599354CA205C56D038FE7E (SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::TransformVertices(System.Numerics.Matrix4x4,System.Numerics.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript_TransformVertices_m58425535E6A5E5A8EA79F65BDF93C6DD763755F5 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___transformationMatrix0, Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* ___vertices1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Numerics.Vector3>::get_Count()
inline int32_t List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_inline (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C *, const RuntimeMethod*))List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Numerics.Vector3>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m650090C7C94CFD65CB77F22D052649A198247821 (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m650090C7C94CFD65CB77F22D052649A198247821_gshared)(__this, ___collection0, method);
}
// System.UInt32 Microsoft.MixedReality.SceneUnderstanding.SceneMesh::get_TriangleIndexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SceneMesh_get_TriangleIndexCount_mA78ADFC88A6047CBBC0DA8548AC47056F583B33D (SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.SceneMesh::GetTriangleIndices(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMesh_GetTriangleIndices_mA4BCAAA8B407849212887461E099754234833ABB (SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * __this, UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___indexBuffer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.UInt32>::Add(!0)
inline void List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08 (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, uint32_t, const RuntimeMethod*))List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::MoveNext()
inline bool Enumerator_MoveNext_mCBDC14DE09DB4E44E6E4AA11047A72345A640DB0 (Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::Dispose()
inline void Enumerator_Dispose_m7E0EF05706416D515B9AA5714B9E571C4C5A4BC4 (Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Numerics.Vector3>::get_Item(System.Int32)
inline Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_inline (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  (*) (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C *, int32_t, const RuntimeMethod*))List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_gshared_inline)(__this, ___index0, method);
}
// !0 System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98 (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * __this, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *, const RuntimeMethod*))Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, int32_t, const RuntimeMethod*))List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.UInt32>::get_Count()
inline int32_t List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *, const RuntimeMethod*))List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SaveStringToDiskAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * meshScript_SaveStringToDiskAsync_mB7945CE2811F1DD80D67AD3A7225F843EC5E2EEE (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, String_t* ___data0, String_t* ___fileName1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m0C1B4A6871083C55CAC972BAD66E34CB9657E77D (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m0C1B4A6871083C55CAC972BAD66E34CB9657E77D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330 (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_MoveNext_m5D77AF926EC46BEB0FD5061C38C2F273EAB4C624 (U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_SetStateMachine_mFCD4BFDAB4805FC1FD7801CE5FE2E69FE8C7CB2F (U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C (const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Byte[] Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::GetLatestSceneBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* meshScript_GetLatestSceneBytes_mB6EB39337BF0BE4AA62D3D244D60790D6A0CCE25 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method);
// Windows.Storage.ApplicationData Windows.Storage.ApplicationData::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * ApplicationData_get_Current_mEC0F896D294D660711178C8F7D6F75697B10B230 (const RuntimeMethod* method);
// Windows.Storage.StorageFolder Windows.Storage.ApplicationData::get_LocalFolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * ApplicationData_get_LocalFolder_mE9F8D02C6F2A4FE34889891B7F7A48AD19202383 (ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile> Windows.Storage.StorageFolder::CreateFileAsync(System.String,Windows.Storage.CreationCollisionOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StorageFolder_CreateFileAsync_m34F3CB53AFCA4762C7B57C4F5F586C5099CD9EA1 (StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * __this, String_t* ___desiredName0, int32_t ___options1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Storage.StorageFile>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m59A39C18839C39E7B0BA3B24C5B236DD299F8968_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEC81351691C5A577A64F3B728036AD979AB3AF94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m380F52624E899A4D3A85FCCB6654FF8295A151E8 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_mF8CA57933617F1CE59E75BAB70AC8D503B734FB2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>::GetResult()
inline StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * __this, const RuntimeMethod* method)
{
	return ((  StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * (*) (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// Windows.Foundation.IAsyncAction Windows.Storage.FileIO::WriteBytesAsync(Windows.Storage.IStorageFile,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileIO_WriteBytesAsync_mCFE4E28CAEDD1B418E1238F934F2FFB4ECAFFF47 (RuntimeObject* ___file0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m6D57CA467B841FC8E2DA2A0FF27B6C5DC51CF0D7 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m6D57CA467B841FC8E2DA2A0FF27B6C5DC51CF0D7_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.TextAsset>::GetEnumerator()
inline Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  (*) (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>::get_Current()
inline TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_inline (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF * __this, const RuntimeMethod* method)
{
	return ((  TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * (*) (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Byte[] UnityEngine.TextAsset::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F (TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetTempPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F (String_t* ___path0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>::MoveNext()
inline bool Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.TextAsset>::Dispose()
inline void Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__15_MoveNext_m3B2FEE95E45AA58D26D95242E982D04A87F9893D (U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__15_SetStateMachine_m8E62EC571208FDF6ACA3F00EB8879E4189897CE1 (U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::.ctor()
inline void List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7 (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::Add(!0)
inline void List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
inline void List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85 (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::GetLatestSceneSerialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * meshScript_GetLatestSceneSerialization_m6E0DF0C1D76A23D1E3CF406D734B4F01E8269733 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// Microsoft.MixedReality.SceneUnderstanding.Scene Microsoft.MixedReality.SceneUnderstanding.Scene::FromFragments(Microsoft.MixedReality.SceneUnderstanding.SceneFragment[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * Scene_FromFragments_m0E7D5E013FED54A4B4D448F83EA965E591541DC1 (SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* ___sceneFragments0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TextAsset>::get_Count()
inline int32_t List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_inline (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::GetEnumerator()
inline Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  (*) (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *, const RuntimeMethod*))List_1_GetEnumerator_m727BA8689385EAF30E46DD5720E3C36A2EE2048E_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::get_Current()
inline int32_t Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_inline (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *, const RuntimeMethod*))Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::.ctor()
inline void List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6 (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject> Microsoft.MixedReality.SceneUnderstanding.Scene::get_SceneObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Scene_get_SceneObjects_mB784FAB9903AD8AD46D3ADFF5BF4CF389AAE77F6 (Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind Microsoft.MixedReality.SceneUnderstanding.SceneObject::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneObject_get_Kind_m2DC82991CD3E3BFCE41A0CEA0098BC42A9D7207D (SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::Add(!0)
inline void List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * __this, SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *, SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::get_Count()
inline int32_t List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_inline (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Nullable`1<UnityEngine.Color> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::GetColor(Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  meshScript_GetColor_m9329816A33114C16F56150F3EFE131CAE326C72C (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, int32_t ___kind0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SaveAllSceneObjectsOfAKindAsOneObj(System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>,System.Nullable`1<UnityEngine.Color>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * meshScript_SaveAllSceneObjectsOfAKindAsOneObj_mF89F48658DE977440271645408A4D4886234FF05 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * ___sceneObjects0, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color1, String_t* ___fileName2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(!0)
inline void List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514 (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::MoveNext()
inline bool Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *, const RuntimeMethod*))Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind>::Dispose()
inline void Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4 (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *, const RuntimeMethod*))Enumerator_Dispose_m9905093718C2F34CB58BC1D8E16860E029C08456_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_WhenAll_mA7F77F1CCEF7F07CFDC5F4586FE529E1B4684CBF (RuntimeObject* ___tasks0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_m30DA030F901C9667633DE2C3AADAE56057D891D4 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_m30DA030F901C9667633DE2C3AADAE56057D891D4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__16_MoveNext_mA6B48420AE8D3E5D868C7060A5B55C96D8C9A5BF (U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__16_SetStateMachine_m303F0302B764757DB6B99BC0E1203B513ED37345 (U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Storage.StorageFile>,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m5BC72E540C8FCA9F3A99CD1ED5686E2964D7C30E (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_mD7ED12755C7E7F5E41914766F0A4604FA4546E99_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// Windows.Foundation.IAsyncAction Windows.Storage.FileIO::AppendTextAsync(Windows.Storage.IStorageFile,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileIO_AppendTextAsync_m43E7E7074D7E9CB760170590216025B230DF9E56 (RuntimeObject* ___file0, String_t* ___contents1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m522DA460FB9420E4F3DD1F8C49C1A1EDD2002016 (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * __this, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * ___awaiter0, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *, TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *, U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m522DA460FB9420E4F3DD1F8C49C1A1EDD2002016_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C (String_t* ___path0, String_t* ___contents1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__18_MoveNext_m797C70F662ACE925F8541891B6151F119F8A28FA (U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__18_SetStateMachine_m1F3C1F2EE0C3152389D047EE0996D57EA12256B2 (U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Numerics.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m7B558F4C62FE430FB22DC54F4BB1865025B04B84 (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// Microsoft.MixedReality.SceneUnderstanding.SceneFragment Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::GetLatestSceneSerialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * meshScript_GetLatestSceneSerialization_m6E0DF0C1D76A23D1E3CF406D734B4F01E8269733 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SceneFragment fragmentToReturn = null;
		V_0 = (SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 *)NULL;
		// lock (SUDataLock)
		RuntimeObject * L_0 = __this->get_SUDataLock_15();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (LatestSUSceneData != null)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_LatestSUSceneData_14();
			if (!L_2)
			{
				goto IL_0044;
			}
		}

IL_001b:
		{
			// byte[] sceneBytes = null;
			V_3 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
			// int sceneLength = LatestSUSceneData.Length;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_LatestSUSceneData_14();
			NullCheck(L_3);
			V_4 = ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
			// sceneBytes = new byte[sceneLength];
			int32_t L_4 = V_4;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
			V_3 = L_5;
			// Array.Copy(LatestSUSceneData, sceneBytes, sceneLength);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_LatestSUSceneData_14();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_3;
			int32_t L_8 = V_4;
			Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
			// fragmentToReturn = SceneFragment.Deserialize(sceneBytes);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_3;
			SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_10;
			L_10 = SceneFragment_Deserialize_m31FC02F1B5882ED8D63A1A4F3CCE6B33F50D9777(L_9, /*hidden argument*/NULL);
			V_0 = L_10;
		}

IL_0044:
		{
			// }
			IL2CPP_LEAVE(0x50, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			RuntimeObject * L_12 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// return fragmentToReturn;
		SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_13 = V_0;
		return L_13;
	}
}
// System.Nullable`1<UnityEngine.Color> Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::GetColor(Microsoft.MixedReality.SceneUnderstanding.SceneObjectKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  meshScript_GetColor_m9329816A33114C16F56150F3EFE131CAE326C72C (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, int32_t ___kind0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___kind0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_004c;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_0064;
			}
		}
	}
	{
		int32_t L_1 = ___kind0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)247))))
		{
			case 0:
			{
				goto IL_0070;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_0094;
	}

IL_0034:
	{
		// return ColorForBackgroundObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_ColorForBackgroundObjects_6();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_3), L_2, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_3;
	}

IL_0040:
	{
		// return ColorForWallObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = __this->get_ColorForWallObjects_7();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_5;
	}

IL_004c:
	{
		// return ColorForFloorObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6 = __this->get_ColorForFloorObjects_8();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_7), L_6, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_7;
	}

IL_0058:
	{
		// return ColorForCeilingObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = __this->get_ColorForCeilingObjects_9();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_9;
	}

IL_0064:
	{
		// return ColorForPlatformsObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = __this->get_ColorForPlatformsObjects_10();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_11), L_10, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_11;
	}

IL_0070:
	{
		// return ColorForUnknownObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12 = __this->get_ColorForUnknownObjects_11();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_13), L_12, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_13;
	}

IL_007c:
	{
		// return ColorForInferredObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14 = __this->get_ColorForInferredObjects_12();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_15;
	}

IL_0088:
	{
		// return ColorForWorldObjects;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = __this->get_ColorForWorldObjects_13();
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9((&L_17), L_16, /*hidden argument*/Nullable_1__ctor_mABF3CCAC28954E932B026C84D4C0D0F7BF2662F9_RuntimeMethod_var);
		return L_17;
	}

IL_0094:
	{
		// return null;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 ));
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_18 = V_0;
		return L_18;
	}
}
// System.Byte[] Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::GetLatestSceneBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* meshScript_GetLatestSceneBytes_mB6EB39337BF0BE4AA62D3D244D60790D6A0CCE25 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// byte[] sceneBytes = null;
		V_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL;
		// lock (SUDataLock)
		RuntimeObject * L_0 = __this->get_SUDataLock_15();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (LatestSUSceneData != null)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_LatestSUSceneData_14();
			if (!L_2)
			{
				goto IL_0038;
			}
		}

IL_001b:
		{
			// int sceneLength = LatestSUSceneData.Length;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_LatestSUSceneData_14();
			NullCheck(L_3);
			V_3 = ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
			// sceneBytes = new byte[sceneLength];
			int32_t L_4 = V_3;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_4);
			V_0 = L_5;
			// Array.Copy(LatestSUSceneData, sceneBytes, sceneLength);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = __this->get_LatestSUSceneData_14();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
			int32_t L_8 = V_3;
			Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		}

IL_0038:
		{
			// }
			IL2CPP_LEAVE(0x44, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_0043;
			}
		}

IL_003d:
		{
			RuntimeObject * L_10 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		}

IL_0043:
		{
			IL2CPP_END_FINALLY(58)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		// return sceneBytes;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_0;
		return L_11;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SaveBytesToDiskAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * meshScript_SaveBytesToDiskAsync_mA22F0327AA9739391D7A71EFD5659807E7C7D8B1 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m1911B28BE96376A590210D2A7B70DBD90923BA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m1911B28BE96376A590210D2A7B70DBD90923BA48((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m1911B28BE96376A590210D2A7B70DBD90923BA48_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SaveObjsToDiskAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * meshScript_SaveObjsToDiskAsync_mE11EDEA8FB2646E2BA971AEDC044A871E670D203 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_mE55F1DC77998CE00FBA7A68125F93F405F980680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_0;
		L_0 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251  L_1 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_mE55F1DC77998CE00FBA7A68125F93F405F980680((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_mE55F1DC77998CE00FBA7A68125F93F405F980680_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SaveAllSceneObjectsOfAKindAsOneObj(System.Collections.Generic.List`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>,System.Nullable`1<UnityEngine.Color>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * meshScript_SaveAllSceneObjectsOfAKindAsOneObj_mF89F48658DE977440271645408A4D4886234FF05 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * ___sceneObjects0, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___color1, String_t* ___fileName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m2890BD7B21AAAE17E9BE6F167F03D98FDA85768F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_0 = ___sceneObjects0;
		(&V_0)->set_sceneObjects_2(L_0);
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_1 = ___color1;
		(&V_0)->set_color_4(L_1);
		String_t* L_2 = ___fileName2;
		(&V_0)->set_fileName_5(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_3;
		L_3 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_3);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4  L_4 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_5 = L_4.get_U3CU3Et__builder_1();
		V_1 = L_5;
		AsyncTaskMethodBuilder_Start_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m2890BD7B21AAAE17E9BE6F167F03D98FDA85768F((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m2890BD7B21AAAE17E9BE6F167F03D98FDA85768F_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_6 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::SaveStringToDiskAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * meshScript_SaveStringToDiskAsync_mB7945CE2811F1DD80D67AD3A7225F843EC5E2EEE (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, String_t* ___data0, String_t* ___fileName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m2A2954483DA7ADBCDF21B965DCB03A4D186FE252_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		String_t* L_0 = ___data0;
		(&V_0)->set_data_2(L_0);
		String_t* L_1 = ___fileName1;
		(&V_0)->set_fileName_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_2;
		L_2 = AsyncTaskMethodBuilder_Create_mFF3A436623D0A24B2063FDB41694EDFDA7783DE8(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487  L_3 = V_0;
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_Start_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m2A2954483DA7ADBCDF21B965DCB03A4D186FE252((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)(&V_1), (U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m2A2954483DA7ADBCDF21B965DCB03A4D186FE252_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = AsyncTaskMethodBuilder_get_Task_m130181C15F259D4FAAD717BF53402A1FD0AD19F4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::TransformVertices(System.Numerics.Matrix4x4,System.Numerics.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript_TransformVertices_m58425535E6A5E5A8EA79F65BDF93C6DD763755F5 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___transformationMatrix0, Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* ___vertices1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < vertices.Length; ++i)
		V_0 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		// vertices[i] = System.Numerics.Vector3.Transform(vertices[i], transformationMatrix);
		Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_0 = ___vertices1;
		int32_t L_1 = V_0;
		Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_2 = ___vertices1;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_6 = ___transformationMatrix0;
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_7;
		L_7 = Vector3_Transform_mD804FF9D5DF3DCB0235DC44C6D2A634CF27CC4F0_inline(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 )L_7);
		// for (int i = 0; i < vertices.Length; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001c:
	{
		// for (int i = 0; i < vertices.Length; ++i)
		int32_t L_9 = V_0;
		Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_10 = ___vertices1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::hideMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript_hideMesh_mFDAC048257250ECC82B1CC1C90076767AA680019 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79(/*hidden argument*/CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var);
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var, L_0, 0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::showMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript_showMesh_m5DF145E7F20D96C6CC437A5A937A480B0EB0D388 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t875EEEFF940A56C41EA252F412F62C2D3A22D4B8_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79(/*hidden argument*/CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_mD0B905A3664D58975F2C467534096260BE6E5A79_RuntimeMethod_var);
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_t4B11BE496015D0D9C431EDD908DB615E1223554C_il2cpp_TypeInfo_var, L_0, 1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::saveMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript_saveMesh_m27D0F3C249F6FFD7C32A735B17CB4932C430C027 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3999CC5DC68116AA2A402A1939A3D04F033E1546);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Save Mesh Button Pressed");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3999CC5DC68116AA2A402A1939A3D04F033E1546, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void meshScript__ctor_m75E6BCEFF902736320873E5221CFC6C02B9E49E7 (meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m26102483E4814F7C5FB7BA9EDEB68946D4C068D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool QuerySceneFromDevice = true;
		__this->set_QuerySceneFromDevice_4((bool)1);
		// public List<TextAsset> SUSerializedScenePaths = new List<TextAsset>(0);
		List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * L_0 = (List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E *)il2cpp_codegen_object_new(List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E_il2cpp_TypeInfo_var);
		List_1__ctor_m26102483E4814F7C5FB7BA9EDEB68946D4C068D6(L_0, 0, /*hidden argument*/List_1__ctor_m26102483E4814F7C5FB7BA9EDEB68946D4C068D6_RuntimeMethod_var);
		__this->set_SUSerializedScenePaths_5(L_0);
		// public Color ColorForBackgroundObjects = new Color(0.953f, 0.475f, 0.875f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_1), (0.953000009f), (0.474999994f), (0.875f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForBackgroundObjects_6(L_1);
		// public Color ColorForWallObjects = new Color(0.953f, 0.494f, 0.475f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (0.953000009f), (0.493999988f), (0.474999994f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForWallObjects_7(L_2);
		// public Color ColorForFloorObjects = new Color(0.733f, 0.953f, 0.475f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_3), (0.73299998f), (0.953000009f), (0.474999994f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForFloorObjects_8(L_3);
		// public Color ColorForCeilingObjects = new Color(0.475f, 0.596f, 0.953f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (0.474999994f), (0.596000016f), (0.953000009f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForCeilingObjects_9(L_4);
		// public Color ColorForPlatformsObjects = new Color(0.204f, 0.792f, 0.714f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_5), (0.203999996f), (0.791999996f), (0.713999987f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForPlatformsObjects_10(L_5);
		// public Color ColorForUnknownObjects = new Color(1.0f, 1.0f, 1.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForUnknownObjects_11(L_6);
		// public Color ColorForInferredObjects = new Color(0.5f, 0.5f, 0.5f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_7), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForInferredObjects_12(L_7);
		// public Color ColorForWorldObjects = new Color(0.0f, 1.0f, 1.0f, 1.0f);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_8), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_ColorForWorldObjects_13(L_8);
		// private readonly object SUDataLock = new object();
		RuntimeObject * L_9 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_9, /*hidden argument*/NULL);
		__this->set_SUDataLock_15(L_9);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_MoveNext_m5D77AF926EC46BEB0FD5061C38C2F273EAB4C624 (U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m0C1B4A6871083C55CAC972BAD66E34CB9657E77D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7E0EF05706416D515B9AA5714B9E571C4C5A4BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCBDC14DE09DB4E44E6E4AA11047A72345A640DB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA6424F7DFCE092927A55FC40416CD36804F9EB9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tAED27680B76302011A159BB575807FA666117ABA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC2AB25C0A0087DD17FECC9CEA0A70196CDA10814_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m650090C7C94CFD65CB77F22D052649A198247821_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m15854CFD65C119833B7C4FAD79A649BDA2DED3BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m312AFE69432FF330A16B5FBFC0FA772A9412BAF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A549F31F9F2AF26BF27ED095F4169E5F95994CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral246C6E6EC2252F47C327DDDFC23980081CF24321);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * V_1 = NULL;
	List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * V_2 = NULL;
	List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * V_3 = NULL;
	StringBuilder_t * V_4 = NULL;
	Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF  V_5;
	memset((&V_5), 0, sizeof(V_5));
	SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* V_9 = NULL;
	uint32_t V_10 = 0;
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Exception_t * V_16 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0272;
			}
		}

IL_0014:
		{
			// if (sceneObjects == null)
			List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_3 = __this->get_sceneObjects_2();
			if (L_3)
			{
				goto IL_0021;
			}
		}

IL_001c:
		{
			// return;
			goto IL_02b1;
		}

IL_0021:
		{
			// List<System.Numerics.Vector3> combinedMeshVertices = new List<System.Numerics.Vector3>();
			List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * L_4 = (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C *)il2cpp_codegen_object_new(List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C_il2cpp_TypeInfo_var);
			List_1__ctor_m312AFE69432FF330A16B5FBFC0FA772A9412BAF5(L_4, /*hidden argument*/List_1__ctor_m312AFE69432FF330A16B5FBFC0FA772A9412BAF5_RuntimeMethod_var);
			V_2 = L_4;
			// List<uint> combinedMeshIndices = new List<uint>();
			List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_5 = (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 *)il2cpp_codegen_object_new(List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731_il2cpp_TypeInfo_var);
			List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56(L_5, /*hidden argument*/List_1__ctor_mAD05A3427EB03FC1F806975DFA74E06B85697E56_RuntimeMethod_var);
			V_3 = L_5;
			// foreach (SceneUnderstanding.SceneObject so in sceneObjects)
			List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_6 = __this->get_sceneObjects_2();
			NullCheck(L_6);
			Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF  L_7;
			L_7 = List_1_GetEnumerator_m15854CFD65C119833B7C4FAD79A649BDA2DED3BD(L_6, /*hidden argument*/List_1_GetEnumerator_m15854CFD65C119833B7C4FAD79A649BDA2DED3BD_RuntimeMethod_var);
			V_5 = L_7;
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00f5;
			}

IL_003f:
			{
				// foreach (SceneUnderstanding.SceneObject so in sceneObjects)
				SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_8;
				L_8 = Enumerator_get_Current_mA6424F7DFCE092927A55FC40416CD36804F9EB9C_inline((Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF *)(&V_5), /*hidden argument*/Enumerator_get_Current_mA6424F7DFCE092927A55FC40416CD36804F9EB9C_RuntimeMethod_var);
				V_6 = L_8;
				// if (so == null)
				SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_9 = V_6;
				if (!L_9)
				{
					goto IL_00f5;
				}
			}

IL_004f:
			{
				// IEnumerable<SceneUnderstanding.SceneMesh> meshes = so.Meshes;
				SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_10 = V_6;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = SceneObject_get_Meshes_m2F2D9315B53C56638C56B5BDF920BBE9AAC30ADE(L_10, /*hidden argument*/NULL);
				V_7 = (RuntimeObject*)L_11;
				// if (meshes == null)
				RuntimeObject* L_12 = V_7;
				if (!L_12)
				{
					goto IL_00f5;
				}
			}

IL_005f:
			{
				// foreach (SceneUnderstanding.SceneMesh mesh in meshes)
				RuntimeObject* L_13 = V_7;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.SceneUnderstanding.SceneMesh>::GetEnumerator() */, IEnumerable_1_tAED27680B76302011A159BB575807FA666117ABA_il2cpp_TypeInfo_var, L_13);
				V_8 = L_14;
			}

IL_0068:
			try
			{ // begin try (depth: 3)
				{
					goto IL_00da;
				}

IL_006a:
				{
					// foreach (SceneUnderstanding.SceneMesh mesh in meshes)
					RuntimeObject* L_15 = V_8;
					NullCheck(L_15);
					SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * L_16;
					L_16 = InterfaceFuncInvoker0< SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.SceneUnderstanding.SceneMesh>::get_Current() */, IEnumerator_1_tC2AB25C0A0087DD17FECC9CEA0A70196CDA10814_il2cpp_TypeInfo_var, L_15);
					// var mvList = new System.Numerics.Vector3[mesh.VertexCount];
					SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * L_17 = L_16;
					NullCheck(L_17);
					uint32_t L_18;
					L_18 = SceneMesh_get_VertexCount_m6CB8A4D7A83F6EEE07BA8E4227348011BFB2164B(L_17, /*hidden argument*/NULL);
					Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_19 = (Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207*)(Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207*)SZArrayNew(Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207_il2cpp_TypeInfo_var, (uint32_t)L_18);
					V_9 = L_19;
					// mesh.GetVertexPositions(mvList);
					SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * L_20 = L_17;
					Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_21 = V_9;
					NullCheck(L_20);
					SceneMesh_GetVertexPositions_m463700B4680F213A2BB70E740E6098736220BB61(L_20, L_21, /*hidden argument*/NULL);
					// TransformVertices(so.GetLocationAsMatrix(), mvList);
					meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_22 = V_1;
					SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_23 = V_6;
					NullCheck(L_23);
					Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_24;
					L_24 = SceneObject_GetLocationAsMatrix_m38CD7C84956CA8B05E599354CA205C56D038FE7E(L_23, /*hidden argument*/NULL);
					Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_25 = V_9;
					NullCheck(L_22);
					meshScript_TransformVertices_m58425535E6A5E5A8EA79F65BDF93C6DD763755F5(L_22, L_24, L_25, /*hidden argument*/NULL);
					// uint indexOffset = (uint)combinedMeshVertices.Count;
					List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * L_26 = V_2;
					NullCheck(L_26);
					int32_t L_27;
					L_27 = List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_inline(L_26, /*hidden argument*/List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_RuntimeMethod_var);
					V_10 = L_27;
					// combinedMeshVertices.AddRange(mvList);
					List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * L_28 = V_2;
					Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_29 = V_9;
					NullCheck(L_28);
					List_1_AddRange_m650090C7C94CFD65CB77F22D052649A198247821(L_28, (RuntimeObject*)(RuntimeObject*)L_29, /*hidden argument*/List_1_AddRange_m650090C7C94CFD65CB77F22D052649A198247821_RuntimeMethod_var);
					// uint[] mi = new uint[mesh.TriangleIndexCount];
					SceneMesh_tF19B785EC11EB194861D02759A39BEEB53DD56EF * L_30 = L_20;
					NullCheck(L_30);
					uint32_t L_31;
					L_31 = SceneMesh_get_TriangleIndexCount_mA78ADFC88A6047CBBC0DA8548AC47056F583B33D(L_30, /*hidden argument*/NULL);
					UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_32 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)SZArrayNew(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF_il2cpp_TypeInfo_var, (uint32_t)L_31);
					V_11 = L_32;
					// mesh.GetTriangleIndices(mi);
					UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_33 = V_11;
					NullCheck(L_30);
					SceneMesh_GetTriangleIndices_mA4BCAAA8B407849212887461E099754234833ABB(L_30, L_33, /*hidden argument*/NULL);
					// for (int i = 0; i < mi.Length; ++i)
					V_12 = 0;
					goto IL_00d2;
				}

IL_00be:
				{
					// combinedMeshIndices.Add((uint)(mi[i] + indexOffset));
					List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_34 = V_3;
					UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_35 = V_11;
					int32_t L_36 = V_12;
					NullCheck(L_35);
					int32_t L_37 = L_36;
					uint32_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
					uint32_t L_39 = V_10;
					NullCheck(L_34);
					List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08(L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39)), /*hidden argument*/List_1_Add_mC3CBC1C41520819D454F56C20DE548A94A7DEF08_RuntimeMethod_var);
					// for (int i = 0; i < mi.Length; ++i)
					int32_t L_40 = V_12;
					V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
				}

IL_00d2:
				{
					// for (int i = 0; i < mi.Length; ++i)
					int32_t L_41 = V_12;
					UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_42 = V_11;
					NullCheck(L_42);
					if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
					{
						goto IL_00be;
					}
				}

IL_00da:
				{
					// foreach (SceneUnderstanding.SceneMesh mesh in meshes)
					RuntimeObject* L_43 = V_8;
					NullCheck(L_43);
					bool L_44;
					L_44 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_43);
					if (L_44)
					{
						goto IL_006a;
					}
				}

IL_00e3:
				{
					IL2CPP_LEAVE(0xF5, FINALLY_00e5);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_00e5;
			}

FINALLY_00e5:
			{ // begin finally (depth: 3)
				{
					int32_t L_45 = V_0;
					if ((((int32_t)L_45) >= ((int32_t)0)))
					{
						goto IL_00f4;
					}
				}

IL_00e9:
				{
					RuntimeObject* L_46 = V_8;
					if (!L_46)
					{
						goto IL_00f4;
					}
				}

IL_00ed:
				{
					RuntimeObject* L_47 = V_8;
					NullCheck(L_47);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_47);
				}

IL_00f4:
				{
					IL2CPP_END_FINALLY(229)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(229)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0xF5, IL_00f5)
			}

IL_00f5:
			{
				// foreach (SceneUnderstanding.SceneObject so in sceneObjects)
				bool L_48;
				L_48 = Enumerator_MoveNext_mCBDC14DE09DB4E44E6E4AA11047A72345A640DB0((Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mCBDC14DE09DB4E44E6E4AA11047A72345A640DB0_RuntimeMethod_var);
				if (L_48)
				{
					goto IL_003f;
				}
			}

IL_0101:
			{
				IL2CPP_LEAVE(0x115, FINALLY_0103);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0103;
		}

FINALLY_0103:
		{ // begin finally (depth: 2)
			{
				int32_t L_49 = V_0;
				if ((((int32_t)L_49) >= ((int32_t)0)))
				{
					goto IL_0114;
				}
			}

IL_0107:
			{
				Enumerator_Dispose_m7E0EF05706416D515B9AA5714B9E571C4C5A4BC4((Enumerator_t5F7282751AB0C0EAB9789EA5C00FA52547A642FF *)(&V_5), /*hidden argument*/Enumerator_Dispose_m7E0EF05706416D515B9AA5714B9E571C4C5A4BC4_RuntimeMethod_var);
			}

IL_0114:
			{
				IL2CPP_END_FINALLY(259)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(259)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x115, IL_0115)
		}

IL_0115:
		{
			// StringBuilder sb = new StringBuilder();
			StringBuilder_t * L_50 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_50, /*hidden argument*/NULL);
			V_4 = L_50;
			// for (int i = 0; i < combinedMeshVertices.Count; ++i)
			V_13 = 0;
			goto IL_01c9;
		}

IL_0124:
		{
			// sb.Append(string.Format("v {0} {1} {2} {3} {4} {5}\n", combinedMeshVertices[i].X, combinedMeshVertices[i].Y, combinedMeshVertices[i].Z, color.Value.r, color.Value.g, color.Value.b));
			StringBuilder_t * L_51 = V_4;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_52 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_53 = L_52;
			List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * L_54 = V_2;
			int32_t L_55 = V_13;
			NullCheck(L_54);
			Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_56;
			L_56 = List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_inline(L_54, L_55, /*hidden argument*/List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_RuntimeMethod_var);
			float L_57 = L_56.get_X_0();
			float L_58 = L_57;
			RuntimeObject * L_59 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_58);
			NullCheck(L_53);
			ArrayElementTypeCheck (L_53, L_59);
			(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_59);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_60 = L_53;
			List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * L_61 = V_2;
			int32_t L_62 = V_13;
			NullCheck(L_61);
			Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_63;
			L_63 = List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_inline(L_61, L_62, /*hidden argument*/List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_RuntimeMethod_var);
			float L_64 = L_63.get_Y_1();
			float L_65 = L_64;
			RuntimeObject * L_66 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_65);
			NullCheck(L_60);
			ArrayElementTypeCheck (L_60, L_66);
			(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_66);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = L_60;
			List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * L_68 = V_2;
			int32_t L_69 = V_13;
			NullCheck(L_68);
			Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_70;
			L_70 = List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_inline(L_68, L_69, /*hidden argument*/List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_RuntimeMethod_var);
			float L_71 = L_70.get_Z_2();
			float L_72 = L_71;
			RuntimeObject * L_73 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_72);
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, L_73);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_73);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_67;
			Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * L_75 = __this->get_address_of_color_4();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_76;
			L_76 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)L_75, /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
			float L_77 = L_76.get_r_0();
			float L_78 = L_77;
			RuntimeObject * L_79 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_78);
			NullCheck(L_74);
			ArrayElementTypeCheck (L_74, L_79);
			(L_74)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_79);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_80 = L_74;
			Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * L_81 = __this->get_address_of_color_4();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_82;
			L_82 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)L_81, /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
			float L_83 = L_82.get_g_1();
			float L_84 = L_83;
			RuntimeObject * L_85 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_84);
			NullCheck(L_80);
			ArrayElementTypeCheck (L_80, L_85);
			(L_80)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_85);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = L_80;
			Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * L_87 = __this->get_address_of_color_4();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_88;
			L_88 = Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98((Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 *)L_87, /*hidden argument*/Nullable_1_get_Value_mC70C143D6FD348AC39BE80C5D89833436D86ED98_RuntimeMethod_var);
			float L_89 = L_88.get_b_2();
			float L_90 = L_89;
			RuntimeObject * L_91 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_90);
			NullCheck(L_86);
			ArrayElementTypeCheck (L_86, L_91);
			(L_86)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_91);
			String_t* L_92;
			L_92 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral246C6E6EC2252F47C327DDDFC23980081CF24321, L_86, /*hidden argument*/NULL);
			NullCheck(L_51);
			StringBuilder_t * L_93;
			L_93 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_51, L_92, /*hidden argument*/NULL);
			// for (int i = 0; i < combinedMeshVertices.Count; ++i)
			int32_t L_94 = V_13;
			V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
		}

IL_01c9:
		{
			// for (int i = 0; i < combinedMeshVertices.Count; ++i)
			int32_t L_95 = V_13;
			List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * L_96 = V_2;
			NullCheck(L_96);
			int32_t L_97;
			L_97 = List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_inline(L_96, /*hidden argument*/List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_RuntimeMethod_var);
			if ((((int32_t)L_95) < ((int32_t)L_97)))
			{
				goto IL_0124;
			}
		}

IL_01d6:
		{
			// for (int i = 0; i < combinedMeshIndices.Count; i += 3)
			V_14 = 0;
			goto IL_0224;
		}

IL_01db:
		{
			// sb.Append(string.Format("f {0} {1} {2}\n", combinedMeshIndices[i] + 1, combinedMeshIndices[i + 1] + 1, combinedMeshIndices[i + 2] + 1));
			StringBuilder_t * L_98 = V_4;
			List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_99 = V_3;
			int32_t L_100 = V_14;
			NullCheck(L_99);
			uint32_t L_101;
			L_101 = List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_inline(L_99, L_100, /*hidden argument*/List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var);
			uint32_t L_102 = ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1)));
			RuntimeObject * L_103 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_102);
			List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_104 = V_3;
			int32_t L_105 = V_14;
			NullCheck(L_104);
			uint32_t L_106;
			L_106 = List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_inline(L_104, ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1)), /*hidden argument*/List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var);
			uint32_t L_107 = ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)1)));
			RuntimeObject * L_108 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_107);
			List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_109 = V_3;
			int32_t L_110 = V_14;
			NullCheck(L_109);
			uint32_t L_111;
			L_111 = List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_inline(L_109, ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)2)), /*hidden argument*/List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_RuntimeMethod_var);
			uint32_t L_112 = ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1)));
			RuntimeObject * L_113 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_112);
			String_t* L_114;
			L_114 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral1A549F31F9F2AF26BF27ED095F4169E5F95994CC, L_103, L_108, L_113, /*hidden argument*/NULL);
			NullCheck(L_98);
			StringBuilder_t * L_115;
			L_115 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_98, L_114, /*hidden argument*/NULL);
			// for (int i = 0; i < combinedMeshIndices.Count; i += 3)
			int32_t L_116 = V_14;
			V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)3));
		}

IL_0224:
		{
			// for (int i = 0; i < combinedMeshIndices.Count; i += 3)
			int32_t L_117 = V_14;
			List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * L_118 = V_3;
			NullCheck(L_118);
			int32_t L_119;
			L_119 = List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_inline(L_118, /*hidden argument*/List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_RuntimeMethod_var);
			if ((((int32_t)L_117) < ((int32_t)L_119)))
			{
				goto IL_01db;
			}
		}

IL_022e:
		{
			// await SaveStringToDiskAsync(sb.ToString(), fileName);
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_120 = V_1;
			StringBuilder_t * L_121 = V_4;
			NullCheck(L_121);
			String_t* L_122;
			L_122 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_121);
			String_t* L_123 = __this->get_fileName_5();
			NullCheck(L_120);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_124;
			L_124 = meshScript_SaveStringToDiskAsync_mB7945CE2811F1DD80D67AD3A7225F843EC5E2EEE(L_120, L_122, L_123, /*hidden argument*/NULL);
			NullCheck(L_124);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_125;
			L_125 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_124, /*hidden argument*/NULL);
			V_15 = L_125;
			bool L_126;
			L_126 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_15), /*hidden argument*/NULL);
			if (L_126)
			{
				goto IL_028f;
			}
		}

IL_0251:
		{
			int32_t L_127 = 0;
			V_0 = L_127;
			__this->set_U3CU3E1__state_0(L_127);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_128 = V_15;
			__this->set_U3CU3Eu__1_6(L_128);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_129 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m0C1B4A6871083C55CAC972BAD66E34CB9657E77D((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_129, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_15), (U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4_m0C1B4A6871083C55CAC972BAD66E34CB9657E77D_RuntimeMethod_var);
			goto IL_02c4;
		}

IL_0272:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_130 = __this->get_U3CU3Eu__1_6();
			V_15 = L_130;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_131 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_131, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_132 = (-1);
			V_0 = L_132;
			__this->set_U3CU3E1__state_0(L_132);
		}

IL_028f:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_15), /*hidden argument*/NULL);
			goto IL_02b1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0298;
		}
		throw e;
	}

CATCH_0298:
	{ // begin catch(System.Exception)
		V_16 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_133 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_134 = V_16;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_133, L_134, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02c4;
	} // end catch (depth: 1)

IL_02b1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_135 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_135, /*hidden argument*/NULL);
	}

IL_02c4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_MoveNext_m5D77AF926EC46BEB0FD5061C38C2F273EAB4C624_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * _thisAdjusted = reinterpret_cast<U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 *>(__this + _offset);
	U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_MoveNext_m5D77AF926EC46BEB0FD5061C38C2F273EAB4C624(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveAllSceneObjectsOfAKindAsOneObj>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_SetStateMachine_mFCD4BFDAB4805FC1FD7801CE5FE2E69FE8C7CB2F (U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_SetStateMachine_mFCD4BFDAB4805FC1FD7801CE5FE2E69FE8C7CB2F_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 * _thisAdjusted = reinterpret_cast<U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_tEB563BE239A0BDC0CD22F313314142285F89CEC4 *>(__this + _offset);
	U3CSaveAllSceneObjectsOfAKindAsOneObjU3Ed__17_SetStateMachine_mFCD4BFDAB4805FC1FD7801CE5FE2E69FE8C7CB2F(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__15_MoveNext_m3B2FEE95E45AA58D26D95242E982D04A87F9893D (U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m380F52624E899A4D3A85FCCB6654FF8295A151E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m6D57CA467B841FC8E2DA2A0FF27B6C5DC51CF0D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49309EB5A327BE56A61BF2CC70192B4739B2ACA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9D839B936FC49FCDA257D5AD2A82B703872911D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE775FC4FED578FD0A0EA171D66073894DB693287);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  V_10;
	memset((&V_10), 0, sizeof(V_10));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  V_13;
	memset((&V_13), 0, sizeof(V_13));
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_14 = NULL;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	Exception_t * V_17 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0100;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0163;
			}
		}

IL_001b:
		{
			// DateTime currentDate = DateTime.Now;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4;
			L_4 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
			V_2 = L_4;
			// int year = currentDate.Year;
			int32_t L_5;
			L_5 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_3 = L_5;
			// int month = currentDate.Month;
			int32_t L_6;
			L_6 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_4 = L_6;
			// int day = currentDate.Day;
			int32_t L_7;
			L_7 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_5 = L_7;
			// int hour = currentDate.Hour;
			int32_t L_8;
			L_8 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_6 = L_8;
			// int min = currentDate.Minute;
			int32_t L_9;
			L_9 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_7 = L_9;
			// int sec = currentDate.Second;
			int32_t L_10;
			L_10 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_8 = L_10;
			// if (QuerySceneFromDevice)
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_11 = V_1;
			NullCheck(L_11);
			bool L_12 = L_11->get_QuerySceneFromDevice_4();
			if (!L_12)
			{
				goto IL_0193;
			}
		}

IL_0061:
		{
			// string fileName = string.Format("SU_{0}-{1}-{2}_{3}-{4}-{5}.bytes",
			//                                 year, month, day, hour, min, sec);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_13;
			int32_t L_15 = V_3;
			int32_t L_16 = L_15;
			RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_18 = L_14;
			int32_t L_19 = V_4;
			int32_t L_20 = L_19;
			RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_21);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_21);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_18;
			int32_t L_23 = V_5;
			int32_t L_24 = L_23;
			RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_25);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_25);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_22;
			int32_t L_27 = V_6;
			int32_t L_28 = L_27;
			RuntimeObject * L_29 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_28);
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_29);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_29);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = L_26;
			int32_t L_31 = V_7;
			int32_t L_32 = L_31;
			RuntimeObject * L_33 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_32);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_33);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_34 = L_30;
			int32_t L_35 = V_8;
			int32_t L_36 = L_35;
			RuntimeObject * L_37 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_36);
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, L_37);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_37);
			String_t* L_38;
			L_38 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralE775FC4FED578FD0A0EA171D66073894DB693287, L_34, /*hidden argument*/NULL);
			V_9 = L_38;
			// byte[] OnDeviceBytes = GetLatestSceneBytes();
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_39 = V_1;
			NullCheck(L_39);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40;
			L_40 = meshScript_GetLatestSceneBytes_mB6EB39337BF0BE4AA62D3D244D60790D6A0CCE25(L_39, /*hidden argument*/NULL);
			__this->set_U3COnDeviceBytesU3E5__2_3(L_40);
			// var folder = WindowsStorage.ApplicationData.Current.LocalFolder;
			ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * L_41;
			L_41 = ApplicationData_get_Current_mEC0F896D294D660711178C8F7D6F75697B10B230(/*hidden argument*/NULL);
			NullCheck(L_41);
			StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_42;
			L_42 = ApplicationData_get_LocalFolder_mE9F8D02C6F2A4FE34889891B7F7A48AD19202383(L_41, /*hidden argument*/NULL);
			// var file = await folder.CreateFileAsync(fileName, WindowsStorage.CreationCollisionOption.GenerateUniqueName);
			String_t* L_43 = V_9;
			NullCheck(L_42);
			RuntimeObject* L_44;
			L_44 = StorageFolder_CreateFileAsync_m34F3CB53AFCA4762C7B57C4F5F586C5099CD9EA1(L_42, L_43, 0, /*hidden argument*/NULL);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_45;
			L_45 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65(L_44, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
			V_10 = L_45;
			bool L_46;
			L_46 = TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_10), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
			if (L_46)
			{
				goto IL_011d;
			}
		}

IL_00dc:
		{
			int32_t L_47 = 0;
			V_0 = L_47;
			__this->set_U3CU3E1__state_0(L_47);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_48 = V_10;
			__this->set_U3CU3Eu__1_4(L_48);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_49 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m380F52624E899A4D3A85FCCB6654FF8295A151E8((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_49, (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_10), (U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m380F52624E899A4D3A85FCCB6654FF8295A151E8_RuntimeMethod_var);
			goto IL_0288;
		}

IL_0100:
		{
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_50 = __this->get_U3CU3Eu__1_4();
			V_10 = L_50;
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * L_51 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_51, sizeof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 ));
			int32_t L_52 = (-1);
			V_0 = L_52;
			__this->set_U3CU3E1__state_0(L_52);
		}

IL_011d:
		{
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_53;
			L_53 = TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_10), /*hidden argument*/TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
			// await WindowsStorage.FileIO.WriteBytesAsync(file, OnDeviceBytes);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_54 = __this->get_U3COnDeviceBytesU3E5__2_3();
			RuntimeObject* L_55;
			L_55 = FileIO_WriteBytesAsync_mCFE4E28CAEDD1B418E1238F934F2FFB4ECAFFF47(L_53, L_54, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_56;
			L_56 = WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B(L_55, /*hidden argument*/NULL);
			V_11 = L_56;
			bool L_57;
			L_57 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_0180;
			}
		}

IL_013f:
		{
			int32_t L_58 = 1;
			V_0 = L_58;
			__this->set_U3CU3E1__state_0(L_58);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_59 = V_11;
			__this->set_U3CU3Eu__2_5(L_59);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_60 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m6D57CA467B841FC8E2DA2A0FF27B6C5DC51CF0D7((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_60, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), (U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB_m6D57CA467B841FC8E2DA2A0FF27B6C5DC51CF0D7_RuntimeMethod_var);
			goto IL_0288;
		}

IL_0163:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_61 = __this->get_U3CU3Eu__2_5();
			V_11 = L_61;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_62 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_62, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_63 = (-1);
			V_0 = L_63;
			__this->set_U3CU3E1__state_0(L_63);
		}

IL_0180:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_11), /*hidden argument*/NULL);
			// }
			__this->set_U3COnDeviceBytesU3E5__2_3((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
			goto IL_025a;
		}

IL_0193:
		{
			// int fragmentNumber = 0;
			V_12 = 0;
			// foreach (TextAsset serializedScene in SUSerializedScenePaths)
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_64 = V_1;
			NullCheck(L_64);
			List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * L_65 = L_64->get_SUSerializedScenePaths_5();
			NullCheck(L_65);
			Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  L_66;
			L_66 = List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC(L_65, /*hidden argument*/List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
			V_13 = L_66;
		}

IL_01a3:
		try
		{ // begin try (depth: 2)
			{
				goto IL_023a;
			}

IL_01a8:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_67;
				L_67 = Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_inline((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_13), /*hidden argument*/Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
				// byte[] fragmentBytes = serializedScene.bytes;
				NullCheck(L_67);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_68;
				L_68 = TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F(L_67, /*hidden argument*/NULL);
				V_14 = L_68;
				// string fileName = string.Format("SU_Frag{0}-{1}-{2}-{3}_{4}-{5}-{6}.bytes",
				//                                 fragmentNumber++, year, month, day, hour, min, sec);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_69 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = L_69;
				int32_t L_71 = V_12;
				int32_t L_72 = L_71;
				V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
				int32_t L_73 = L_72;
				RuntimeObject * L_74 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_73);
				NullCheck(L_70);
				ArrayElementTypeCheck (L_70, L_74);
				(L_70)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_74);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = L_70;
				int32_t L_76 = V_3;
				int32_t L_77 = L_76;
				RuntimeObject * L_78 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_77);
				NullCheck(L_75);
				ArrayElementTypeCheck (L_75, L_78);
				(L_75)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_78);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_79 = L_75;
				int32_t L_80 = V_4;
				int32_t L_81 = L_80;
				RuntimeObject * L_82 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_81);
				NullCheck(L_79);
				ArrayElementTypeCheck (L_79, L_82);
				(L_79)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_82);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_83 = L_79;
				int32_t L_84 = V_5;
				int32_t L_85 = L_84;
				RuntimeObject * L_86 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_85);
				NullCheck(L_83);
				ArrayElementTypeCheck (L_83, L_86);
				(L_83)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_86);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_87 = L_83;
				int32_t L_88 = V_6;
				int32_t L_89 = L_88;
				RuntimeObject * L_90 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_89);
				NullCheck(L_87);
				ArrayElementTypeCheck (L_87, L_90);
				(L_87)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_90);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_91 = L_87;
				int32_t L_92 = V_7;
				int32_t L_93 = L_92;
				RuntimeObject * L_94 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_93);
				NullCheck(L_91);
				ArrayElementTypeCheck (L_91, L_94);
				(L_91)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_94);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_95 = L_91;
				int32_t L_96 = V_8;
				int32_t L_97 = L_96;
				RuntimeObject * L_98 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_97);
				NullCheck(L_95);
				ArrayElementTypeCheck (L_95, L_98);
				(L_95)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_98);
				String_t* L_99;
				L_99 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralA9D839B936FC49FCDA257D5AD2A82B703872911D, L_95, /*hidden argument*/NULL);
				V_15 = L_99;
				// string folder = Path.GetTempPath();
				IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
				String_t* L_100;
				L_100 = Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83(/*hidden argument*/NULL);
				// string file = Path.Combine(folder, fileName);
				String_t* L_101 = V_15;
				String_t* L_102;
				L_102 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_100, L_101, /*hidden argument*/NULL);
				V_16 = L_102;
				// File.WriteAllBytes(file, fragmentBytes);
				String_t* L_103 = V_16;
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_104 = V_14;
				File_WriteAllBytes_m1E88860F73A6A2150FAB97D9BF3F44596F06036F(L_103, L_104, /*hidden argument*/NULL);
				// Debug.Log("SceneUnderstandingManager.SaveBytesToDisk: Scene Fragment saved at " + file);
				String_t* L_105 = V_16;
				String_t* L_106;
				L_106 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral49309EB5A327BE56A61BF2CC70192B4739B2ACA3, L_105, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_106, /*hidden argument*/NULL);
			}

IL_023a:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				bool L_107;
				L_107 = Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_13), /*hidden argument*/Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
				if (L_107)
				{
					goto IL_01a8;
				}
			}

IL_0246:
			{
				IL2CPP_LEAVE(0x25A, FINALLY_0248);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0248;
		}

FINALLY_0248:
		{ // begin finally (depth: 2)
			{
				int32_t L_108 = V_0;
				if ((((int32_t)L_108) >= ((int32_t)0)))
				{
					goto IL_0259;
				}
			}

IL_024c:
			{
				Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_13), /*hidden argument*/Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
			}

IL_0259:
			{
				IL2CPP_END_FINALLY(584)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(584)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x25A, IL_025a)
		}

IL_025a:
		{
			goto IL_0275;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_025c;
		}
		throw e;
	}

CATCH_025c:
	{ // begin catch(System.Exception)
		V_17 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_109 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_110 = V_17;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_109, L_110, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0288;
	} // end catch (depth: 1)

IL_0275:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_111 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_111, /*hidden argument*/NULL);
	}

IL_0288:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveBytesToDiskAsyncU3Ed__15_MoveNext_m3B2FEE95E45AA58D26D95242E982D04A87F9893D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * _thisAdjusted = reinterpret_cast<U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *>(__this + _offset);
	U3CSaveBytesToDiskAsyncU3Ed__15_MoveNext_m3B2FEE95E45AA58D26D95242E982D04A87F9893D(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveBytesToDiskAsync>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveBytesToDiskAsyncU3Ed__15_SetStateMachine_m8E62EC571208FDF6ACA3F00EB8879E4189897CE1 (U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveBytesToDiskAsyncU3Ed__15_SetStateMachine_m8E62EC571208FDF6ACA3F00EB8879E4189897CE1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB * _thisAdjusted = reinterpret_cast<U3CSaveBytesToDiskAsyncU3Ed__15_t283DF670D99891BEF1047C38B8961C09DFCFB6EB *>(__this + _offset);
	U3CSaveBytesToDiskAsyncU3Ed__15_SetStateMachine_m8E62EC571208FDF6ACA3F00EB8879E4189897CE1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__16_MoveNext_mA6B48420AE8D3E5D868C7060A5B55C96D8C9A5BF (U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_m30DA030F901C9667633DE2C3AADAE56057D891D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA431B9CBD909811A2D75413BCADE1EADDEC10297_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tC63F95E6BE7630C140ECEF20D623332C90D67911_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33D3C0AEF8C266168530C8D0BED3A31C2B498C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECA7D17E28BC58E4F7D9F94DE1F32FEFBB3183CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE298226A64EE7559D694BA8C15916059988007E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * V_1 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * V_9 = NULL;
	List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * V_10 = NULL;
	Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * V_11 = NULL;
	SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * V_12 = NULL;
	SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* V_13 = NULL;
	int32_t V_14 = 0;
	Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  V_15;
	memset((&V_15), 0, sizeof(V_15));
	TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * V_16 = NULL;
	SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * V_17 = NULL;
	Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * V_20 = NULL;
	String_t* V_21 = NULL;
	RuntimeObject* V_22 = NULL;
	SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * V_23 = NULL;
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Exception_t * V_25 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 8> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_02ab;
			}
		}

IL_0014:
		{
			// DateTime currentDate = DateTime.Now;
			IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
			DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3;
			L_3 = DateTime_get_Now_mCAC695993D6E2C57B900C83BEF3F8B18BC4EBC2C(/*hidden argument*/NULL);
			V_2 = L_3;
			// int year = currentDate.Year;
			int32_t L_4;
			L_4 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_3 = L_4;
			// int month = currentDate.Month;
			int32_t L_5;
			L_5 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_4 = L_5;
			// int day = currentDate.Day;
			int32_t L_6;
			L_6 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_5 = L_6;
			// int hour = currentDate.Hour;
			int32_t L_7;
			L_7 = DateTime_get_Hour_m6AC78B553639A108EA00728498FA037E52CC425E((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_6 = L_7;
			// int min = currentDate.Minute;
			int32_t L_8;
			L_8 = DateTime_get_Minute_m1BBE1AABAAFE39019ED26585D12E67A1F9D5A4AA((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_7 = L_8;
			// int sec = currentDate.Second;
			int32_t L_9;
			L_9 = DateTime_get_Second_m6E1FEADC4E62BCC99846934C0761F0AF67DFE17A((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_2), /*hidden argument*/NULL);
			V_8 = L_9;
			// List<SceneUnderstanding.SceneObjectKind> sceneObjectKinds = new List<SceneObjectKind>();
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_10 = (List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 *)il2cpp_codegen_object_new(List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2_il2cpp_TypeInfo_var);
			List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7(L_10, /*hidden argument*/List_1__ctor_mCA3F1B4A7C89257C36FDA2E4302AB750F8C5A7E7_RuntimeMethod_var);
			V_9 = L_10;
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Background);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_11 = V_9;
			NullCheck(L_11);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_11, 0, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Ceiling);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_12 = V_9;
			NullCheck(L_12);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_12, 3, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.CompletelyInferred);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_13 = V_9;
			NullCheck(L_13);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_13, ((int32_t)249), /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Floor);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_14 = V_9;
			NullCheck(L_14);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_14, 2, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Platform);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_15 = V_9;
			NullCheck(L_15);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_15, 4, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Unknown);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_16 = V_9;
			NullCheck(L_16);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_16, ((int32_t)247), /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.Wall);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_17 = V_9;
			NullCheck(L_17);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_17, 1, /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// sceneObjectKinds.Add(SceneUnderstanding.SceneObjectKind.World);
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_18 = V_9;
			NullCheck(L_18);
			List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B(L_18, ((int32_t)248), /*hidden argument*/List_1_Add_mA0A5EB898635184593F205920B463AE39BE2330B_RuntimeMethod_var);
			// List<Task> tasks = new List<Task>();
			List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_19 = (List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB *)il2cpp_codegen_object_new(List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB_il2cpp_TypeInfo_var);
			List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85(L_19, /*hidden argument*/List_1__ctor_mEB3962D290C0D4303037310B74DE852FB14B2B85_RuntimeMethod_var);
			V_10 = L_19;
			// SceneUnderstanding.Scene scene = null;
			V_11 = (Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D *)NULL;
			// if (QuerySceneFromDevice)
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_20 = V_1;
			NullCheck(L_20);
			bool L_21 = L_20->get_QuerySceneFromDevice_4();
			if (!L_21)
			{
				goto IL_00e3;
			}
		}

IL_00b4:
		{
			// SceneFragment sceneFragment = GetLatestSceneSerialization();
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_22 = V_1;
			NullCheck(L_22);
			SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_23;
			L_23 = meshScript_GetLatestSceneSerialization_m6E0DF0C1D76A23D1E3CF406D734B4F01E8269733(L_22, /*hidden argument*/NULL);
			V_12 = L_23;
			// if (sceneFragment == null)
			SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_24 = V_12;
			if (L_24)
			{
				goto IL_00cf;
			}
		}

IL_00c0:
		{
			// Debug.LogWarning("SceneUnderstandingManager.SaveObjsToDisk: Nothing to save.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralECA7D17E28BC58E4F7D9F94DE1F32FEFBB3183CE, /*hidden argument*/NULL);
			// return;
			goto IL_02ea;
		}

IL_00cf:
		{
			// SceneFragment[] sceneFragmentsArray = new SceneFragment[1] { sceneFragment };
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_25 = (SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)SZArrayNew(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var, (uint32_t)1);
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_26 = L_25;
			SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_27 = V_12;
			NullCheck(L_26);
			ArrayElementTypeCheck (L_26, L_27);
			(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 *)L_27);
			// scene = SceneUnderstanding.Scene.FromFragments(sceneFragmentsArray);
			Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_28;
			L_28 = Scene_FromFragments_m0E7D5E013FED54A4B4D448F83EA965E591541DC1(L_26, /*hidden argument*/NULL);
			V_11 = L_28;
			// }
			goto IL_015a;
		}

IL_00e3:
		{
			// SceneFragment[] sceneFragments = new SceneFragment[SUSerializedScenePaths.Count];
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_29 = V_1;
			NullCheck(L_29);
			List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * L_30 = L_29->get_SUSerializedScenePaths_5();
			NullCheck(L_30);
			int32_t L_31;
			L_31 = List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_inline(L_30, /*hidden argument*/List_1_get_Count_m0BB1FBDBC8F42797B9A8C54C0E2D9B33FBD8EF08_RuntimeMethod_var);
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_32 = (SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B*)SZArrayNew(SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B_il2cpp_TypeInfo_var, (uint32_t)L_31);
			V_13 = L_32;
			// int index = 0;
			V_14 = 0;
			// foreach (TextAsset serializedScene in SUSerializedScenePaths)
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_33 = V_1;
			NullCheck(L_33);
			List_1_t41BC6F3A5B4311505548B311055B89F97C7D6E1E * L_34 = L_33->get_SUSerializedScenePaths_5();
			NullCheck(L_34);
			Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF  L_35;
			L_35 = List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC(L_34, /*hidden argument*/List_1_GetEnumerator_m5071ED1CC09FE6C3C40AC415FF08849513821ECC_RuntimeMethod_var);
			V_15 = L_35;
		}

IL_0105:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0134;
			}

IL_0107:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_36;
				L_36 = Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_inline((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_15), /*hidden argument*/Enumerator_get_Current_m78F743D03DEB4196594AF8962F14AAC741AC72ED_RuntimeMethod_var);
				V_16 = L_36;
				// if (serializedScene != null)
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_37 = V_16;
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_38;
				L_38 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (!L_38)
				{
					goto IL_0134;
				}
			}

IL_011a:
			{
				// byte[] sceneData = serializedScene.bytes;
				TextAsset_t1969F5FD1F628C7C0A70D9605C0D251B4F547234 * L_39 = V_16;
				NullCheck(L_39);
				ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40;
				L_40 = TextAsset_get_bytes_m5F15438DABBBAAF7434D53B6778A97A498C1940F(L_39, /*hidden argument*/NULL);
				// SceneFragment frag = SceneFragment.Deserialize(sceneData);
				SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_41;
				L_41 = SceneFragment_Deserialize_m31FC02F1B5882ED8D63A1A4F3CCE6B33F50D9777(L_40, /*hidden argument*/NULL);
				V_17 = L_41;
				// sceneFragments[index++] = frag;
				SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_42 = V_13;
				int32_t L_43 = V_14;
				int32_t L_44 = L_43;
				V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
				SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 * L_45 = V_17;
				NullCheck(L_42);
				ArrayElementTypeCheck (L_42, L_45);
				(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (SceneFragment_tD6FE1C97329D3AE375530AE41C05D82515D2F538 *)L_45);
			}

IL_0134:
			{
				// foreach (TextAsset serializedScene in SUSerializedScenePaths)
				bool L_46;
				L_46 = Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_15), /*hidden argument*/Enumerator_MoveNext_m0FF0AC12F81D418DB657D7327D7E81DE072E5E7D_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_0107;
				}
			}

IL_013d:
			{
				IL2CPP_LEAVE(0x151, FINALLY_013f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_013f;
		}

FINALLY_013f:
		{ // begin finally (depth: 2)
			{
				int32_t L_47 = V_0;
				if ((((int32_t)L_47) >= ((int32_t)0)))
				{
					goto IL_0150;
				}
			}

IL_0143:
			{
				Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F((Enumerator_t76D020B3DB30FFB3AD9F8997A3B8EFAA1F00F7EF *)(&V_15), /*hidden argument*/Enumerator_Dispose_m9EB04FCE46401B2190C30A58D31FEE26BA15C18F_RuntimeMethod_var);
			}

IL_0150:
			{
				IL2CPP_END_FINALLY(319)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(319)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x151, IL_0151)
		}

IL_0151:
		{
			// scene = SceneUnderstanding.Scene.FromFragments(sceneFragments);
			SceneFragmentU5BU5D_tE1EE57545EBA99982B93F8A66DA0E8C61DFB6B8B* L_48 = V_13;
			Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_49;
			L_49 = Scene_FromFragments_m0E7D5E013FED54A4B4D448F83EA965E591541DC1(L_48, /*hidden argument*/NULL);
			V_11 = L_49;
		}

IL_015a:
		{
			// if (scene == null)
			Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_50 = V_11;
			if (L_50)
			{
				goto IL_016d;
			}
		}

IL_015e:
		{
			// Debug.LogWarning("SceneUnderstandingManager.SaveObjsToDiskAsync: Scene is null");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralFE298226A64EE7559D694BA8C15916059988007E, /*hidden argument*/NULL);
			// return;
			goto IL_02ea;
		}

IL_016d:
		{
			// foreach (SceneUnderstanding.SceneObjectKind soKind in sceneObjectKinds)
			List_1_t07AA505125FC430B4A9AA8D07BF949F68972F6A2 * L_51 = V_9;
			NullCheck(L_51);
			Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54  L_52;
			L_52 = List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B(L_51, /*hidden argument*/List_1_GetEnumerator_mF77159120E380419524D9338A8F33D27460A5F9B_RuntimeMethod_var);
			V_18 = L_52;
		}

IL_0176:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0253;
			}

IL_017b:
			{
				// foreach (SceneUnderstanding.SceneObjectKind soKind in sceneObjectKinds)
				int32_t L_53;
				L_53 = Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_inline((Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *)(&V_18), /*hidden argument*/Enumerator_get_Current_mED17FF7801359A6E44DE28A3DE0F4DDA3FC905E0_RuntimeMethod_var);
				V_19 = L_53;
				// List<SceneUnderstanding.SceneObject> allObjectsOfAKind = new List<SceneObject>();
				List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_54 = (List_1_t884C040642DCB159A123549C8F62D3860DCC52FF *)il2cpp_codegen_object_new(List_1_t884C040642DCB159A123549C8F62D3860DCC52FF_il2cpp_TypeInfo_var);
				List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6(L_54, /*hidden argument*/List_1__ctor_mF37C7F12F27B8716644D04AB9D484ECEE44848E6_RuntimeMethod_var);
				V_20 = L_54;
				// foreach (SceneUnderstanding.SceneObject sceneObject in scene.SceneObjects)
				Scene_t5EDBB07EFAA9CEA5996F43988839E7631982B57D * L_55 = V_11;
				NullCheck(L_55);
				RuntimeObject* L_56;
				L_56 = Scene_get_SceneObjects_mB784FAB9903AD8AD46D3ADFF5BF4CF389AAE77F6(L_55, /*hidden argument*/NULL);
				NullCheck(L_56);
				RuntimeObject* L_57;
				L_57 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::GetEnumerator() */, IEnumerable_1_tA431B9CBD909811A2D75413BCADE1EADDEC10297_il2cpp_TypeInfo_var, L_56);
				V_22 = L_57;
			}

IL_0199:
			try
			{ // begin try (depth: 3)
				{
					goto IL_01b8;
				}

IL_019b:
				{
					// foreach (SceneUnderstanding.SceneObject sceneObject in scene.SceneObjects)
					RuntimeObject* L_58 = V_22;
					NullCheck(L_58);
					SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_59;
					L_59 = InterfaceFuncInvoker0< SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.SceneUnderstanding.SceneObject>::get_Current() */, IEnumerator_1_tC63F95E6BE7630C140ECEF20D623332C90D67911_il2cpp_TypeInfo_var, L_58);
					V_23 = L_59;
					// if (sceneObject.Kind == soKind)
					SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_60 = V_23;
					NullCheck(L_60);
					int32_t L_61;
					L_61 = SceneObject_get_Kind_m2DC82991CD3E3BFCE41A0CEA0098BC42A9D7207D(L_60, /*hidden argument*/NULL);
					int32_t L_62 = V_19;
					if ((!(((uint32_t)L_61) == ((uint32_t)L_62))))
					{
						goto IL_01b8;
					}
				}

IL_01af:
				{
					// allObjectsOfAKind.Add(sceneObject);
					List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_63 = V_20;
					SceneObject_t2EF9F84C5DDB101EE4B53827FE38617BB0B4F6BC * L_64 = V_23;
					NullCheck(L_63);
					List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA(L_63, L_64, /*hidden argument*/List_1_Add_m5255798E349416BABA17730F9F8EA34D8FDDEDBA_RuntimeMethod_var);
				}

IL_01b8:
				{
					// foreach (SceneUnderstanding.SceneObject sceneObject in scene.SceneObjects)
					RuntimeObject* L_65 = V_22;
					NullCheck(L_65);
					bool L_66;
					L_66 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_65);
					if (L_66)
					{
						goto IL_019b;
					}
				}

IL_01c1:
				{
					IL2CPP_LEAVE(0x1D3, FINALLY_01c3);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_01c3;
			}

FINALLY_01c3:
			{ // begin finally (depth: 3)
				{
					int32_t L_67 = V_0;
					if ((((int32_t)L_67) >= ((int32_t)0)))
					{
						goto IL_01d2;
					}
				}

IL_01c7:
				{
					RuntimeObject* L_68 = V_22;
					if (!L_68)
					{
						goto IL_01d2;
					}
				}

IL_01cb:
				{
					RuntimeObject* L_69 = V_22;
					NullCheck(L_69);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_69);
				}

IL_01d2:
				{
					IL2CPP_END_FINALLY(451)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(451)
			{
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				IL2CPP_JUMP_TBL(0x1D3, IL_01d3)
			}

IL_01d3:
			{
				// string fileName = string.Format("SU_{0}_{1}-{2}-{3}_{4}-{5}-{6}.obj",
				//                                 soKind.ToString(), year, month, day, hour, min, sec);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_70 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)7);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = L_70;
				RuntimeObject * L_72 = Box(SceneObjectKind_tDF43C6EC2284DBB922EB87D401922E7F2B405B76_il2cpp_TypeInfo_var, (&V_19));
				NullCheck(L_72);
				String_t* L_73;
				L_73 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
				V_19 = *(int32_t*)UnBox(L_72);
				NullCheck(L_71);
				ArrayElementTypeCheck (L_71, L_73);
				(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_73);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = L_71;
				int32_t L_75 = V_3;
				int32_t L_76 = L_75;
				RuntimeObject * L_77 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_76);
				NullCheck(L_74);
				ArrayElementTypeCheck (L_74, L_77);
				(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_77);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_78 = L_74;
				int32_t L_79 = V_4;
				int32_t L_80 = L_79;
				RuntimeObject * L_81 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_80);
				NullCheck(L_78);
				ArrayElementTypeCheck (L_78, L_81);
				(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_81);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_82 = L_78;
				int32_t L_83 = V_5;
				int32_t L_84 = L_83;
				RuntimeObject * L_85 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_84);
				NullCheck(L_82);
				ArrayElementTypeCheck (L_82, L_85);
				(L_82)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_85);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_86 = L_82;
				int32_t L_87 = V_6;
				int32_t L_88 = L_87;
				RuntimeObject * L_89 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_88);
				NullCheck(L_86);
				ArrayElementTypeCheck (L_86, L_89);
				(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_89);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_90 = L_86;
				int32_t L_91 = V_7;
				int32_t L_92 = L_91;
				RuntimeObject * L_93 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_92);
				NullCheck(L_90);
				ArrayElementTypeCheck (L_90, L_93);
				(L_90)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_93);
				ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_94 = L_90;
				int32_t L_95 = V_8;
				int32_t L_96 = L_95;
				RuntimeObject * L_97 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_96);
				NullCheck(L_94);
				ArrayElementTypeCheck (L_94, L_97);
				(L_94)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_97);
				String_t* L_98;
				L_98 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteral33D3C0AEF8C266168530C8D0BED3A31C2B498C8C, L_94, /*hidden argument*/NULL);
				V_21 = L_98;
				// if (allObjectsOfAKind.Count > 0)
				List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_99 = V_20;
				NullCheck(L_99);
				int32_t L_100;
				L_100 = List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_inline(L_99, /*hidden argument*/List_1_get_Count_mE792CFEFA0D524F630ED195F5A74F953346942BB_RuntimeMethod_var);
				if ((((int32_t)L_100) <= ((int32_t)0)))
				{
					goto IL_0253;
				}
			}

IL_023a:
			{
				// tasks.Add(SaveAllSceneObjectsOfAKindAsOneObj(allObjectsOfAKind, GetColor(soKind), fileName));
				List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_101 = V_10;
				meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_102 = V_1;
				List_1_t884C040642DCB159A123549C8F62D3860DCC52FF * L_103 = V_20;
				meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_104 = V_1;
				int32_t L_105 = V_19;
				NullCheck(L_104);
				Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_106;
				L_106 = meshScript_GetColor_m9329816A33114C16F56150F3EFE131CAE326C72C(L_104, L_105, /*hidden argument*/NULL);
				String_t* L_107 = V_21;
				NullCheck(L_102);
				Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_108;
				L_108 = meshScript_SaveAllSceneObjectsOfAKindAsOneObj_mF89F48658DE977440271645408A4D4886234FF05(L_102, L_103, L_106, L_107, /*hidden argument*/NULL);
				NullCheck(L_101);
				List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514(L_101, L_108, /*hidden argument*/List_1_Add_m49B79EA40A2D9255F724647E5D3BA6FA265F2514_RuntimeMethod_var);
			}

IL_0253:
			{
				// foreach (SceneUnderstanding.SceneObjectKind soKind in sceneObjectKinds)
				bool L_109;
				L_109 = Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF((Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *)(&V_18), /*hidden argument*/Enumerator_MoveNext_mF7E1783D62714EC882640A7A9D8C62A478F561EF_RuntimeMethod_var);
				if (L_109)
				{
					goto IL_017b;
				}
			}

IL_025f:
			{
				IL2CPP_LEAVE(0x273, FINALLY_0261);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0261;
		}

FINALLY_0261:
		{ // begin finally (depth: 2)
			{
				int32_t L_110 = V_0;
				if ((((int32_t)L_110) >= ((int32_t)0)))
				{
					goto IL_0272;
				}
			}

IL_0265:
			{
				Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4((Enumerator_t26471CC4DE66A2F86FFDFACFF1CE7D6B896F9B54 *)(&V_18), /*hidden argument*/Enumerator_Dispose_m6172BAD2B0D9FC1881AB61FCDD504276FF9E5CB4_RuntimeMethod_var);
			}

IL_0272:
			{
				IL2CPP_END_FINALLY(609)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(609)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x273, IL_0273)
		}

IL_0273:
		{
			// await Task.WhenAll(tasks);
			List_1_tA3E7ECFCA71D1B53362EA1A7ED7D095F0C221DFB * L_111 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_112;
			L_112 = Task_WhenAll_mA7F77F1CCEF7F07CFDC5F4586FE529E1B4684CBF(L_111, /*hidden argument*/NULL);
			NullCheck(L_112);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_113;
			L_113 = Task_GetAwaiter_m1FF7528A8FE13F79207DFE970F642078EF6B1260(L_112, /*hidden argument*/NULL);
			V_24 = L_113;
			bool L_114;
			L_114 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_24), /*hidden argument*/NULL);
			if (L_114)
			{
				goto IL_02c8;
			}
		}

IL_028a:
		{
			int32_t L_115 = 0;
			V_0 = L_115;
			__this->set_U3CU3E1__state_0(L_115);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_116 = V_24;
			__this->set_U3CU3Eu__1_3(L_116);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_117 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_m30DA030F901C9667633DE2C3AADAE56057D891D4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_117, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_24), (U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251_m30DA030F901C9667633DE2C3AADAE56057D891D4_RuntimeMethod_var);
			goto IL_02fd;
		}

IL_02ab:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_118 = __this->get_U3CU3Eu__1_3();
			V_24 = L_118;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_119 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_119, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_120 = (-1);
			V_0 = L_120;
			__this->set_U3CU3E1__state_0(L_120);
		}

IL_02c8:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_24), /*hidden argument*/NULL);
			goto IL_02ea;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d1;
		}
		throw e;
	}

CATCH_02d1:
	{ // begin catch(System.Exception)
		V_25 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_121 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_122 = V_25;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_121, L_122, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02fd;
	} // end catch (depth: 1)

IL_02ea:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_123 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_123, /*hidden argument*/NULL);
	}

IL_02fd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveObjsToDiskAsyncU3Ed__16_MoveNext_mA6B48420AE8D3E5D868C7060A5B55C96D8C9A5BF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * _thisAdjusted = reinterpret_cast<U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 *>(__this + _offset);
	U3CSaveObjsToDiskAsyncU3Ed__16_MoveNext_mA6B48420AE8D3E5D868C7060A5B55C96D8C9A5BF(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveObjsToDiskAsync>d__16::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveObjsToDiskAsyncU3Ed__16_SetStateMachine_m303F0302B764757DB6B99BC0E1203B513ED37345 (U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveObjsToDiskAsyncU3Ed__16_SetStateMachine_m303F0302B764757DB6B99BC0E1203B513ED37345_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 * _thisAdjusted = reinterpret_cast<U3CSaveObjsToDiskAsyncU3Ed__16_t4FC26A97F76D42092395135D3940E05A262FA251 *>(__this + _offset);
	U3CSaveObjsToDiskAsyncU3Ed__16_SetStateMachine_m303F0302B764757DB6B99BC0E1203B513ED37345(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__18_MoveNext_m797C70F662ACE925F8541891B6151F119F8A28FA (U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m5BC72E540C8FCA9F3A99CD1ED5686E2964D7C30E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m522DA460FB9420E4F3DD1F8C49C1A1EDD2002016_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B701A0FDB41E749212AA746F1FD14C05709093);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB87370D19C007D145960DF2A456363EB622BE20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * V_1 = NULL;
	TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Exception_t * V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0087;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00e7;
			}
		}

IL_0018:
		{
			// if (string.IsNullOrEmpty(data))
			String_t* L_4 = __this->get_data_2();
			bool L_5;
			L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0034;
			}
		}

IL_0025:
		{
			// Debug.LogWarning("SceneUnderstandingManager.SaveStringToDiskAsync: Nothing to save.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralBB87370D19C007D145960DF2A456363EB622BE20, /*hidden argument*/NULL);
			// return;
			goto IL_0157;
		}

IL_0034:
		{
			// if (QuerySceneFromDevice)
			meshScript_tB87B15B8BF345E7371E00DB0A84B86E367688217 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = L_6->get_QuerySceneFromDevice_4();
			if (!L_7)
			{
				goto IL_010c;
			}
		}

IL_003f:
		{
			// var folder = WindowsStorage.ApplicationData.Current.LocalFolder;
			ApplicationData_t486BE728AFC812016C7F1CA9496C903F53FAD4F9 * L_8;
			L_8 = ApplicationData_get_Current_mEC0F896D294D660711178C8F7D6F75697B10B230(/*hidden argument*/NULL);
			NullCheck(L_8);
			StorageFolder_tA156F37619B984055341123D52F47ADAEEF33DEA * L_9;
			L_9 = ApplicationData_get_LocalFolder_mE9F8D02C6F2A4FE34889891B7F7A48AD19202383(L_8, /*hidden argument*/NULL);
			// var file = await folder.CreateFileAsync(fileName, WindowsStorage.CreationCollisionOption.GenerateUniqueName);
			String_t* L_10 = __this->get_fileName_4();
			NullCheck(L_9);
			RuntimeObject* L_11;
			L_11 = StorageFolder_CreateFileAsync_m34F3CB53AFCA4762C7B57C4F5F586C5099CD9EA1(L_9, L_10, 0, /*hidden argument*/NULL);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_12;
			L_12 = WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65(L_11, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisStorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF_m255C5C40BA1A1BBB82340801EAE5B5258D105D65_RuntimeMethod_var);
			V_2 = L_12;
			bool L_13;
			L_13 = TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3A21283B9F3CF407C6B5FF84EBAE7A1CA1D3C5EA_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_00a3;
			}
		}

IL_0064:
		{
			int32_t L_14 = 0;
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_15 = V_2;
			__this->set_U3CU3Eu__1_5(L_15);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_16 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m5BC72E540C8FCA9F3A99CD1ED5686E2964D7C30E((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_16, (TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_2), (U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m5BC72E540C8FCA9F3A99CD1ED5686E2964D7C30E_RuntimeMethod_var);
			goto IL_016a;
		}

IL_0087:
		{
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531  L_17 = __this->get_U3CU3Eu__1_5();
			V_2 = L_17;
			TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 * L_18 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_18, sizeof(TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 ));
			int32_t L_19 = (-1);
			V_0 = L_19;
			__this->set_U3CU3E1__state_0(L_19);
		}

IL_00a3:
		{
			StorageFile_t1CD521FB3B95AFBC10580646B6FFAD37A24AE6AF * L_20;
			L_20 = TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B((TaskAwaiter_1_tCACA36A54A2935B250BDD03F6B9AAEA729161531 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m414729BE2CEB9165FBB2BEF1285113D2C375DC9B_RuntimeMethod_var);
			// await WindowsStorage.FileIO.AppendTextAsync(file, data);
			String_t* L_21 = __this->get_data_2();
			RuntimeObject* L_22;
			L_22 = FileIO_AppendTextAsync_m43E7E7074D7E9CB760170590216025B230DF9E56(L_20, L_21, /*hidden argument*/NULL);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_23;
			L_23 = WindowsRuntimeSystemExtensions_GetAwaiter_m0218FEA730C2DAD8311AA5A6BAE767DC7BB5D58B(L_22, /*hidden argument*/NULL);
			V_3 = L_23;
			bool L_24;
			L_24 = TaskAwaiter_get_IsCompleted_m6F97613C55E505B5664C3C0CFC4677D296EAA8BC((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_0103;
			}
		}

IL_00c4:
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_26 = V_3;
			__this->set_U3CU3Eu__2_6(L_26);
			AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m522DA460FB9420E4F3DD1F8C49C1A1EDD2002016((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_27, (TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), (U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C_TisU3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487_m522DA460FB9420E4F3DD1F8C49C1A1EDD2002016_RuntimeMethod_var);
			goto IL_016a;
		}

IL_00e7:
		{
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C  L_28 = __this->get_U3CU3Eu__2_6();
			V_3 = L_28;
			TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C * L_29 = __this->get_address_of_U3CU3Eu__2_6();
			il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_0103:
		{
			TaskAwaiter_GetResult_m578EEFEC4DD1AE5E77C899B8BAA3825EB79D1330((TaskAwaiter_t3780D365E9D10C2D6C4E76C78AA0CDF92B8F181C *)(&V_3), /*hidden argument*/NULL);
			// }
			goto IL_013c;
		}

IL_010c:
		{
			// string folder = Path.GetTempPath();
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_31;
			L_31 = Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83(/*hidden argument*/NULL);
			// string file = Path.Combine(folder, fileName);
			String_t* L_32 = __this->get_fileName_4();
			String_t* L_33;
			L_33 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_31, L_32, /*hidden argument*/NULL);
			V_4 = L_33;
			// File.WriteAllText(file, data);
			String_t* L_34 = V_4;
			String_t* L_35 = __this->get_data_2();
			File_WriteAllText_mA0528ED8C0C9B94864772B9036FC4B206682EE9C(L_34, L_35, /*hidden argument*/NULL);
			// Debug.Log("SceneUnderstandingManager.SaveStringToDiskAsync: Scene Objects saved at " + file);
			String_t* L_36 = V_4;
			String_t* L_37;
			L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral51B701A0FDB41E749212AA746F1FD14C05709093, L_36, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_37, /*hidden argument*/NULL);
		}

IL_013c:
		{
			goto IL_0157;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013e;
		}
		throw e;
	}

CATCH_013e:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_38 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_39 = V_5;
		AsyncTaskMethodBuilder_SetException_m54A9FC97C33C9AC4E514923F7C58D76B94D344C4((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_38, L_39, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016a;
	} // end catch (depth: 1)

IL_0157:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m89AF7435D1B349EE8A377B5DFFC082999D9F8CD9((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_40, /*hidden argument*/NULL);
	}

IL_016a:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveStringToDiskAsyncU3Ed__18_MoveNext_m797C70F662ACE925F8541891B6151F119F8A28FA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * _thisAdjusted = reinterpret_cast<U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *>(__this + _offset);
	U3CSaveStringToDiskAsyncU3Ed__18_MoveNext_m797C70F662ACE925F8541891B6151F119F8A28FA(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.SceneUnderstanding.Samples.Unity.meshScript/<SaveStringToDiskAsync>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveStringToDiskAsyncU3Ed__18_SetStateMachine_m1F3C1F2EE0C3152389D047EE0996D57EA12256B2 (U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_m68788E9C6C30BBAA030DEC1963E8A6C6B2C8A3E6((AsyncTaskMethodBuilder_t7A010673279CD8726E70047F1D15B3D17C56503B *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSaveStringToDiskAsyncU3Ed__18_SetStateMachine_m1F3C1F2EE0C3152389D047EE0996D57EA12256B2_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 * _thisAdjusted = reinterpret_cast<U3CSaveStringToDiskAsyncU3Ed__18_tA5D7C2D27A591BA84BDD291E5F3C45EE02749487 *>(__this + _offset);
	U3CSaveStringToDiskAsyncU3Ed__18_SetStateMachine_m1F3C1F2EE0C3152389D047EE0996D57EA12256B2(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  Vector3_Transform_mD804FF9D5DF3DCB0235DC44C6D2A634CF27CC4F0_inline (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  ___position0, Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  ___matrix1, const RuntimeMethod* method)
{
	{
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_0 = ___position0;
		float L_1 = L_0.get_X_0();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_2 = ___matrix1;
		float L_3 = L_2.get_M11_0();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_4 = ___position0;
		float L_5 = L_4.get_Y_1();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_6 = ___matrix1;
		float L_7 = L_6.get_M21_4();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_8 = ___position0;
		float L_9 = L_8.get_Z_2();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_10 = ___matrix1;
		float L_11 = L_10.get_M31_8();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_12 = ___matrix1;
		float L_13 = L_12.get_M41_12();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_14 = ___position0;
		float L_15 = L_14.get_X_0();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_16 = ___matrix1;
		float L_17 = L_16.get_M12_1();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_18 = ___position0;
		float L_19 = L_18.get_Y_1();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_20 = ___matrix1;
		float L_21 = L_20.get_M22_5();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_22 = ___position0;
		float L_23 = L_22.get_Z_2();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_24 = ___matrix1;
		float L_25 = L_24.get_M32_9();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_26 = ___matrix1;
		float L_27 = L_26.get_M42_13();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_28 = ___position0;
		float L_29 = L_28.get_X_0();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_30 = ___matrix1;
		float L_31 = L_30.get_M13_2();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_32 = ___position0;
		float L_33 = L_32.get_Y_1();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_34 = ___matrix1;
		float L_35 = L_34.get_M23_6();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_36 = ___position0;
		float L_37 = L_36.get_Z_2();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_38 = ___matrix1;
		float L_39 = L_38.get_M33_10();
		Matrix4x4_t5B627955C6D80AF8F1D97A6466CB337DCEEB3504  L_40 = ___matrix1;
		float L_41 = L_40.get_M43_14();
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m7B558F4C62FE430FB22DC54F4BB1865025B04B84((&L_42), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)))), (float)L_13)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_21)))), (float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_25)))), (float)L_27)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_31)), (float)((float)il2cpp_codegen_multiply((float)L_33, (float)L_35)))), (float)((float)il2cpp_codegen_multiply((float)L_37, (float)L_39)))), (float)L_41)), /*hidden argument*/NULL);
		return L_42;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m33694E99F90FA7D24FD05FD8922E22E97559E055_gshared_inline (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  List_1_get_Item_mFA47ACFB2380A49A9A5FBA17A66A7BBF41FFACF7_gshared_inline (List_1_tAE152F7B9326A1AD6913322806354A1335B58F0C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207* L_2 = (Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_tAC9DBD7707F6E8B6DEE1543B81CEFC825311C207*)L_2, (int32_t)L_3);
		return (Vector3_t8DE19479CE3BD4C34B7AF76E89F5523A14FE37F4 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t List_1_get_Item_m31E439898C27BC917E851D5219B3EC4E53618ADE_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* L_2 = (UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)__this->get__items_1();
		int32_t L_3 = ___index0;
		uint32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF*)L_2, (int32_t)L_3);
		return (uint32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m70BC2BBCAA532A1588DB59CA7E556F541F32621D_gshared_inline (List_1_t023026A8F0D0D113E2B62213C8C74717BF7F4731 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
