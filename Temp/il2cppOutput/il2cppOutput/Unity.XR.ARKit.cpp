﻿#include "il2cpp-config.h"

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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E;
// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct List_1_t2E1F21EFE51222070700D6387AFD3040F19977B9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614;
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider
struct Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE;
// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider
struct Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960;
// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider
struct Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09;
// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider
struct Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3;
// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem
struct ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017;
// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider
struct Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider
struct Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501;
// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider
struct Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A;
// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider
struct Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider
struct IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi
struct IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34;
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/IProvider
struct IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/IProvider
struct IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider
struct IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider
struct IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider
struct IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428;

IL2CPP_EXTERN_C RuntimeClass* ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00EDFBC4EFCE3A9F974CEABCD51DE2609B2A1AE5;
IL2CPP_EXTERN_C String_t* _stringLiteral01A8E649C2EE0F2F0E7111E059615E0D2F569454;
IL2CPP_EXTERN_C String_t* _stringLiteral04B1631028D1B854A9842CEE0FA6FDA32C86BDF7;
IL2CPP_EXTERN_C String_t* _stringLiteral07FEA96DBE8894801F7F1DB849C8EB8A0629F092;
IL2CPP_EXTERN_C String_t* _stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF;
IL2CPP_EXTERN_C String_t* _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8;
IL2CPP_EXTERN_C String_t* _stringLiteral21E7ADB5BD97C82496FD88B2FC35C83E90C194C2;
IL2CPP_EXTERN_C String_t* _stringLiteral2F55B0C1BFA41292D9F913CC9A02B09149B75EE0;
IL2CPP_EXTERN_C String_t* _stringLiteral33ABE3E9D8C2CC615BBDC88213E6BE6A384D6805;
IL2CPP_EXTERN_C String_t* _stringLiteral33E23C61A9793B5149A92E13F9B9FBF25F22A9C4;
IL2CPP_EXTERN_C String_t* _stringLiteral48A46231AB256292293A3DC6088329E7F3D1D3E2;
IL2CPP_EXTERN_C String_t* _stringLiteral6D98C8D7890DFF942CB1E4191D406AF6C4D35C13;
IL2CPP_EXTERN_C String_t* _stringLiteral71A7CA855F38BC559D0FCE6727C7E2D8ADA99FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F;
IL2CPP_EXTERN_C String_t* _stringLiteral8DDBB76624EE55213F2601C8BA2B94F9F24E23EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E;
IL2CPP_EXTERN_C String_t* _stringLiteralAAC6E02E34BDC35D11B42F798B00A990953D7586;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0959A1FA0165C9EB07D89FE0FBBAA26CD9E529;
IL2CPP_EXTERN_C String_t* _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C String_t* _stringLiteralFCF79EA505459F01F984988600F23CC4756E4537;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m9698F7529BB29F2C756724FB6BD92136CAD78B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m1632DD3ED6A9CD398F4B2A48B0687CF4A585751C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_m0AC73BFD44567B0F3318C8105FC52D0B55DBB7E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_mE4C2C2EC1945D2420BF19C3EE86D69D347A878CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mFE3FD233E5DA2FF6BF2F52B0F55C3D4E7AC4EFF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m19DBC84229E022C0774E3EA49389F3B4615D4FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m868F3ECEA7CC2728450E00B6159592D0E2BAB177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_m646F5399C173A038337C1BC2D48B54CF9A768BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m006D2EF4242A56AAB59D3C23F5FA554671ADD708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m52944EB49F55038931FD33976C394C435071DC86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mD24DB0AA5E5667E753A7A2CAAD203DEA6759BECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m4B898BF6E98DF29F6158BCC86F275C311E9E30C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m4BA618A9EF73D09E4D746A4E27CF1A0E9F21E3E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m5E2A866FA7884CE47D121BA764771093E8A671C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m68CA3212B88F303B54C037E390B716436F70F235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Provider_set_imageLibrary_m1EBAF4E0DFA8EBC0FE1FEDF6ED7064F7DF91DA13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m2F488653BACFCCA6FDBA5301D464E0892523E408_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m40C09A3D6824519F73F8EF62340CD05B26A595B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m52B36DA79C416C9A326532FE472E4C336B10B82D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_m7995DE9C922C9D49D329A486F5CEEBB373841901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableChanges_1__ctor_mEF70E785771C1991D0AA01D000681369598794FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m1316CBFE4D07D36B7585BD98E68B0C051F4B7A1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m38B334EBA2718A9B6C28EBDEC13616F22AC236CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFA1DC98687CB79D80124DCF3E9DA117D2764918D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitCameraSubsystem_Register_m0B242BF988E92E626979B845EE749A1794E9E642_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitEnvironmentProbeRegistration_Register_m99E02E59582A0F880422D128FEEF2BEE553EE20E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitEnvironmentProbeSubsystem_CreateProvider_m734B041E08091395C665D21150F3728493C2A746_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitImageTrackingSubsystem_CreateProvider_m5411943AF1A08EF9D30E950EA921F0B3855F8217_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitImageTrackingSubsystem_RegisterDescriptor_mC8DC8F9919766BB3A242BF200922D81DCC59DE20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitRaycastSubsystem_RegisterDescriptor_m1442393B3D2D07C4E6F1FBD355695BCEB4DCF63E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitReferencePointSubsystem_RegisterDescriptor_mE3DCA20DAE72D2C7CF15B150584606C8D0FB8BA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem_RegisterDescriptor_m359F3EC534DDADAE498376C22BE8BB24813B1CC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitSessionSubsystem__cctor_mF21044D0935B2CA8F1FCD42BF839812255101E2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRDepthSubsystem_RegisterDescriptor_mEB1B5F8A8CF06C7E6F00CEE8B8A5D8F2CB86B5E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARKitXRPlaneSubsystem_RegisterDescriptor_m5F27E00E3BBC38D080D558D6B2689AB709ED0123_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMap_Equals_m8D5C69808F4E3DB20F697D46F85C17A24FDE4688_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion_Equals_mA70B1E35BBCD9C206367BD8C66F3E0F2DAF51BF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion_ToString_mC2FB1F8F61AAE40B141FE45C3F3B9408701EA00A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnAsyncConversionCompleteDelegate_BeginInvoke_m2C33525828F103BD6E8F47B18F3193F6AF8FB56A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetAvailabilityAsync_m3A9AC0788CC5F34ECD2ADB5D406C8087FBF60991_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetBoundary_m2A7D4E3FB7985A08B1179A5B60C890843494FFBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m1180227923E6905E3CA3F9CEF8BA80C58E7B760E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m1B8C9B35C5FB039958F5161AE9392270D6B4D1C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m26E082A5D0B91535BD7201C3AFAFA220CC61F006_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m3D875DA71FE758D7F6D0BBD275DDA6D771475AEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetChanges_m6ACC32D7B8FF8B2AE977BEE37D81AB5D7141B7F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetConfigurations_m4D9FC2BA19A3649FD8A38FB6125B77916FD4A71B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetPointCloudData_mCCC7D65910FD1989B92913813B111A78CBFA5200_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_GetTextureDescriptors_m9CECC57BD95307B36CC3F27C9CFBBACC92836DCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_Raycast_m1B485E19859E6EB636FB7E7934E316820C5EEEB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider__cctor_m38524FA8A6011F15F82FE1A2500B22425FC52099_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider__ctor_m94418749731B416D24DE7243E47BAEFC002D646E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_get_currentConfiguration_mA0CFBA086EFFF0ED6435E6AB7084329F8DAB02D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_get_shaderName_m7DAA2314A55B8E6B5BAAB3FDE0926DCCD77F11EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Provider_set_imageLibrary_m1EBAF4E0DFA8EBC0FE1FEDF6ED7064F7DF91DA13_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8276593D2182AD0E8D12AF6BAFC4DCCD5C1DB6C1 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Subsystem
struct Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi
struct NativeApi_tAC74EBF9B7EAB0504916300254C661F63CF9173A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration
struct ARKitEnvironmentProbeRegistration_t2BF1996AC80EFBB466BB1D315AFBD6959B04C757  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi
struct NativeApi_tB7917295BEDEB8E60FC3C8181CFDEB126B4DDB2A  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi
struct NativeApi_t164DECAC3F6004936824870871CC817A16AC9050  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions
struct ARWorldMapRequestStatusExtensions_t8FC86F2BC224C9CCC808FF3B4610B22BE5F8051F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.Api
struct Api_t4000D9F2E2A2012E34CA6CA8B3EA3E0BF565182C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARKit.EnvironmentProbeApi
struct EnvironmentProbeApi_t7835EE6A5EB5249E9C0ED63CD4AC8AA1B21D76D8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider
struct IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi
struct IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/IProvider
struct IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/IProvider
struct IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider
struct IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider
struct IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider
struct IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct Subsystem_1_t468154F69D8DAD6B7D55326BF0AC9DCA0B258EAC  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct Subsystem_1_t64FA424B93CBA73B716087F4884DC562DC575D13  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct Subsystem_1_tE7621B74A62F12F9496508FB5177E13879196639  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct Subsystem_1_tBE9A98C1016B0FA9DB3B23411752DD81A3CF909E  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct Subsystem_1_t902E1BF43177F88AD5F79623370B3113B3BCC983  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct Subsystem_1_t7A3BF165EAB51AE3F824EA6494ABE2E377F76A8B  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct Subsystem_1_t2D4C03D0BBC12F09C936C232E7DBF3427B7F754D  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider
struct Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E  : public IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C
{
public:

public:
};

struct Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::k_TextureYPropertyNameId
	int32_t ___k_TextureYPropertyNameId_0;
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::k_TextureCbCrPropertyNameId
	int32_t ___k_TextureCbCrPropertyNameId_1;

public:
	inline static int32_t get_offset_of_k_TextureYPropertyNameId_0() { return static_cast<int32_t>(offsetof(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields, ___k_TextureYPropertyNameId_0)); }
	inline int32_t get_k_TextureYPropertyNameId_0() const { return ___k_TextureYPropertyNameId_0; }
	inline int32_t* get_address_of_k_TextureYPropertyNameId_0() { return &___k_TextureYPropertyNameId_0; }
	inline void set_k_TextureYPropertyNameId_0(int32_t value)
	{
		___k_TextureYPropertyNameId_0 = value;
	}

	inline static int32_t get_offset_of_k_TextureCbCrPropertyNameId_1() { return static_cast<int32_t>(offsetof(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields, ___k_TextureCbCrPropertyNameId_1)); }
	inline int32_t get_k_TextureCbCrPropertyNameId_1() const { return ___k_TextureCbCrPropertyNameId_1; }
	inline int32_t* get_address_of_k_TextureCbCrPropertyNameId_1() { return &___k_TextureCbCrPropertyNameId_1; }
	inline void set_k_TextureCbCrPropertyNameId_1(int32_t value)
	{
		___k_TextureCbCrPropertyNameId_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider
struct Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91  : public IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider
struct Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46  : public IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider
struct Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3  : public IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider
struct Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986  : public IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider
struct Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B  : public IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider
struct Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70  : public IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider
struct Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A  : public IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469
{
public:

public:
};


// UnityEngine.XR.ARKit.ARWorldMap
struct ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::<nativeHandle>k__BackingField
	int32_t ___U3CnativeHandleU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnativeHandleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE, ___U3CnativeHandleU3Ek__BackingField_0)); }
	inline int32_t get_U3CnativeHandleU3Ek__BackingField_0() const { return ___U3CnativeHandleU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CnativeHandleU3Ek__BackingField_0() { return &___U3CnativeHandleU3Ek__BackingField_0; }
	inline void set_U3CnativeHandleU3Ek__BackingField_0(int32_t value)
	{
		___U3CnativeHandleU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.ARKit.OSVersion
struct OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<major>k__BackingField
	int32_t ___U3CmajorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<minor>k__BackingField
	int32_t ___U3CminorU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.ARKit.OSVersion::<point>k__BackingField
	int32_t ___U3CpointU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmajorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA, ___U3CmajorU3Ek__BackingField_0)); }
	inline int32_t get_U3CmajorU3Ek__BackingField_0() const { return ___U3CmajorU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CmajorU3Ek__BackingField_0() { return &___U3CmajorU3Ek__BackingField_0; }
	inline void set_U3CmajorU3Ek__BackingField_0(int32_t value)
	{
		___U3CmajorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CminorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA, ___U3CminorU3Ek__BackingField_1)); }
	inline int32_t get_U3CminorU3Ek__BackingField_1() const { return ___U3CminorU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CminorU3Ek__BackingField_1() { return &___U3CminorU3Ek__BackingField_1; }
	inline void set_U3CminorU3Ek__BackingField_1(int32_t value)
	{
		___U3CminorU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpointU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA, ___U3CpointU3Ek__BackingField_2)); }
	inline int32_t get_U3CpointU3Ek__BackingField_2() const { return ___U3CpointU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CpointU3Ek__BackingField_2() { return &___U3CpointU3Ek__BackingField_2; }
	inline void set_U3CpointU3Ek__BackingField_2(int32_t value)
	{
		___U3CpointU3Ek__BackingField_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageBrightness>k__BackingField
	bool ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsAverageColorTemperature>k__BackingField
	bool ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsColorCorrection>k__BackingField
	bool ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsDisplayMatrix>k__BackingField
	bool ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsProjectionMatrix>k__BackingField
	bool ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsTimestamp>k__BackingField
	bool ___U3CsupportsTimestampU3Ek__BackingField_7;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraConfigurations>k__BackingField
	bool ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::<supportsCameraImage>k__BackingField
	bool ___U3CsupportsCameraImageU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CimplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_1() const { return ___U3CimplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_1() { return &___U3CimplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsAverageBrightnessU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsAverageBrightnessU3Ek__BackingField_2() const { return ___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsAverageBrightnessU3Ek__BackingField_2() { return &___U3CsupportsAverageBrightnessU3Ek__BackingField_2; }
	inline void set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsAverageBrightnessU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() const { return ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3() { return &___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3; }
	inline void set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsColorCorrectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsColorCorrectionU3Ek__BackingField_4() const { return ___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsColorCorrectionU3Ek__BackingField_4() { return &___U3CsupportsColorCorrectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsColorCorrectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsColorCorrectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsDisplayMatrixU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsDisplayMatrixU3Ek__BackingField_5() const { return ___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsDisplayMatrixU3Ek__BackingField_5() { return &___U3CsupportsDisplayMatrixU3Ek__BackingField_5; }
	inline void set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsDisplayMatrixU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsProjectionMatrixU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsProjectionMatrixU3Ek__BackingField_6() const { return ___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsProjectionMatrixU3Ek__BackingField_6() { return &___U3CsupportsProjectionMatrixU3Ek__BackingField_6; }
	inline void set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsProjectionMatrixU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsTimestampU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsTimestampU3Ek__BackingField_7)); }
	inline bool get_U3CsupportsTimestampU3Ek__BackingField_7() const { return ___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CsupportsTimestampU3Ek__BackingField_7() { return &___U3CsupportsTimestampU3Ek__BackingField_7; }
	inline void set_U3CsupportsTimestampU3Ek__BackingField_7(bool value)
	{
		___U3CsupportsTimestampU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8)); }
	inline bool get_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() const { return ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CsupportsCameraConfigurationsU3Ek__BackingField_8() { return &___U3CsupportsCameraConfigurationsU3Ek__BackingField_8; }
	inline void set_U3CsupportsCameraConfigurationsU3Ek__BackingField_8(bool value)
	{
		___U3CsupportsCameraConfigurationsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsCameraImageU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC, ___U3CsupportsCameraImageU3Ek__BackingField_9)); }
	inline bool get_U3CsupportsCameraImageU3Ek__BackingField_9() const { return ___U3CsupportsCameraImageU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CsupportsCameraImageU3Ek__BackingField_9() { return &___U3CsupportsCameraImageU3Ek__BackingField_9; }
	inline void set_U3CsupportsCameraImageU3Ek__BackingField_9(bool value)
	{
		___U3CsupportsCameraImageU3Ek__BackingField_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_9;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo
struct XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsAverageBrightnessU3Ek__BackingField_2;
	int32_t ___U3CsupportsAverageColorTemperatureU3Ek__BackingField_3;
	int32_t ___U3CsupportsColorCorrectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsDisplayMatrixU3Ek__BackingField_5;
	int32_t ___U3CsupportsProjectionMatrixU3Ek__BackingField_6;
	int32_t ___U3CsupportsTimestampU3Ek__BackingField_7;
	int32_t ___U3CsupportsCameraConfigurationsU3Ek__BackingField_8;
	int32_t ___U3CsupportsCameraImageU3Ek__BackingField_9;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<implementationType>k__BackingField
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsManualPlacement>k__BackingField
	bool ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfManual>k__BackingField
	bool ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsAutomaticPlacement>k__BackingField
	bool ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsRemovalOfAutomatic>k__BackingField
	bool ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::<supportsEnvironmentTexture>k__BackingField
	bool ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CimplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CimplementationTypeU3Ek__BackingField_1() const { return ___U3CimplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CimplementationTypeU3Ek__BackingField_1() { return &___U3CimplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CimplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CimplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsManualPlacementU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsManualPlacementU3Ek__BackingField_2() const { return ___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsManualPlacementU3Ek__BackingField_2() { return &___U3CsupportsManualPlacementU3Ek__BackingField_2; }
	inline void set_U3CsupportsManualPlacementU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsManualPlacementU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsRemovalOfManualU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsRemovalOfManualU3Ek__BackingField_3() const { return ___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsRemovalOfManualU3Ek__BackingField_3() { return &___U3CsupportsRemovalOfManualU3Ek__BackingField_3; }
	inline void set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsRemovalOfManualU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() const { return ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsAutomaticPlacementU3Ek__BackingField_4() { return &___U3CsupportsAutomaticPlacementU3Ek__BackingField_4; }
	inline void set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsAutomaticPlacementU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() const { return ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5() { return &___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5; }
	inline void set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A, ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6)); }
	inline bool get_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() const { return ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CsupportsEnvironmentTextureU3Ek__BackingField_6() { return &___U3CsupportsEnvironmentTextureU3Ek__BackingField_6; }
	inline void set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(bool value)
	{
		___U3CsupportsEnvironmentTextureU3Ek__BackingField_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo
struct XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CimplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsManualPlacementU3Ek__BackingField_2;
	int32_t ___U3CsupportsRemovalOfManualU3Ek__BackingField_3;
	int32_t ___U3CsupportsAutomaticPlacementU3Ek__BackingField_4;
	int32_t ___U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5;
	int32_t ___U3CsupportsEnvironmentTextureU3Ek__BackingField_6;
};

// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::<supportsMovingImages>k__BackingField
	bool ___U3CsupportsMovingImagesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106, ___U3CsupportsMovingImagesU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsMovingImagesU3Ek__BackingField_2() const { return ___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsMovingImagesU3Ek__BackingField_2() { return &___U3CsupportsMovingImagesU3Ek__BackingField_2; }
	inline void set_U3CsupportsMovingImagesU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsMovingImagesU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo
struct Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsMovingImagesU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsHorizontalPlaneDetection>k__BackingField
	bool ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsVerticalPlaneDetection>k__BackingField
	bool ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsArbitraryPlaneDetection>k__BackingField
	bool ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::<supportsBoundaryVertices>k__BackingField
	bool ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() const { return ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2() { return &___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2; }
	inline void set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() const { return ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3() { return &___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3; }
	inline void set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4)); }
	inline bool get_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() const { return ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4() { return &___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4; }
	inline void set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(bool value)
	{
		___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29, ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5)); }
	inline bool get_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() const { return ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsupportsBoundaryVerticesU3Ek__BackingField_5() { return &___U3CsupportsBoundaryVerticesU3Ek__BackingField_5; }
	inline void set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(bool value)
	{
		___U3CsupportsBoundaryVerticesU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo
struct Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2;
	int32_t ___U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3;
	int32_t ___U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4;
	int32_t ___U3CsupportsBoundaryVerticesU3Ek__BackingField_5;
};

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.ScreenOrientation
struct ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult
struct CameraConfigurationResult_t9C60CF43473AF56020CB8D7C0A2ED101B8B52D33 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConfigurationResult_t9C60CF43473AF56020CB8D7C0A2ED101B8B52D33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/Availability
struct Availability_tFD76A2177DDFE5A5A8CDB75EB9CF784CDD9A7487 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/Availability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Availability_tFD76A2177DDFE5A5A8CDB75EB9CF784CDD9A7487, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.SetReferenceLibraryResult
struct SetReferenceLibraryResult_t60A3252A5AE8F09F503ABF5103B415DED845A779 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.SetReferenceLibraryResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SetReferenceLibraryResult_t60A3252A5AE8F09F503ABF5103B415DED845A779, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraFocusMode
struct CameraFocusMode_t004A78F37B73E0A13307FBF88BF32191115F1B28 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraFocusMode_t004A78F37B73E0A13307FBF88BF32191115F1B28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.CameraImageFormat
struct CameraImageFormat_t6EC146C99F9FFEB0021560550350562050312BD9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.CameraImageFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraImageFormat_t6EC146C99F9FFEB0021560550350562050312BD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.LightEstimationMode
struct LightEstimationMode_t313B5D9CF8DC78254E7E237F9F66E05D174CA9C9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.LightEstimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightEstimationMode_t313B5D9CF8DC78254E7E237F9F66E05D174CA9C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneDetectionMode
struct PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneDetectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneDetectionMode_tB8D6919E8ADF45E17C3E196B1561BAE5DFE44C2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389  : public Subsystem_1_t902E1BF43177F88AD5F79623370B3113B3BCC983
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemDescriptor>
struct TrackingSubsystem_2_tCB3B250EE7E4D50152E3AA72833BCB4C636B99A6  : public Subsystem_1_tE7621B74A62F12F9496508FB5177E13879196639
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tCB3B250EE7E4D50152E3AA72833BCB4C636B99A6, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C  : public Subsystem_1_t64FA424B93CBA73B716087F4884DC562DC575D13
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899  : public Subsystem_1_t2D4C03D0BBC12F09C936C232E7DBF3427B7F754D
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct TrackingSubsystem_2_tCF858475272A4880E6335A2B92788052D333E1E8  : public Subsystem_1_tBE9A98C1016B0FA9DB3B23411752DD81A3CF909E
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_tCF858475272A4880E6335A2B92788052D333E1E8, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Resolution_0)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties
struct XRCameraFrameProperties_t258272982186CE40619F50B2609728E31DD7649F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraFrameProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRCameraFrameProperties_t258272982186CE40619F50B2609728E31DD7649F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraIntrinsics
struct XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 
{
public:
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_FocalLength
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_FocalLength_0;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_PrincipalPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PrincipalPoint_1;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraIntrinsics::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_2;

public:
	inline static int32_t get_offset_of_m_FocalLength_0() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01, ___m_FocalLength_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_FocalLength_0() const { return ___m_FocalLength_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_FocalLength_0() { return &___m_FocalLength_0; }
	inline void set_m_FocalLength_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_FocalLength_0 = value;
	}

	inline static int32_t get_offset_of_m_PrincipalPoint_1() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01, ___m_PrincipalPoint_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PrincipalPoint_1() const { return ___m_PrincipalPoint_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PrincipalPoint_1() { return &___m_PrincipalPoint_1; }
	inline void set_m_PrincipalPoint_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PrincipalPoint_1 = value;
	}

	inline static int32_t get_offset_of_m_Resolution_2() { return static_cast<int32_t>(offsetof(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01, ___m_Resolution_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_2() const { return ___m_Resolution_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_2() { return &___m_Resolution_2; }
	inline void set_m_Resolution_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities
struct Capabilities_t4BAC3FA7758E1334A38C073AB595944DAE05308E 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t4BAC3FA7758E1334A38C073AB595944DAE05308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_2)); }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B 
{
public:
	// T System.Nullable`1::value
	XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B, ___value_0)); }
	inline XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  get_value_0() const { return ___value_0; }
	inline XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A  : public XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0
{
public:

public:
};

struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * ___s_OnAsyncWorldMapCompleted_3;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_3() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields, ___s_OnAsyncWorldMapCompleted_3)); }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * get_s_OnAsyncWorldMapCompleted_3() const { return ___s_OnAsyncWorldMapCompleted_3; }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF ** get_address_of_s_OnAsyncWorldMapCompleted_3() { return &___s_OnAsyncWorldMapCompleted_3; }
	inline void set_s_OnAsyncWorldMapCompleted_3(OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * value)
	{
		___s_OnAsyncWorldMapCompleted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncWorldMapCompleted_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_1() const { return ___m_SubsumedById_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_1() { return &___m_SubsumedById_1; }
	inline void set_m_SubsumedById_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_5)); }
	inline int32_t get_m_Alignment_5() const { return ___m_Alignment_5; }
	inline int32_t* get_address_of_m_Alignment_5() { return &___m_Alignment_5; }
	inline void set_m_Alignment_5(int32_t value)
	{
		___m_Alignment_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraFrame
struct XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 
{
public:
	// System.Int64 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TimestampNs
	int64_t ___m_TimestampNs_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageBrightness
	float ___m_AverageBrightness_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraFrame::m_AverageColorTemperature
	float ___m_AverageColorTemperature_2;
	// UnityEngine.Color UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ColorCorrection
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_ColorCorrection_3;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_ProjectionMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_ProjectionMatrix_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.ARSubsystems.XRCameraFrame::m_DisplayMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_DisplayMatrix_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRCameraFrame::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraFrame::m_NativePtr
	intptr_t ___m_NativePtr_7;
	// UnityEngine.XR.ARSubsystems.XRCameraFrameProperties UnityEngine.XR.ARSubsystems.XRCameraFrame::m_Properties
	int32_t ___m_Properties_8;

public:
	inline static int32_t get_offset_of_m_TimestampNs_0() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_TimestampNs_0)); }
	inline int64_t get_m_TimestampNs_0() const { return ___m_TimestampNs_0; }
	inline int64_t* get_address_of_m_TimestampNs_0() { return &___m_TimestampNs_0; }
	inline void set_m_TimestampNs_0(int64_t value)
	{
		___m_TimestampNs_0 = value;
	}

	inline static int32_t get_offset_of_m_AverageBrightness_1() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_AverageBrightness_1)); }
	inline float get_m_AverageBrightness_1() const { return ___m_AverageBrightness_1; }
	inline float* get_address_of_m_AverageBrightness_1() { return &___m_AverageBrightness_1; }
	inline void set_m_AverageBrightness_1(float value)
	{
		___m_AverageBrightness_1 = value;
	}

	inline static int32_t get_offset_of_m_AverageColorTemperature_2() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_AverageColorTemperature_2)); }
	inline float get_m_AverageColorTemperature_2() const { return ___m_AverageColorTemperature_2; }
	inline float* get_address_of_m_AverageColorTemperature_2() { return &___m_AverageColorTemperature_2; }
	inline void set_m_AverageColorTemperature_2(float value)
	{
		___m_AverageColorTemperature_2 = value;
	}

	inline static int32_t get_offset_of_m_ColorCorrection_3() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_ColorCorrection_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_ColorCorrection_3() const { return ___m_ColorCorrection_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_ColorCorrection_3() { return &___m_ColorCorrection_3; }
	inline void set_m_ColorCorrection_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_ColorCorrection_3 = value;
	}

	inline static int32_t get_offset_of_m_ProjectionMatrix_4() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_ProjectionMatrix_4)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_ProjectionMatrix_4() const { return ___m_ProjectionMatrix_4; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_ProjectionMatrix_4() { return &___m_ProjectionMatrix_4; }
	inline void set_m_ProjectionMatrix_4(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_ProjectionMatrix_4 = value;
	}

	inline static int32_t get_offset_of_m_DisplayMatrix_5() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_DisplayMatrix_5)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_DisplayMatrix_5() const { return ___m_DisplayMatrix_5; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_DisplayMatrix_5() { return &___m_DisplayMatrix_5; }
	inline void set_m_DisplayMatrix_5(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_DisplayMatrix_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}

	inline static int32_t get_offset_of_m_Properties_8() { return static_cast<int32_t>(offsetof(XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689, ___m_Properties_8)); }
	inline int32_t get_m_Properties_8() const { return ___m_Properties_8; }
	inline int32_t* get_address_of_m_Properties_8() { return &___m_Properties_8; }
	inline void set_m_Properties_8(int32_t value)
	{
		___m_Properties_8 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraParams
struct XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B 
{
public:
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZNear
	float ___m_ZNear_0;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ZFar
	float ___m_ZFar_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenWidth
	float ___m_ScreenWidth_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenHeight
	float ___m_ScreenHeight_3;
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRCameraParams::m_ScreenOrientation
	int32_t ___m_ScreenOrientation_4;

public:
	inline static int32_t get_offset_of_m_ZNear_0() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ZNear_0)); }
	inline float get_m_ZNear_0() const { return ___m_ZNear_0; }
	inline float* get_address_of_m_ZNear_0() { return &___m_ZNear_0; }
	inline void set_m_ZNear_0(float value)
	{
		___m_ZNear_0 = value;
	}

	inline static int32_t get_offset_of_m_ZFar_1() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ZFar_1)); }
	inline float get_m_ZFar_1() const { return ___m_ZFar_1; }
	inline float* get_address_of_m_ZFar_1() { return &___m_ZFar_1; }
	inline void set_m_ZFar_1(float value)
	{
		___m_ZFar_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenWidth_2() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ScreenWidth_2)); }
	inline float get_m_ScreenWidth_2() const { return ___m_ScreenWidth_2; }
	inline float* get_address_of_m_ScreenWidth_2() { return &___m_ScreenWidth_2; }
	inline void set_m_ScreenWidth_2(float value)
	{
		___m_ScreenWidth_2 = value;
	}

	inline static int32_t get_offset_of_m_ScreenHeight_3() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ScreenHeight_3)); }
	inline float get_m_ScreenHeight_3() const { return ___m_ScreenHeight_3; }
	inline float* get_address_of_m_ScreenHeight_3() { return &___m_ScreenHeight_3; }
	inline void set_m_ScreenHeight_3(float value)
	{
		___m_ScreenHeight_3 = value;
	}

	inline static int32_t get_offset_of_m_ScreenOrientation_4() { return static_cast<int32_t>(offsetof(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B, ___m_ScreenOrientation_4)); }
	inline int32_t get_m_ScreenOrientation_4() const { return ___m_ScreenOrientation_4; }
	inline int32_t* get_address_of_m_ScreenOrientation_4() { return &___m_ScreenOrientation_4; }
	inline void set_m_ScreenOrientation_4(int32_t value)
	{
		___m_ScreenOrientation_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF  : public Subsystem_1_t468154F69D8DAD6B7D55326BF0AC9DCA0B258EAC
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_Provider
	IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_FocusMode
	int32_t ___m_FocusMode_3;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARSubsystems.XRCameraSubsystem::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_4;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_Provider_2)); }
	inline IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_FocusMode_3() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_FocusMode_3)); }
	inline int32_t get_m_FocusMode_3() const { return ___m_FocusMode_3; }
	inline int32_t* get_address_of_m_FocusMode_3() { return &___m_FocusMode_3; }
	inline void set_m_FocusMode_3(int32_t value)
	{
		___m_FocusMode_3 = value;
	}

	inline static int32_t get_offset_of_m_LightEstimationMode_4() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF, ___m_LightEstimationMode_4)); }
	inline int32_t get_m_LightEstimationMode_4() const { return ___m_LightEstimationMode_4; }
	inline int32_t* get_address_of_m_LightEstimationMode_4() { return &___m_LightEstimationMode_4; }
	inline void set_m_LightEstimationMode_4(int32_t value)
	{
		___m_LightEstimationMode_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo
struct CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::m_NativeHandle
	int32_t ___m_NativeHandle_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::m_Dimensions
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Dimensions_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::m_PlaneCount
	int32_t ___m_PlaneCount_2;
	// System.Double UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::m_Timestamp
	double ___m_Timestamp_3;
	// UnityEngine.XR.ARSubsystems.CameraImageFormat UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo::m_Format
	int32_t ___m_Format_4;

public:
	inline static int32_t get_offset_of_m_NativeHandle_0() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_NativeHandle_0)); }
	inline int32_t get_m_NativeHandle_0() const { return ___m_NativeHandle_0; }
	inline int32_t* get_address_of_m_NativeHandle_0() { return &___m_NativeHandle_0; }
	inline void set_m_NativeHandle_0(int32_t value)
	{
		___m_NativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_m_Dimensions_1() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_Dimensions_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Dimensions_1() const { return ___m_Dimensions_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Dimensions_1() { return &___m_Dimensions_1; }
	inline void set_m_Dimensions_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Dimensions_1 = value;
	}

	inline static int32_t get_offset_of_m_PlaneCount_2() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_PlaneCount_2)); }
	inline int32_t get_m_PlaneCount_2() const { return ___m_PlaneCount_2; }
	inline int32_t* get_address_of_m_PlaneCount_2() { return &___m_PlaneCount_2; }
	inline void set_m_PlaneCount_2(int32_t value)
	{
		___m_PlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_m_Timestamp_3() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_Timestamp_3)); }
	inline double get_m_Timestamp_3() const { return ___m_Timestamp_3; }
	inline double* get_address_of_m_Timestamp_3() { return &___m_Timestamp_3; }
	inline void set_m_Timestamp_3(double value)
	{
		___m_Timestamp_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::id
	String_t* ___id_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::implementationType
	Type_t * ___implementationType_1;
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_0), (void*)value);
	}

	inline static int32_t get_offset_of_implementationType_1() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___implementationType_1)); }
	inline Type_t * get_implementationType_1() const { return ___implementationType_1; }
	inline Type_t ** get_address_of_implementationType_1() { return &___implementationType_1; }
	inline void set_implementationType_1(Type_t * value)
	{
		___implementationType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___implementationType_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913, ___U3CcapabilitiesU3Ek__BackingField_2)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_2() const { return ___U3CcapabilitiesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_2() { return &___U3CcapabilitiesU3Ek__BackingField_2; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_2(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913_marshaled_pinvoke
{
	char* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo
struct Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913_marshaled_com
{
	Il2CppChar* ___id_0;
	Type_t * ___implementationType_1;
	int32_t ___U3CcapabilitiesU3Ek__BackingField_2;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem
struct XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34  : public TrackingSubsystem_2_tCB3B250EE7E4D50152E3AA72833BCB4C636B99A6
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::m_AutomaticPlacement
	bool ___m_AutomaticPlacement_2;
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/IProvider UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::m_Provider
	IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * ___m_Provider_3;

public:
	inline static int32_t get_offset_of_m_AutomaticPlacement_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34, ___m_AutomaticPlacement_2)); }
	inline bool get_m_AutomaticPlacement_2() const { return ___m_AutomaticPlacement_2; }
	inline bool* get_address_of_m_AutomaticPlacement_2() { return &___m_AutomaticPlacement_2; }
	inline void set_m_AutomaticPlacement_2(bool value)
	{
		___m_AutomaticPlacement_2 = value;
	}

	inline static int32_t get_offset_of_m_Provider_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34, ___m_Provider_3)); }
	inline IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * get_m_Provider_3() const { return ___m_Provider_3; }
	inline IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 ** get_address_of_m_Provider_3() { return &___m_Provider_3; }
	inline void set_m_Provider_3(IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * value)
	{
		___m_Provider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5  : public TrackingSubsystem_2_tCF858475272A4880E6335A2B92788052D333E1E8
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_ImageLibrary
	XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * ___m_ImageLibrary_2;
	// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::m_Provider
	IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * ___m_Provider_3;

public:
	inline static int32_t get_offset_of_m_ImageLibrary_2() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5, ___m_ImageLibrary_2)); }
	inline XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * get_m_ImageLibrary_2() const { return ___m_ImageLibrary_2; }
	inline XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F ** get_address_of_m_ImageLibrary_2() { return &___m_ImageLibrary_2; }
	inline void set_m_ImageLibrary_2(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * value)
	{
		___m_ImageLibrary_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ImageLibrary_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Provider_3() { return static_cast<int32_t>(offsetof(XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5, ___m_Provider_3)); }
	inline IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * get_m_Provider_3() const { return ___m_Provider_3; }
	inline IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 ** get_address_of_m_Provider_3() { return &___m_Provider_3; }
	inline void set_m_Provider_3(IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * value)
	{
		___m_Provider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_3), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_2;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_3;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}

	inline static int32_t get_offset_of_m_HitType_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_HitType_3)); }
	inline int32_t get_m_HitType_3() const { return ___m_HitType_3; }
	inline int32_t* get_address_of_m_HitType_3() { return &___m_HitType_3; }
	inline void set_m_HitType_3(int32_t value)
	{
		___m_HitType_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsViewportBasedRaycast>k__BackingField
	bool ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportsWorldBasedRaycast>k__BackingField
	bool ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::<supportedTrackableTypes>k__BackingField
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() const { return ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2() { return &___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2; }
	inline void set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() const { return ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3() { return &___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3; }
	inline void set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704, ___U3CsupportedTrackableTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedTrackableTypesU3Ek__BackingField_4() const { return ___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedTrackableTypesU3Ek__BackingField_4() { return &___U3CsupportedTrackableTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedTrackableTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedTrackableTypesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo
struct Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsViewportBasedRaycastU3Ek__BackingField_2;
	int32_t ___U3CsupportsWorldBasedRaycastU3Ek__BackingField_3;
	int32_t ___U3CsupportedTrackableTypesU3Ek__BackingField_4;
};

// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_3;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_4;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_5;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_SourceImageId_1)); }
	inline Guid_t  get_m_SourceImageId_1() const { return ___m_SourceImageId_1; }
	inline Guid_t * get_address_of_m_SourceImageId_1() { return &___m_SourceImageId_1; }
	inline void set_m_SourceImageId_1(Guid_t  value)
	{
		___m_SourceImageId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Size_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Size_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_3() const { return ___m_Size_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_3() { return &___m_Size_3; }
	inline void set_m_Size_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_3 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_TrackingState_4)); }
	inline int32_t get_m_TrackingState_4() const { return ___m_TrackingState_4; }
	inline int32_t* get_address_of_m_TrackingState_4() { return &___m_TrackingState_4; }
	inline void set_m_TrackingState_4(int32_t value)
	{
		___m_TrackingState_4 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_NativePtr_5)); }
	inline intptr_t get_m_NativePtr_5() const { return ___m_NativePtr_5; }
	inline intptr_t* get_address_of_m_NativePtr_5() { return &___m_NativePtr_5; }
	inline void set_m_NativePtr_5(intptr_t value)
	{
		___m_NativePtr_5 = value;
	}
};


// System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>
struct Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitCameraSubsystem
struct ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614  : public XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem
struct ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE  : public XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem
struct ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960  : public XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsIn
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsOut
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsIn_0)); }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsOut_1)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob::positions
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312, ___positions_0)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positions_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A, ___positionsIn_0)); }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A, ___positionsOut_1)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Added_1)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Updated_2)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Added_1)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Updated_2)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Added_1)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Updated_2)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Added_1)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Updated_2)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7  : public TrackingSubsystem_2_t70B6F8BBDCEA193299D7F4FC34F9D63A1996CE0C
{
public:
	// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi UnityEngine.XR.ARSubsystems.XRDepthSubsystem::m_Interface
	IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * ___m_Interface_2;
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRDepthSubsystem::m_DefaultPointCloud
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___m_DefaultPointCloud_3;

public:
	inline static int32_t get_offset_of_m_Interface_2() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7, ___m_Interface_2)); }
	inline IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * get_m_Interface_2() const { return ___m_Interface_2; }
	inline IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 ** get_address_of_m_Interface_2() { return &___m_Interface_2; }
	inline void set_m_Interface_2(IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * value)
	{
		___m_Interface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultPointCloud_3() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7, ___m_DefaultPointCloud_3)); }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  get_m_DefaultPointCloud_3() const { return ___m_DefaultPointCloud_3; }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * get_address_of_m_DefaultPointCloud_3() { return &___m_DefaultPointCloud_3; }
	inline void set_m_DefaultPointCloud_3(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  value)
	{
		___m_DefaultPointCloud_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Size_3;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___m_TextureDescriptor_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Scale_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Scale_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_1() const { return ___m_Scale_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_1() { return &___m_Scale_1; }
	inline void set_m_Scale_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Size_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Size_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Size_3() const { return ___m_Size_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Size_3() { return &___m_Size_3; }
	inline void set_m_Size_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Size_3 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TextureDescriptor_4)); }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  get_m_TextureDescriptor_4() const { return ___m_TextureDescriptor_4; }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * get_address_of_m_TextureDescriptor_4() { return &___m_TextureDescriptor_4; }
	inline void set_m_TextureDescriptor_4(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  value)
	{
		___m_TextureDescriptor_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909  : public TrackingSubsystem_2_t758E80FC2D0E4A224AA733F5ED6419083CD56389
{
public:
	// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_Provider
	IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::m_DefaultPlane
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___m_DefaultPlane_3;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_Provider_2)); }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultPlane_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909, ___m_DefaultPlane_3)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_m_DefaultPlane_3() const { return ___m_DefaultPlane_3; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_m_DefaultPlane_3() { return &___m_DefaultPlane_3; }
	inline void set_m_DefaultPlane_3(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___m_DefaultPlane_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloudData
struct XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Positions
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___m_Positions_0;
	// Unity.Collections.NativeArray`1<System.Single> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_ConfidenceValues
	NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  ___m_ConfidenceValues_1;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.XR.ARSubsystems.XRPointCloudData::m_Identifiers
	NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  ___m_Identifiers_2;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA, ___m_Positions_0)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_m_Positions_0() const { return ___m_Positions_0; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___m_Positions_0 = value;
	}

	inline static int32_t get_offset_of_m_ConfidenceValues_1() { return static_cast<int32_t>(offsetof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA, ___m_ConfidenceValues_1)); }
	inline NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  get_m_ConfidenceValues_1() const { return ___m_ConfidenceValues_1; }
	inline NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478 * get_address_of_m_ConfidenceValues_1() { return &___m_ConfidenceValues_1; }
	inline void set_m_ConfidenceValues_1(NativeArray_1_t3C9C9CA780340E04B41A10CBCBF8A00791146478  value)
	{
		___m_ConfidenceValues_1 = value;
	}

	inline static int32_t get_offset_of_m_Identifiers_2() { return static_cast<int32_t>(offsetof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA, ___m_Identifiers_2)); }
	inline NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  get_m_Identifiers_2() const { return ___m_Identifiers_2; }
	inline NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 * get_address_of_m_Identifiers_2() { return &___m_Identifiers_2; }
	inline void set_m_Identifiers_2(NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  value)
	{
		___m_Identifiers_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20  : public Subsystem_1_t7A3BF165EAB51AE3F824EA6494ABE2E377F76A8B
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_Provider
	IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::m_DefaultRaycastHit
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_DefaultRaycastHit_3;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_Provider_2)); }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultRaycastHit_3() { return static_cast<int32_t>(offsetof(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20, ___m_DefaultRaycastHit_3)); }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  get_m_DefaultRaycastHit_3() const { return ___m_DefaultRaycastHit_3; }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * get_address_of_m_DefaultRaycastHit_3() { return &___m_DefaultRaycastHit_3; }
	inline void set_m_DefaultRaycastHit_3(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  value)
	{
		___m_DefaultRaycastHit_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::m_Images
	List_1_t2E1F21EFE51222070700D6387AFD3040F19977B9 * ___m_Images_6;

public:
	inline static int32_t get_offset_of_m_GuidLow_4() { return static_cast<int32_t>(offsetof(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F, ___m_GuidLow_4)); }
	inline uint64_t get_m_GuidLow_4() const { return ___m_GuidLow_4; }
	inline uint64_t* get_address_of_m_GuidLow_4() { return &___m_GuidLow_4; }
	inline void set_m_GuidLow_4(uint64_t value)
	{
		___m_GuidLow_4 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_5() { return static_cast<int32_t>(offsetof(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F, ___m_GuidHigh_5)); }
	inline uint64_t get_m_GuidHigh_5() const { return ___m_GuidHigh_5; }
	inline uint64_t* get_address_of_m_GuidHigh_5() { return &___m_GuidHigh_5; }
	inline void set_m_GuidHigh_5(uint64_t value)
	{
		___m_GuidHigh_5 = value;
	}

	inline static int32_t get_offset_of_m_Images_6() { return static_cast<int32_t>(offsetof(XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F, ___m_Images_6)); }
	inline List_1_t2E1F21EFE51222070700D6387AFD3040F19977B9 * get_m_Images_6() const { return ___m_Images_6; }
	inline List_1_t2E1F21EFE51222070700D6387AFD3040F19977B9 ** get_address_of_m_Images_6() { return &___m_Images_6; }
	inline void set_m_Images_6(List_1_t2E1F21EFE51222070700D6387AFD3040F19977B9 * value)
	{
		___m_Images_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Images_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3  : public TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_Provider
	IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_DefaultReferencePoint
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___m_DefaultReferencePoint_3;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_Provider_2)); }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultReferencePoint_3() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_DefaultReferencePoint_3)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_m_DefaultReferencePoint_3() const { return ___m_DefaultReferencePoint_3; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_m_DefaultReferencePoint_3() { return &___m_DefaultReferencePoint_3; }
	inline void set_m_DefaultReferencePoint_3(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___m_DefaultReferencePoint_3 = value;
	}
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitRaycastSubsystem
struct ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09  : public XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitReferencePointSubsystem
struct ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017  : public XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem
struct ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501  : public XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem
struct ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A  : public XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m4B898BF6E98DF29F6158BCC86F275C311E9E30C6_gshared (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5E2A866FA7884CE47D121BA764771093E8A671C3_gshared (Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B * __this, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  Nullable_1_get_Value_m68CA3212B88F303B54C037E390B716436F70F235_gshared (Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m4BA618A9EF73D09E4D746A4E27CF1A0E9F21E3E6_gshared (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m40C09A3D6824519F73F8EF62340CD05B26A595B1_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m52B36DA79C416C9A326532FE472E4C336B10B82D_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m006D2EF4242A56AAB59D3C23F5FA554671ADD708_gshared (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m1316CBFE4D07D36B7585BD98E68B0C051F4B7A1C_gshared (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * ___output0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m38B334EBA2718A9B6C28EBDEC13616F22AC236CD_gshared (const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycastHit>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m868F3ECEA7CC2728450E00B6159592D0E2BAB177_gshared (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  ___nativeArray0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m7995DE9C922C9D49D329A486F5CEEBB373841901_gshared (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void System.Action`2<System.Int32Enum,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BA6A699F6D9D763238A7662A6431CF7BF672E99_gshared (Action_2_t3F365260232979E3376DDF7E674235AA6466EC8E * __this, int32_t ___arg10, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___arg21, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t ___result0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m2F488653BACFCCA6FDBA5301D464E0892523E408_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD24DB0AA5E5667E753A7A2CAAD203DEA6759BECE_gshared (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Quaternion>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_mE4C2C2EC1945D2420BF19C3EE86D69D347A878CB_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_m0AC73BFD44567B0F3318C8105FC52D0B55DBB7E5_gshared (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m52944EB49F55038931FD33976C394C435071DC86_gshared (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt64>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mFE3FD233E5DA2FF6BF2F52B0F55C3D4E7AC4EFF4_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m646F5399C173A038337C1BC2D48B54CF9A768BE0_gshared (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 * __this, NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFA1DC98687CB79D80124DCF3E9DA117D2764918D_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * ___array2, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m19DBC84229E022C0774E3EA49389F3B4615D4FEA_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m1632DD3ED6A9CD398F4B2A48B0687CF4A585751C_gshared (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob>(!!0,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_gshared (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mEF70E785771C1991D0AA01D000681369598794FF_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_mEA5E0B21781D8AAF0FB30E9E506AA4D7C392E2A8_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_mAEA2151AEC9F31C5726795200B63D4BA53F2721E_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageBrightness(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_m0851BD298973A23FCE8D87B5B8AB389562D255FA_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsAverageColorTemperature(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m427080856A860B42B3FC21139B990F19BE0AD87E_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsColorCorrection(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_mFC3AED27787017D69ABA73FF60D1E20DDF5E674F_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsDisplayMatrix(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_mB5BF43F49F4D64AA3DFE174574D386D99A96F92F_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsProjectionMatrix(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m4CC64D264746A394D8186CCDD583CFCC637C8E66_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsTimestamp(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_m901DA9F41D9CEE062F7A054738E5382E2A825F28_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraConfigurations(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mCCA48E46B902EEABAA94FB7A2A668097E06D4906_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo::set_supportsCameraImage(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m9B592584A2C27917CC80AB290F0A2600FD275951_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRCameraSubsystem::Register(UnityEngine.XR.ARSubsystems.XRCameraSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRCameraSubsystem_Register_m471B8039B86BACC07C48A926544DF6C1415C1DA7 (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  ___cameraSubsystemParams0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m94418749731B416D24DE7243E47BAEFC002D646E (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRCameraSubsystem__ctor_m4DB65C1288A29F049A4A362B9CD81B60970A73AE (XRCameraSubsystem_t60344763BCE87679E570A4AD0BB068B74DBF20AF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_IsCameraPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_m972DB9591AA4E5EB4F483280F44DEF5CC8C88EE3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m2709637AF8148063803D9E41C66EC75B4D713AC1 (IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_m2DF0AEE8AA88CDF96D248F9CD714961C2738216F (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Start_m59DA518F90E02C5707FDD049DC3DECD96B65A5A6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Stop_m098821B53BD6527CA00BB02E51D36A7A5C76FF10 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Destruct_m795FFFF7821CE91E8992070BEFAAE0FFBA6AE084 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetFrame_m6048991661BFB4AEE17C00EDCF7E65995B7C8691 (XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  ___cameraParams0, XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * ___cameraFrame1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetFocusMode(UnityEngine.XR.ARSubsystems.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetFocusMode_m2D71E0C7D2E3A86263BC42FF937BEAC0FFBD8677 (int32_t ___cameraFocusMode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetLightEstimationMode(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetLightEstimationMode_m2DAF2550DA728382FB0F1B91B02B74FC50D4257E (int32_t ___lightEstimationMode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetIntrinsics_m364B7B8DCA914DD0C1878F56859A5C7D9CC3B045 (XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * ___cameraIntrinsics0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireConfigurations(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Camera_AcquireConfigurations_m6A384C73CC0BE9DA50DC6128284E200678D08771 (int32_t* ___configurationsCount0, int32_t* ___configurationSize1, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m4B898BF6E98DF29F6158BCC86F275C311E9E30C6 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  (*) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m4B898BF6E98DF29F6158BCC86F275C311E9E30C6_gshared)(___defaultT0, ___source1, ___sourceElementSize2, ___length3, ___allocator4, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseConfigurations(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseConfigurations_mECAE479F28DB8847031DB58670D463D8692C661D (intptr_t ___configurations0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m2B5868976AF970142BB6CDBCBB04329C98FBAA88 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 * ___cameraConfiguration0, const RuntimeMethod* method);
// System.Void System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(!0)
inline void Nullable_1__ctor_m5E2A866FA7884CE47D121BA764771093E8A671C3 (Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B * __this, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B *, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , const RuntimeMethod*))Nullable_1__ctor_m5E2A866FA7884CE47D121BA764771093E8A671C3_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::get_Value()
inline XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  Nullable_1_get_Value_m68CA3212B88F303B54C037E390B716436F70F235 (Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B * __this, const RuntimeMethod* method)
{
	return ((  XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  (*) (Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B *, const RuntimeMethod*))Nullable_1_get_Value_m68CA3212B88F303B54C037E390B716436F70F235_gshared)(__this, method);
}
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_m10852C9A985C98A1BF729D17027BE7B96C9FB673 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___cameraConfiguration0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireTextureDescriptors(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_mEAFD58446AEBEC88F2E3E55B5C8C3C89B2BA0869 (int32_t* ___length0, int32_t* ___elementSize1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<!!0> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(!!0,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m4BA618A9EF73D09E4D746A4E27CF1A0E9F21E3E6 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  (*) (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m4BA618A9EF73D09E4D746A4E27CF1A0E9F21E3E6_gshared)(___defaultT0, ___source1, ___sourceElementSize2, ___length3, ___allocator4, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseTextureDescriptors(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m1B1D58FE2C83A8854CD2223602213D302585A0A2 (void* ___descriptors0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryAcquireLatestImage(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryAcquireLatestImage_m9EDEF6EF0E4C88B918827C8DFCA3AF3265C04DEE (CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * ___cameraImageCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_DisposeImage_m696CD790C79BA59B3B69032D9E331D33F0D8506E (int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m65F71E8D97413215944F75C52F6F9F2088644E24_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_implementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_implementationType_m5CDE58834E022AEB4B9E6FD826D2A6140D3D1B3E_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsManualPlacement(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_mF3AA42AAE10CC81DF831404F415BD34694B08C59_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfManual(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m200BBBC11A1580CAA151ED498A8B24E27BAB646F_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsAutomaticPlacement(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mBC81F9BC67A3FF73D0EB679BEDDFE1D3DA918582_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsRemovalOfAutomatic(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_mC43F8E59BF70D73AC0EB8EE5A9B2D6F92966B3B3_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo::set_supportsEnvironmentTexture(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_m9C630C891056E5E1187AA2433DDC8D7E0F3FF662_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::Register(UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystemCinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XREnvironmentProbeSubsystem_Register_mF52AA36EB4EAA59C932C43E45DA567A3EA6D55FD (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A  ___environmentProbeSubsystemCinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m01089AA1109114DA6CA9F68C2B691726E7E75745 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystem__ctor_m7A3AE7794DA58FE53C8EE9F47F8B84F3D5DF47B6 (XREnvironmentProbeSubsystem_t27752940A9029AB39A2C76FE9285238FE9B6EE34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m5A111BAA2E41E225EEF73921AB5C4A279E7AC337 (IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m389EF901E5A84DE58098B34F3159AFAA1B83C6E5 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mD464FCD2D9A5C50791D7B9D38AAD43D97ACA6227 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_m80FF6427ACD878991E6F3649C32A4C948AD834C9 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Destruct_mA74881A49FA8DB131E3613E414E54215205799C2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled_m58CF7C2D525E820536C7143D42E84C7EFC4805A9 (bool ___enabled0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbe&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe_m7EF9192A23F0E6CBB565BCB89D9D3AC55024F272 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size2, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * ___environmentProbe3, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe_m823D591063A7E9D9F2186D3AE0FB2AA96C03E1D6 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_AcquireChanges(System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mF3B06C982FBD823D7B03F3DB870E22846FFA834C (int32_t* ___numAddedEnvironmentProbes0, intptr_t* ___addedEnvironmentProbes1, int32_t* ___numUpdatedEnvironmentProbes2, intptr_t* ___updatedEnvironmentProbes3, int32_t* ___numRemovedEnvironmentProbeIds4, intptr_t* ___removedEnvironmentProbeIds5, int32_t* ___stride6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m40C09A3D6824519F73F8EF62340CD05B26A595B1 (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, void*, int32_t, void*, int32_t, void*, int32_t, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m40C09A3D6824519F73F8EF62340CD05B26A595B1_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_ReleaseChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m7357747C89D2E0CC5380F76F4965A3EECE4D1539 (intptr_t ___context0, const RuntimeMethod* method);
// System.String UnityEngine.iOS.Device::get_systemVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Device_get_systemVersion_m2FAF59069686B57244F90EFBAA9E5042301C716E (const RuntimeMethod* method);
// UnityEngine.XR.ARKit.OSVersion UnityEngine.XR.ARKit.OSVersion::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  OSVersion_Parse_mDF26500DB38764536C24E82F4659B9B1E0B40AC8 (String_t* ___version0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_LessThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_LessThan_m75C71874EFC4F3233EC421034E6599CADB16504F (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mFA87FA52172846CBD4587F2E207D65A097B842E6_inline (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mBBC866C6F4207A69F7351857F66D683E0EAF8FAF_inline (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThanOrEqual(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThanOrEqual_m5DC241E62216C8897A29CA8BE7F1352528B9F420 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo::set_supportsMovingImages(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m2898F758BCCE6DDC222E828D855CEFC89C58EF2C_inline (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystemDescriptor_Create_m1049DA7C21F27833846D6C6E699DD2DA964522A9 (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA9316C0973B75FC3C67DE8C0227F6A0CDBE7F96D (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRImageTrackingSubsystem__ctor_mEE7E27E4FDC18721F1D9CDDAAC8FFAACC782D4CF (XRImageTrackingSubsystem_t1DC56F01ABB0CC32D9AC26AA77E097AD9B0ECEB5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_stop_mA5E30442ACDDB68089B08B3F6928E3BDC55E85B6 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary::get_guid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  XRReferenceImageLibrary_get_guid_m101D8AFC1E328EBF5DBDED74F7EA8863A3468418 (XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_trySetReferenceLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitImageTrackingSubsystem_UnityARKit_imageTracking_trySetReferenceLibrary_m8D9CDB6B19408E779E8BFAC00B99A9BF62F130B3 (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitImageTrackingSubsystem_UnityARKit_imageTracking_acquireChanges_mB4BFD5D1B49A8BA6443E7F08FE7BA8EE68A0BCFB (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___stride6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m52B36DA79C416C9A326532FE472E4C336B10B82D (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m52B36DA79C416C9A326532FE472E4C336B10B82D_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_releaseChanges_m79BE2C4F28C174B2D27CCA85FF9C6517F1B9F10A (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_destroy_m73470876BEDDE85C215EABCD3555D73571E5F772 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_setMaximumNumberOfTrackedImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_setMaximumNumberOfTrackedImages_mBF0FA67787BE559D28A4949D256D5824B8F6F1F4 (int32_t ___maxNumTrackedImages0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_mE3F278B6BD96AAE5265BB88C2F2F7B0AA5C1D210 (IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFAB8D17BFE8D59172A9949DE1F83981251CBBB88 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mDBC061879B3E989FF064E7E31CFC85ACD142199B_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9670297F5DC91608B606E2B8A7E4C2643236D65A_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsViewportBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_m42B64A1095C52F16217EBF1D5ABFD7353DA35233_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportsWorldBasedRaycast(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_mBF04DD8B3208A7D9C98419FEDC8CB012F7253DF5_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo::set_supportedTrackableTypes(UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m13138A57079E692472B33A4B216D5568852BE652_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystemDescriptor_RegisterDescriptor_mA164B987D51AD208D957753220E5B1D1A2DB0650 (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRaycastSubsystem__ctor_mD6FC049FC72B869A2A78EE56093819D989AD4021 (XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_raycast_acquireHitResults(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_acquireHitResults_mA4AC6C358549A8DC05F394AFD56ED90CD03E9C9F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint0, int32_t ___filter1, void** ___hitResults2, int32_t* ___hitCount3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m006D2EF4242A56AAB59D3C23F5FA554671ADD708 (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m006D2EF4242A56AAB59D3C23F5FA554671ADD708_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(!!0&)
inline void* UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m1316CBFE4D07D36B7585BD98E68B0C051F4B7A1C (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * ___output0, const RuntimeMethod* method)
{
	return ((  void* (*) (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *, const RuntimeMethod*))UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m1316CBFE4D07D36B7585BD98E68B0C051F4B7A1C_gshared)(___output0, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
inline int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m38B334EBA2718A9B6C28EBDEC13616F22AC236CD (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m38B334EBA2718A9B6C28EBDEC13616F22AC236CD_gshared)(method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycastHit>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m868F3ECEA7CC2728450E00B6159592D0E2BAB177 (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m868F3ECEA7CC2728450E00B6159592D0E2BAB177_gshared)(___nativeArray0, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_raycast_copyAndReleaseHitResults(System.Void*,System.Int32,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_copyAndReleaseHitResults_m1080A044038B5CF33AAB68D1DD8C4018E1B2D12A (void* ___defaultHit0, int32_t ___stride1, void* ___hitResults2, void* ___dstBuffer3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m6ED48B63231AFC2B55F4CAD72EAE1D9C624165DF (IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m7DAC59A12BE6120D2C72B16E02A503C014166901 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_Create_m6560F038F7DD64D1FEE3924A57AD4DBC79D29988 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRReferencePointSubsystem__ctor_m00BC1D2247754D96678FBCC67FE14BBC2107D275 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStart_m7F72101E953D4FA29B77F9B925CD097271D8417E (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStop_m7C09A2E2921F4C8B7460BC4B3B2FC139092E0865 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onDestroy_m1D71BC7DBA28E50A83D322C9B735554D47EC67D1 (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_refPoints_acquireChanges_mA344595E5CD7FE92F42133E6B0E854E124B837EB (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m7995DE9C922C9D49D329A486F5CEEBB373841901 (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF *, void*, int32_t, void*, int32_t, void*, int32_t, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m7995DE9C922C9D49D329A486F5CEEBB373841901_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_releaseChanges_mA2279618DB35A58E4AA4CAD3D51B25BEF9EB4D59 (void* ___changes0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryAdd(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAdd_m2F8B38BB56978FFD60602045422B4C0639B7B004 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryAttach(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAttach_m774D4727945B1B3E4B2E212913D1482147A923AE (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryRemove(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryRemove_m3A0BEB288BC29179F673735239E3FEFE65A61906 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m7D69D152ED0A017FF02C31CDD297F546148C9DD5 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mB6A986F9599E6428D3925C19C0A5937C9F79D7B5 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m4BE0A755AAC63D37870EB5636686E53F8A3AB114 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m4324D3418C82C5B1C955A72DD0E9BA5805286540 (int32_t ___status0, const RuntimeMethod* method);
// System.Void System.Action`2<UnityEngine.XR.ARKit.ARWorldMapRequestStatus,UnityEngine.XR.ARKit.ARWorldMap>::Invoke(!0,!1)
inline void Action_2_Invoke_m9698F7529BB29F2C756724FB6BD92136CAD78B4E (Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D * __this, int32_t ___arg10, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D *, int32_t, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE , const RuntimeMethod*))Action_2_Invoke_m7BA6A699F6D9D763238A7662A6431CF7BF672E99_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m51BA4D411B69385E02F7A49B7BA1ECB0D2AD2FD7 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mE43FF83622414EA44D02418EC98B1DA8DDFFDBD6_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m3EF9E7985B16FFF8FE15FBEDFC87FF1BB811D49E (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_m44F52AA14885F4899E67E09988D8B08C827DEFED (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mFF6871B50DE774C16170C63CBC1C5A244B6DF7B3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_resume_m65F7BC2F836A0DFD9C4ED2F9D9F7B3D7FD8BB6A3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_pause_m1D55CF790B44AEA02FBBB1D58CE68306AC1ECEA0 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_update_m8C606BC443E0856C3CE057C45A554EAF1DAA8B74 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_destroy_mED1AC9AA6E6D593699FB6A877AA9B7C015D5C7E6 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_reset_m67A0BCBAF9237CEA676E4AE5AFCADA108D7DA87C (const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/Availability UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getAvailability_m99887277747C2AAD5A630BF058000B82B97F844D (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<!0> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(!0)
inline Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D (int32_t ___result0, const RuntimeMethod* method)
{
	return ((  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(___result0, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getTrackingState_mC556510D36A2A09FD80AB564EF433A9740EEEF60 (const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getNotTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getNotTrackingReason_mDD73A7E193548D8D040F9C147C733072EFA6FF25 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getMatchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_session_getMatchFrameRateEnabled_m8F100FB7D6375D28C817BA1F3BE453A6197905E3 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_setMatchFrameRateEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_setMatchFrameRateEnabled_m9AD09A23F4C7179C29CFDC5C95D2E75DD3DF751E (bool ___enabled0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1EC138B2F744CA07C952BF845D934285B5BA498A (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsFeaturePoints_mB3633125ACFBA430C6EC66F3FF8E5BFEC72EC360 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsConfidence(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsConfidence_mD7DE3DC81C6783C66AAE15A10301DE202520605C (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo::set_supportsUniqueIds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cinfo_set_supportsUniqueIds_m416FF5EC15306E37DC3436BBB02B4998D64B62C4 (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystemDescriptor_RegisterDescriptor_m9F40B303586BE45F7AACB8B0AA408D242B34F4EC (Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  ___descriptorParams0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDepthSubsystem__ctor_m24423F4A0EF54A1EDA98684496E5973E192C097B (XRDepthSubsystem_tA1188AEE9FA009EAF2BDA064BEA1482FF4CD8AD7 * __this, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquireChanges_m9F4E61A5D34FC6464A9EF30949018DD2EA721088 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m2F488653BACFCCA6FDBA5301D464E0892523E408 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, void*, int32_t, void*, int32_t, void*, int32_t, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m2F488653BACFCCA6FDBA5301D464E0892523E408_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releaseChanges_m4AC138A3F97251CF7825B44894D9E9572504347A (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_destroy_mC45296F25777188452BB10D79B7DDDE76B66A956 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_start_m1A1619B512F9D7C576B4B8242034AFA9AD432F39 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_stop_mAF0980226FA0F11EA03B312DFA3A980D76BD2851 (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_acquirePointCloud(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquirePointCloud_m5920A0FB4730D9EBDBC4124645C39FB4F423AE0A (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___positionsPtr1, void** ___identifiersPtr2, int32_t* ___numPoints3, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mD24DB0AA5E5667E753A7A2CAAD203DEA6759BECE (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD24DB0AA5E5667E753A7A2CAAD203DEA6759BECE_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Quaternion>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_mE4C2C2EC1945D2420BF19C3EE86D69D347A878CB (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_mE4C2C2EC1945D2420BF19C3EE86D69D347A878CB_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_m0AC73BFD44567B0F3318C8105FC52D0B55DBB7E5 (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 , int32_t, int32_t, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_m0AC73BFD44567B0F3318C8105FC52D0B55DBB7E5_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m52944EB49F55038931FD33976C394C435071DC86 (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m52944EB49F55038931FD33976C394C435071DC86_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt64>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mFE3FD233E5DA2FF6BF2F52B0F55C3D4E7AC4EFF4 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mFE3FD233E5DA2FF6BF2F52B0F55C3D4E7AC4EFF4_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void Unity.Collections.NativeArray`1<System.UInt64>::CopyFrom(Unity.Collections.NativeArray`1<!0>)
inline void NativeArray_1_CopyFrom_m646F5399C173A038337C1BC2D48B54CF9A768BE0 (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 * __this, NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 *, NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 , const RuntimeMethod*))NativeArray_1_CopyFrom_m646F5399C173A038337C1BC2D48B54CF9A768BE0_gshared)(__this, ___array0, method);
}
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797 (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPointCloudData::set_positions(Unity.Collections.NativeArray`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRPointCloudData_set_positions_mC99C23E8AE61A1A3333C1A2F7E0F9DBD6C9F771C_inline (XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA * __this, NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPointCloudData::set_identifiers(Unity.Collections.NativeArray`1<System.UInt64>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRPointCloudData_set_identifiers_m3CDA83EC60EC5AAB982B3C5E0F9AC9E94D41992B_inline (XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA * __this, NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_releasePointCloud(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releasePointCloud_mCA0FFA8714996C6F3DEE1EABE5F0427339E78DCD (void* ___pointCloud0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDepthApi__ctor_m4B44FB5141C363FF42F5703404626927B89C222A (IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformPositionsJob_Execute_mB106298BC698C628A7389A30320D14D7A001ED2C (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m7CA41720BA2D536A4C58B904A5AC5DE755605E6C (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_id(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m9211F9ADC4DCFA1AAB5AA9F662EE6510D6FE01EF_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m74075897385685A6E0753F2EE29CD77A90A22E6B_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsHorizontalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m6BA5B6FD1C2FDF236AEE15957FD1F1837C394304_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsVerticalPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m386B3816E8C1538AB58318D55D9C64D1113C1B3B_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsArbitraryPlaneDetection(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m625EDF8616A904C1D2C3B9DB1B52A28A0D3EAF06_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo::set_supportsBoundaryVertices(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mFC986523905272E58728731CEE06B47DD4ECAC3D_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor/Cinfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystemDescriptor_Create_mE7A8E8E49F7EB078CE4D76C9F0D883634157EC9C (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlaneSubsystem__ctor_mC6CCE81B1FE634A34E37D1595EC6189A6D5B28E1 (XRPlaneSubsystem_tCAFBDE4A030D5EB56FC6D968DB31FA2852836909 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_shutdown_m87991ECD39569A385E3D85700AF4A06970E30E4C (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_start_m82B8C363308B956D71355779F01C6295321DA514 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_stop_mEAF663A81B50E1EF93EC8E75565035687E50B535 (const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_acquireBoundary(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireBoundary_mB24A38E074DD6AC49490DCF129C6BD4170F05CC6 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___verticiesPtr1, int32_t* ___numPoints2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<!!0>&)
inline void XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFA1DC98687CB79D80124DCF3E9DA117D2764918D (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * ___array2, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *, const RuntimeMethod*))XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFA1DC98687CB79D80124DCF3E9DA117D2764918D_gshared)(___length0, ___allocator1, ___array2, method);
}
// Unity.Collections.NativeArray`1<!!0> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m19DBC84229E022C0774E3EA49389F3B4615D4FEA (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m19DBC84229E022C0774E3EA49389F3B4615D4FEA_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob>(!!0,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m1632DD3ED6A9CD398F4B2A48B0687CF4A585751C (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A , int32_t, int32_t, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m1632DD3ED6A9CD398F4B2A48B0687CF4A585751C_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob>(!!0,Unity.Jobs.JobHandle)
inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	return ((  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  (*) (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 , JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 , const RuntimeMethod*))IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_gshared)(___jobData0, ___dependsOn1, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_releaseBoundary(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseBoundary_mB59DE7A5598CFD12C746724D3BFAEB07E0DEE6DF (void* ___boundary0, const RuntimeMethod* method);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireChanges_mE72922A68EDC98AA2EAFD46F28272FB3A1E5B0A5 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,!0,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mEF70E785771C1991D0AA01D000681369598794FF (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, void*, int32_t, void*, int32_t, void*, int32_t, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mEF70E785771C1991D0AA01D000681369598794FF_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseChanges_m594A8F1CD399305BDC1CCE9D9F425848AA2070F5 (void* ___changes0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_setPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_setPlaneDetectionMode_mD72BD31A29D28A59882B687FF3F97C10103D6799 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IProvider__ctor_mB2FE77AE4D29B62B76F877BB9761B2CFFBF5A46A (IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FlipBoundaryWindingJob_Execute_m50311444035897AB61EE1379BF51C2B8E58FD3D9 (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformBoundaryPositionsJob_Execute_m2C4A63CBC47948E6E9267689C014416A9CE756DF (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_mDB310DE6F820E095FB2B2D6ECD586FB7617026B9 (int32_t ___worldMapId0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mBE78617799CC9B825C61B179F1E2F35D310740DE_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m79FA6173E594AE9F057F0AEB856A15E2ACB43757 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m8DDE36BC2ED25796844C59C7A098B07E7A7BA573 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m50211C5B4349C580EC9E3913814FCE02E72C7D3A (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m8D5C69808F4E3DB20F697D46F85C17A24FDE4688 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_major()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_major(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void OSVersion_set_major_m5DBF19A6CA77CC1DAD43846899A4871548B48A84_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_minor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_minor(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void OSVersion_set_minor_mA54AFDAB79AF99984AD01893AC99866479877CC8_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_point()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.OSVersion::set_point(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void OSVersion_set_point_mE257BF56FF20203DC23672D35C1B20D6A1454405_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::IndexOfFirstDigit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_IndexOfFirstDigit_m3527F158639800E2A9884F8D83A5F394B3FED5B4 (String_t* ___version0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::ParseNextComponent(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_ParseNextComponent_mBDCC4A63E1B916D9B1136864639DA42C8762FC82 (String_t* ___version0, int32_t* ___index1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_GetHashCode_mF4F18C6F777E716D07DEF052A90CC64C73C3D01E (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThan_mD04D07551AE4D4C9D08B63884DF80B255047F2B1 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARKit.OSVersion::CompareTo(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_CompareTo_m5102D1398077353643B4784512A599CDCB5590A1 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___version0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m99FCBF7670DF0DCC1D6968EC51EE6EF55611471E (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_mA70B1E35BBCD9C206367BD8C66F3E0F2DAF51BF3 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_Equality(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_Equality_mC51EEC8017A1A495CD6DB0E046FA1BCF4D656DB4 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARKit.OSVersion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSVersion_ToString_mC2FB1F8F61AAE40B141FE45C3F3B9408701EA00A (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem_Register_m0B242BF988E92E626979B845EE749A1794E9E642 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_Register_m0B242BF988E92E626979B845EE749A1794E9E642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRCameraSubsystemCinfo cameraSubsystemCinfo = new XRCameraSubsystemCinfo
		// {
		//     id = k_SubsystemId,
		//     implementationType = typeof(ARKitCameraSubsystem),
		//     supportsAverageBrightness = true,
		//     supportsAverageColorTemperature = true,
		//     supportsColorCorrection = false,
		//     supportsDisplayMatrix = true,
		//     supportsProjectionMatrix = true,
		//     supportsTimestamp = true,
		//     supportsCameraConfigurations = true,
		//     supportsCameraImage = true,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC ));
		XRCameraSubsystemCinfo_set_id_mEA5E0B21781D8AAF0FB30E9E506AA4D7C392E2A8_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_implementationType_mAEA2151AEC9F31C5726795200B63D4BA53F2721E_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), L_1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageBrightness_m0851BD298973A23FCE8D87B5B8AB389562D255FA_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m427080856A860B42B3FC21139B990F19BE0AD87E_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsColorCorrection_mFC3AED27787017D69ABA73FF60D1E20DDF5E674F_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)0, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsDisplayMatrix_mB5BF43F49F4D64AA3DFE174574D386D99A96F92F_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m4CC64D264746A394D8186CCDD583CFCC637C8E66_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsTimestamp_m901DA9F41D9CEE062F7A054738E5382E2A825F28_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mCCA48E46B902EEABAA94FB7A2A668097E06D4906_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_set_supportsCameraImage_m9B592584A2C27917CC80AB290F0A2600FD275951_inline((XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC  L_2 = V_0;
		// if (!XRCameraSubsystem.Register(cameraSubsystemCinfo))
		bool L_3 = XRCameraSubsystem_Register_m471B8039B86BACC07C48A926544DF6C1415C1DA7(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.LogErrorFormat("Cannot register the {0} subsystem", k_SubsystemId);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral8B8E90144BD4006CACB7B06F48C7A448B4DCF35F);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424, L_5, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem/IProvider UnityEngine.XR.ARKit.ARKitCameraSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t5D7A855308E0C5E8F9175CA7CDEE91F929A5185C * ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987 (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitCameraSubsystem_CreateProvider_mD59CEAEDE9A4351E3B6E069004B813F882FB2987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * L_0 = (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E *)il2cpp_codegen_object_new(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var);
		Provider__ctor_m94418749731B416D24DE7243E47BAEFC002D646E(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCameraSubsystem__ctor_mE0B24FB4ED5FC603CB22E220A161A00177B9B8B9 (ARKitCameraSubsystem_t60568A6D41C4421316052C06185DC95BA291F614 * __this, const RuntimeMethod* method)
{
	{
		XRCameraSubsystem__ctor_m4DB65C1288A29F049A4A362B9CD81B60970A73AE(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Construct(int32_t, int32_t);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Construct(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Construct_m2DF0AEE8AA88CDF96D248F9CD714961C2738216F (int32_t ___textureYPropertyNameId0, int32_t ___textureCbCrPropertyNameId1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Construct)(___textureYPropertyNameId0, ___textureCbCrPropertyNameId1);

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Destruct();
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Destruct_m795FFFF7821CE91E8992070BEFAAE0FFBA6AE084 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Destruct)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Start();
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Start_m59DA518F90E02C5707FDD049DC3DECD96B65A5A6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Start)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_Stop();
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_Stop_m098821B53BD6527CA00BB02E51D36A7A5C76FF10 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_Stop)();

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetFrame(XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B , XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 *);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetFrame_m6048991661BFB4AEE17C00EDCF7E65995B7C8691 (XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  ___cameraParams0, XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * ___cameraFrame1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B , XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetFrame)(___cameraParams0, ___cameraFrame1);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TrySetFocusMode(int32_t);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetFocusMode(UnityEngine.XR.ARSubsystems.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetFocusMode_m2D71E0C7D2E3A86263BC42FF937BEAC0FFBD8677 (int32_t ___cameraFocusMode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TrySetFocusMode)(___cameraFocusMode0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TrySetLightEstimationMode(int32_t);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetLightEstimationMode(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TrySetLightEstimationMode_m2DAF2550DA728382FB0F1B91B02B74FC50D4257E (int32_t ___lightEstimationMode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TrySetLightEstimationMode)(___lightEstimationMode0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetIntrinsics(XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 *);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetIntrinsics_m364B7B8DCA914DD0C1878F56859A5C7D9CC3B045 (XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetIntrinsics)(___cameraIntrinsics0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_IsCameraPermissionGranted();
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_IsCameraPermissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_m972DB9591AA4E5EB4F483280F44DEF5CC8C88EE3 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_IsCameraPermissionGranted)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_Camera_AcquireConfigurations(int32_t*, int32_t*);
// System.IntPtr UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireConfigurations(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeApi_UnityARKit_Camera_AcquireConfigurations_m6A384C73CC0BE9DA50DC6128284E200678D08771 (int32_t* ___configurationsCount0, int32_t* ___configurationSize1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_AcquireConfigurations)(___configurationsCount0, ___configurationSize1);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_ReleaseConfigurations(intptr_t);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseConfigurations(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseConfigurations_mECAE479F28DB8847031DB58670D463D8692C661D (intptr_t ___configurations0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_ReleaseConfigurations)(___configurations0);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryGetCurrentConfiguration(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 *);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryGetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m2B5868976AF970142BB6CDBCBB04329C98FBAA88 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 * ___cameraConfiguration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryGetCurrentConfiguration)(___cameraConfiguration0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TrySetCurrentConfiguration(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 );
// UnityEngine.XR.ARKit.ARKitCameraSubsystem/CameraConfigurationResult UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TrySetCurrentConfiguration(UnityEngine.XR.ARSubsystems.XRCameraConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_m10852C9A985C98A1BF729D17027BE7B96C9FB673 (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___cameraConfiguration0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TrySetCurrentConfiguration)(___cameraConfiguration0);

	return returnValue;
}
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_Camera_AcquireTextureDescriptors(int32_t*, int32_t*);
// System.Void* UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_AcquireTextureDescriptors(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_mEAFD58446AEBEC88F2E3E55B5C8C3C89B2BA0869 (int32_t* ___length0, int32_t* ___elementSize1, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (int32_t*, int32_t*);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_AcquireTextureDescriptors)(___length0, ___elementSize1);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_ReleaseTextureDescriptors(void*);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_ReleaseTextureDescriptors(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m1B1D58FE2C83A8854CD2223602213D302585A0A2 (void* ___descriptors0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_ReleaseTextureDescriptors)(___descriptors0);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_Camera_TryAcquireLatestImage(CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 *);
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_TryAcquireLatestImage(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_Camera_TryAcquireLatestImage_m9EDEF6EF0E4C88B918827C8DFCA3AF3265C04DEE (CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * ___cameraImageCinfo0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_TryAcquireLatestImage)(___cameraImageCinfo0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_Camera_DisposeImage(int32_t);
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/NativeApi::UnityARKit_Camera_DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_Camera_DisposeImage_m696CD790C79BA59B3B69032D9E331D33F0D8506E (int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_Camera_DisposeImage)(___nativeHandle0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::get_shaderName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Provider_get_shaderName_m7DAA2314A55B8E6B5BAAB3FDE0926DCCD77F11EA (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_get_shaderName_m7DAA2314A55B8E6B5BAAB3FDE0926DCCD77F11EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return "Unlit/ARKit"; }
		return _stringLiteral33E23C61A9793B5149A92E13F9B9FBF25F22A9C4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::get_permissionGranted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_permissionGranted_m02DB9BF826B2D20EBA4C6B7644FDB6AB9642C2A9 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		// get { return NativeApi.UnityARKit_Camera_IsCameraPermissionGranted(); }
		bool L_0 = NativeApi_UnityARKit_Camera_IsCameraPermissionGranted_m972DB9591AA4E5EB4F483280F44DEF5CC8C88EE3(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m94418749731B416D24DE7243E47BAEFC002D646E (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider__ctor_m94418749731B416D24DE7243E47BAEFC002D646E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Provider()
		IProvider__ctor_m2709637AF8148063803D9E41C66EC75B4D713AC1(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARKit_Camera_Construct(k_TextureYPropertyNameId,
		//                                       k_TextureCbCrPropertyNameId);
		IL2CPP_RUNTIME_CLASS_INIT(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->get_k_TextureYPropertyNameId_0();
		int32_t L_1 = ((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->get_k_TextureCbCrPropertyNameId_1();
		NativeApi_UnityARKit_Camera_Construct_m2DF0AEE8AA88CDF96D248F9CD714961C2738216F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m2946B41F238958FB44AD3B16DBD26844F61BC7D7 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_Camera_Start();
		NativeApi_UnityARKit_Camera_Start_m59DA518F90E02C5707FDD049DC3DECD96B65A5A6(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mAEA642A3F7A598594580E3D5687239F74C7E1761 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_Camera_Stop();
		NativeApi_UnityARKit_Camera_Stop_m098821B53BD6527CA00BB02E51D36A7A5C76FF10(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m2CC7D21196FDF5A5B0196595C7AB5E2AC2565554 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_Camera_Destruct();
		NativeApi_UnityARKit_Camera_Destruct_m795FFFF7821CE91E8992070BEFAAE0FFBA6AE084(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::TryGetFrame(UnityEngine.XR.ARSubsystems.XRCameraParams,UnityEngine.XR.ARSubsystems.XRCameraFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetFrame_m778BED16F19EC494A6514EEF672A8482880C7BE6 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  ___cameraParams0, XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * ___cameraFrame1, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityARKit_Camera_TryGetFrame(cameraParams, out cameraFrame);
		XRCameraParams_t7D7BD73FED17232F00E62B75053F66F7A110099B  L_0 = ___cameraParams0;
		XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 * L_1 = ___cameraFrame1;
		bool L_2 = NativeApi_UnityARKit_Camera_TryGetFrame_m6048991661BFB4AEE17C00EDCF7E65995B7C8691(L_0, (XRCameraFrame_t4CD211D8726072DC25A43359826198293A271689 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::TrySetFocusMode(UnityEngine.XR.ARSubsystems.CameraFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TrySetFocusMode_m681B30E6232C7B9FA5DD26925FDCCD9A04631FF7 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___cameraFocusMode0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityARKit_Camera_TrySetFocusMode(cameraFocusMode);
		int32_t L_0 = ___cameraFocusMode0;
		bool L_1 = NativeApi_UnityARKit_Camera_TrySetFocusMode_m2D71E0C7D2E3A86263BC42FF937BEAC0FFBD8677(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::TrySetLightEstimationMode(UnityEngine.XR.ARSubsystems.LightEstimationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TrySetLightEstimationMode_m99AE9CF47F47FEAB5D2FF28AE89DA3AE5AD2BAA6 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___lightEstimationMode0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityARKit_Camera_TrySetLightEstimationMode(lightEstimationMode);
		int32_t L_0 = ___lightEstimationMode0;
		bool L_1 = NativeApi_UnityARKit_Camera_TrySetLightEstimationMode_m2DAF2550DA728382FB0F1B91B02B74FC50D4257E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::TryGetIntrinsics(UnityEngine.XR.ARSubsystems.XRCameraIntrinsics&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryGetIntrinsics_m8242924A73B0EB1AED11A5D500C070E41C14E79B (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * ___cameraIntrinsics0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityARKit_Camera_TryGetIntrinsics(out cameraIntrinsics);
		XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 * L_0 = ___cameraIntrinsics0;
		bool L_1 = NativeApi_UnityARKit_Camera_TryGetIntrinsics_m364B7B8DCA914DD0C1878F56859A5C7D9CC3B045((XRCameraIntrinsics_t87DB637256483C50AB8AE386E971DB4662BDEA01 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::GetConfigurations(UnityEngine.XR.ARSubsystems.XRCameraConfiguration,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  Provider_GetConfigurations_m4D9FC2BA19A3649FD8A38FB6125B77916FD4A71B (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___defaultCameraConfiguration0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetConfigurations_m4D9FC2BA19A3649FD8A38FB6125B77916FD4A71B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// IntPtr configurations = NativeApi.UnityARKit_Camera_AcquireConfigurations(out configurationsCount,
		//                                                                           out configurationSize);
		intptr_t L_0 = NativeApi_UnityARKit_Camera_AcquireConfigurations_m6A384C73CC0BE9DA50DC6128284E200678D08771((int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// return NativeCopyUtility.PtrToNativeArrayWithDefault(defaultCameraConfiguration,
		//                                                      (void*)configurations,
		//                                                      configurationSize, configurationsCount,
		//                                                      allocator);
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_1 = ___defaultCameraConfiguration0;
		intptr_t L_2 = V_2;
		void* L_3 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___allocator1;
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_7 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m4B898BF6E98DF29F6158BCC86F275C311E9E30C6(L_1, (void*)(void*)L_3, L_4, L_5, L_6, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m4B898BF6E98DF29F6158BCC86F275C311E9E30C6_RuntimeMethod_var);
		V_3 = L_7;
		IL2CPP_LEAVE(0x23, FINALLY_001c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001c;
	}

FINALLY_001c:
	{ // begin finally (depth: 1)
		// NativeApi.UnityARKit_Camera_ReleaseConfigurations(configurations);
		intptr_t L_8 = V_2;
		NativeApi_UnityARKit_Camera_ReleaseConfigurations_mECAE479F28DB8847031DB58670D463D8692C661D((intptr_t)L_8, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(28)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(28)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x23, IL_0023)
	}

IL_0023:
	{
		// }
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_9 = V_3;
		return L_9;
	}
}
// System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration> UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::get_currentConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B  Provider_get_currentConfiguration_mA0CFBA086EFFF0ED6435E6AB7084329F8DAB02D3 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_get_currentConfiguration_mA0CFBA086EFFF0ED6435E6AB7084329F8DAB02D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (NativeApi.UnityARKit_Camera_TryGetCurrentConfiguration(out cameraConfiguration))
		bool L_0 = NativeApi_UnityARKit_Camera_TryGetCurrentConfiguration_m2B5868976AF970142BB6CDBCBB04329C98FBAA88((XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 *)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		// return cameraConfiguration;
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_1 = V_0;
		Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Nullable_1__ctor_m5E2A866FA7884CE47D121BA764771093E8A671C3((&L_2), L_1, /*hidden argument*/Nullable_1__ctor_m5E2A866FA7884CE47D121BA764771093E8A671C3_RuntimeMethod_var);
		return L_2;
	}

IL_0010:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B ));
		Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B  L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::set_currentConfiguration(System.Nullable`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (NativeApi.UnityARKit_Camera_TrySetCurrentConfiguration((XRCameraConfiguration)value))
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_0 = Nullable_1_get_Value_m68CA3212B88F303B54C037E390B716436F70F235((Nullable_1_tE9B0A1522DF70D439DDB9B586CAC054F3DAE279B *)(&___value0), /*hidden argument*/Nullable_1_get_Value_m68CA3212B88F303B54C037E390B716436F70F235_RuntimeMethod_var);
		int32_t L_1 = NativeApi_UnityARKit_Camera_TrySetCurrentConfiguration_m10852C9A985C98A1BF729D17027BE7B96C9FB673(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0025;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_0025:
	{
		// throw new InvalidOperationException("cannot set camera configuration because ARKit version "
		//                                     + "does not support camera configurations");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral48A46231AB256292293A3DC6088329E7F3D1D3E2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644_RuntimeMethod_var);
	}

IL_0030:
	{
		// throw new ArgumentException("camera configuration does not exist in the available "
		//                             + "configurations", "value");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_4 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_4, _stringLiteral00EDFBC4EFCE3A9F974CEABCD51DE2609B2A1AE5, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644_RuntimeMethod_var);
	}

IL_0040:
	{
		// throw new InvalidOperationException("cannot set camera configuration because the ARKit "
		//                                     + "session is not valid");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_5 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_5, _stringLiteral07FEA96DBE8894801F7F1DB849C8EB8A0629F092, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644_RuntimeMethod_var);
	}

IL_004b:
	{
		// throw new InvalidOperationException("cannot set camera configuration for ARKit");
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_6 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_6, _stringLiteral33ABE3E9D8C2CC615BBDC88213E6BE6A384D6805, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, Provider_set_currentConfiguration_m9E1BDFAEEA1A00221B3DC967E772F12204458644_RuntimeMethod_var);
	}

IL_0056:
	{
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor> UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::GetTextureDescriptors(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  Provider_GetTextureDescriptors_m9CECC57BD95307B36CC3F27C9CFBBACC92836DCC (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___defaultDescriptor0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetTextureDescriptors_m9CECC57BD95307B36CC3F27C9CFBBACC92836DCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	void* V_2 = NULL;
	NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var textureDescriptors = NativeApi.UnityARKit_Camera_AcquireTextureDescriptors(
		//     out length, out elementSize);
		void* L_0 = NativeApi_UnityARKit_Camera_AcquireTextureDescriptors_mEAFD58446AEBEC88F2E3E55B5C8C3C89B2BA0869((int32_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = (void*)L_0;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		// return NativeCopyUtility.PtrToNativeArrayWithDefault(
		//     defaultDescriptor,
		//     textureDescriptors, elementSize, length, allocator);
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_1 = ___defaultDescriptor0;
		void* L_2 = V_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = ___allocator1;
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_6 = NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m4BA618A9EF73D09E4D746A4E27CF1A0E9F21E3E6(L_1, (void*)(void*)L_2, L_3, L_4, L_5, /*hidden argument*/NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m4BA618A9EF73D09E4D746A4E27CF1A0E9F21E3E6_RuntimeMethod_var);
		V_3 = L_6;
		IL2CPP_LEAVE(0x1E, FINALLY_0017);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0017;
	}

FINALLY_0017:
	{ // begin finally (depth: 1)
		// NativeApi.UnityARKit_Camera_ReleaseTextureDescriptors(textureDescriptors);
		void* L_7 = V_2;
		NativeApi_UnityARKit_Camera_ReleaseTextureDescriptors_m1B1D58FE2C83A8854CD2223602213D302585A0A2((void*)(void*)L_7, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(23)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(23)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1E, IL_001e)
	}

IL_001e:
	{
		// }
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_8 = V_3;
		return L_8;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::TryAcquireLatestImage(UnityEngine.XR.ARSubsystems.XRCameraSubsystem/CameraImageCinfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAcquireLatestImage_mD6A0021BD259DC4599D9CFE86BE154B9AAB8D157 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * ___cameraImageCinfo0, const RuntimeMethod* method)
{
	{
		// return NativeApi.UnityARKit_Camera_TryAcquireLatestImage(out cameraImageCinfo);
		CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 * L_0 = ___cameraImageCinfo0;
		bool L_1 = NativeApi_UnityARKit_Camera_TryAcquireLatestImage_m9EDEF6EF0E4C88B918827C8DFCA3AF3265C04DEE((CameraImageCinfo_t25990F3278BB5799F03950B02EBA229BF901E532 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::DisposeImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_DisposeImage_m937B0669326BFF5390E7F553FE0409EF28F0CAE4 (Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_Camera_DisposeImage(nativeHandle);
		int32_t L_0 = ___nativeHandle0;
		NativeApi_UnityARKit_Camera_DisposeImage_m696CD790C79BA59B3B69032D9E331D33F0D8506E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitCameraSubsystem/Provider::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__cctor_m38524FA8A6011F15F82FE1A2500B22425FC52099 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider__cctor_m38524FA8A6011F15F82FE1A2500B22425FC52099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly int k_TextureYPropertyNameId = Shader.PropertyToID(k_TextureYPropertyName);
		int32_t L_0 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteralFCF79EA505459F01F984988600F23CC4756E4537, /*hidden argument*/NULL);
		((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->set_k_TextureYPropertyNameId_0(L_0);
		// static readonly int k_TextureCbCrPropertyNameId = Shader.PropertyToID(k_TextureCbCrPropertyName);
		int32_t L_1 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(_stringLiteral08625AE77F17730A156178CF9D3A928F1B3E455D, /*hidden argument*/NULL);
		((Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_StaticFields*)il2cpp_codegen_static_fields_for(Provider_t10F5BFB8A0883F5ABFC689F55DC4B6DFA0E9535E_il2cpp_TypeInfo_var))->set_k_TextureCbCrPropertyNameId_1(L_1);
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
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeRegistration::Register()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeRegistration_Register_m99E02E59582A0F880422D128FEEF2BEE553EE20E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitEnvironmentProbeRegistration_Register_m99E02E59582A0F880422D128FEEF2BEE553EE20E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XREnvironmentProbeSubsystemCinfo environmentProbeSubsystemInfo = new XREnvironmentProbeSubsystemCinfo()
		// {
		//     id = subsystemId,
		//     implementationType = typeof(ARKitEnvironmentProbeSubsystem),
		//     supportsManualPlacement = true,
		//     supportsRemovalOfManual = true,
		//     supportsAutomaticPlacement = true,
		//     supportsRemovalOfAutomatic = true,
		//     supportsEnvironmentTexture = true,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A ));
		XREnvironmentProbeSubsystemCinfo_set_id_m65F71E8D97413215944F75C52F6F9F2088644E24_inline((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), _stringLiteralCE0959A1FA0165C9EB07D89FE0FBBAA26CD9E529, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_implementationType_m5CDE58834E022AEB4B9E6FD826D2A6140D3D1B3E_inline((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), L_1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_mF3AA42AAE10CC81DF831404F415BD34694B08C59_inline((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m200BBBC11A1580CAA151ED498A8B24E27BAB646F_inline((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mBC81F9BC67A3FF73D0EB679BEDDFE1D3DA918582_inline((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_mC43F8E59BF70D73AC0EB8EE5A9B2D6F92966B3B3_inline((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_m9C630C891056E5E1187AA2433DDC8D7E0F3FF662_inline((XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A  L_2 = V_0;
		// if (!XREnvironmentProbeSubsystem.Register(environmentProbeSubsystemInfo))
		bool L_3 = XREnvironmentProbeSubsystem_Register_mF52AA36EB4EAA59C932C43E45DA567A3EA6D55FD(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_006d;
		}
	}
	{
		// Debug.LogErrorFormat("Cannot register the {0} subsystem", subsystemId);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralCE0959A1FA0165C9EB07D89FE0FBBAA26CD9E529);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralCE0959A1FA0165C9EB07D89FE0FBBAA26CD9E529);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mB54A656B267CF936439D50348FC828921AEDA8A9(_stringLiteralE4063A4F84FF2019BD9AEB8FD9B07C7603968424, L_5, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// }
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
// UnityEngine.XR.ARSubsystems.XREnvironmentProbeSubsystem/IProvider UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t7797038399918EB76F36AF28BE8FF7DFA4A82241 * ARKitEnvironmentProbeSubsystem_CreateProvider_m734B041E08091395C665D21150F3728493C2A746 (ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitEnvironmentProbeSubsystem_CreateProvider_m734B041E08091395C665D21150F3728493C2A746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * L_0 = (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 *)il2cpp_codegen_object_new(Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91_il2cpp_TypeInfo_var);
		Provider__ctor_m01089AA1109114DA6CA9F68C2B691726E7E75745(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitEnvironmentProbeSubsystem__ctor_m957799C8DE48100EF21E8429209271292EADFA95 (ARKitEnvironmentProbeSubsystem_t848B106A7F6A3FB0EA98363B890E96B5D29E31AE * __this, const RuntimeMethod* method)
{
	{
		XREnvironmentProbeSubsystem__ctor_m7A3AE7794DA58FE53C8EE9F47F8B84F3D5DF47B6(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m01089AA1109114DA6CA9F68C2B691726E7E75745 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		// public Provider()
		IProvider__ctor_m5A111BAA2E41E225EEF73921AB5C4A279E7AC337(__this, /*hidden argument*/NULL);
		// EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Construct();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m389EF901E5A84DE58098B34F3159AFAA1B83C6E5(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m00CEAF4D906E61A9A4F729F73AE8766A2ED7D7E5 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		// EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Start();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mD464FCD2D9A5C50791D7B9D38AAD43D97ACA6227(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mC2481922A4D2761BB6057BA06C255CF80EFBD862 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		// EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Stop();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_m80FF6427ACD878991E6F3649C32A4C948AD834C9(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mC7E6A4679A9D3565D0AB9F588BF6009D95D64281 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, const RuntimeMethod* method)
{
	{
		// EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_Destruct();
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Destruct_mA74881A49FA8DB131E3613E414E54215205799C2(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::SetAutomaticPlacement(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_SetAutomaticPlacement_m8B87B886E472B8BA1A07C1C69FD95D8295468BAD (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled(value);
		bool L_0 = ___value0;
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled_m58CF7C2D525E820536C7143D42E84C7EFC4805A9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbe&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddEnvironmentProbe_mC080470C1555B1CCC7F29D4DD842650059BD765A (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size2, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * ___environmentProbe3, const RuntimeMethod* method)
{
	{
		// return EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(pose, scale, size, out environmentProbe);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___pose0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___scale1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___size2;
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * L_3 = ___environmentProbe3;
		bool L_4 = EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe_m7EF9192A23F0E6CBB565BCB89D9D3AC55024F272(L_0, L_1, L_2, (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::RemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_RemoveEnvironmentProbe_m93134B4724464908E4BB6EA7BB62A296352D47C3 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, const RuntimeMethod* method)
{
	{
		// return EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(trackableId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		bool L_1 = EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe_m823D591063A7E9D9F2186D3AE0FB2AA96C03E1D6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe> UnityEngine.XR.ARKit.ARKitEnvironmentProbeSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XREnvironmentProbe,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  Provider_GetChanges_m26E082A5D0B91535BD7201C3AFAFA220CC61F006 (Provider_tB0A7AD26F93889AA6B6BC88229A3EBCB638EFA91 * __this, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultEnvironmentProbe0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m26E082A5D0B91535BD7201C3AFAFA220CC61F006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var context = EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_AcquireChanges(out numAddedEnvironmentProbes, out addedEnvironmentProbesPointer,
		//                                                                                      out numUpdatedEnvironmentProbes, out updatedEnvironmentProbesPointer,
		//                                                                                      out numRemovedEnvironmentProbeIds, out removedEnvironmentProbeIdsPointer,
		//                                                                                      out stride);
		intptr_t L_0 = EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mF3B06C982FBD823D7B03F3DB870E22846FFA834C((int32_t*)(&V_0), (intptr_t*)(&V_1), (int32_t*)(&V_2), (intptr_t*)(&V_3), (int32_t*)(&V_4), (intptr_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (intptr_t)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XREnvironmentProbe>(
		//     (void*)addedEnvironmentProbesPointer, numAddedEnvironmentProbes,
		//     (void*)updatedEnvironmentProbesPointer, numUpdatedEnvironmentProbes,
		//     (void*)removedEnvironmentProbeIdsPointer, numRemovedEnvironmentProbeIds,
		//     defaultEnvironmentProbe, stride,
		//     allocator);
		intptr_t L_1 = V_1;
		void* L_2 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_1, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		intptr_t L_4 = V_3;
		void* L_5 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		intptr_t L_7 = V_5;
		void* L_8 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_4;
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_10 = ___defaultEnvironmentProbe0;
		int32_t L_11 = V_6;
		int32_t L_12 = ___allocator1;
		TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  L_13;
		memset((&L_13), 0, sizeof(L_13));
		TrackableChanges_1__ctor_m40C09A3D6824519F73F8EF62340CD05B26A595B1((&L_13), (void*)(void*)L_2, L_3, (void*)(void*)L_5, L_6, (void*)(void*)L_8, L_9, L_10, L_11, L_12, /*hidden argument*/TrackableChanges_1__ctor_m40C09A3D6824519F73F8EF62340CD05B26A595B1_RuntimeMethod_var);
		V_8 = L_13;
		IL2CPP_LEAVE(0x41, FINALLY_0039);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		// EnvironmentProbeApi.UnityARKit_EnvironmentProbeProvider_ReleaseChanges(context);
		intptr_t L_14 = V_7;
		EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m7357747C89D2E0CC5380F76F4965A3EECE4D1539((intptr_t)L_14, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// }
		TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7  L_15 = V_8;
		return L_15;
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
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_setMaximumNumberOfTrackedImages(int32_t);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_setMaximumNumberOfTrackedImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_setMaximumNumberOfTrackedImages_mBF0FA67787BE559D28A4949D256D5824B8F6F1F4 (int32_t ___maxNumTrackedImages0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_setMaximumNumberOfTrackedImages)(___maxNumTrackedImages0);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_imageTracking_trySetReferenceLibrary(Il2CppChar*, int32_t, Guid_t );
// UnityEngine.XR.ARKit.SetReferenceLibraryResult UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_trySetReferenceLibrary(System.String,System.Int32,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitImageTrackingSubsystem_UnityARKit_imageTracking_trySetReferenceLibrary_m8D9CDB6B19408E779E8BFAC00B99A9BF62F130B3 (String_t* ___name0, int32_t ___nameLength1, Guid_t  ___guid2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, int32_t, Guid_t );

	// Marshaling of parameter '___name0' to native representation
	Il2CppChar* ____name0_marshaled = NULL;
	if (___name0 != NULL)
	{
		____name0_marshaled = ___name0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_trySetReferenceLibrary)(____name0_marshaled, ___nameLength1, ___guid2);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_stop();
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_stop_mA5E30442ACDDB68089B08B3F6928E3BDC55E85B6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_stop)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_destroy();
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_destroy_m73470876BEDDE85C215EABCD3555D73571E5F772 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_destroy)();

}
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_imageTracking_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
// System.Void* UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* ARKitImageTrackingSubsystem_UnityARKit_imageTracking_acquireChanges_mB4BFD5D1B49A8BA6443E7F08FE7BA8EE68A0BCFB (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___stride6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_acquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___stride6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_imageTracking_releaseChanges(void*);
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::UnityARKit_imageTracking_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_UnityARKit_imageTracking_releaseChanges_m79BE2C4F28C174B2D27CCA85FF9C6517F1B9F10A (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_imageTracking_releaseChanges)(___changes0);

}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem_RegisterDescriptor_mC8DC8F9919766BB3A242BF200922D81DCC59DE20 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitImageTrackingSubsystem_RegisterDescriptor_mC8DC8F9919766BB3A242BF200922D81DCC59DE20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var iOSversion = OSVersion.Parse(Device.systemVersion);
		String_t* L_0 = Device_get_systemVersion_m2FAF59069686B57244F90EFBAA9E5042301C716E(/*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_1 = OSVersion_Parse_mDF26500DB38764536C24E82F4659B9B1E0B40AC8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (iOSversion < new OSVersion(11, 3))
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_2 = V_0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_3;
		memset((&L_3), 0, sizeof(L_3));
		OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4((&L_3), ((int32_t)11), 3, 0, /*hidden argument*/NULL);
		bool L_4 = OSVersion_op_LessThan_m75C71874EFC4F3233EC421034E6599CADB16504F(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// XRImageTrackingSubsystemDescriptor.Create(new XRImageTrackingSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-ImageTracking",
		//     subsystemImplementationType = typeof(ARKitImageTrackingSubsystem),
		//     supportsMovingImages = (iOSversion >= new OSVersion(12))
		// });
		il2cpp_codegen_initobj((&V_1), sizeof(Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 ));
		Cinfo_set_id_mFA87FA52172846CBD4587F2E207D65A097B842E6_inline((Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 *)(&V_1), _stringLiteral04B1631028D1B854A9842CEE0FA6FDA32C86BDF7, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_5 = { reinterpret_cast<intptr_t> (ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_5, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_mBBC866C6F4207A69F7351857F66D683E0EAF8FAF_inline((Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 *)(&V_1), L_6, /*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_7 = V_0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_8;
		memset((&L_8), 0, sizeof(L_8));
		OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4((&L_8), ((int32_t)12), 0, 0, /*hidden argument*/NULL);
		bool L_9 = OSVersion_op_GreaterThanOrEqual_m5DC241E62216C8897A29CA8BE7F1352528B9F420(L_7, L_8, /*hidden argument*/NULL);
		Cinfo_set_supportsMovingImages_m2898F758BCCE6DDC222E828D855CEFC89C58EF2C_inline((Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 *)(&V_1), L_9, /*hidden argument*/NULL);
		Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106  L_10 = V_1;
		XRImageTrackingSubsystemDescriptor_Create_m1049DA7C21F27833846D6C6E699DD2DA964522A9(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/IProvider UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t7463EA752A2B2BCE8B6D256E89A24C48FE593D91 * ARKitImageTrackingSubsystem_CreateProvider_m5411943AF1A08EF9D30E950EA921F0B3855F8217 (ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitImageTrackingSubsystem_CreateProvider_m5411943AF1A08EF9D30E950EA921F0B3855F8217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * L_0 = (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 *)il2cpp_codegen_object_new(Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46_il2cpp_TypeInfo_var);
		Provider__ctor_mA9316C0973B75FC3C67DE8C0227F6A0CDBE7F96D(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitImageTrackingSubsystem__ctor_m0E214A0CB94F079C236C8B90D0D3ED0DE8BA8CB1 (ARKitImageTrackingSubsystem_tE365CBF82726F48ED703BACA30C2B8FD797D6960 * __this, const RuntimeMethod* method)
{
	{
		XRImageTrackingSubsystem__ctor_mEE7E27E4FDC18721F1D9CDDAAC8FFAACC782D4CF(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider::set_imageLibrary(UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_imageLibrary_m1EBAF4E0DFA8EBC0FE1FEDF6ED7064F7DF91DA13 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_set_imageLibrary_m1EBAF4E0DFA8EBC0FE1FEDF6ED7064F7DF91DA13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (value == null)
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// UnityARKit_imageTracking_stop();
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_stop_mA5E30442ACDDB68089B08B3F6928E3BDC55E85B6(/*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// var nativeReturnCode = UnityARKit_imageTracking_trySetReferenceLibrary(value.name, value.name.Length, value.guid);
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_4 = ___value0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_5, /*hidden argument*/NULL);
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_7 = ___value0;
		NullCheck(L_7);
		Guid_t  L_8 = XRReferenceImageLibrary_get_guid_m101D8AFC1E328EBF5DBDED74F7EA8863A3468418(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ARKitImageTrackingSubsystem_UnityARKit_imageTracking_trySetReferenceLibrary_m8D9CDB6B19408E779E8BFAC00B99A9BF62F130B3(L_3, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// switch (nativeReturnCode)
		int32_t L_10 = V_0;
		switch (L_10)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0056;
			}
		}
	}
	{
		return;
	}

IL_003f:
	{
		// return;
		return;
	}

IL_0040:
	{
		// throw new InvalidOperationException(string.Format(
		//     "Failed to set requested image library '{0}' on ARKit - this feature only works on versions of ARKit 11.3 and newer.",
		//     value.name));
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_11 = ___value0;
		NullCheck(L_11);
		String_t* L_12 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral2F55B0C1BFA41292D9F913CC9A02B09149B75EE0, L_12, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_14 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, Provider_set_imageLibrary_m1EBAF4E0DFA8EBC0FE1FEDF6ED7064F7DF91DA13_RuntimeMethod_var);
	}

IL_0056:
	{
		// throw new InvalidOperationException(string.Format(
		//     "Failed to set requested image library '{0}' on ARKit - there is no matching resource group, or the resource group does not contain any reference images.",
		//     value.name));
		XRReferenceImageLibrary_t38B21DC6650EADA892125F045DCBF71EBC3F6A8F * L_15 = ___value0;
		NullCheck(L_15);
		String_t* L_16 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_15, /*hidden argument*/NULL);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6D98C8D7890DFF942CB1E4191D406AF6C4D35C13, L_16, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_18 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, Provider_set_imageLibrary_m1EBAF4E0DFA8EBC0FE1FEDF6ED7064F7DF91DA13_RuntimeMethod_var);
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage> UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRTrackedImage,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  Provider_GetChanges_m1B8C9B35C5FB039958F5161AE9392270D6B4D1C1 (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultTrackedImage0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m1B8C9B35C5FB039958F5161AE9392270D6B4D1C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var context = UnityARKit_imageTracking_acquireChanges(
		//     out addedPtr, out addedLength,
		//     out updatedPtr, out updatedLength,
		//     out removedPtr, out removedLength,
		//     out stride);
		void* L_0 = ARKitImageTrackingSubsystem_UnityARKit_imageTracking_acquireChanges_mB4BFD5D1B49A8BA6443E7F08FE7BA8EE68A0BCFB((void**)(&V_0), (int32_t*)(&V_3), (void**)(&V_1), (int32_t*)(&V_4), (void**)(&V_2), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRTrackedImage>(
		//     addedPtr, addedLength,
		//     updatedPtr, updatedLength,
		//     removedPtr, removedLength,
		//     defaultTrackedImage, stride,
		//     allocator);
		void* L_1 = V_0;
		int32_t L_2 = V_3;
		void* L_3 = V_1;
		int32_t L_4 = V_4;
		void* L_5 = V_2;
		int32_t L_6 = V_5;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_7 = ___defaultTrackedImage0;
		int32_t L_8 = V_6;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_m52B36DA79C416C9A326532FE472E4C336B10B82D((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_m52B36DA79C416C9A326532FE472E4C336B10B82D_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_imageTracking_releaseChanges(context);
		void* L_11 = V_7;
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_releaseChanges_m79BE2C4F28C174B2D27CCA85FF9C6517F1B9F10A((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m2406B1320F91226952D637ADA195CE6F236A0BBE (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_imageTracking_destroy();
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_destroy_m73470876BEDDE85C215EABCD3555D73571E5F772(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider::set_maxNumberOfMovingImages(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_maxNumberOfMovingImages_mB92A28E92BC478D41E6F1B51DF1AEB5D85156DBC (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// UnityARKit_imageTracking_setMaximumNumberOfTrackedImages(value);
		int32_t L_0 = ___value0;
		ARKitImageTrackingSubsystem_UnityARKit_imageTracking_setMaximumNumberOfTrackedImages_mBF0FA67787BE559D28A4949D256D5824B8F6F1F4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitImageTrackingSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mA9316C0973B75FC3C67DE8C0227F6A0CDBE7F96D (Provider_t529D13A815B277469267A1CA5C25A0FB0246AD46 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_mE3F278B6BD96AAE5265BB88C2F2F7B0AA5C1D210(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/IProvider UnityEngine.XR.ARKit.ARKitRaycastSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tB9DFB2CA3241B1F6107D01753C0F00628994A3ED * ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3 (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_CreateProvider_m5047B990F4841868A7014A87971249FE94C867B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * L_0 = (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 *)il2cpp_codegen_object_new(Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3_il2cpp_TypeInfo_var);
		Provider__ctor_mFAB8D17BFE8D59172A9949DE1F83981251CBBB88(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem_RegisterDescriptor_m1442393B3D2D07C4E6F1FBD355695BCEB4DCF63E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitRaycastSubsystem_RegisterDescriptor_m1442393B3D2D07C4E6F1FBD355695BCEB4DCF63E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRRaycastSubsystemDescriptor.RegisterDescriptor(new XRRaycastSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Raycast",
		//     subsystemImplementationType = typeof(ARKitRaycastSubsystem),
		//     supportsViewportBasedRaycast = true,
		//     supportsWorldBasedRaycast = false,
		//     supportedTrackableTypes =
		//         TrackableType.Planes |
		//         TrackableType.FeaturePoint
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 ));
		Cinfo_set_id_mDBC061879B3E989FF064E7E31CFC85ACD142199B_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), _stringLiteral21E7ADB5BD97C82496FD88B2FC35C83E90C194C2, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m9670297F5DC91608B606E2B8A7E4C2643236D65A_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsViewportBasedRaycast_m42B64A1095C52F16217EBF1D5ABFD7353DA35233_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsWorldBasedRaycast_mBF04DD8B3208A7D9C98419FEDC8CB012F7253DF5_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportedTrackableTypes_m13138A57079E692472B33A4B216D5568852BE652_inline((Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 *)(&V_0), ((int32_t)31), /*hidden argument*/NULL);
		Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704  L_2 = V_0;
		XRRaycastSubsystemDescriptor_RegisterDescriptor_mA164B987D51AD208D957753220E5B1D1A2DB0650(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitRaycastSubsystem__ctor_m8FE9A2A756806FD0166A60C2347D88F0BB38307F (ARKitRaycastSubsystem_t603C87A6FBC8139D35116A61251EB289E21ABC09 * __this, const RuntimeMethod* method)
{
	{
		XRRaycastSubsystem__ctor_mD6FC049FC72B869A2A78EE56093819D989AD4021(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_raycast_acquireHitResults(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , int32_t, void**, int32_t*);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_raycast_acquireHitResults(UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_acquireHitResults_mA4AC6C358549A8DC05F394AFD56ED90CD03E9C9F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint0, int32_t ___filter1, void** ___hitResults2, int32_t* ___hitCount3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , int32_t, void**, int32_t*);

	// Marshaling of parameter '___hitResults2' to native representation
	void* ____hitResults2_empty = NULL;
	void** ____hitResults2_marshaled = &____hitResults2_empty;

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_raycast_acquireHitResults)(___screenPoint0, ___filter1, ____hitResults2_marshaled, ___hitCount3);

	// Marshaling of parameter '___hitResults2' back from native representation
	void* _____hitResults2_marshaled_unmarshaled_dereferenced = NULL;
	_____hitResults2_marshaled_unmarshaled_dereferenced = *____hitResults2_marshaled;
	*___hitResults2 = _____hitResults2_marshaled_unmarshaled_dereferenced;

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_raycast_copyAndReleaseHitResults(void*, int32_t, void*, void*);
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/NativeApi::UnityARKit_raycast_copyAndReleaseHitResults(System.Void*,System.Int32,System.Void*,System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_raycast_copyAndReleaseHitResults_m1080A044038B5CF33AAB68D1DD8C4018E1B2D12A (void* ___defaultHit0, int32_t ___stride1, void* ___hitResults2, void* ___dstBuffer3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, int32_t, void*, void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_raycast_copyAndReleaseHitResults)(___defaultHit0, ___stride1, ___hitResults2, ___dstBuffer3);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider::Raycast(UnityEngine.XR.ARSubsystems.XRRaycastHit,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  Provider_Raycast_m1B485E19859E6EB636FB7E7934E316820C5EEEB6 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___defaultRaycastHit0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint1, int32_t ___trackableTypeMask2, int32_t ___allocator3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_Raycast_m1B485E19859E6EB636FB7E7934E316820C5EEEB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	int32_t V_1 = 0;
	NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// NativeApi.UnityARKit_raycast_acquireHitResults(
		//     screenPoint,
		//     trackableTypeMask,
		//     out hitResults,
		//     out count);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___screenPoint1;
		int32_t L_1 = ___trackableTypeMask2;
		NativeApi_UnityARKit_raycast_acquireHitResults_mA4AC6C358549A8DC05F394AFD56ED90CD03E9C9F(L_0, L_1, (void**)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		// var results = new NativeArray<XRRaycastHit>(count, allocator);
		int32_t L_2 = V_1;
		int32_t L_3 = ___allocator3;
		NativeArray_1__ctor_m006D2EF4242A56AAB59D3C23F5FA554671ADD708((NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1 *)(&V_2), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_m006D2EF4242A56AAB59D3C23F5FA554671ADD708_RuntimeMethod_var);
		// NativeApi.UnityARKit_raycast_copyAndReleaseHitResults(
		//     UnsafeUtility.AddressOf(ref defaultRaycastHit),
		//     UnsafeUtility.SizeOf<XRRaycastHit>(),
		//     hitResults,
		//     results.GetUnsafePtr());
		void* L_4 = UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m1316CBFE4D07D36B7585BD98E68B0C051F4B7A1C((XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)(&___defaultRaycastHit0), /*hidden argument*/UnsafeUtility_AddressOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m1316CBFE4D07D36B7585BD98E68B0C051F4B7A1C_RuntimeMethod_var);
		int32_t L_5 = UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m38B334EBA2718A9B6C28EBDEC13616F22AC236CD(/*hidden argument*/UnsafeUtility_SizeOf_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m38B334EBA2718A9B6C28EBDEC13616F22AC236CD_RuntimeMethod_var);
		void* L_6 = V_0;
		NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  L_7 = V_2;
		void* L_8 = NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m868F3ECEA7CC2728450E00B6159592D0E2BAB177(L_7, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m868F3ECEA7CC2728450E00B6159592D0E2BAB177_RuntimeMethod_var);
		NativeApi_UnityARKit_raycast_copyAndReleaseHitResults_m1080A044038B5CF33AAB68D1DD8C4018E1B2D12A((void*)(void*)L_4, L_5, (void*)(void*)L_6, (void*)(void*)L_8, /*hidden argument*/NULL);
		// return results;
		NativeArray_1_t769CF3061467D3B5B0062090193576AD726411C1  L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitRaycastSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mFAB8D17BFE8D59172A9949DE1F83981251CBBB88 (Provider_tC61D3306173539ECD1E3F0E7184408EA855AA0B3 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m6ED48B63231AFC2B55F4CAD72EAE1D9C624165DF(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09 (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointSubsystem_CreateProvider_m5D766C2E862F8A4ECA5772FDA6BF63651C129A09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * L_0 = (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 *)il2cpp_codegen_object_new(Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986_il2cpp_TypeInfo_var);
		Provider__ctor_m7DAC59A12BE6120D2C72B16E02A503C014166901(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitReferencePointSubsystem_RegisterDescriptor_mE3DCA20DAE72D2C7CF15B150584606C8D0FB8BA4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitReferencePointSubsystem_RegisterDescriptor_mE3DCA20DAE72D2C7CF15B150584606C8D0FB8BA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cinfo = new XRReferencePointSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-ReferencePoint",
		//     subsystemImplementationType = typeof(ARKitReferencePointSubsystem),
		//     supportsTrackableAttachments = true
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD ));
		Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), _stringLiteralE9E9BCFAFB6DCB88A2B98A04AC20F62F3FF46B43, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03_inline((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  L_2 = V_0;
		// XRReferencePointSubsystemDescriptor.Create(cinfo);
		XRReferencePointSubsystemDescriptor_Create_m6560F038F7DD64D1FEE3924A57AD4DBC79D29988(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitReferencePointSubsystem__ctor_m5BA45BB0ED79227C4E4ECE86D0EFA99A2ABEE06D (ARKitReferencePointSubsystem_t7883B8562F4226A121B744F99A8CE262F2D0E017 * __this, const RuntimeMethod* method)
{
	{
		XRReferencePointSubsystem__ctor_m00BC1D2247754D96678FBCC67FE14BBC2107D275(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mE6069260E7307357558BA42120FF26C71DF79D0D (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_refPoints_onStart();
		Provider_UnityARKit_refPoints_onStart_m7F72101E953D4FA29B77F9B925CD097271D8417E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m064C737A6B63DD370751437D4154DF9ADF3251B9 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_refPoints_onStop();
		Provider_UnityARKit_refPoints_onStop_m7C09A2E2921F4C8B7460BC4B3B2FC139092E0865(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mAB4C5670DDFEDB0575821B397792727B85AA11F7 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_refPoints_onDestroy();
		Provider_UnityARKit_refPoints_onDestroy_m1D71BC7DBA28E50A83D322C9B735554D47EC67D1(/*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint> UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRReferencePoint,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  Provider_GetChanges_m6ACC32D7B8FF8B2AE977BEE37D81AB5D7141B7F1 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultReferencePoint0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m6ACC32D7B8FF8B2AE977BEE37D81AB5D7141B7F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	void* V_7 = NULL;
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var context = UnityARKit_refPoints_acquireChanges(
		//     out addedPtr, out addedCount,
		//     out updatedPtr, out updatedCount,
		//     out removedPtr, out removedCount,
		//     out elementSize);
		void* L_0 = Provider_UnityARKit_refPoints_acquireChanges_mA344595E5CD7FE92F42133E6B0E854E124B837EB((void**)(&V_0), (int32_t*)(&V_3), (void**)(&V_1), (int32_t*)(&V_4), (void**)(&V_2), (int32_t*)(&V_5), (int32_t*)(&V_6), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRReferencePoint>(
		//     addedPtr, addedCount,
		//     updatedPtr, updatedCount,
		//     removedPtr, removedCount,
		//     defaultReferencePoint, elementSize,
		//     allocator);
		void* L_1 = V_0;
		int32_t L_2 = V_3;
		void* L_3 = V_1;
		int32_t L_4 = V_4;
		void* L_5 = V_2;
		int32_t L_6 = V_5;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_7 = ___defaultReferencePoint0;
		int32_t L_8 = V_6;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_m7995DE9C922C9D49D329A486F5CEEBB373841901((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_m7995DE9C922C9D49D329A486F5CEEBB373841901_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_refPoints_releaseChanges(context);
		void* L_11 = V_7;
		Provider_UnityARKit_refPoints_releaseChanges_mA2279618DB35A58E4AA4CAD3D51B25BEF9EB4D59((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_12 = V_8;
		return L_12;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAddReferencePoint_m99AEE284D5BBF3AFD568CD3428C3C50D8441EEF0 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method)
{
	{
		// return UnityARKit_refPoints_tryAdd(pose, out referencePoint);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___pose0;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_1 = ___referencePoint1;
		bool L_2 = Provider_UnityARKit_refPoints_tryAdd_m2F8B38BB56978FFD60602045422B4C0639B7B004(L_0, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::TryAttachReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryAttachReferencePoint_m8928234A81EDE93A7C83AE2BDA10940D5EB1A3C8 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method)
{
	{
		// return UnityARKit_refPoints_tryAttach(trackableToAffix, pose, out referencePoint);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableToAffix0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose1;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_2 = ___referencePoint2;
		bool L_3 = Provider_UnityARKit_refPoints_tryAttach_m774D4727945B1B3E4B2E212913D1482147A923AE(L_0, L_1, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_TryRemoveReferencePoint_m1C398858AF6AFD9A6F3822F2E02941D17F4BC7EC (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method)
{
	{
		// return UnityARKit_refPoints_tryRemove(referencePointId);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___referencePointId0;
		bool L_1 = Provider_UnityARKit_refPoints_tryRemove_m3A0BEB288BC29179F673735239E3FEFE65A61906(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onStart();
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStart_m7F72101E953D4FA29B77F9B925CD097271D8417E (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onStart)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onStop();
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onStop_m7C09A2E2921F4C8B7460BC4B3B2FC139092E0865 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onStop)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_onDestroy();
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_onDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_onDestroy_m1D71BC7DBA28E50A83D322C9B735554D47EC67D1 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_onDestroy)();

}
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_refPoints_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
// System.Void* UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_refPoints_acquireChanges_mA344595E5CD7FE92F42133E6B0E854E124B837EB (void** ___addedPtr0, int32_t* ___addedCount1, void** ___updatedPtr2, int32_t* ___updatedCount3, void** ___removedPtr4, int32_t* ___removedCount5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_acquireChanges)(____addedPtr0_marshaled, ___addedCount1, ____updatedPtr2_marshaled, ___updatedCount3, ____removedPtr4_marshaled, ___removedCount5, ___elementSize6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_refPoints_releaseChanges(void*);
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_refPoints_releaseChanges_mA2279618DB35A58E4AA4CAD3D51B25BEF9EB4D59 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_releaseChanges)(___changes0);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_refPoints_tryAdd(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryAdd(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAdd_m2F8B38BB56978FFD60602045422B4C0639B7B004 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_tryAdd)(___pose0, ___referencePoint1);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_refPoints_tryAttach(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryAttach(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryAttach_m774D4727945B1B3E4B2E212913D1482147A923AE (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_tryAttach)(___trackableToAffix0, ___pose1, ___referencePoint2);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_refPoints_tryRemove(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
// System.Boolean UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::UnityARKit_refPoints_tryRemove(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_UnityARKit_refPoints_tryRemove_m3A0BEB288BC29179F673735239E3FEFE65A61906 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_refPoints_tryRemove)(___referencePointId0);

	return static_cast<bool>(returnValue);
}
// System.Void UnityEngine.XR.ARKit.ARKitReferencePointSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m7DAC59A12BE6120D2C72B16E02A503C014166901 (Provider_t509F1B75CECA94E702BEAA9F7C67EA2313C58986 * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_m7D69D152ED0A017FF02C31CDD297F546148C9DD5(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F(int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F(___status0, ___worldMapId1, ___context2, NULL);

}
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider UnityEngine.XR.ARKit.ARKitSessionSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_CreateProvider_m0519B1E5B244B918EC2E29AA8D46D09696BBF64B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * L_0 = (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B *)il2cpp_codegen_object_new(Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B_il2cpp_TypeInfo_var);
		Provider__ctor_mB6A986F9599E6428D3925C19C0A5937C9F79D7B5(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__cctor_mF21044D0935B2CA8F1FCD42BF839812255101E2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem__cctor_mF21044D0935B2CA8F1FCD42BF839812255101E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_OnAsyncWorldMapCompleted = OnAsyncConversionComplete;
		OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * L_0 = (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF *)il2cpp_codegen_object_new(OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF_il2cpp_TypeInfo_var);
		OnAsyncConversionCompleteDelegate__ctor_m4BE0A755AAC63D37870EB5636686E53F8A3AB114(L_0, NULL, (intptr_t)((intptr_t)ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F_RuntimeMethod_var), /*hidden argument*/NULL);
		((ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields*)il2cpp_codegen_static_fields_for(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var))->set_s_OnAsyncWorldMapCompleted_3(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::OnAsyncConversionComplete(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F (int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_OnAsyncConversionComplete_mF9F38F09B38CC00967BD472D09D8584299F1B04F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D * V_1 = NULL;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var handle = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context2;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_1 = GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var onComplete = (Action<ARWorldMapRequestStatus, ARWorldMap>)handle.Target;
		RuntimeObject * L_2 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		V_1 = ((Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D *)CastclassSealed((RuntimeObject*)L_2, Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D_il2cpp_TypeInfo_var));
		// if (status.IsError())
		int32_t L_3 = ___status0;
		bool L_4 = ARWorldMapRequestStatusExtensions_IsError_m4324D3418C82C5B1C955A72DD0E9BA5805286540(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// onComplete(status, default(ARWorldMap));
		Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D * L_5 = V_1;
		int32_t L_6 = ___status0;
		il2cpp_codegen_initobj((&V_2), sizeof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE ));
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_7 = V_2;
		NullCheck(L_5);
		Action_2_Invoke_m9698F7529BB29F2C756724FB6BD92136CAD78B4E(L_5, L_6, L_7, /*hidden argument*/Action_2_Invoke_m9698F7529BB29F2C756724FB6BD92136CAD78B4E_RuntimeMethod_var);
		// }
		goto IL_003e;
	}

IL_002e:
	{
		// var worldMap = new ARWorldMap(worldMapId);
		int32_t L_8 = ___worldMapId1;
		ARWorldMap__ctor_m51BA4D411B69385E02F7A49B7BA1ECB0D2AD2FD7((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&V_3), L_8, /*hidden argument*/NULL);
		// onComplete(status, worldMap);
		Action_2_tD403F4AC0BE5DAA9D7B58AA9964902C50200453D * L_9 = V_1;
		int32_t L_10 = ___status0;
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_11 = V_3;
		NullCheck(L_9);
		Action_2_Invoke_m9698F7529BB29F2C756724FB6BD92136CAD78B4E(L_9, L_10, L_11, /*hidden argument*/Action_2_Invoke_m9698F7529BB29F2C756724FB6BD92136CAD78B4E_RuntimeMethod_var);
	}

IL_003e:
	{
		// handle.Free();
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_RegisterDescriptor_m359F3EC534DDADAE498376C22BE8BB24813B1CC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitSessionSubsystem_RegisterDescriptor_m359F3EC534DDADAE498376C22BE8BB24813B1CC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// XRSessionSubsystemDescriptor.RegisterDescriptor(new XRSessionSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Session",
		//     subsystemImplementationType = typeof(ARKitSessionSubsystem),
		//     supportsInstall = false,
		//     supportsMatchFrameRate = true
		// });
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A ));
		Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), _stringLiteral0DA969A2127457410F59C5D0F641E7216F1939EF, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsMatchFrameRate_mE43FF83622414EA44D02418EC98B1DA8DDFFDBD6_inline((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  L_2 = V_0;
		XRSessionSubsystemDescriptor_RegisterDescriptor_m3EF9E7985B16FFF8FE15FBEDFC87FF1BB811D49E(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem__ctor_m551ABE75E099FDA75C75967077DEFE540A41DC19 (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method)
{
	{
		XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_session_getAvailability();
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/Availability UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getAvailability_m99887277747C2AAD5A630BF058000B82B97F844D (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_session_getAvailability)();

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_update();
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_update_m8C606BC443E0856C3CE057C45A554EAF1DAA8B74 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_update)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_construct();
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_construct_mFF6871B50DE774C16170C63CBC1C5A244B6DF7B3 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_construct)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_destroy();
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_destroy_mED1AC9AA6E6D593699FB6A877AA9B7C015D5C7E6 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_destroy)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_resume();
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_resume_m65F7BC2F836A0DFD9C4ED2F9D9F7B3D7FD8BB6A3 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_resume)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_pause();
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_pause_m1D55CF790B44AEA02FBBB1D58CE68306AC1ECEA0 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_pause)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_reset();
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_reset_m67A0BCBAF9237CEA676E4AE5AFCADA108D7DA87C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_reset)();

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_session_getTrackingState();
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getTrackingState_mC556510D36A2A09FD80AB564EF433A9740EEEF60 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_session_getTrackingState)();

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_session_getNotTrackingReason();
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getNotTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeApi_UnityARKit_session_getNotTrackingReason_mDD73A7E193548D8D040F9C147C733072EFA6FF25 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_session_getNotTrackingReason)();

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_session_getMatchFrameRateEnabled();
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_getMatchFrameRateEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeApi_UnityARKit_session_getMatchFrameRateEnabled_m8F100FB7D6375D28C817BA1F3BE453A6197905E3 (const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_session_getMatchFrameRateEnabled)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_session_setMatchFrameRateEnabled(int32_t);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi::UnityARKit_session_setMatchFrameRateEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeApi_UnityARKit_session_setMatchFrameRateEnabled_m9AD09A23F4C7179C29CFDC5C95D2E75DD3DF751E (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_session_setMatchFrameRateEnabled)(static_cast<int32_t>(___enabled0));

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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___status0, ___worldMapId1, ___context2);

}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate__ctor_m4BE0A755AAC63D37870EB5636686E53F8A3AB114 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::Invoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_Invoke_m02E895D72FDB88BB08F0A654711CE610B2F00816 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, ___worldMapId1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___status0, ___worldMapId1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
					else
						VirtActionInvoker3< int32_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0, ___worldMapId1, ___context2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___worldMapId1, ___context2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), ___worldMapId1, ___context2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, ___worldMapId1, ___context2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::BeginInvoke(UnityEngine.XR.ARKit.ARWorldMapRequestStatus,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAsyncConversionCompleteDelegate_BeginInvoke_m2C33525828F103BD6E8F47B18F3193F6AF8FB56A (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, int32_t ___status0, int32_t ___worldMapId1, intptr_t ___context2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnAsyncConversionCompleteDelegate_BeginInvoke_m2C33525828F103BD6E8F47B18F3193F6AF8FB56A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var, &___status0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___worldMapId1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAsyncConversionCompleteDelegate_EndInvoke_mD44E14594FFBDA7691CD4F7D9BE1247CA1EE6AE7 (OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_mB6A986F9599E6428D3925C19C0A5937C9F79D7B5 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// public Provider()
		IProvider__ctor_m44F52AA14885F4899E67E09988D8B08C827DEFED(__this, /*hidden argument*/NULL);
		// NativeApi.UnityARKit_session_construct();
		NativeApi_UnityARKit_session_construct_mFF6871B50DE774C16170C63CBC1C5A244B6DF7B3(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Resume_m18F254F006F15D8F65D947C21C1C1E97F40C5512 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_session_resume();
		NativeApi_UnityARKit_session_resume_m65F7BC2F836A0DFD9C4ED2F9D9F7B3D7FD8BB6A3(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Pause_mA9F691CC624412FF6E86F51A8E74514F4A9B7526 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_session_pause();
		NativeApi_UnityARKit_session_pause_m1D55CF790B44AEA02FBBB1D58CE68306AC1ECEA0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Update_m50F7B6BA08687FAD6DDBF21FD5678171C1D69ABA (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_session_update();
		NativeApi_UnityARKit_session_update_m8C606BC443E0856C3CE057C45A554EAF1DAA8B74(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_mF3FD2EA69B2D3C204EFD53EEF41FD389C0F96056 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_session_destroy();
		NativeApi_UnityARKit_session_destroy_mED1AC9AA6E6D593699FB6A877AA9B7C015D5C7E6(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Reset_mBE826EAD96AF6680D04C4316809EE2652AD2A4C9 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// NativeApi.UnityARKit_session_reset();
		NativeApi_UnityARKit_session_reset_m67A0BCBAF9237CEA676E4AE5AFCADA108D7DA87C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationPause_m71ADF4616F4162E0725A594460EC66EA301966B3 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::OnApplicationResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_OnApplicationResume_mB784ED545CC3802670445357B1E5CD942794F532 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::GetAvailabilityAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * Provider_GetAvailabilityAsync_m3A9AC0788CC5F34ECD2ADB5D406C8087FBF60991 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetAvailabilityAsync_m3A9AC0788CC5F34ECD2ADB5D406C8087FBF60991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var result = NativeApi.UnityARKit_session_getAvailability();
		int32_t L_0 = NativeApi_UnityARKit_session_getAvailability_m99887277747C2AAD5A630BF058000B82B97F844D(/*hidden argument*/NULL);
		// var retVal = SessionAvailability.None;
		V_0 = 0;
		// if (result == NativeApi.Availability.Supported)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		// retVal = SessionAvailability.Installed | SessionAvailability.Supported;
		V_0 = 6;
	}

IL_000c:
	{
		// return Promise<SessionAvailability>.CreateResolvedPromise(retVal);
		int32_t L_1 = V_0;
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_2 = Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D(L_1, /*hidden argument*/Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var);
		return L_2;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::InstallAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// throw new NotSupportedException("ARKit cannot be installed.");
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, _stringLiteral01A8E649C2EE0F2F0E7111E059615E0D2F569454, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, Provider_InstallAsync_mC34CC35BE9F77D036C194822AF2C94ADABCEA322_RuntimeMethod_var);
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m5A3E48A828426BF837B4714F24C0A6C3197CDDDF (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// get { return NativeApi.UnityARKit_session_getTrackingState(); }
		int32_t L_0 = NativeApi_UnityARKit_session_getTrackingState_mC556510D36A2A09FD80AB564EF433A9740EEEF60(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_m3C4778EE2EEB55CD1559FFA9A7098D4BCEBF4382 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// get { return NativeApi.UnityARKit_session_getNotTrackingReason(); }
		int32_t L_0 = NativeApi_UnityARKit_session_getNotTrackingReason_mDD73A7E193548D8D040F9C147C733072EFA6FF25(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::get_matchFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Provider_get_matchFrameRate_m44BA90701AD5DF41CCA0FB516DE568448FCE5729 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// get { return NativeApi.UnityARKit_session_getMatchFrameRateEnabled(); }
		bool L_0 = NativeApi_UnityARKit_session_getMatchFrameRateEnabled_m8F100FB7D6375D28C817BA1F3BE453A6197905E3(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::set_matchFrameRate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_matchFrameRate_mC644C27FF86C3F9030E007ADBEA2AFC86BE766D6 (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { NativeApi.UnityARKit_session_setMatchFrameRateEnabled(value); }
		bool L_0 = ___value0;
		NativeApi_UnityARKit_session_setMatchFrameRateEnabled_m9AD09A23F4C7179C29CFDC5C95D2E75DD3DF751E(L_0, /*hidden argument*/NULL);
		// set { NativeApi.UnityARKit_session_setMatchFrameRateEnabled(value); }
		return;
	}
}
// System.Int32 UnityEngine.XR.ARKit.ARKitSessionSubsystem/Provider::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_frameRate_mA1EAF2FB09260A887342D61065F009B2CC2934EB (Provider_t475F303CC6F0955D8B266D4CD5B7022F3658389B * __this, const RuntimeMethod* method)
{
	{
		// return 60;
		return ((int32_t)60);
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
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem/IDepthApi UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::GetInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IDepthApi_t7CEE33C76911E53220D0242D5E38503D64736BE4 * ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_GetInterface_m77800A3C54989EE2563E744F7F75EA670F8D099D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * L_0 = (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 *)il2cpp_codegen_object_new(Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70_il2cpp_TypeInfo_var);
		Provider__ctor_m1EC138B2F744CA07C952BF845D934285B5BA498A(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem_RegisterDescriptor_mEB1B5F8A8CF06C7E6F00CEE8B8A5D8F2CB86B5E7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRDepthSubsystem_RegisterDescriptor_mEB1B5F8A8CF06C7E6F00CEE8B8A5D8F2CB86B5E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var descriptorParams = new XRDepthSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Depth",
		//     implementationType = typeof(ARKitXRDepthSubsystem),
		//     supportsFeaturePoints = true,
		//     supportsConfidence = false,
		//     supportsUniqueIds = true
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 ));
		(&V_0)->set_id_0(_stringLiteralAAC6E02E34BDC35D11B42F798B00A990953D7586);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		(&V_0)->set_implementationType_1(L_1);
		Cinfo_set_supportsFeaturePoints_mB3633125ACFBA430C6EC66F3FF8E5BFEC72EC360((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsConfidence_mD7DE3DC81C6783C66AAE15A10301DE202520605C((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsUniqueIds_m416FF5EC15306E37DC3436BBB02B4998D64B62C4((Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t1EA8BEDEF7B4AF8E7065D4173F829D5C3C09F913  L_2 = V_0;
		// XRDepthSubsystemDescriptor.RegisterDescriptor(descriptorParams);
		XRDepthSubsystemDescriptor_RegisterDescriptor_m9F40B303586BE45F7AACB8B0AA408D242B34F4EC(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRDepthSubsystem__ctor_m81EFFCC78EA40E790162C25FD9DC64DF4557BD46 (ARKitXRDepthSubsystem_tA5A5BCEDB5F2217FEE76B4751167757193534501 * __this, const RuntimeMethod* method)
{
	{
		XRDepthSubsystem__ctor_m24423F4A0EF54A1EDA98684496E5973E192C097B(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_destroy();
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_destroy_mC45296F25777188452BB10D79B7DDDE76B66A956 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_destroy)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_start();
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_start_m1A1619B512F9D7C576B4B8242034AFA9AD432F39 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_start)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_stop();
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_stop_mAF0980226FA0F11EA03B312DFA3A980D76BD2851 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_stop)();

}
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_depth_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquireChanges_m9F4E61A5D34FC6464A9EF30949018DD2EA721088 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_depth_acquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_releaseChanges(void*);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releaseChanges_m4AC138A3F97251CF7825B44894D9E9572504347A (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_releaseChanges)(___changes0);

}
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_depth_acquirePointCloud(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, void**, int32_t*);
// System.Void* UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_acquirePointCloud(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_depth_acquirePointCloud_m5920A0FB4730D9EBDBC4124645C39FB4F423AE0A (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___positionsPtr1, void** ___identifiersPtr2, int32_t* ___numPoints3, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, void**, int32_t*);

	// Marshaling of parameter '___positionsPtr1' to native representation
	void* ____positionsPtr1_empty = NULL;
	void** ____positionsPtr1_marshaled = &____positionsPtr1_empty;

	// Marshaling of parameter '___identifiersPtr2' to native representation
	void* ____identifiersPtr2_empty = NULL;
	void** ____identifiersPtr2_marshaled = &____identifiersPtr2_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_depth_acquirePointCloud)(___trackableId0, ____positionsPtr1_marshaled, ____identifiersPtr2_marshaled, ___numPoints3);

	// Marshaling of parameter '___positionsPtr1' back from native representation
	void* _____positionsPtr1_marshaled_unmarshaled_dereferenced = NULL;
	_____positionsPtr1_marshaled_unmarshaled_dereferenced = *____positionsPtr1_marshaled;
	*___positionsPtr1 = _____positionsPtr1_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___identifiersPtr2' back from native representation
	void* _____identifiersPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____identifiersPtr2_marshaled_unmarshaled_dereferenced = *____identifiersPtr2_marshaled;
	*___identifiersPtr2 = _____identifiersPtr2_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_depth_releasePointCloud(void*);
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::UnityARKit_depth_releasePointCloud(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_depth_releasePointCloud_mCA0FFA8714996C6F3DEE1EABE5F0427339E78DCD (void* ___pointCloud0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_depth_releasePointCloud)(___pointCloud0);

}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.XRPointCloud,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  Provider_GetChanges_m3D875DA71FE758D7F6D0BBD275DDA6D771475AEE (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultPointCloud0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m3D875DA71FE758D7F6D0BBD275DDA6D771475AEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var context = UnityARKit_depth_acquireChanges(
		//     out addedPtr, out addedLength,
		//     out updatedPtr, out updatedLength,
		//     out removedPtr, out removedLength,
		//     out elementSize);
		void* L_0 = Provider_UnityARKit_depth_acquireChanges_m9F4E61A5D34FC6464A9EF30949018DD2EA721088((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<XRPointCloud>(
		//     addedPtr, addedLength,
		//     updatedPtr, updatedLength,
		//     removedPtr, removedLength,
		//     defaultPointCloud, elementSize,
		//     allocator);
		void* L_1 = V_4;
		int32_t L_2 = V_0;
		void* L_3 = V_5;
		int32_t L_4 = V_1;
		void* L_5 = V_6;
		int32_t L_6 = V_2;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_7 = ___defaultPointCloud0;
		int32_t L_8 = V_3;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_m2F488653BACFCCA6FDBA5301D464E0892523E408((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_m2F488653BACFCCA6FDBA5301D464E0892523E408_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_depth_releaseChanges(context);
		void* L_11 = V_7;
		Provider_UnityARKit_depth_releaseChanges_m4AC138A3F97251CF7825B44894D9E9572504347A((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m2417898BF370FF80CE0190ADE67B1015C9A0C2D1 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_depth_destroy();
		Provider_UnityARKit_depth_destroy_mC45296F25777188452BB10D79B7DDDE76B66A956(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_mB04F1A6B572E76533956D66F2E861E8CDD738791 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_depth_start();
		Provider_UnityARKit_depth_start_m1A1619B512F9D7C576B4B8242034AFA9AD432F39(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_m21FE3E7A5078886E606E91183DDD2C15C7976F00 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_depth_stop();
		Provider_UnityARKit_depth_stop_mAF0980226FA0F11EA03B312DFA3A980D76BD2851(/*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.XRPointCloudData UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::GetPointCloudData(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  Provider_GetPointCloudData_mCCC7D65910FD1989B92913813B111A78CBFA5200 (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetPointCloudData_mCCC7D65910FD1989B92913813B111A78CBFA5200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	int32_t V_2 = 0;
	void* V_3 = NULL;
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  V_4;
	memset((&V_4), 0, sizeof(V_4));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  V_6;
	memset((&V_6), 0, sizeof(V_6));
	TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  V_7;
	memset((&V_7), 0, sizeof(V_7));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_8;
	memset((&V_8), 0, sizeof(V_8));
	XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var pointCloud = UnityARKit_depth_acquirePointCloud(
		//     trackableId,
		//     out positionsPtr, out identifiersPtr, out numPoints);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		void* L_1 = Provider_UnityARKit_depth_acquirePointCloud_m5920A0FB4730D9EBDBC4124645C39FB4F423AE0A(L_0, (void**)(&V_0), (void**)(&V_1), (int32_t*)(&V_2), /*hidden argument*/NULL);
		V_3 = (void*)L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		// var positions = new NativeArray<Vector3>(numPoints, allocator);
		int32_t L_2 = V_2;
		int32_t L_3 = ___allocator1;
		NativeArray_1__ctor_mD24DB0AA5E5667E753A7A2CAAD203DEA6759BECE((NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)(&V_4), L_2, L_3, 1, /*hidden argument*/NativeArray_1__ctor_mD24DB0AA5E5667E753A7A2CAAD203DEA6759BECE_RuntimeMethod_var);
		// var positionsHandle = new TransformPositionsJob
		// {
		//     positionsIn = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Quaternion>(positionsPtr, numPoints, Allocator.None),
		//     positionsOut = positions
		// }.Schedule(numPoints, 32);
		il2cpp_codegen_initobj((&V_7), sizeof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 ));
		void* L_4 = V_0;
		int32_t L_5 = V_2;
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_6 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_mE4C2C2EC1945D2420BF19C3EE86D69D347A878CB((void*)(void*)L_4, L_5, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_mE4C2C2EC1945D2420BF19C3EE86D69D347A878CB_RuntimeMethod_var);
		(&V_7)->set_positionsIn_0(L_6);
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_7 = V_4;
		(&V_7)->set_positionsOut_1(L_7);
		TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  L_8 = V_7;
		int32_t L_9 = V_2;
		il2cpp_codegen_initobj((&V_8), sizeof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 ));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_10 = V_8;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_11 = IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_m0AC73BFD44567B0F3318C8105FC52D0B55DBB7E5(L_8, L_9, ((int32_t)32), L_10, /*hidden argument*/IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_m0AC73BFD44567B0F3318C8105FC52D0B55DBB7E5_RuntimeMethod_var);
		V_5 = L_11;
		// var identifiers = new NativeArray<ulong>(numPoints, allocator);
		int32_t L_12 = V_2;
		int32_t L_13 = ___allocator1;
		NativeArray_1__ctor_m52944EB49F55038931FD33976C394C435071DC86((NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 *)(&V_6), L_12, L_13, 1, /*hidden argument*/NativeArray_1__ctor_m52944EB49F55038931FD33976C394C435071DC86_RuntimeMethod_var);
		// identifiers.CopyFrom(NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<ulong>(identifiersPtr, numPoints, Allocator.None));
		void* L_14 = V_1;
		int32_t L_15 = V_2;
		NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  L_16 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mFE3FD233E5DA2FF6BF2F52B0F55C3D4E7AC4EFF4((void*)(void*)L_14, L_15, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_mFE3FD233E5DA2FF6BF2F52B0F55C3D4E7AC4EFF4_RuntimeMethod_var);
		NativeArray_1_CopyFrom_m646F5399C173A038337C1BC2D48B54CF9A768BE0((NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1 *)(&V_6), L_16, /*hidden argument*/NativeArray_1_CopyFrom_m646F5399C173A038337C1BC2D48B54CF9A768BE0_RuntimeMethod_var);
		// positionsHandle.Complete();
		JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797((JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 *)(&V_5), /*hidden argument*/NULL);
		// return new XRPointCloudData
		// {
		//     positions = positions,
		//     identifiers = identifiers
		// };
		il2cpp_codegen_initobj((&V_9), sizeof(XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA ));
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_17 = V_4;
		XRPointCloudData_set_positions_mC99C23E8AE61A1A3333C1A2F7E0F9DBD6C9F771C_inline((XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA *)(&V_9), L_17, /*hidden argument*/NULL);
		NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  L_18 = V_6;
		XRPointCloudData_set_identifiers_m3CDA83EC60EC5AAB982B3C5E0F9AC9E94D41992B_inline((XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA *)(&V_9), L_18, /*hidden argument*/NULL);
		XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  L_19 = V_9;
		V_9 = L_19;
		IL2CPP_LEAVE(0x94, FINALLY_008d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		// UnityARKit_depth_releasePointCloud(pointCloud);
		void* L_20 = V_3;
		Provider_UnityARKit_depth_releasePointCloud_mCA0FFA8714996C6F3DEE1EABE5F0427339E78DCD((void*)(void*)L_20, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(141)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x94, IL_0094)
	}

IL_0094:
	{
		// }
		XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA  L_21 = V_9;
		return L_21;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m1EC138B2F744CA07C952BF845D934285B5BA498A (Provider_t38A44526F6D5F1EBFDA048E10377C8F3FA82EF70 * __this, const RuntimeMethod* method)
{
	{
		IDepthApi__ctor_m4B44FB5141C363FF42F5703404626927B89C222A(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformPositionsJob_Execute_mB106298BC698C628A7389A30320D14D7A001ED2C (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// positionsOut[index] = new Vector3(
		//      positionsIn[index].x,
		//      positionsIn[index].y,
		//     -positionsIn[index].z);
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * L_0 = __this->get_address_of_positionsOut_1();
		int32_t L_1 = ___index0;
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * L_2 = __this->get_address_of_positionsIn_0();
		int32_t L_3 = ___index0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , ((NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 *)L_2)->___m_Buffer_0, L_3);
		float L_5 = L_4.get_x_0();
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * L_6 = __this->get_address_of_positionsIn_0();
		int32_t L_7 = ___index0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , ((NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 *)L_6)->___m_Buffer_0, L_7);
		float L_9 = L_8.get_y_1();
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * L_10 = __this->get_address_of_positionsIn_0();
		int32_t L_11 = ___index0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , ((NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 *)L_10)->___m_Buffer_0, L_11);
		float L_13 = L_12.get_z_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), L_5, L_9, ((-L_13)), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , ((NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 *)L_0)->___m_Buffer_0, L_1, L_14);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransformPositionsJob_Execute_mB106298BC698C628A7389A30320D14D7A001ED2C_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 * _thisAdjusted = reinterpret_cast<TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *>(__this + _offset);
	TransformPositionsJob_Execute_mB106298BC698C628A7389A30320D14D7A001ED2C(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/IProvider UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::CreateProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IProvider_t40982CEC3244CC0C726CED2C27336E95321F7469 * ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212 (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_CreateProvider_m5EE565D6EB589B5C58B47BE5EFB6429AF2B87212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Provider();
		Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * L_0 = (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A *)il2cpp_codegen_object_new(Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A_il2cpp_TypeInfo_var);
		Provider__ctor_m7CA41720BA2D536A4C58B904A5AC5DE755605E6C(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::RegisterDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem_RegisterDescriptor_m5F27E00E3BBC38D080D558D6B2689AB709ED0123 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARKitXRPlaneSubsystem_RegisterDescriptor_m5F27E00E3BBC38D080D558D6B2689AB709ED0123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var cinfo = new XRPlaneSubsystemDescriptor.Cinfo
		// {
		//     id = "ARKit-Plane",
		//     subsystemImplementationType = typeof(ARKitXRPlaneSubsystem),
		//     supportsHorizontalPlaneDetection = true,
		//     supportsVerticalPlaneDetection = true,
		//     supportsArbitraryPlaneDetection = false,
		//     supportsBoundaryVertices = true
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 ));
		Cinfo_set_id_m9211F9ADC4DCFA1AAB5AA9F662EE6510D6FE01EF_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), _stringLiteralA715B159C2223C334BF184A1E148A6DB8873E79E, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		Cinfo_set_subsystemImplementationType_m74075897385685A6E0753F2EE29CD77A90A22E6B_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), L_1, /*hidden argument*/NULL);
		Cinfo_set_supportsHorizontalPlaneDetection_m6BA5B6FD1C2FDF236AEE15957FD1F1837C394304_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsVerticalPlaneDetection_m386B3816E8C1538AB58318D55D9C64D1113C1B3B_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_set_supportsArbitraryPlaneDetection_m625EDF8616A904C1D2C3B9DB1B52A28A0D3EAF06_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)0, /*hidden argument*/NULL);
		Cinfo_set_supportsBoundaryVertices_mFC986523905272E58728731CEE06B47DD4ECAC3D_inline((Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 *)(&V_0), (bool)1, /*hidden argument*/NULL);
		Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29  L_2 = V_0;
		// XRPlaneSubsystemDescriptor.Create(cinfo);
		XRPlaneSubsystemDescriptor_Create_mE7A8E8E49F7EB078CE4D76C9F0D883634157EC9C(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitXRPlaneSubsystem__ctor_m1A4464449DBD1423997334CA3D76D0ABB4E88B2B (ARKitXRPlaneSubsystem_tBCCDC8EA086FD3B3AD556F50AECA1BBFA9A8272A * __this, const RuntimeMethod* method)
{
	{
		XRPlaneSubsystem__ctor_mC6CCE81B1FE634A34E37D1595EC6189A6D5B28E1(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Destroy_m2A3C831232DD1ED45CFB4EB3292560FEBDDAE92E (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_planes_shutdown();
		Provider_UnityARKit_planes_shutdown_m87991ECD39569A385E3D85700AF4A06970E30E4C(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Start_m97C5ED483AB420884B50BC8974146BF2662A412E (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_planes_start();
		Provider_UnityARKit_planes_start_m82B8C363308B956D71355779F01C6295321DA514(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_Stop_mB0C113558F8046BB4F43369D2A09D2E6F1EFA7D8 (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		// UnityARKit_planes_stop();
		Provider_UnityARKit_planes_stop_mEAF663A81B50E1EF93EC8E75565035687E50B535(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::GetBoundary(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.Vector2>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_GetBoundary_m2A7D4E3FB7985A08B1179A5B60C890843494FFBA (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, int32_t ___allocator1, NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * ___boundary2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetBoundary_m2A7D4E3FB7985A08B1179A5B60C890843494FFBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	void* V_1 = NULL;
	void* V_2 = NULL;
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_3;
	memset((&V_3), 0, sizeof(V_3));
	TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_5;
	memset((&V_5), 0, sizeof(V_5));
	FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// void* plane = UnityARKit_planes_acquireBoundary(
		//     trackableId,
		//     out verticesPtr,
		//     out numPoints);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		void* L_1 = Provider_UnityARKit_planes_acquireBoundary_mB24A38E074DD6AC49490DCF129C6BD4170F05CC6(L_0, (void**)(&V_1), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_2 = (void*)L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		// CreateOrResizeNativeArrayIfNecessary(numPoints, allocator, ref boundary);
		int32_t L_2 = V_0;
		int32_t L_3 = ___allocator1;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_4 = ___boundary2;
		XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFA1DC98687CB79D80124DCF3E9DA117D2764918D(L_2, L_3, (NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_4, /*hidden argument*/XRPlaneSubsystem_CreateOrResizeNativeArrayIfNecessary_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFA1DC98687CB79D80124DCF3E9DA117D2764918D_RuntimeMethod_var);
		// var transformPositionsHandle = new TransformBoundaryPositionsJob
		// {
		//     positionsIn = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<Vector4>(verticesPtr, numPoints, Allocator.None),
		//     positionsOut = boundary
		// }.Schedule(numPoints, 1);
		il2cpp_codegen_initobj((&V_4), sizeof(TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A ));
		void* L_5 = V_1;
		int32_t L_6 = V_0;
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m19DBC84229E022C0774E3EA49389F3B4615D4FEA((void*)(void*)L_5, L_6, 1, /*hidden argument*/NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m19DBC84229E022C0774E3EA49389F3B4615D4FEA_RuntimeMethod_var);
		(&V_4)->set_positionsIn_0(L_7);
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_8 = ___boundary2;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_9 = (*(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_8);
		(&V_4)->set_positionsOut_1(L_9);
		TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A  L_10 = V_4;
		int32_t L_11 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 ));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_12 = V_5;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_13 = IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m1632DD3ED6A9CD398F4B2A48B0687CF4A585751C(L_10, L_11, 1, L_12, /*hidden argument*/IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A_m1632DD3ED6A9CD398F4B2A48B0687CF4A585751C_RuntimeMethod_var);
		V_3 = L_13;
		// new FlipBoundaryWindingJob
		// {
		//     positions = boundary
		// }.Schedule(transformPositionsHandle).Complete();
		il2cpp_codegen_initobj((&V_6), sizeof(FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 ));
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_14 = ___boundary2;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  L_15 = (*(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_14);
		(&V_6)->set_positions_0(L_15);
		FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312  L_16 = V_6;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_17 = V_3;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_18 = IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D(L_16, L_17, /*hidden argument*/IJobExtensions_Schedule_TisFlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312_m5BA6566AB781D503C2D782CCD2964068FA4C1F2D_RuntimeMethod_var);
		V_5 = L_18;
		JobHandle_Complete_m5EFD637001D6A9E0528E60C294FCA5354FD1E797((JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 *)(&V_5), /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x7A, FINALLY_0073);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		// UnityARKit_planes_releaseBoundary(plane);
		void* L_19 = V_2;
		Provider_UnityARKit_planes_releaseBoundary_mB59DE7A5598CFD12C746724D3BFAEB07E0DEE6DF((void*)(void*)L_19, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(115)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
	}

IL_007a:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::GetChanges(UnityEngine.XR.ARSubsystems.BoundedPlane,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  Provider_GetChanges_m1180227923E6905E3CA3F9CEF8BA80C58E7B760E (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultPlane0, int32_t ___allocator1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Provider_GetChanges_m1180227923E6905E3CA3F9CEF8BA80C58E7B760E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	void* V_4 = NULL;
	void* V_5 = NULL;
	void* V_6 = NULL;
	void* V_7 = NULL;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// var context = UnityARKit_planes_acquireChanges(
		//     out addedArrayPtr, out addedLength,
		//     out updatedArrayPtr, out updatedLength,
		//     out removedArrayPtr, out removedLength,
		//     out elementSize);
		void* L_0 = Provider_UnityARKit_planes_acquireChanges_mE72922A68EDC98AA2EAFD46F28272FB3A1E5B0A5((void**)(&V_4), (int32_t*)(&V_0), (void**)(&V_5), (int32_t*)(&V_1), (void**)(&V_6), (int32_t*)(&V_2), (int32_t*)(&V_3), /*hidden argument*/NULL);
		V_7 = (void*)L_0;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		// return new TrackableChanges<BoundedPlane>(
		//     addedArrayPtr, addedLength,
		//     updatedArrayPtr, updatedLength,
		//     removedArrayPtr, removedLength,
		//     defaultPlane, elementSize,
		//     allocator);
		void* L_1 = V_4;
		int32_t L_2 = V_0;
		void* L_3 = V_5;
		int32_t L_4 = V_1;
		void* L_5 = V_6;
		int32_t L_6 = V_2;
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_7 = ___defaultPlane0;
		int32_t L_8 = V_3;
		int32_t L_9 = ___allocator1;
		TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  L_10;
		memset((&L_10), 0, sizeof(L_10));
		TrackableChanges_1__ctor_mEF70E785771C1991D0AA01D000681369598794FF((&L_10), (void*)(void*)L_1, L_2, (void*)(void*)L_3, L_4, (void*)(void*)L_5, L_6, L_7, L_8, L_9, /*hidden argument*/TrackableChanges_1__ctor_mEF70E785771C1991D0AA01D000681369598794FF_RuntimeMethod_var);
		V_8 = L_10;
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		// UnityARKit_planes_releaseChanges(context);
		void* L_11 = V_7;
		Provider_UnityARKit_planes_releaseChanges_m594A8F1CD399305BDC1CCE9D9F425848AA2070F5((void*)(void*)L_11, /*hidden argument*/NULL);
		// }
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE  L_12 = V_8;
		return L_12;
	}
}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::set_planeDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_set_planeDetectionMode_m1406C8A9A2F69D9E9E1B4F396B8D10D0333CD32C (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// UnityARKit_planes_setPlaneDetectionMode(value);
		int32_t L_0 = ___value0;
		Provider_UnityARKit_planes_setPlaneDetectionMode_mD72BD31A29D28A59882B687FF3F97C10103D6799(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_shutdown();
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_shutdown_m87991ECD39569A385E3D85700AF4A06970E30E4C (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_shutdown)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_start();
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_start_m82B8C363308B956D71355779F01C6295321DA514 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_start)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_stop();
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_stop_mEAF663A81B50E1EF93EC8E75565035687E50B535 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_stop)();

}
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_planes_acquireChanges(void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_acquireChanges(System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Void*&,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireChanges_mE72922A68EDC98AA2EAFD46F28272FB3A1E5B0A5 (void** ___addedPtr0, int32_t* ___addedLength1, void** ___updatedPtr2, int32_t* ___updatedLength3, void** ___removedPtr4, int32_t* ___removedLength5, int32_t* ___elementSize6, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void**, int32_t*, void**, int32_t*, void**, int32_t*, int32_t*);

	// Marshaling of parameter '___addedPtr0' to native representation
	void* ____addedPtr0_empty = NULL;
	void** ____addedPtr0_marshaled = &____addedPtr0_empty;

	// Marshaling of parameter '___updatedPtr2' to native representation
	void* ____updatedPtr2_empty = NULL;
	void** ____updatedPtr2_marshaled = &____updatedPtr2_empty;

	// Marshaling of parameter '___removedPtr4' to native representation
	void* ____removedPtr4_empty = NULL;
	void** ____removedPtr4_marshaled = &____removedPtr4_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_planes_acquireChanges)(____addedPtr0_marshaled, ___addedLength1, ____updatedPtr2_marshaled, ___updatedLength3, ____removedPtr4_marshaled, ___removedLength5, ___elementSize6);

	// Marshaling of parameter '___addedPtr0' back from native representation
	void* _____addedPtr0_marshaled_unmarshaled_dereferenced = NULL;
	_____addedPtr0_marshaled_unmarshaled_dereferenced = *____addedPtr0_marshaled;
	*___addedPtr0 = _____addedPtr0_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___updatedPtr2' back from native representation
	void* _____updatedPtr2_marshaled_unmarshaled_dereferenced = NULL;
	_____updatedPtr2_marshaled_unmarshaled_dereferenced = *____updatedPtr2_marshaled;
	*___updatedPtr2 = _____updatedPtr2_marshaled_unmarshaled_dereferenced;

	// Marshaling of parameter '___removedPtr4' back from native representation
	void* _____removedPtr4_marshaled_unmarshaled_dereferenced = NULL;
	_____removedPtr4_marshaled_unmarshaled_dereferenced = *____removedPtr4_marshaled;
	*___removedPtr4 = _____removedPtr4_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_releaseChanges(void*);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_releaseChanges(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseChanges_m594A8F1CD399305BDC1CCE9D9F425848AA2070F5 (void* ___changes0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_releaseChanges)(___changes0);

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_setPlaneDetectionMode(int32_t);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_setPlaneDetectionMode(UnityEngine.XR.ARSubsystems.PlaneDetectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_setPlaneDetectionMode_mD72BD31A29D28A59882B687FF3F97C10103D6799 (int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_setPlaneDetectionMode)(___mode0);

}
IL2CPP_EXTERN_C void* DEFAULT_CALL UnityARKit_planes_acquireBoundary(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, int32_t*);
// System.Void* UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_acquireBoundary(UnityEngine.XR.ARSubsystems.TrackableId,System.Void*&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Provider_UnityARKit_planes_acquireBoundary_mB24A38E074DD6AC49490DCF129C6BD4170F05CC6 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, void** ___verticiesPtr1, int32_t* ___numPoints2, const RuntimeMethod* method)
{
	typedef void* (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , void**, int32_t*);

	// Marshaling of parameter '___verticiesPtr1' to native representation
	void* ____verticiesPtr1_empty = NULL;
	void** ____verticiesPtr1_marshaled = &____verticiesPtr1_empty;

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_planes_acquireBoundary)(___trackableId0, ____verticiesPtr1_marshaled, ___numPoints2);

	// Marshaling of parameter '___verticiesPtr1' back from native representation
	void* _____verticiesPtr1_marshaled_unmarshaled_dereferenced = NULL;
	_____verticiesPtr1_marshaled_unmarshaled_dereferenced = *____verticiesPtr1_marshaled;
	*___verticiesPtr1 = _____verticiesPtr1_marshaled_unmarshaled_dereferenced;

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_planes_releaseBoundary(void*);
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::UnityARKit_planes_releaseBoundary(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_UnityARKit_planes_releaseBoundary_mB59DE7A5598CFD12C746724D3BFAEB07E0DEE6DF (void* ___boundary0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_planes_releaseBoundary)(___boundary0);

}
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider__ctor_m7CA41720BA2D536A4C58B904A5AC5DE755605E6C (Provider_tE828C43D91B7E57F44E04A10F068C304DBAE5A6A * __this, const RuntimeMethod* method)
{
	{
		IProvider__ctor_mB2FE77AE4D29B62B76F877BB9761B2CFFBF5A46A(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/FlipBoundaryWindingJob::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void FlipBoundaryWindingJob_Execute_m50311444035897AB61EE1379BF51C2B8E58FD3D9 (FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var half = positions.Length / 2;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_0 = __this->get_address_of_positions_0();
		int32_t L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_0)->___m_Length_1);
		V_0 = ((int32_t)((int32_t)L_1/(int32_t)2));
		// for (int i = 0; i < half; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_0012:
	{
		// var j = positions.Length - 1 - i;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_2 = __this->get_address_of_positions_0();
		int32_t L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_2)->___m_Length_1);
		int32_t L_4 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (int32_t)L_4));
		// var temp = positions[i];
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_5 = __this->get_address_of_positions_0();
		int32_t L_6 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_5)->___m_Buffer_0, L_6);
		V_3 = L_7;
		// positions[i] = positions[j];
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_8 = __this->get_address_of_positions_0();
		int32_t L_9 = V_1;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_10 = __this->get_address_of_positions_0();
		int32_t L_11 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_10)->___m_Buffer_0, L_11);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_8)->___m_Buffer_0, L_9, L_12);
		// positions[j] = temp;
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_13 = __this->get_address_of_positions_0();
		int32_t L_14 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_13)->___m_Buffer_0, L_14, L_15);
		// for (int i = 0; i < half; ++i)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0058:
	{
		// for (int i = 0; i < half; ++i)
		int32_t L_17 = V_1;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void FlipBoundaryWindingJob_Execute_m50311444035897AB61EE1379BF51C2B8E58FD3D9_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 * _thisAdjusted = reinterpret_cast<FlipBoundaryWindingJob_tAB484E8E0F98EEA68CD01FECAEBD5BFA7C75B312 *>(__this + _offset);
	FlipBoundaryWindingJob_Execute_m50311444035897AB61EE1379BF51C2B8E58FD3D9(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/Provider/TransformBoundaryPositionsJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void TransformBoundaryPositionsJob_Execute_m2C4A63CBC47948E6E9267689C014416A9CE756DF (TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// positionsOut[index] = new Vector2(
		//     // NB: https://developer.apple.com/documentation/arkit/arplanegeometry/2941052-boundaryvertices?language=objc
		//     // "The owning plane anchor's transform matrix defines the coordinate system for these points."
		//     // It doesn't explicitly state the y component is zero, but that must be the case if the
		//     // boundary points are in plane-space. Emperically, it has been true for horizontal and vertical planes.
		//     // This IS explicitly true for the extents (see above) and would follow the same logic.
		//     
		//     // Boundary vertices are in right-handed coordinates and clockwise winding order. To convert
		//     // to left-handed, we flip the Z coordinate, but that also flips the winding, so we have to
		//     // flip the winding back to clockwise by reversing the polygon index (j).
		//      positionsIn[index].x,
		//     -positionsIn[index].z);
		NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * L_0 = __this->get_address_of_positionsOut_1();
		int32_t L_1 = ___index0;
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * L_2 = __this->get_address_of_positionsIn_0();
		int32_t L_3 = ___index0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , ((NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 *)L_2)->___m_Buffer_0, L_3);
		float L_5 = L_4.get_x_1();
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * L_6 = __this->get_address_of_positionsIn_0();
		int32_t L_7 = ___index0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E , ((NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 *)L_6)->___m_Buffer_0, L_7);
		float L_9 = L_8.get_z_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_10), L_5, ((-L_9)), /*hidden argument*/NULL);
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D , ((NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 *)L_0)->___m_Buffer_0, L_1, L_10);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TransformBoundaryPositionsJob_Execute_m2C4A63CBC47948E6E9267689C014416A9CE756DF_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A * _thisAdjusted = reinterpret_cast<TransformBoundaryPositionsJob_t42DE86BF3E6AB9CAC98E5C1772288A28226EC59A *>(__this + _offset);
	TransformBoundaryPositionsJob_Execute_m2C4A63CBC47948E6E9267689C014416A9CE756DF(_thisAdjusted, ___index0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m79FA6173E594AE9F057F0AEB856A15E2ACB43757 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		// Api.UnityARKit_disposeWorldMap(nativeHandle);
		int32_t L_0 = ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		Api_UnityARKit_disposeWorldMap_mDB310DE6F820E095FB2B2D6ECD586FB7617026B9(L_0, /*hidden argument*/NULL);
		// nativeHandle = k_InvalidHandle;
		ARWorldMap_set_nativeHandle_mBE78617799CC9B825C61B179F1E2F35D310740DE_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_Dispose_m79FA6173E594AE9F057F0AEB856A15E2ACB43757_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + _offset);
	ARWorldMap_Dispose_m79FA6173E594AE9F057F0AEB856A15E2ACB43757(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_GetHashCode_m8DDE36BC2ED25796844C59C7A098B07E7A7BA573 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return nativeHandle.GetHashCode();
		int32_t L_0 = ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_GetHashCode_m8DDE36BC2ED25796844C59C7A098B07E7A7BA573_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + _offset);
	return ARWorldMap_GetHashCode_m8DDE36BC2ED25796844C59C7A098B07E7A7BA573(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m8D5C69808F4E3DB20F697D46F85C17A24FDE4688 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMap_Equals_m8D5C69808F4E3DB20F697D46F85C17A24FDE4688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is ARWorldMap))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// return Equals((ARWorldMap)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ARWorldMap_Equals_m50211C5B4349C580EC9E3913814FCE02E72C7D3A((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, ((*(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)UnBox(L_1, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_m8D5C69808F4E3DB20F697D46F85C17A24FDE4688_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + _offset);
	return ARWorldMap_Equals_m8D5C69808F4E3DB20F697D46F85C17A24FDE4688(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::Equals(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_Equals_m50211C5B4349C580EC9E3913814FCE02E72C7D3A (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	{
		// return (nativeHandle == other.nativeHandle);
		int32_t L_0 = ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, /*hidden argument*/NULL);
		int32_t L_1 = ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool ARWorldMap_Equals_m50211C5B4349C580EC9E3913814FCE02E72C7D3A_AdjustorThunk (RuntimeObject * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + _offset);
	return ARWorldMap_Equals_m50211C5B4349C580EC9E3913814FCE02E72C7D3A(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap__ctor_m51BA4D411B69385E02F7A49B7BA1ECB0D2AD2FD7 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	{
		// this.nativeHandle = nativeHandle;
		int32_t L_0 = ___nativeHandle0;
		ARWorldMap_set_nativeHandle_mBE78617799CC9B825C61B179F1E2F35D310740DE_inline((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap__ctor_m51BA4D411B69385E02F7A49B7BA1ECB0D2AD2FD7_AdjustorThunk (RuntimeObject * __this, int32_t ___nativeHandle0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + _offset);
	ARWorldMap__ctor_m51BA4D411B69385E02F7A49B7BA1ECB0D2AD2FD7(_thisAdjusted, ___nativeHandle0, method);
}
// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::get_nativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + _offset);
	return ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::set_nativeHandle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mBE78617799CC9B825C61B179F1E2F35D310740DE (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARWorldMap_set_nativeHandle_mBE78617799CC9B825C61B179F1E2F35D310740DE_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * _thisAdjusted = reinterpret_cast<ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *>(__this + _offset);
	ARWorldMap_set_nativeHandle_mBE78617799CC9B825C61B179F1E2F35D310740DE_inline(_thisAdjusted, ___value0, method);
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
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m4324D3418C82C5B1C955A72DD0E9BA5805286540 (int32_t ___status0, const RuntimeMethod* method)
{
	{
		// switch (status)
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0008;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0008:
	{
		// return true;
		return (bool)1;
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
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_disposeWorldMap(int32_t);
// System.Void UnityEngine.XR.ARKit.Api::UnityARKit_disposeWorldMap(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UnityARKit_disposeWorldMap_mDB310DE6F820E095FB2B2D6ECD586FB7617026B9 (int32_t ___worldMapId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_disposeWorldMap)(___worldMapId0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Construct();
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Construct_m389EF901E5A84DE58098B34F3159AFAA1B83C6E5 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Construct)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Destruct();
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Destruct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Destruct_mA74881A49FA8DB131E3613E414E54215205799C2 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Destruct)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Start();
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Start_mD464FCD2D9A5C50791D7B9D38AAD43D97ACA6227 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Start)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_Stop();
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_Stop_m80FF6427ACD878991E6F3649C32A4C948AD834C9 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_Stop)();

}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled(int32_t);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled_m58CF7C2D525E820536C7143D42E84C7EFC4805A9 (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_SetAutomaticPlacementEnabled)(static_cast<int32_t>(___enabled0));

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *);
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe(UnityEngine.Pose,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.XR.ARSubsystems.XREnvironmentProbe&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe_m7EF9192A23F0E6CBB565BCB89D9D3AC55024F272 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size2, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * ___environmentProbe3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_TryAddEnvironmentProbe)(___pose0, ___scale1, ___size2, ___environmentProbe3);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
// System.Boolean UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe(UnityEngine.XR.ARSubsystems.TrackableId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe_m823D591063A7E9D9F2186D3AE0FB2AA96C03E1D6 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_TryRemoveEnvironmentProbe)(___id0);

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_AcquireChanges(int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*);
// System.IntPtr UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_AcquireChanges(System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&,System.IntPtr&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_AcquireChanges_mF3B06C982FBD823D7B03F3DB870E22846FFA834C (int32_t* ___numAddedEnvironmentProbes0, intptr_t* ___addedEnvironmentProbes1, int32_t* ___numUpdatedEnvironmentProbes2, intptr_t* ___updatedEnvironmentProbes3, int32_t* ___numRemovedEnvironmentProbeIds4, intptr_t* ___removedEnvironmentProbeIds5, int32_t* ___stride6, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*, intptr_t*, int32_t*);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_AcquireChanges)(___numAddedEnvironmentProbes0, ___addedEnvironmentProbes1, ___numUpdatedEnvironmentProbes2, ___updatedEnvironmentProbes3, ___numRemovedEnvironmentProbeIds4, ___removedEnvironmentProbeIds5, ___stride6);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL UnityARKit_EnvironmentProbeProvider_ReleaseChanges(intptr_t);
// System.Void UnityEngine.XR.ARKit.EnvironmentProbeApi::UnityARKit_EnvironmentProbeProvider_ReleaseChanges(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvironmentProbeApi_UnityARKit_EnvironmentProbeProvider_ReleaseChanges_m7357747C89D2E0CC5380F76F4965A3EECE4D1539 (intptr_t ___context0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(UnityARKit_EnvironmentProbeProvider_ReleaseChanges)(___context0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_major()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = __this->get_U3CmajorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_major(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_major_m5DBF19A6CA77CC1DAD43846899A4871548B48A84 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmajorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_major_m5DBF19A6CA77CC1DAD43846899A4871548B48A84_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	OSVersion_set_major_m5DBF19A6CA77CC1DAD43846899A4871548B48A84_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_minor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = __this->get_U3CminorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_minor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_minor_mA54AFDAB79AF99984AD01893AC99866479877CC8 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CminorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_minor_mA54AFDAB79AF99984AD01893AC99866479877CC8_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	OSVersion_set_minor_mA54AFDAB79AF99984AD01893AC99866479877CC8_inline(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = __this->get_U3CpointU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::set_point(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion_set_point_mE257BF56FF20203DC23672D35C1B20D6A1454405 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpointU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion_set_point_mE257BF56FF20203DC23672D35C1B20D6A1454405_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	OSVersion_set_point_mE257BF56FF20203DC23672D35C1B20D6A1454405_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARKit.OSVersion::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (major < 0)
		int32_t L_0 = ___major0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("major", "Version component must be greater than or equal to 0.");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_1, _stringLiteral18C9D4621EF6C3113CE1F960346D7603E88406E8, _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4_RuntimeMethod_var);
	}

IL_0014:
	{
		// if (minor < 0)
		int32_t L_2 = ___minor1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("minor", "Version component must be greater than or equal to 0.");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_3, _stringLiteralFEE63D97CA760412103B668617F8B29605625B7D, _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4_RuntimeMethod_var);
	}

IL_0028:
	{
		// if (point < 0)
		int32_t L_4 = ___point2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("point", "Version component must be greater than or equal to 0.");
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_5 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m300CE4D04A068C209FD858101AC361C1B600B5AE(L_5, _stringLiteral71A7CA855F38BC559D0FCE6727C7E2D8ADA99FF8, _stringLiteralE0133AF8295B1DEF9439EF90A7B40F745D8DEB8B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4_RuntimeMethod_var);
	}

IL_003c:
	{
		// this.major = major;
		int32_t L_6 = ___major0;
		OSVersion_set_major_m5DBF19A6CA77CC1DAD43846899A4871548B48A84_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, L_6, /*hidden argument*/NULL);
		// this.minor = minor;
		int32_t L_7 = ___minor1;
		OSVersion_set_minor_mA54AFDAB79AF99984AD01893AC99866479877CC8_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, L_7, /*hidden argument*/NULL);
		// this.point = point;
		int32_t L_8 = ___point2;
		OSVersion_set_point_mE257BF56FF20203DC23672D35C1B20D6A1454405_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4_AdjustorThunk (RuntimeObject * __this, int32_t ___major0, int32_t ___minor1, int32_t ___point2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	OSVersion__ctor_mEAB035AA8D379D1C6A42A3CFC1B04F24A8AF2AC4(_thisAdjusted, ___major0, ___minor1, ___point2, method);
}
// UnityEngine.XR.ARKit.OSVersion UnityEngine.XR.ARKit.OSVersion::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  OSVersion_Parse_mDF26500DB38764536C24E82F4659B9B1E0B40AC8 (String_t* ___version0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int index = IndexOfFirstDigit(version);
		String_t* L_0 = ___version0;
		int32_t L_1 = OSVersion_IndexOfFirstDigit_m3527F158639800E2A9884F8D83A5F394B3FED5B4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return new OSVersion
		// {
		//     major = ParseNextComponent(version, ref index),
		//     minor = ParseNextComponent(version, ref index),
		//     point = ParseNextComponent(version, ref index)
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA ));
		String_t* L_2 = ___version0;
		int32_t L_3 = OSVersion_ParseNextComponent_mBDCC4A63E1B916D9B1136864639DA42C8762FC82(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_major_m5DBF19A6CA77CC1DAD43846899A4871548B48A84_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&V_1), L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___version0;
		int32_t L_5 = OSVersion_ParseNextComponent_mBDCC4A63E1B916D9B1136864639DA42C8762FC82(L_4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_minor_mA54AFDAB79AF99984AD01893AC99866479877CC8_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&V_1), L_5, /*hidden argument*/NULL);
		String_t* L_6 = ___version0;
		int32_t L_7 = OSVersion_ParseNextComponent_mBDCC4A63E1B916D9B1136864639DA42C8762FC82(L_6, (int32_t*)(&V_0), /*hidden argument*/NULL);
		OSVersion_set_point_mE257BF56FF20203DC23672D35C1B20D6A1454405_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&V_1), L_7, /*hidden argument*/NULL);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_8 = V_1;
		return L_8;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::IndexOfFirstDigit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_IndexOfFirstDigit_m3527F158639800E2A9884F8D83A5F394B3FED5B4 (String_t* ___version0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int index = 0; index < version.Length; ++index)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// var digit = (int)version[index] - 48;
		String_t* L_0 = ___version0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
		// if (digit >= 0 && digit <= 9)
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9))))
		{
			goto IL_001a;
		}
	}
	{
		// return index;
		int32_t L_5 = V_0;
		return L_5;
	}

IL_001a:
	{
		// for (int index = 0; index < version.Length; ++index)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// for (int index = 0; index < version.Length; ++index)
		int32_t L_7 = V_0;
		String_t* L_8 = ___version0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// return version.Length;
		String_t* L_10 = ___version0;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::ParseNextComponent(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_ParseNextComponent_mBDCC4A63E1B916D9B1136864639DA42C8762FC82 (String_t* ___version0, int32_t* ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int number = 0;
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		// var digit = (int)version[index] - 48;
		String_t* L_0 = ___version0;
		int32_t* L_1 = ___index1;
		int32_t L_2 = *((int32_t*)L_1);
		NullCheck(L_0);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_0, L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)48)));
		// if (digit == 0 && number == 0)
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}

IL_0016:
	{
		// else if (digit >= 0 && digit <= 9)
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)9))))
		{
			goto IL_0028;
		}
	}
	{
		// number = number * 10 + digit;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)10))), (int32_t)L_9));
		// }
		goto IL_003f;
	}

IL_0028:
	{
		// else if (digit == periodCode)
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0035;
		}
	}
	{
		// ++index;
		int32_t* L_11 = ___index1;
		int32_t* L_12 = ___index1;
		int32_t L_13 = *((int32_t*)L_12);
		*((int32_t*)L_11) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		// break;
		goto IL_004f;
	}

IL_0035:
	{
		// index = version.Length;
		int32_t* L_14 = ___index1;
		String_t* L_15 = ___version0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_15, /*hidden argument*/NULL);
		*((int32_t*)L_14) = (int32_t)L_16;
		// break;
		goto IL_004f;
	}

IL_003f:
	{
		// for (; index < version.Length; ++index)
		int32_t* L_17 = ___index1;
		int32_t* L_18 = ___index1;
		int32_t L_19 = *((int32_t*)L_18);
		*((int32_t*)L_17) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0045:
	{
		// for (; index < version.Length; ++index)
		int32_t* L_20 = ___index1;
		int32_t L_21 = *((int32_t*)L_20);
		String_t* L_22 = ___version0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0004;
		}
	}

IL_004f:
	{
		// return number;
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_GetHashCode_mF4F18C6F777E716D07DEF052A90CC64C73C3D01E (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// var hash = major.GetHashCode();
		int32_t L_0 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + minor.GetHashCode();
		int32_t L_2 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		// hash = hash * 486187739 + point.GetHashCode();
		int32_t L_4 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		// return hash;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5));
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_GetHashCode_mF4F18C6F777E716D07DEF052A90CC64C73C3D01E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_GetHashCode_mF4F18C6F777E716D07DEF052A90CC64C73C3D01E(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARKit.OSVersion::CompareTo(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OSVersion_CompareTo_m5102D1398077353643B4784512A599CDCB5590A1 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___version0, const RuntimeMethod* method)
{
	{
		// if (this < version)
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_0 = (*(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_1 = ___version0;
		bool L_2 = OSVersion_op_LessThan_m75C71874EFC4F3233EC421034E6599CADB16504F(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0010:
	{
		// if (this > version)
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_3 = (*(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_4 = ___version0;
		bool L_5 = OSVersion_op_GreaterThan_mD04D07551AE4D4C9D08B63884DF80B255047F2B1(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0020:
	{
		// return 0;
		return 0;
	}
}
IL2CPP_EXTERN_C  int32_t OSVersion_CompareTo_m5102D1398077353643B4784512A599CDCB5590A1_AdjustorThunk (RuntimeObject * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___version0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_CompareTo_m5102D1398077353643B4784512A599CDCB5590A1(_thisAdjusted, ___version0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_mA70B1E35BBCD9C206367BD8C66F3E0F2DAF51BF3 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion_Equals_mA70B1E35BBCD9C206367BD8C66F3E0F2DAF51BF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null || !(obj is OSVersion))
		RuntimeObject * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// return Equals((OSVersion)obj);
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = OSVersion_Equals_m99FCBF7670DF0DCC1D6968EC51EE6EF55611471E((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, ((*(OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)UnBox(L_2, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool OSVersion_Equals_mA70B1E35BBCD9C206367BD8C66F3E0F2DAF51BF3_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_Equals_mA70B1E35BBCD9C206367BD8C66F3E0F2DAF51BF3(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::Equals(UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_Equals_m99FCBF7670DF0DCC1D6968EC51EE6EF55611471E (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     (major == other.major) &&
		//     (minor == other.minor) &&
		//     (point == other.point);
		int32_t L_0 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_4 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool OSVersion_Equals_m99FCBF7670DF0DCC1D6968EC51EE6EF55611471E_AdjustorThunk (RuntimeObject * __this, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_Equals_m99FCBF7670DF0DCC1D6968EC51EE6EF55611471E(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_LessThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_LessThan_m75C71874EFC4F3233EC421034E6599CADB16504F (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		// if (lhs.major < rhs.major)
		int32_t L_0 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0012:
	{
		// if (lhs.major > rhs.major)
		int32_t L_2 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (lhs.minor < rhs.minor)
		int32_t L_4 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (lhs.minor > rhs.minor)
		int32_t L_6 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_7 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0048;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0048:
	{
		// return lhs.point < rhs.point;
		int32_t L_8 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_9 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThan(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThan_mD04D07551AE4D4C9D08B63884DF80B255047F2B1 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		// if (lhs.major > rhs.major)
		int32_t L_0 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_1 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0012:
	{
		// if (lhs.major < rhs.major)
		int32_t L_2 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_3 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (lhs.minor > rhs.minor)
		int32_t L_4 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_5 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (lhs.minor < rhs.minor)
		int32_t L_6 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_7 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0048;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0048:
	{
		// return lhs.point > rhs.point;
		int32_t L_8 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), /*hidden argument*/NULL);
		int32_t L_9 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___rhs1), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) > ((int32_t)L_9))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_Equality(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_Equality_mC51EEC8017A1A495CD6DB0E046FA1BCF4D656DB4 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		// return lhs.Equals(rhs);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_0 = ___rhs1;
		bool L_1 = OSVersion_Equals_m99FCBF7670DF0DCC1D6968EC51EE6EF55611471E((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.OSVersion::op_GreaterThanOrEqual(UnityEngine.XR.ARKit.OSVersion,UnityEngine.XR.ARKit.OSVersion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OSVersion_op_GreaterThanOrEqual_m5DC241E62216C8897A29CA8BE7F1352528B9F420 (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___lhs0, OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  ___rhs1, const RuntimeMethod* method)
{
	{
		// return (lhs > rhs) || (lhs == rhs);
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_0 = ___lhs0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_1 = ___rhs1;
		bool L_2 = OSVersion_op_GreaterThan_mD04D07551AE4D4C9D08B63884DF80B255047F2B1(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_3 = ___lhs0;
		OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA  L_4 = ___rhs1;
		bool L_5 = OSVersion_op_Equality_mC51EEC8017A1A495CD6DB0E046FA1BCF4D656DB4(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.String UnityEngine.XR.ARKit.OSVersion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OSVersion_ToString_mC2FB1F8F61AAE40B141FE45C3F3B9408701EA00A (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OSVersion_ToString_mC2FB1F8F61AAE40B141FE45C3F3B9408701EA00A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{major}.{minor}.{point}";
		int32_t L_0 = OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline((OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *)__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral8DDBB76624EE55213F2601C8BA2B94F9F24E23EE, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* OSVersion_ToString_mC2FB1F8F61AAE40B141FE45C3F3B9408701EA00A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * _thisAdjusted = reinterpret_cast<OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA *>(__this + _offset);
	return OSVersion_ToString_mC2FB1F8F61AAE40B141FE45C3F3B9408701EA00A(_thisAdjusted, method);
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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_id_mEA5E0B21781D8AAF0FB30E9E506AA4D7C392E2A8_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_implementationType_mAEA2151AEC9F31C5726795200B63D4BA53F2721E_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CimplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageBrightness_m0851BD298973A23FCE8D87B5B8AB389562D255FA_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageBrightness { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageBrightnessU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsAverageColorTemperature_m427080856A860B42B3FC21139B990F19BE0AD87E_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAverageColorTemperature { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAverageColorTemperatureU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsColorCorrection_mFC3AED27787017D69ABA73FF60D1E20DDF5E674F_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsColorCorrection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsColorCorrectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsDisplayMatrix_mB5BF43F49F4D64AA3DFE174574D386D99A96F92F_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsDisplayMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsDisplayMatrixU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsProjectionMatrix_m4CC64D264746A394D8186CCDD583CFCC637C8E66_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsProjectionMatrix { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsProjectionMatrixU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsTimestamp_m901DA9F41D9CEE062F7A054738E5382E2A825F28_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTimestamp { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTimestampU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraConfigurations_mCCA48E46B902EEABAA94FB7A2A668097E06D4906_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraConfigurations { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraConfigurationsU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRCameraSubsystemCinfo_set_supportsCameraImage_m9B592584A2C27917CC80AB290F0A2600FD275951_inline (XRCameraSubsystemCinfo_t2DEC704C4D0CB1EC17BB8521B3358EE08C878BCC * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsCameraImage { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsCameraImageU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_id_m65F71E8D97413215944F75C52F6F9F2088644E24_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_implementationType_m5CDE58834E022AEB4B9E6FD826D2A6140D3D1B3E_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type implementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CimplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsManualPlacement_mF3AA42AAE10CC81DF831404F415BD34694B08C59_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsManualPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsManualPlacementU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfManual_m200BBBC11A1580CAA151ED498A8B24E27BAB646F_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfManual { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfManualU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsAutomaticPlacement_mBC81F9BC67A3FF73D0EB679BEDDFE1D3DA918582_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsAutomaticPlacement { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsAutomaticPlacementU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsRemovalOfAutomatic_mC43F8E59BF70D73AC0EB8EE5A9B2D6F92966B3B3_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsRemovalOfAutomatic { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsRemovalOfAutomaticU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XREnvironmentProbeSubsystemCinfo_set_supportsEnvironmentTexture_m9C630C891056E5E1187AA2433DDC8D7E0F3FF662_inline (XREnvironmentProbeSubsystemCinfo_t71B923989253D62CAEBD5D31113D6B6625A0AB5A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsEnvironmentTexture { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsEnvironmentTextureU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mFA87FA52172846CBD4587F2E207D65A097B842E6_inline (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_mBBC866C6F4207A69F7351857F66D683E0EAF8FAF_inline (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsMovingImages_m2898F758BCCE6DDC222E828D855CEFC89C58EF2C_inline (Cinfo_t03E877C8C320158850BA411BD60A31566CBC2106 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMovingImages { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMovingImagesU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_mDBC061879B3E989FF064E7E31CFC85ACD142199B_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9670297F5DC91608B606E2B8A7E4C2643236D65A_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsViewportBasedRaycast_m42B64A1095C52F16217EBF1D5ABFD7353DA35233_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsViewportBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsViewportBasedRaycastU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsWorldBasedRaycast_mBF04DD8B3208A7D9C98419FEDC8CB012F7253DF5_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsWorldBasedRaycast { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsWorldBasedRaycastU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportedTrackableTypes_m13138A57079E692472B33A4B216D5568852BE652_inline (Cinfo_t4760A1C9784E5D057E5B5D48B3C4C0B905471704 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackableType supportedTrackableTypes { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CsupportedTrackableTypesU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m022C41DDBCD030680C14FA11F178C96FCE67D687_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m713DB30ECC2AFC3D45F60BE6910713C6009A99E0_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_m1A6C2F5CE68A65944F1631E0E32FFC6BC04ECB03_inline (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsTrackableAttachments { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m8E2A1220FE77B46B870237AE788DFEE34F6C29CB_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9591600428F1364957BEDD8C12C1B734BBA2BF85_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_m4295AB46C19802B003C61D7EB79DC8D02CF14B80_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsInstall { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_mE43FF83622414EA44D02418EC98B1DA8DDFFDBD6_inline (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsMatchFrameRate { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRPointCloudData_set_positions_mC99C23E8AE61A1A3333C1A2F7E0F9DBD6C9F771C_inline (XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA * __this, NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Positions = value; }
		NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  L_0 = ___value0;
		__this->set_m_Positions_0(L_0);
		// set { m_Positions = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void XRPointCloudData_set_identifiers_m3CDA83EC60EC5AAB982B3C5E0F9AC9E94D41992B_inline (XRPointCloudData_t790D531E8C51EE83A08A457B436F969CBF9439BA * __this, NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_Identifiers = value; }
		NativeArray_1_t384B1FEDD39237A51AD33B1F6F0413F84DD341A1  L_0 = ___value0;
		__this->set_m_Identifiers_2(L_0);
		// set { m_Identifiers = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_id_m9211F9ADC4DCFA1AAB5AA9F662EE6510D6FE01EF_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string id { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m74075897385685A6E0753F2EE29CD77A90A22E6B_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type subsystemImplementationType { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsHorizontalPlaneDetection_m6BA5B6FD1C2FDF236AEE15957FD1F1837C394304_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsHorizontalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsHorizontalPlaneDetectionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsVerticalPlaneDetection_m386B3816E8C1538AB58318D55D9C64D1113C1B3B_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsVerticalPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsVerticalPlaneDetectionU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsArbitraryPlaneDetection_m625EDF8616A904C1D2C3B9DB1B52A28A0D3EAF06_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsArbitraryPlaneDetection { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsArbitraryPlaneDetectionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Cinfo_set_supportsBoundaryVertices_mFC986523905272E58728731CEE06B47DD4ECAC3D_inline (Cinfo_t3A7A0974E08C86861E17F80513931B857013DF29 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool supportsBoundaryVertices { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CsupportsBoundaryVerticesU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ARWorldMap_get_nativeHandle_m529E0BB03669BBD9370B50C8F6ED90BA05213F22_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = __this->get_U3CnativeHandleU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARWorldMap_set_nativeHandle_mBE78617799CC9B825C61B179F1E2F35D310740DE_inline (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal int nativeHandle { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CnativeHandleU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t OSVersion_get_major_m78423586F3DAF62CF3FACA972DF71A0794FF42E6_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = __this->get_U3CmajorU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void OSVersion_set_major_m5DBF19A6CA77CC1DAD43846899A4871548B48A84_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int major { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CmajorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t OSVersion_get_minor_mECC11198E3287B306A2A5B9C2DEAA7113263D7B5_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = __this->get_U3CminorU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void OSVersion_set_minor_mA54AFDAB79AF99984AD01893AC99866479877CC8_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int minor { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CminorU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t OSVersion_get_point_m15A8472AC862312B14F0FE398C81D538BBF1EF74_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = __this->get_U3CpointU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void OSVersion_set_point_mE257BF56FF20203DC23672D35C1B20D6A1454405_inline (OSVersion_t4FEA9BCD71B65A146585E5F00B36F839EEF89FEA * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int point { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CpointU3Ek__BackingField_2(L_0);
		return;
	}
}