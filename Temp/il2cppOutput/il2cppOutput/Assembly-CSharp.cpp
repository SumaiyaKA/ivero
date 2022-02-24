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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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

// ButtonManager
struct ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7;
// DataHandler
struct DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5;
// InputManager
struct InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE;
// Item
struct Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E;
// Item[]
struct ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD;
// Mono.Data.Sqlite.SQLiteBase
struct SQLiteBase_t59AAE9C52C98137708374575A69B76DB362B4699;
// Mono.Data.Sqlite.SQLiteCommitCallback
struct SQLiteCommitCallback_t4A2F244F9FCADC58BAEFCDB1F9A4AEA018294B4F;
// Mono.Data.Sqlite.SQLiteCommitHandler
struct SQLiteCommitHandler_t52225EF37741FF54E821E0BB250CF29BC4C4D97E;
// Mono.Data.Sqlite.SQLiteEnlistment
struct SQLiteEnlistment_t67F908A6773D493F8205DF68972AABB98085B494;
// Mono.Data.Sqlite.SQLiteRollbackCallback
struct SQLiteRollbackCallback_t0879E30A50B184087AFBA2EC348DAF30A4646D8A;
// Mono.Data.Sqlite.SQLiteUpdateCallback
struct SQLiteUpdateCallback_t3252735A38A0D75E6E9CB742FBFB194CD942712F;
// Mono.Data.Sqlite.SQLiteUpdateEventHandler
struct SQLiteUpdateEventHandler_t36E8A27FD858F0A7228A1E41FB87DD693D3C4AC8;
// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365;
// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2;
// Mono.Data.Sqlite.SqliteParameterCollection
struct SqliteParameterCollection_tD518FC7690200D12DA3B779429941F988301B523;
// Mono.Data.Sqlite.SqliteTransaction
struct SqliteTransaction_t588D1AEC987A56478BF3B4254D6F83A4740F1560;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB;
// System.Collections.Generic.IEnumerator`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct IEnumerator_1_t1346A79FE5C47E4672969BF2C01B24DEF2E36C12;
// System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>
struct IList_1_tD99A11917EC96986E482C2D3FDF887A7D9A90DE7;
// System.Collections.Generic.List`1<Item>
struct List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290;
// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement>
struct List_1_t061A89EAEE080F1782627C91C598BD546671C91A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_tE8114FCBFA19D18AAF2202B4853638D0D2FEEB24;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t6E2F647783FBCA5123C6D7868CA8A1B87E57EFE7;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t42F0D49354BAD8E9AD7DD15EE52380C131BF304E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_tFE76B8D7F14802FE83B0F3A6F70099326B68A765;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t3DF003B6A426D0A9EF7605862E289F2A339BF9A2;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4;
// System.ComponentModel.ISite
struct ISite_t6804B48BC23ABB5F4141903F878589BCEF6097A2;
// System.Data.StateChangeEventHandler
struct StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Item>>
struct Func_2_t014D5EB9874D32CF030837EF1ED03BA612E8DA14;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>>
struct Func_2_t8D77D16AB533E693749D76AA9077E7C1739439B2;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t77A117E1B74454F4357E34559B76C9B0FD30123B;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t90F72284AE26630ADA7BF961DE9E7DC462273C25;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Item>
struct TaskFactory_1_t30041671AFB8EB95F4859963E8A9B4B2D14AFB5D;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct TaskFactory_1_t4AC33CDF99F0DB99DA1A14DF4A73F61F90161030;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Item>
struct Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;
// UIContentFitter
struct UIContentFitter_t85D27C896B0AD12D3735CB5BDCD81D7A085EB67E;
// UIManager
struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<Item>
struct AsyncOperationBase_1_t9FB2EB08B1DF303C61FFE0A6CCCF3952DEA100A5;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct AsyncOperationBase_1_tC8FC2A61A77A69AF7EA439005A7F6CFBADB2E918;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t871FD4E305BA7BBB480F9360D985884672783E66;
// UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation
struct IResourceLocation_t119645264522823BADE61F4626A3351E3A5BBEF3;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37;
// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RawImage
struct RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20;
// dbScript
struct dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F;

IL2CPP_EXTERN_C RuntimeClass* Addressables_t8AD39E84886280F198451740C05CA7E8AF2C977D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tB72CFA76D899A64C9F9ED8117F0715F3A7280FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1346A79FE5C47E4672969BF2C01B24DEF2E36C12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral098BADDC0B49A4B96D92F4D0FF510BBEBDA88216;
IL2CPP_EXTERN_C String_t* _stringLiteral45B41A7F9BAE805CD31B4A158438AC12A794A265;
IL2CPP_EXTERN_C const RuntimeMethod* Addressables_LoadAssetAsync_TisItem_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E_mA7E5C6D5DF6FF6D24FF5F9A696B029DC2667884C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Task_m59C8C7FAFFF97EAA6DB5AFDC6E9846876913C5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Task_m86FE3E6B42B408F8DE08F8812BA82FD85BC71687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mE2893C559E68510A9D9200EF13DA0B56F93FC660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mF8EC761CFE2134BC14ADA3002C7B08031D6B4190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m77A26525E947FA203B22D7E5A9C03CCC4CA13AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_mD77FF4B17EA68FA19AC78C557B38E129C65151BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_m42D869E329879534E1C2B40AEAF92F6A1E10EC3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonManager_SelectObject_mB4937B8D110013000EA8C719F89A5AFBA0A5384A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m72CF57F3AD96E6CADECF5DDE79D3592A4D5E09A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_m6AA66514BB63EC8F4B5D7841E531B4D5DEA409F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37_m51EAB7C9ADECBFF0B60B0B66A48D089E90E340A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA8DAE58C2690B7583DD41332E2391D1E2A11C42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBEE0C1F24839D6F17171C96500027E9ECF4DADD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F4608AD1CEDECCECCEE4114DE182F6C3DA77F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m63946011928B230BA31E23DCFF48B6E36A505001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m895DC9AD128A1929934DB911B277ED64A97FFEEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m95BD367CEAEF23029FA353A22855F1CDFA017AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6BAAD16F92F5550F5877A1E53F3E6036B36981A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m323B3FDC2653FA11AADAED7F49CBEB44C977D815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m689B95EC04960C507E25F5842758B49FE45541EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC9860FBAA44709A84A1E2A2C9E6E8294C963098D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD0D3353E379B18064F3FB3B70FF9E2BBB000A4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5786F1D66D61A9D68EF25DD7F728B8A51BC11B07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m609F549E39B918892C6EFCF1B91E21481650783C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_m3C52D4C4BA8A4CF1D5BCD43B47BD342AFDFEEE98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisUIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_mD4144990CB4057AE2D0E32294B134FAB89601DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7_m4E924F4E103556BF0BEABEBFEFB6C65E62F6B51E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m327D3C55971A0F7A1945AC7B4F4839BC055CE8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m36E7D667B37A4C6FEFA23ECD4FDB4DFEB18A1886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m6F6D2004B0A6DE2338DD7B1B406D79DD9779097C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m886735CC91BDB48D00571B327E575ABC125EEECB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m5C1166C5CE2BB786D6A1C54FF317D008A03D4773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mE59103FD7C3C5E4B2FBBBA59123A44D8CF4AEB95_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ButtonManager_Start_mD2AC593C875290FECA8ABABD812F179587BD48BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ButtonManager_Update_mC6EB7DA6FC255BE0DF3F203614C74CA067C43D8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataHandler_CreateButtons_mFEFA9C61FFF2CF856CC52305144E90CFD0FE08AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataHandler_Get_mE102D96DC525D193656EBFD287665BA6BE80EE53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataHandler_SetFurniture_m69A38453986BB69709E42C2F1DBB393D5882D62E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataHandler_Start_m8FC5E573BA1ED49194D22093AB5A9DD87B8266C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DataHandler_get_Instance_mB30D79DD71C99972061EB4F3484F4DF1B07A2153_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputManager_CrosshairCalculation_mAC43D5BD9BE9F4D31A8B986242103BB246CF2BD7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputManager_IsPointerOverUI_mD63C2429F8BD99C898A5F0760D6D3196D8127C94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputManager_Update_m813F65B6A0D8A18ACFAFEFF8CB3F7E1FE116BCA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InputManager__ctor_m92E656DB5CA317F9006F3CD8CE443B7D15EE2A47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetU3Ed__13_MoveNext_m6AE9831F8D34A7EFE5BBA6270A07CA376FF3E2F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__9_MoveNext_m0C2313A38BCB645A301A3517C62365AD41E30E6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIContentFitter_Fit_m102BC02691FDC2109FFAD35C3080766EDD3A1800_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_OnEntered_m3DF9AE2EE416E3BA3CC6C9BB24AD3513F6967111_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_Start_mA404E1D4B4AA55F22307F16D7D7842CE7580DD0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_get_Instance_mF35995E42E3F6A065E6AA83D15551B71F2867041_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t dbScript_CreateDB_mD42025CE79BB727956D0C0BDF6C7707ECA50573A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t dbScript__ctor_mD52EED314FF4DC2660A37429C98C436C2EBC8A43_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Item>
struct List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290, ____items_1)); }
	inline ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD* get__items_1() const { return ____items_1; }
	inline ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290_StaticFields, ____emptyArray_5)); }
	inline ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemU5BU5D_t9B2C2BF53C23D966ADDC0D8FC7F3C6AC27993AAD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52, ____items_1)); }
	inline RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65* get__items_1() const { return ____items_1; }
	inline RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52_StaticFields, ____emptyArray_5)); }
	inline RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaycastResultU5BU5D_t9A7AEDFED07FDC6A5F4E1F1C064699FCC9745D65* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6, ____items_1)); }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* get__items_1() const { return ____items_1; }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6_StaticFields, ____emptyArray_5)); }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
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


// System.Collections.Generic.List`1/Enumerator<Item>
struct Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8, ___list_0)); }
	inline List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * get_list_0() const { return ___list_0; }
	inline List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8, ___current_3)); }
	inline Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * get_current_3() const { return ___current_3; }
	inline Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.ComponentModel.Component
struct Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473, ___events_3)); }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_tFE9EF79E85419EBB2C206CF475E29A9960699BE4 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
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


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Item>
struct TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186, ___m_task_0)); }
	inline Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D, ___m_task_0)); }
	inline Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.LayerMask
struct LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
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


// UnityEngine.Rect
struct Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<Item>
struct AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t9FB2EB08B1DF303C61FFE0A6CCCF3952DEA100A5 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_t9FB2EB08B1DF303C61FFE0A6CCCF3952DEA100A5 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_t9FB2EB08B1DF303C61FFE0A6CCCF3952DEA100A5 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_t9FB2EB08B1DF303C61FFE0A6CCCF3952DEA100A5 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tC8FC2A61A77A69AF7EA439005A7F6CFBADB2E918 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_tC8FC2A61A77A69AF7EA439005A7F6CFBADB2E918 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_tC8FC2A61A77A69AF7EA439005A7F6CFBADB2E918 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_tC8FC2A61A77A69AF7EA439005A7F6CFBADB2E918 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_tA3D61DC158CEEADB7D17CA260C0AF36D84E79632 
{
public:
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t871FD4E305BA7BBB480F9360D985884672783E66 * ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;

public:
	inline static int32_t get_offset_of_m_InternalOp_0() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tA3D61DC158CEEADB7D17CA260C0AF36D84E79632, ___m_InternalOp_0)); }
	inline AsyncOperationBase_1_t871FD4E305BA7BBB480F9360D985884672783E66 * get_m_InternalOp_0() const { return ___m_InternalOp_0; }
	inline AsyncOperationBase_1_t871FD4E305BA7BBB480F9360D985884672783E66 ** get_address_of_m_InternalOp_0() { return &___m_InternalOp_0; }
	inline void set_m_InternalOp_0(AsyncOperationBase_1_t871FD4E305BA7BBB480F9360D985884672783E66 * value)
	{
		___m_InternalOp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalOp_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tA3D61DC158CEEADB7D17CA260C0AF36D84E79632, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_LocationName_2() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tA3D61DC158CEEADB7D17CA260C0AF36D84E79632, ___m_LocationName_2)); }
	inline String_t* get_m_LocationName_2() const { return ___m_LocationName_2; }
	inline String_t** get_address_of_m_LocationName_2() { return &___m_LocationName_2; }
	inline void set_m_LocationName_2(String_t* value)
	{
		___m_LocationName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LocationName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return static_cast<int32_t>(offsetof(AsyncOperationHandle_1_tA3D61DC158CEEADB7D17CA260C0AF36D84E79632, ___m_UnloadSceneOpExcludeReleaseCallback_3)); }
	inline bool get_m_UnloadSceneOpExcludeReleaseCallback_3() const { return ___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline bool* get_address_of_m_UnloadSceneOpExcludeReleaseCallback_3() { return &___m_UnloadSceneOpExcludeReleaseCallback_3; }
	inline void set_m_UnloadSceneOpExcludeReleaseCallback_3(bool value)
	{
		___m_UnloadSceneOpExcludeReleaseCallback_3 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
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


// System.Data.Common.DbCommand
struct DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:

public:
};


// System.Data.Common.DbConnection
struct DbConnection_tBCDED104D8D1B6EB4ED87AB6845D3ACF18C9807E  : public Component_t7AEFE153F6778CF52E1981BC3E811A9604B29473
{
public:

public:
};


// System.Data.ConnectionState
struct ConnectionState_tAA8341EF50FDF898227D4EE5243C7841AC0AD0C9 
{
public:
	// System.Int32 System.Data.ConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_tAA8341EF50FDF898227D4EE5243C7841AC0AD0C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.IsolationLevel
struct IsolationLevel_t0E1D740CF5F0A7D8142C442923C3613E02A7DC30 
{
public:
	// System.Int32 System.Data.IsolationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IsolationLevel_t0E1D740CF5F0A7D8142C442923C3613E02A7DC30, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.UpdateRowSource
struct UpdateRowSource_t73E9A51EC13A3C2409EF35D94C972313D4F7DB54 
{
public:
	// System.Int32 System.Data.UpdateRowSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateRowSource_t73E9A51EC13A3C2409EF35D94C972313D4F7DB54, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
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


// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
	int32_t ___displayIndex_10;
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


// UnityEngine.Ray
struct Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.TextAnchor
struct TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t7E9CEC3DD059E32F847242513BD6CE30866AB2A6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_tBBD83025576FC017B10484014B5C396613A02B8E 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_tBBD83025576FC017B10484014B5C396613A02B8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.GraphicRaycaster/BlockingObjects
struct BlockingObjects_tFC334A7FDC8003C26A58D8FF24EDD045C49F9E23 
{
public:
	// System.Int32 UnityEngine.UI.GraphicRaycaster/BlockingObjects::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockingObjects_tFC334A7FDC8003C26A58D8FF24EDD045C49F9E23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
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


// DataHandler/<Start>d__9
struct U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 
{
public:
	// System.Int32 DataHandler/<Start>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder DataHandler/<Start>d__9::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// DataHandler DataHandler/<Start>d__9::<>4__this
	DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter DataHandler/<Start>d__9::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77, ___U3CU3E4__this_2)); }
	inline DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// Mono.Data.Sqlite.SqliteCommand
struct SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365  : public DbCommand_t818F90E565B3D0FB3D6C653214D5C8E4211A5A55
{
public:
	// System.String Mono.Data.Sqlite.SqliteCommand::_commandText
	String_t* ____commandText_4;
	// Mono.Data.Sqlite.SqliteConnection Mono.Data.Sqlite.SqliteCommand::_cnn
	SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * ____cnn_5;
	// System.Int64 Mono.Data.Sqlite.SqliteCommand::_version
	int64_t ____version_6;
	// System.WeakReference Mono.Data.Sqlite.SqliteCommand::_activeReader
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ____activeReader_7;
	// System.Int32 Mono.Data.Sqlite.SqliteCommand::_commandTimeout
	int32_t ____commandTimeout_8;
	// System.Boolean Mono.Data.Sqlite.SqliteCommand::_designTimeVisible
	bool ____designTimeVisible_9;
	// System.Data.UpdateRowSource Mono.Data.Sqlite.SqliteCommand::_updateRowSource
	int32_t ____updateRowSource_10;
	// Mono.Data.Sqlite.SqliteParameterCollection Mono.Data.Sqlite.SqliteCommand::_parameterCollection
	SqliteParameterCollection_tD518FC7690200D12DA3B779429941F988301B523 * ____parameterCollection_11;
	// System.Collections.Generic.List`1<Mono.Data.Sqlite.SqliteStatement> Mono.Data.Sqlite.SqliteCommand::_statementList
	List_1_t061A89EAEE080F1782627C91C598BD546671C91A * ____statementList_12;
	// System.String Mono.Data.Sqlite.SqliteCommand::_remainingText
	String_t* ____remainingText_13;
	// Mono.Data.Sqlite.SqliteTransaction Mono.Data.Sqlite.SqliteCommand::_transaction
	SqliteTransaction_t588D1AEC987A56478BF3B4254D6F83A4740F1560 * ____transaction_14;

public:
	inline static int32_t get_offset_of__commandText_4() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____commandText_4)); }
	inline String_t* get__commandText_4() const { return ____commandText_4; }
	inline String_t** get_address_of__commandText_4() { return &____commandText_4; }
	inline void set__commandText_4(String_t* value)
	{
		____commandText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commandText_4), (void*)value);
	}

	inline static int32_t get_offset_of__cnn_5() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____cnn_5)); }
	inline SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * get__cnn_5() const { return ____cnn_5; }
	inline SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 ** get_address_of__cnn_5() { return &____cnn_5; }
	inline void set__cnn_5(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * value)
	{
		____cnn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cnn_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____version_6)); }
	inline int64_t get__version_6() const { return ____version_6; }
	inline int64_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int64_t value)
	{
		____version_6 = value;
	}

	inline static int32_t get_offset_of__activeReader_7() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____activeReader_7)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get__activeReader_7() const { return ____activeReader_7; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of__activeReader_7() { return &____activeReader_7; }
	inline void set__activeReader_7(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		____activeReader_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReader_7), (void*)value);
	}

	inline static int32_t get_offset_of__commandTimeout_8() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____commandTimeout_8)); }
	inline int32_t get__commandTimeout_8() const { return ____commandTimeout_8; }
	inline int32_t* get_address_of__commandTimeout_8() { return &____commandTimeout_8; }
	inline void set__commandTimeout_8(int32_t value)
	{
		____commandTimeout_8 = value;
	}

	inline static int32_t get_offset_of__designTimeVisible_9() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____designTimeVisible_9)); }
	inline bool get__designTimeVisible_9() const { return ____designTimeVisible_9; }
	inline bool* get_address_of__designTimeVisible_9() { return &____designTimeVisible_9; }
	inline void set__designTimeVisible_9(bool value)
	{
		____designTimeVisible_9 = value;
	}

	inline static int32_t get_offset_of__updateRowSource_10() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____updateRowSource_10)); }
	inline int32_t get__updateRowSource_10() const { return ____updateRowSource_10; }
	inline int32_t* get_address_of__updateRowSource_10() { return &____updateRowSource_10; }
	inline void set__updateRowSource_10(int32_t value)
	{
		____updateRowSource_10 = value;
	}

	inline static int32_t get_offset_of__parameterCollection_11() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____parameterCollection_11)); }
	inline SqliteParameterCollection_tD518FC7690200D12DA3B779429941F988301B523 * get__parameterCollection_11() const { return ____parameterCollection_11; }
	inline SqliteParameterCollection_tD518FC7690200D12DA3B779429941F988301B523 ** get_address_of__parameterCollection_11() { return &____parameterCollection_11; }
	inline void set__parameterCollection_11(SqliteParameterCollection_tD518FC7690200D12DA3B779429941F988301B523 * value)
	{
		____parameterCollection_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parameterCollection_11), (void*)value);
	}

	inline static int32_t get_offset_of__statementList_12() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____statementList_12)); }
	inline List_1_t061A89EAEE080F1782627C91C598BD546671C91A * get__statementList_12() const { return ____statementList_12; }
	inline List_1_t061A89EAEE080F1782627C91C598BD546671C91A ** get_address_of__statementList_12() { return &____statementList_12; }
	inline void set__statementList_12(List_1_t061A89EAEE080F1782627C91C598BD546671C91A * value)
	{
		____statementList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____statementList_12), (void*)value);
	}

	inline static int32_t get_offset_of__remainingText_13() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____remainingText_13)); }
	inline String_t* get__remainingText_13() const { return ____remainingText_13; }
	inline String_t** get_address_of__remainingText_13() { return &____remainingText_13; }
	inline void set__remainingText_13(String_t* value)
	{
		____remainingText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remainingText_13), (void*)value);
	}

	inline static int32_t get_offset_of__transaction_14() { return static_cast<int32_t>(offsetof(SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365, ____transaction_14)); }
	inline SqliteTransaction_t588D1AEC987A56478BF3B4254D6F83A4740F1560 * get__transaction_14() const { return ____transaction_14; }
	inline SqliteTransaction_t588D1AEC987A56478BF3B4254D6F83A4740F1560 ** get_address_of__transaction_14() { return &____transaction_14; }
	inline void set__transaction_14(SqliteTransaction_t588D1AEC987A56478BF3B4254D6F83A4740F1560 * value)
	{
		____transaction_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transaction_14), (void*)value);
	}
};


// Mono.Data.Sqlite.SqliteConnection
struct SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2  : public DbConnection_tBCDED104D8D1B6EB4ED87AB6845D3ACF18C9807E
{
public:
	// System.Data.ConnectionState Mono.Data.Sqlite.SqliteConnection::_connectionState
	int32_t ____connectionState_4;
	// System.String Mono.Data.Sqlite.SqliteConnection::_connectionString
	String_t* ____connectionString_5;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_transactionLevel
	int32_t ____transactionLevel_6;
	// System.Data.IsolationLevel Mono.Data.Sqlite.SqliteConnection::_defaultIsolation
	int32_t ____defaultIsolation_7;
	// Mono.Data.Sqlite.SQLiteEnlistment Mono.Data.Sqlite.SqliteConnection::_enlistment
	SQLiteEnlistment_t67F908A6773D493F8205DF68972AABB98085B494 * ____enlistment_8;
	// Mono.Data.Sqlite.SQLiteBase Mono.Data.Sqlite.SqliteConnection::_sql
	SQLiteBase_t59AAE9C52C98137708374575A69B76DB362B4699 * ____sql_9;
	// System.String Mono.Data.Sqlite.SqliteConnection::_dataSource
	String_t* ____dataSource_10;
	// System.Byte[] Mono.Data.Sqlite.SqliteConnection::_password
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____password_11;
	// System.Int32 Mono.Data.Sqlite.SqliteConnection::_defaultTimeout
	int32_t ____defaultTimeout_12;
	// System.Boolean Mono.Data.Sqlite.SqliteConnection::_binaryGuid
	bool ____binaryGuid_13;
	// System.Int64 Mono.Data.Sqlite.SqliteConnection::_version
	int64_t ____version_14;
	// Mono.Data.Sqlite.SQLiteUpdateCallback Mono.Data.Sqlite.SqliteConnection::_updateCallback
	SQLiteUpdateCallback_t3252735A38A0D75E6E9CB742FBFB194CD942712F * ____updateCallback_15;
	// Mono.Data.Sqlite.SQLiteCommitCallback Mono.Data.Sqlite.SqliteConnection::_commitCallback
	SQLiteCommitCallback_t4A2F244F9FCADC58BAEFCDB1F9A4AEA018294B4F * ____commitCallback_16;
	// Mono.Data.Sqlite.SQLiteRollbackCallback Mono.Data.Sqlite.SqliteConnection::_rollbackCallback
	SQLiteRollbackCallback_t0879E30A50B184087AFBA2EC348DAF30A4646D8A * ____rollbackCallback_17;
	// Mono.Data.Sqlite.SQLiteUpdateEventHandler Mono.Data.Sqlite.SqliteConnection::_updateHandler
	SQLiteUpdateEventHandler_t36E8A27FD858F0A7228A1E41FB87DD693D3C4AC8 * ____updateHandler_18;
	// Mono.Data.Sqlite.SQLiteCommitHandler Mono.Data.Sqlite.SqliteConnection::_commitHandler
	SQLiteCommitHandler_t52225EF37741FF54E821E0BB250CF29BC4C4D97E * ____commitHandler_19;
	// System.EventHandler Mono.Data.Sqlite.SqliteConnection::_rollbackHandler
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ____rollbackHandler_20;
	// System.Data.StateChangeEventHandler Mono.Data.Sqlite.SqliteConnection::StateChange
	StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * ___StateChange_21;

public:
	inline static int32_t get_offset_of__connectionState_4() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____connectionState_4)); }
	inline int32_t get__connectionState_4() const { return ____connectionState_4; }
	inline int32_t* get_address_of__connectionState_4() { return &____connectionState_4; }
	inline void set__connectionState_4(int32_t value)
	{
		____connectionState_4 = value;
	}

	inline static int32_t get_offset_of__connectionString_5() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____connectionString_5)); }
	inline String_t* get__connectionString_5() const { return ____connectionString_5; }
	inline String_t** get_address_of__connectionString_5() { return &____connectionString_5; }
	inline void set__connectionString_5(String_t* value)
	{
		____connectionString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____connectionString_5), (void*)value);
	}

	inline static int32_t get_offset_of__transactionLevel_6() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____transactionLevel_6)); }
	inline int32_t get__transactionLevel_6() const { return ____transactionLevel_6; }
	inline int32_t* get_address_of__transactionLevel_6() { return &____transactionLevel_6; }
	inline void set__transactionLevel_6(int32_t value)
	{
		____transactionLevel_6 = value;
	}

	inline static int32_t get_offset_of__defaultIsolation_7() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____defaultIsolation_7)); }
	inline int32_t get__defaultIsolation_7() const { return ____defaultIsolation_7; }
	inline int32_t* get_address_of__defaultIsolation_7() { return &____defaultIsolation_7; }
	inline void set__defaultIsolation_7(int32_t value)
	{
		____defaultIsolation_7 = value;
	}

	inline static int32_t get_offset_of__enlistment_8() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____enlistment_8)); }
	inline SQLiteEnlistment_t67F908A6773D493F8205DF68972AABB98085B494 * get__enlistment_8() const { return ____enlistment_8; }
	inline SQLiteEnlistment_t67F908A6773D493F8205DF68972AABB98085B494 ** get_address_of__enlistment_8() { return &____enlistment_8; }
	inline void set__enlistment_8(SQLiteEnlistment_t67F908A6773D493F8205DF68972AABB98085B494 * value)
	{
		____enlistment_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enlistment_8), (void*)value);
	}

	inline static int32_t get_offset_of__sql_9() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____sql_9)); }
	inline SQLiteBase_t59AAE9C52C98137708374575A69B76DB362B4699 * get__sql_9() const { return ____sql_9; }
	inline SQLiteBase_t59AAE9C52C98137708374575A69B76DB362B4699 ** get_address_of__sql_9() { return &____sql_9; }
	inline void set__sql_9(SQLiteBase_t59AAE9C52C98137708374575A69B76DB362B4699 * value)
	{
		____sql_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sql_9), (void*)value);
	}

	inline static int32_t get_offset_of__dataSource_10() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____dataSource_10)); }
	inline String_t* get__dataSource_10() const { return ____dataSource_10; }
	inline String_t** get_address_of__dataSource_10() { return &____dataSource_10; }
	inline void set__dataSource_10(String_t* value)
	{
		____dataSource_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dataSource_10), (void*)value);
	}

	inline static int32_t get_offset_of__password_11() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____password_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__password_11() const { return ____password_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__password_11() { return &____password_11; }
	inline void set__password_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____password_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____password_11), (void*)value);
	}

	inline static int32_t get_offset_of__defaultTimeout_12() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____defaultTimeout_12)); }
	inline int32_t get__defaultTimeout_12() const { return ____defaultTimeout_12; }
	inline int32_t* get_address_of__defaultTimeout_12() { return &____defaultTimeout_12; }
	inline void set__defaultTimeout_12(int32_t value)
	{
		____defaultTimeout_12 = value;
	}

	inline static int32_t get_offset_of__binaryGuid_13() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____binaryGuid_13)); }
	inline bool get__binaryGuid_13() const { return ____binaryGuid_13; }
	inline bool* get_address_of__binaryGuid_13() { return &____binaryGuid_13; }
	inline void set__binaryGuid_13(bool value)
	{
		____binaryGuid_13 = value;
	}

	inline static int32_t get_offset_of__version_14() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____version_14)); }
	inline int64_t get__version_14() const { return ____version_14; }
	inline int64_t* get_address_of__version_14() { return &____version_14; }
	inline void set__version_14(int64_t value)
	{
		____version_14 = value;
	}

	inline static int32_t get_offset_of__updateCallback_15() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____updateCallback_15)); }
	inline SQLiteUpdateCallback_t3252735A38A0D75E6E9CB742FBFB194CD942712F * get__updateCallback_15() const { return ____updateCallback_15; }
	inline SQLiteUpdateCallback_t3252735A38A0D75E6E9CB742FBFB194CD942712F ** get_address_of__updateCallback_15() { return &____updateCallback_15; }
	inline void set__updateCallback_15(SQLiteUpdateCallback_t3252735A38A0D75E6E9CB742FBFB194CD942712F * value)
	{
		____updateCallback_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateCallback_15), (void*)value);
	}

	inline static int32_t get_offset_of__commitCallback_16() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____commitCallback_16)); }
	inline SQLiteCommitCallback_t4A2F244F9FCADC58BAEFCDB1F9A4AEA018294B4F * get__commitCallback_16() const { return ____commitCallback_16; }
	inline SQLiteCommitCallback_t4A2F244F9FCADC58BAEFCDB1F9A4AEA018294B4F ** get_address_of__commitCallback_16() { return &____commitCallback_16; }
	inline void set__commitCallback_16(SQLiteCommitCallback_t4A2F244F9FCADC58BAEFCDB1F9A4AEA018294B4F * value)
	{
		____commitCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commitCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of__rollbackCallback_17() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____rollbackCallback_17)); }
	inline SQLiteRollbackCallback_t0879E30A50B184087AFBA2EC348DAF30A4646D8A * get__rollbackCallback_17() const { return ____rollbackCallback_17; }
	inline SQLiteRollbackCallback_t0879E30A50B184087AFBA2EC348DAF30A4646D8A ** get_address_of__rollbackCallback_17() { return &____rollbackCallback_17; }
	inline void set__rollbackCallback_17(SQLiteRollbackCallback_t0879E30A50B184087AFBA2EC348DAF30A4646D8A * value)
	{
		____rollbackCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rollbackCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of__updateHandler_18() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____updateHandler_18)); }
	inline SQLiteUpdateEventHandler_t36E8A27FD858F0A7228A1E41FB87DD693D3C4AC8 * get__updateHandler_18() const { return ____updateHandler_18; }
	inline SQLiteUpdateEventHandler_t36E8A27FD858F0A7228A1E41FB87DD693D3C4AC8 ** get_address_of__updateHandler_18() { return &____updateHandler_18; }
	inline void set__updateHandler_18(SQLiteUpdateEventHandler_t36E8A27FD858F0A7228A1E41FB87DD693D3C4AC8 * value)
	{
		____updateHandler_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updateHandler_18), (void*)value);
	}

	inline static int32_t get_offset_of__commitHandler_19() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____commitHandler_19)); }
	inline SQLiteCommitHandler_t52225EF37741FF54E821E0BB250CF29BC4C4D97E * get__commitHandler_19() const { return ____commitHandler_19; }
	inline SQLiteCommitHandler_t52225EF37741FF54E821E0BB250CF29BC4C4D97E ** get_address_of__commitHandler_19() { return &____commitHandler_19; }
	inline void set__commitHandler_19(SQLiteCommitHandler_t52225EF37741FF54E821E0BB250CF29BC4C4D97E * value)
	{
		____commitHandler_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____commitHandler_19), (void*)value);
	}

	inline static int32_t get_offset_of__rollbackHandler_20() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ____rollbackHandler_20)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get__rollbackHandler_20() const { return ____rollbackHandler_20; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of__rollbackHandler_20() { return &____rollbackHandler_20; }
	inline void set__rollbackHandler_20(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		____rollbackHandler_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rollbackHandler_20), (void*)value);
	}

	inline static int32_t get_offset_of_StateChange_21() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2, ___StateChange_21)); }
	inline StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * get_StateChange_21() const { return ___StateChange_21; }
	inline StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 ** get_address_of_StateChange_21() { return &___StateChange_21; }
	inline void set_StateChange_21(StateChangeEventHandler_tCBE614D6F8C0E81076DE3A3368E258B6F1B1C6F1 * value)
	{
		___StateChange_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChange_21), (void*)value);
	}
};

struct SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map1
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U3CU3Ef__switchU24map1_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Data.Sqlite.SqliteConnection::<>f__switch$map2
	Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * ___U3CU3Ef__switchU24map2_23;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_22() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2_StaticFields, ___U3CU3Ef__switchU24map1_22)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U3CU3Ef__switchU24map1_22() const { return ___U3CU3Ef__switchU24map1_22; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U3CU3Ef__switchU24map1_22() { return &___U3CU3Ef__switchU24map1_22; }
	inline void set_U3CU3Ef__switchU24map1_22(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U3CU3Ef__switchU24map1_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__switchU24map1_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_23() { return static_cast<int32_t>(offsetof(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2_StaticFields, ___U3CU3Ef__switchU24map2_23)); }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * get_U3CU3Ef__switchU24map2_23() const { return ___U3CU3Ef__switchU24map2_23; }
	inline Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB ** get_address_of_U3CU3Ef__switchU24map2_23() { return &___U3CU3Ef__switchU24map2_23; }
	inline void set_U3CU3Ef__switchU24map2_23(Dictionary_2_tD6E204872BA9FD506A0287EF68E285BEB9EC0DFB * value)
	{
		___U3CU3Ef__switchU24map2_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__switchU24map2_23), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
struct Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618, ___list_0)); }
	inline List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * get_list_0() const { return ___list_0; }
	inline List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618, ___current_3)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_current_3() const { return ___current_3; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___module_1), (void*)NULL);
		#endif
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
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

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};

// System.Threading.Tasks.Task`1<Item>
struct Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842, ___m_result_22)); }
	inline Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * get_m_result_22() const { return ___m_result_22; }
	inline Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t30041671AFB8EB95F4859963E8A9B4B2D14AFB5D * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t014D5EB9874D32CF030837EF1ED03BA612E8DA14 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t30041671AFB8EB95F4859963E8A9B4B2D14AFB5D * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t30041671AFB8EB95F4859963E8A9B4B2D14AFB5D ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t30041671AFB8EB95F4859963E8A9B4B2D14AFB5D * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t014D5EB9874D32CF030837EF1ED03BA612E8DA14 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t014D5EB9874D32CF030837EF1ED03BA612E8DA14 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t014D5EB9874D32CF030837EF1ED03BA612E8DA14 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>
struct Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4AC33CDF99F0DB99DA1A14DF4A73F61F90161030 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t8D77D16AB533E693749D76AA9077E7C1739439B2 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4AC33CDF99F0DB99DA1A14DF4A73F61F90161030 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4AC33CDF99F0DB99DA1A14DF4A73F61F90161030 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4AC33CDF99F0DB99DA1A14DF4A73F61F90161030 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t8D77D16AB533E693749D76AA9077E7C1739439B2 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t8D77D16AB533E693749D76AA9077E7C1739439B2 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t8D77D16AB533E693749D76AA9077E7C1739439B2 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
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


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
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

// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Touch
struct Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Position_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RawPosition_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_PositionDelta_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
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


// DataHandler/<Get>d__13
struct U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 
{
public:
	// System.Int32 DataHandler/<Get>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder DataHandler/<Get>d__13::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// System.String DataHandler/<Get>d__13::label
	String_t* ___label_2;
	// DataHandler DataHandler/<Get>d__13::<>4__this
	DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> DataHandler/<Get>d__13::<>u__1
	TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  ___U3CU3Eu__1_4;
	// System.Collections.Generic.IEnumerator`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation> DataHandler/<Get>d__13::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Item> DataHandler/<Get>d__13::<>u__2
	TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
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

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0, ___label_2)); }
	inline String_t* get_label_2() const { return ___label_2; }
	inline String_t** get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(String_t* value)
	{
		___label_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0, ___U3CU3E4__this_3)); }
	inline DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0, ___U3CU3E7__wrap1_5)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  value)
	{
		___U3CU3Eu__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__2_6))->___m_task_0), (void*)NULL);
	}
};


// Item
struct Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Single Item::price
	float ___price_4;
	// UnityEngine.GameObject Item::itemPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___itemPrefab_5;
	// UnityEngine.Sprite Item::itemImage
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___itemImage_6;

public:
	inline static int32_t get_offset_of_price_4() { return static_cast<int32_t>(offsetof(Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E, ___price_4)); }
	inline float get_price_4() const { return ___price_4; }
	inline float* get_address_of_price_4() { return &___price_4; }
	inline void set_price_4(float value)
	{
		___price_4 = value;
	}

	inline static int32_t get_offset_of_itemPrefab_5() { return static_cast<int32_t>(offsetof(Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E, ___itemPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_itemPrefab_5() const { return ___itemPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_itemPrefab_5() { return &___itemPrefab_5; }
	inline void set_itemPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___itemPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_itemImage_6() { return static_cast<int32_t>(offsetof(Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E, ___itemImage_6)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_itemImage_6() const { return ___itemImage_6; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_itemImage_6() { return &___itemImage_6; }
	inline void set_itemImage_6(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___itemImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemImage_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_Hit_1;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_Transform_2;

public:
	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC, ___U3CdistanceU3Ek__BackingField_0)); }
	inline float get_U3CdistanceU3Ek__BackingField_0() const { return ___U3CdistanceU3Ek__BackingField_0; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_0() { return &___U3CdistanceU3Ek__BackingField_0; }
	inline void set_U3CdistanceU3Ek__BackingField_0(float value)
	{
		___U3CdistanceU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Hit_1() { return static_cast<int32_t>(offsetof(ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC, ___m_Hit_1)); }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  get_m_Hit_1() const { return ___m_Hit_1; }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * get_address_of_m_Hit_1() { return &___m_Hit_1; }
	inline void set_m_Hit_1(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  value)
	{
		___m_Hit_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC, ___m_Transform_2)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_Transform_2() const { return ___m_Transform_2; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_Transform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Transform_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_Hit_1;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_Transform_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___m_Hit_1;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_Transform_2;
};

// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// ButtonManager
struct ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Button ButtonManager::btn
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___btn_4;
	// UnityEngine.UI.RawImage ButtonManager::buttonImage
	RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * ___buttonImage_5;
	// UnityEngine.GameObject ButtonManager::furniture
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___furniture_6;
	// System.Int32 ButtonManager::_itemId
	int32_t ____itemId_7;
	// UnityEngine.Sprite ButtonManager::_buttonTexture
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ____buttonTexture_8;

public:
	inline static int32_t get_offset_of_btn_4() { return static_cast<int32_t>(offsetof(ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7, ___btn_4)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_btn_4() const { return ___btn_4; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_btn_4() { return &___btn_4; }
	inline void set_btn_4(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___btn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonImage_5() { return static_cast<int32_t>(offsetof(ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7, ___buttonImage_5)); }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * get_buttonImage_5() const { return ___buttonImage_5; }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 ** get_address_of_buttonImage_5() { return &___buttonImage_5; }
	inline void set_buttonImage_5(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * value)
	{
		___buttonImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_furniture_6() { return static_cast<int32_t>(offsetof(ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7, ___furniture_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_furniture_6() const { return ___furniture_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_furniture_6() { return &___furniture_6; }
	inline void set_furniture_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___furniture_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___furniture_6), (void*)value);
	}

	inline static int32_t get_offset_of__itemId_7() { return static_cast<int32_t>(offsetof(ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7, ____itemId_7)); }
	inline int32_t get__itemId_7() const { return ____itemId_7; }
	inline int32_t* get_address_of__itemId_7() { return &____itemId_7; }
	inline void set__itemId_7(int32_t value)
	{
		____itemId_7 = value;
	}

	inline static int32_t get_offset_of__buttonTexture_8() { return static_cast<int32_t>(offsetof(ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7, ____buttonTexture_8)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get__buttonTexture_8() const { return ____buttonTexture_8; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of__buttonTexture_8() { return &____buttonTexture_8; }
	inline void set__buttonTexture_8(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		____buttonTexture_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buttonTexture_8), (void*)value);
	}
};


// DataHandler
struct DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject DataHandler::furniture
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___furniture_4;
	// ButtonManager DataHandler::buttonPrefab
	ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * ___buttonPrefab_5;
	// UnityEngine.GameObject DataHandler::buttonContainer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___buttonContainer_6;
	// System.Collections.Generic.List`1<Item> DataHandler::_items
	List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * ____items_7;
	// System.String DataHandler::label
	String_t* ___label_8;
	// System.Int32 DataHandler::currentId
	int32_t ___currentId_9;

public:
	inline static int32_t get_offset_of_furniture_4() { return static_cast<int32_t>(offsetof(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5, ___furniture_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_furniture_4() const { return ___furniture_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_furniture_4() { return &___furniture_4; }
	inline void set_furniture_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___furniture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___furniture_4), (void*)value);
	}

	inline static int32_t get_offset_of_buttonPrefab_5() { return static_cast<int32_t>(offsetof(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5, ___buttonPrefab_5)); }
	inline ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * get_buttonPrefab_5() const { return ___buttonPrefab_5; }
	inline ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 ** get_address_of_buttonPrefab_5() { return &___buttonPrefab_5; }
	inline void set_buttonPrefab_5(ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * value)
	{
		___buttonPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_buttonContainer_6() { return static_cast<int32_t>(offsetof(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5, ___buttonContainer_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_buttonContainer_6() const { return ___buttonContainer_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_buttonContainer_6() { return &___buttonContainer_6; }
	inline void set_buttonContainer_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___buttonContainer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonContainer_6), (void*)value);
	}

	inline static int32_t get_offset_of__items_7() { return static_cast<int32_t>(offsetof(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5, ____items_7)); }
	inline List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * get__items_7() const { return ____items_7; }
	inline List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 ** get_address_of__items_7() { return &____items_7; }
	inline void set__items_7(List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * value)
	{
		____items_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_7), (void*)value);
	}

	inline static int32_t get_offset_of_label_8() { return static_cast<int32_t>(offsetof(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5, ___label_8)); }
	inline String_t* get_label_8() const { return ___label_8; }
	inline String_t** get_address_of_label_8() { return &___label_8; }
	inline void set_label_8(String_t* value)
	{
		___label_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_8), (void*)value);
	}

	inline static int32_t get_offset_of_currentId_9() { return static_cast<int32_t>(offsetof(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5, ___currentId_9)); }
	inline int32_t get_currentId_9() const { return ___currentId_9; }
	inline int32_t* get_address_of_currentId_9() { return &___currentId_9; }
	inline void set_currentId_9(int32_t value)
	{
		___currentId_9 = value;
	}
};

struct DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_StaticFields
{
public:
	// DataHandler DataHandler::instance
	DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_StaticFields, ___instance_10)); }
	inline DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * get_instance_10() const { return ___instance_10; }
	inline DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_10), (void*)value);
	}
};


// InputManager
struct InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Camera InputManager::arCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___arCamera_4;
	// UnityEngine.XR.ARFoundation.ARRaycastManager InputManager::_raycastManager
	ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * ____raycastManager_5;
	// UnityEngine.GameObject InputManager::crosshair
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___crosshair_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> InputManager::_hits
	List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * ____hits_7;
	// UnityEngine.Touch InputManager::touch
	Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  ___touch_8;
	// UnityEngine.Pose InputManager::pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose_9;

public:
	inline static int32_t get_offset_of_arCamera_4() { return static_cast<int32_t>(offsetof(InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE, ___arCamera_4)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_arCamera_4() const { return ___arCamera_4; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_arCamera_4() { return &___arCamera_4; }
	inline void set_arCamera_4(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___arCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of__raycastManager_5() { return static_cast<int32_t>(offsetof(InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE, ____raycastManager_5)); }
	inline ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * get__raycastManager_5() const { return ____raycastManager_5; }
	inline ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 ** get_address_of__raycastManager_5() { return &____raycastManager_5; }
	inline void set__raycastManager_5(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * value)
	{
		____raycastManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____raycastManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_crosshair_6() { return static_cast<int32_t>(offsetof(InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE, ___crosshair_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_crosshair_6() const { return ___crosshair_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_crosshair_6() { return &___crosshair_6; }
	inline void set_crosshair_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___crosshair_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crosshair_6), (void*)value);
	}

	inline static int32_t get_offset_of__hits_7() { return static_cast<int32_t>(offsetof(InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE, ____hits_7)); }
	inline List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * get__hits_7() const { return ____hits_7; }
	inline List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 ** get_address_of__hits_7() { return &____hits_7; }
	inline void set__hits_7(List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * value)
	{
		____hits_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hits_7), (void*)value);
	}

	inline static int32_t get_offset_of_touch_8() { return static_cast<int32_t>(offsetof(InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE, ___touch_8)); }
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  get_touch_8() const { return ___touch_8; }
	inline Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * get_address_of_touch_8() { return &___touch_8; }
	inline void set_touch_8(Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  value)
	{
		___touch_8 = value;
	}

	inline static int32_t get_offset_of_pose_9() { return static_cast<int32_t>(offsetof(InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE, ___pose_9)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_pose_9() const { return ___pose_9; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_pose_9() { return &___pose_9; }
	inline void set_pose_9(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___pose_9 = value;
	}
};


// UIContentFitter
struct UIContentFitter_t85D27C896B0AD12D3735CB5BDCD81D7A085EB67E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UIManager
struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.GraphicRaycaster UIManager::raycaster
	GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * ___raycaster_4;
	// UnityEngine.Transform UIManager::selectionPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___selectionPoint_5;
	// UnityEngine.EventSystems.PointerEventData UIManager::pData
	PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___pData_6;
	// UnityEngine.EventSystems.EventSystem UIManager::eventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem_7;

public:
	inline static int32_t get_offset_of_raycaster_4() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___raycaster_4)); }
	inline GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * get_raycaster_4() const { return ___raycaster_4; }
	inline GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 ** get_address_of_raycaster_4() { return &___raycaster_4; }
	inline void set_raycaster_4(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * value)
	{
		___raycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycaster_4), (void*)value);
	}

	inline static int32_t get_offset_of_selectionPoint_5() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___selectionPoint_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_selectionPoint_5() const { return ___selectionPoint_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_selectionPoint_5() { return &___selectionPoint_5; }
	inline void set_selectionPoint_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___selectionPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectionPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_pData_6() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___pData_6)); }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * get_pData_6() const { return ___pData_6; }
	inline PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 ** get_address_of_pData_6() { return &___pData_6; }
	inline void set_pData_6(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * value)
	{
		___pData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pData_6), (void*)value);
	}

	inline static int32_t get_offset_of_eventSystem_7() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___eventSystem_7)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_eventSystem_7() const { return ___eventSystem_7; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_eventSystem_7() { return &___eventSystem_7; }
	inline void set_eventSystem_7(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___eventSystem_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystem_7), (void*)value);
	}
};

struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields
{
public:
	// UIManager UIManager::instance
	UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * ___instance_8;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields, ___instance_8)); }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * get_instance_8() const { return ___instance_8; }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * ___U3CsubsystemU3Ek__BackingField_4;
	// System.Boolean UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::m_CleanupSubsystemOnDestroy
	bool ___m_CleanupSubsystemOnDestroy_5;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRRaycastSubsystem_t1181EA314910ABB4E1F50BF2F7650EC1512A0A20 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CleanupSubsystemOnDestroy_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B, ___m_CleanupSubsystemOnDestroy_5)); }
	inline bool get_m_CleanupSubsystemOnDestroy_5() const { return ___m_CleanupSubsystemOnDestroy_5; }
	inline bool* get_address_of_m_CleanupSubsystemOnDestroy_5() { return &___m_CleanupSubsystemOnDestroy_5; }
	inline void set_m_CleanupSubsystemOnDestroy_5(bool value)
	{
		___m_CleanupSubsystemOnDestroy_5 = value;
	}
};

struct SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_tFE76B8D7F14802FE83B0F3A6F70099326B68A765 * ___s_SubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B_StaticFields, ___s_SubsystemDescriptors_6)); }
	inline List_1_tFE76B8D7F14802FE83B0F3A6F70099326B68A765 * get_s_SubsystemDescriptors_6() const { return ___s_SubsystemDescriptors_6; }
	inline List_1_tFE76B8D7F14802FE83B0F3A6F70099326B68A765 ** get_address_of_s_SubsystemDescriptors_6() { return &___s_SubsystemDescriptors_6; }
	inline void set_s_SubsystemDescriptors_6(List_1_tFE76B8D7F14802FE83B0F3A6F70099326B68A765 * value)
	{
		___s_SubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_6), (void*)value);
	}
};


// dbScript
struct dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String dbScript::dbName
	String_t* ___dbName_4;

public:
	inline static int32_t get_offset_of_dbName_4() { return static_cast<int32_t>(offsetof(dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F, ___dbName_4)); }
	inline String_t* get_dbName_4() const { return ___dbName_4; }
	inline String_t** get_address_of_dbName_4() { return &___dbName_4; }
	inline void set_dbName_4(String_t* value)
	{
		___dbName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dbName_4), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___m_RootRaycaster_4;

public:
	inline static int32_t get_offset_of_m_RootRaycaster_4() { return static_cast<int32_t>(offsetof(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966, ___m_RootRaycaster_4)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_m_RootRaycaster_4() const { return ___m_RootRaycaster_4; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_m_RootRaycaster_4() { return &___m_RootRaycaster_4; }
	inline void set_m_RootRaycaster_4(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___m_RootRaycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootRaycaster_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t4FB5BF302DAD74D690156A022C4FA4D4081E9B26 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t882412D5BE0B5BFC1900366319F8B2EB544BDD8B * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t32541D3F4C935BBA3800256BD21A7CA8148AAC13 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t6E2F647783FBCA5123C6D7868CA8A1B87E57EFE7 * ___m_RectChildren_11;

public:
	inline static int32_t get_offset_of_m_Padding_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_Padding_4)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Padding_4() const { return ___m_Padding_4; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Padding_4() { return &___m_Padding_4; }
	inline void set_m_Padding_4(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Padding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_ChildAlignment_5)); }
	inline int32_t get_m_ChildAlignment_5() const { return ___m_ChildAlignment_5; }
	inline int32_t* get_address_of_m_ChildAlignment_5() { return &___m_ChildAlignment_5; }
	inline void set_m_ChildAlignment_5(int32_t value)
	{
		___m_ChildAlignment_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_Rect_6)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_TotalMinSize_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TotalMinSize_8() const { return ___m_TotalMinSize_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TotalMinSize_8() { return &___m_TotalMinSize_8; }
	inline void set_m_TotalMinSize_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TotalMinSize_8 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_TotalPreferredSize_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TotalPreferredSize_9() const { return ___m_TotalPreferredSize_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TotalPreferredSize_9() { return &___m_TotalPreferredSize_9; }
	inline void set_m_TotalPreferredSize_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TotalPreferredSize_9 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_10() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_TotalFlexibleSize_10)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TotalFlexibleSize_10() const { return ___m_TotalFlexibleSize_10; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TotalFlexibleSize_10() { return &___m_TotalFlexibleSize_10; }
	inline void set_m_TotalFlexibleSize_10(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TotalFlexibleSize_10 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_11() { return static_cast<int32_t>(offsetof(LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4, ___m_RectChildren_11)); }
	inline List_1_t6E2F647783FBCA5123C6D7868CA8A1B87E57EFE7 * get_m_RectChildren_11() const { return ___m_RectChildren_11; }
	inline List_1_t6E2F647783FBCA5123C6D7868CA8A1B87E57EFE7 ** get_address_of_m_RectChildren_11() { return &___m_RectChildren_11; }
	inline void set_m_RectChildren_11(List_1_t6E2F647783FBCA5123C6D7868CA8A1B87E57EFE7 * value)
	{
		___m_RectChildren_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectChildren_11), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7  : public SubsystemLifecycleManager_2_tDE11645ED850AA7739D57BAF17A648834DB2CD5B
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARRaycastManager::m_SessionOrigin
	ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * ___m_SessionOrigin_9;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t90F72284AE26630ADA7BF961DE9E7DC462273C25 * ___m_RaycastViewportDelegate_10;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t77A117E1B74454F4357E34559B76C9B0FD30123B * ___m_RaycastRayDelegate_11;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t42F0D49354BAD8E9AD7DD15EE52380C131BF304E * ___m_Raycasters_12;

public:
	inline static int32_t get_offset_of_m_SessionOrigin_9() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_SessionOrigin_9)); }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * get_m_SessionOrigin_9() const { return ___m_SessionOrigin_9; }
	inline ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF ** get_address_of_m_SessionOrigin_9() { return &___m_SessionOrigin_9; }
	inline void set_m_SessionOrigin_9(ARSessionOrigin_t61463C0A24AF925CF219B6C3F1720325C96720EF * value)
	{
		___m_SessionOrigin_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SessionOrigin_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastViewportDelegate_10() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_RaycastViewportDelegate_10)); }
	inline Func_4_t90F72284AE26630ADA7BF961DE9E7DC462273C25 * get_m_RaycastViewportDelegate_10() const { return ___m_RaycastViewportDelegate_10; }
	inline Func_4_t90F72284AE26630ADA7BF961DE9E7DC462273C25 ** get_address_of_m_RaycastViewportDelegate_10() { return &___m_RaycastViewportDelegate_10; }
	inline void set_m_RaycastViewportDelegate_10(Func_4_t90F72284AE26630ADA7BF961DE9E7DC462273C25 * value)
	{
		___m_RaycastViewportDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastViewportDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastRayDelegate_11() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_RaycastRayDelegate_11)); }
	inline Func_4_t77A117E1B74454F4357E34559B76C9B0FD30123B * get_m_RaycastRayDelegate_11() const { return ___m_RaycastRayDelegate_11; }
	inline Func_4_t77A117E1B74454F4357E34559B76C9B0FD30123B ** get_address_of_m_RaycastRayDelegate_11() { return &___m_RaycastRayDelegate_11; }
	inline void set_m_RaycastRayDelegate_11(Func_4_t77A117E1B74454F4357E34559B76C9B0FD30123B * value)
	{
		___m_RaycastRayDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastRayDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Raycasters_12() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7, ___m_Raycasters_12)); }
	inline List_1_t42F0D49354BAD8E9AD7DD15EE52380C131BF304E * get_m_Raycasters_12() const { return ___m_Raycasters_12; }
	inline List_1_t42F0D49354BAD8E9AD7DD15EE52380C131BF304E ** get_address_of_m_Raycasters_12() { return &___m_Raycasters_12; }
	inline void set_m_Raycasters_12(List_1_t42F0D49354BAD8E9AD7DD15EE52380C131BF304E * value)
	{
		___m_Raycasters_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Raycasters_12), (void*)value);
	}
};

struct ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_StaticFields
{
public:
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t3DF003B6A426D0A9EF7605862E289F2A339BF9A2 * ___s_RaycastHitComparer_7;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_tE8114FCBFA19D18AAF2202B4853638D0D2FEEB24 * ___s_NativeRaycastHits_8;

public:
	inline static int32_t get_offset_of_s_RaycastHitComparer_7() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_StaticFields, ___s_RaycastHitComparer_7)); }
	inline Comparison_1_t3DF003B6A426D0A9EF7605862E289F2A339BF9A2 * get_s_RaycastHitComparer_7() const { return ___s_RaycastHitComparer_7; }
	inline Comparison_1_t3DF003B6A426D0A9EF7605862E289F2A339BF9A2 ** get_address_of_s_RaycastHitComparer_7() { return &___s_RaycastHitComparer_7; }
	inline void set_s_RaycastHitComparer_7(Comparison_1_t3DF003B6A426D0A9EF7605862E289F2A339BF9A2 * value)
	{
		___s_RaycastHitComparer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastHitComparer_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_NativeRaycastHits_8() { return static_cast<int32_t>(offsetof(ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7_StaticFields, ___s_NativeRaycastHits_8)); }
	inline List_1_tE8114FCBFA19D18AAF2202B4853638D0D2FEEB24 * get_s_NativeRaycastHits_8() const { return ___s_NativeRaycastHits_8; }
	inline List_1_tE8114FCBFA19D18AAF2202B4853638D0D2FEEB24 ** get_address_of_s_NativeRaycastHits_8() { return &___s_NativeRaycastHits_8; }
	inline void set_s_NativeRaycastHits_8(List_1_tE8114FCBFA19D18AAF2202B4853638D0D2FEEB24 * value)
	{
		___s_NativeRaycastHits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NativeRaycastHits_8), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_20)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83  : public BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966
{
public:
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 * ___m_RaycastResults_10;

public:
	inline static int32_t get_offset_of_m_IgnoreReversedGraphics_6() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_IgnoreReversedGraphics_6)); }
	inline bool get_m_IgnoreReversedGraphics_6() const { return ___m_IgnoreReversedGraphics_6; }
	inline bool* get_address_of_m_IgnoreReversedGraphics_6() { return &___m_IgnoreReversedGraphics_6; }
	inline void set_m_IgnoreReversedGraphics_6(bool value)
	{
		___m_IgnoreReversedGraphics_6 = value;
	}

	inline static int32_t get_offset_of_m_BlockingObjects_7() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_BlockingObjects_7)); }
	inline int32_t get_m_BlockingObjects_7() const { return ___m_BlockingObjects_7; }
	inline int32_t* get_address_of_m_BlockingObjects_7() { return &___m_BlockingObjects_7; }
	inline void set_m_BlockingObjects_7(int32_t value)
	{
		___m_BlockingObjects_7 = value;
	}

	inline static int32_t get_offset_of_m_BlockingMask_8() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_BlockingMask_8)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_m_BlockingMask_8() const { return ___m_BlockingMask_8; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_m_BlockingMask_8() { return &___m_BlockingMask_8; }
	inline void set_m_BlockingMask_8(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___m_BlockingMask_8 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_Canvas_9)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastResults_10() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83, ___m_RaycastResults_10)); }
	inline List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 * get_m_RaycastResults_10() const { return ___m_RaycastResults_10; }
	inline List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 ** get_address_of_m_RaycastResults_10() { return &___m_RaycastResults_10; }
	inline void set_m_RaycastResults_10(List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 * value)
	{
		___m_RaycastResults_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResults_10), (void*)value);
	}
};

struct GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 * ___s_SortedGraphics_11;

public:
	inline static int32_t get_offset_of_s_SortedGraphics_11() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_StaticFields, ___s_SortedGraphics_11)); }
	inline List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 * get_s_SortedGraphics_11() const { return ___s_SortedGraphics_11; }
	inline List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 ** get_address_of_s_SortedGraphics_11() { return &___s_SortedGraphics_11; }
	inline void set_s_SortedGraphics_11(List_1_t71C7E742F3D85A70FD100E1F06C226C3A36C5FD5 * value)
	{
		___s_SortedGraphics_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SortedGraphics_11), (void*)value);
	}
};


// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB  : public LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4
{
public:
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleWidth
	bool ___m_ChildScaleWidth_17;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildScaleHeight
	bool ___m_ChildScaleHeight_18;

public:
	inline static int32_t get_offset_of_m_Spacing_12() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB, ___m_Spacing_12)); }
	inline float get_m_Spacing_12() const { return ___m_Spacing_12; }
	inline float* get_address_of_m_Spacing_12() { return &___m_Spacing_12; }
	inline void set_m_Spacing_12(float value)
	{
		___m_Spacing_12 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandWidth_13() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB, ___m_ChildForceExpandWidth_13)); }
	inline bool get_m_ChildForceExpandWidth_13() const { return ___m_ChildForceExpandWidth_13; }
	inline bool* get_address_of_m_ChildForceExpandWidth_13() { return &___m_ChildForceExpandWidth_13; }
	inline void set_m_ChildForceExpandWidth_13(bool value)
	{
		___m_ChildForceExpandWidth_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandHeight_14() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB, ___m_ChildForceExpandHeight_14)); }
	inline bool get_m_ChildForceExpandHeight_14() const { return ___m_ChildForceExpandHeight_14; }
	inline bool* get_address_of_m_ChildForceExpandHeight_14() { return &___m_ChildForceExpandHeight_14; }
	inline void set_m_ChildForceExpandHeight_14(bool value)
	{
		___m_ChildForceExpandHeight_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlWidth_15() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB, ___m_ChildControlWidth_15)); }
	inline bool get_m_ChildControlWidth_15() const { return ___m_ChildControlWidth_15; }
	inline bool* get_address_of_m_ChildControlWidth_15() { return &___m_ChildControlWidth_15; }
	inline void set_m_ChildControlWidth_15(bool value)
	{
		___m_ChildControlWidth_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlHeight_16() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB, ___m_ChildControlHeight_16)); }
	inline bool get_m_ChildControlHeight_16() const { return ___m_ChildControlHeight_16; }
	inline bool* get_address_of_m_ChildControlHeight_16() { return &___m_ChildControlHeight_16; }
	inline void set_m_ChildControlHeight_16(bool value)
	{
		___m_ChildControlHeight_16 = value;
	}

	inline static int32_t get_offset_of_m_ChildScaleWidth_17() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB, ___m_ChildScaleWidth_17)); }
	inline bool get_m_ChildScaleWidth_17() const { return ___m_ChildScaleWidth_17; }
	inline bool* get_address_of_m_ChildScaleWidth_17() { return &___m_ChildScaleWidth_17; }
	inline void set_m_ChildScaleWidth_17(bool value)
	{
		___m_ChildScaleWidth_17 = value;
	}

	inline static int32_t get_offset_of_m_ChildScaleHeight_18() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB, ___m_ChildScaleHeight_18)); }
	inline bool get_m_ChildScaleHeight_18() const { return ___m_ChildScaleHeight_18; }
	inline bool* get_address_of_m_ChildScaleHeight_18() { return &___m_ChildScaleHeight_18; }
	inline void set_m_ChildScaleHeight_18(bool value)
	{
		___m_ChildScaleHeight_18 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37  : public HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB
{
public:

public:
};


// UnityEngine.UI.RawImage
struct RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Texture_35;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_UVRect_36;

public:
	inline static int32_t get_offset_of_m_Texture_35() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_Texture_35)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_Texture_35() const { return ___m_Texture_35; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_Texture_35() { return &___m_Texture_35; }
	inline void set_m_Texture_35(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_Texture_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_36() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_UVRect_36)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_UVRect_36() const { return ___m_UVRect_36; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_UVRect_36() { return &___m_UVRect_36; }
	inline void set_m_UVRect_36(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_UVRect_36 = value;
	}
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
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  m_Items[1];

public:
	inline ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_2), (void*)NULL);
	}
	inline ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Transform_2), (void*)NULL);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<DataHandler/<Start>d__9>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_m42D869E329879534E1C2B40AEAF92F6A1E10EC3C_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * ___stateMachine0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DataHandler/<Get>d__13>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m77A26525E947FA203B22D7E5A9C03CCC4CA13AA8_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * AsyncOperationHandle_1_get_Task_mB61A05CEE5697CC3A32352EA851DB2F324AEDB14_gshared (AsyncOperationHandle_1_tA3D61DC158CEEADB7D17CA260C0AF36D84E79632 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,DataHandler/<Get>d__13>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m50BCC66015BCA58E2AC30C4EC5B8A7984D9CE94E_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!!0> UnityEngine.AddressableAssets.Addressables::LoadAssetAsync<System.Object>(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_tA3D61DC158CEEADB7D17CA260C0AF36D84E79632  Addressables_LoadAssetAsync_TisRuntimeObject_m5258F99C48AF547127E57BA5EA94BA0953E6046B_gshared (RuntimeObject* ___location0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,DataHandler/<Start>d__9>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_mD77FF4B17EA68FA19AC78C557B38E129C65151BB_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * ___stateMachine1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751_gshared (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD0D3353E379B18064F3FB3B70FF9E2BBB000A4C6_gshared_inline (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  List_1_get_Item_m609F549E39B918892C6EFCF1B91E21481650783C_gshared_inline (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC9860FBAA44709A84A1E2A2C9E6E8294C963098D_gshared (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618  List_1_GetEnumerator_m689B95EC04960C507E25F5842758B49FE45541EF_gshared (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  Enumerator_get_Current_m895DC9AD128A1929934DB911B277ED64A97FFEEF_gshared_inline (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m5F4608AD1CEDECCECCEE4114DE182F6C3DA77F72_gshared (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA8DAE58C2690B7583DD41332E2391D1E2A11C42A_gshared (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 * __this, const RuntimeMethod* method);

// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Sprite_get_texture_mA1FF8462BBB398DC8B3F0F92B2AB41BDA6AF69A5 (Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mA09F1C8E2EBCBE1D2A06DA84BC28FB1F9ED58977 (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___call0, const RuntimeMethod* method);
// UIManager UIManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * UIManager_get_Instance_mF35995E42E3F6A065E6AA83D15551B71F2867041 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UIManager::OnEntered(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_OnEntered_m3DF9AE2EE416E3BA3CC6C9BB24AD3513F6967111 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___button0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// DataHandler DataHandler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * DataHandler_get_Instance_mB30D79DD71C99972061EB4F3484F4DF1B07A2153 (const RuntimeMethod* method);
// System.Void DataHandler::SetFurniture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHandler_SetFurniture_m69A38453986BB69709E42C2F1DBB393D5882D62E (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<DataHandler>()
inline DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * Object_FindObjectOfType_TisDataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_m3C52D4C4BA8A4CF1D5BCD43B47BD342AFDFEEE98 (const RuntimeMethod* method)
{
	return ((  DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<DataHandler/<Start>d__9>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_m42D869E329879534E1C2B40AEAF92F6A1E10EC3C (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_m42D869E329879534E1C2B40AEAF92F6A1E10EC3C_gshared)(__this, ___stateMachine0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Item>::GetEnumerator()
inline Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8  List_1_GetEnumerator_m323B3FDC2653FA11AADAED7F49CBEB44C977D815 (List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8  (*) (List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Item>::get_Current()
inline Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * Enumerator_get_Current_m95BD367CEAEF23029FA353A22855F1CDFA017AE0_inline (Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 * __this, const RuntimeMethod* method)
{
	return ((  Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * (*) (Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<ButtonManager>(!!0,UnityEngine.Transform)
inline ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * Object_Instantiate_TisButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7_m4E924F4E103556BF0BEABEBFEFB6C65E62F6B51E (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * (*) (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// System.Void ButtonManager::set_ItemId(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ButtonManager_set_ItemId_m3E0F7FA67558B42D20BBCC3719AE307C358A6494_inline (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ButtonManager::set_ButtonTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_set_ButtonTexture_m8748AFB401636FA9102F4CC07523818545EDB530 (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Item>::MoveNext()
inline bool Enumerator_MoveNext_m63946011928B230BA31E23DCFF48B6E36A505001 (Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Item>::Dispose()
inline void Enumerator_Dispose_mBEE0C1F24839D6F17171C96500027E9ECF4DADD3 (Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Item>::get_Item(System.Int32)
inline Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * List_1_get_Item_m5786F1D66D61A9D68EF25DD7F728B8A51BC11B07_inline (List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * (*) (List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<DataHandler/<Get>d__13>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m77A26525E947FA203B22D7E5A9C03CCC4CA13AA8 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m77A26525E947FA203B22D7E5A9C03CCC4CA13AA8_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>> UnityEngine.AddressableAssets.Addressables::LoadResourceLocationsAsync(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44  Addressables_LoadResourceLocationsAsync_m38A9B8D08D669F0F3A9D8B0E78DF1CA2CEFD101B (RuntimeObject * ___key0, Type_t * ___type1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>::get_Task()
inline Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B * AsyncOperationHandle_1_get_Task_m59C8C7FAFFF97EAA6DB5AFDC6E9846876913C5C0 (AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B * (*) (AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44 *, const RuntimeMethod*))AsyncOperationHandle_1_get_Task_mB61A05CEE5697CC3A32352EA851DB2F324AEDB14_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>::GetAwaiter()
inline TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  Task_1_GetAwaiter_m5C1166C5CE2BB786D6A1C54FF317D008A03D4773 (Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  (*) (Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m6F6D2004B0A6DE2338DD7B1B406D79DD9779097C (TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>,DataHandler/<Get>d__13>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mF8EC761CFE2134BC14ADA3002C7B08031D6B4190 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D * ___awaiter0, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D *, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m50BCC66015BCA58E2AC30C4EC5B8A7984D9CE94E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_m36E7D667B37A4C6FEFA23ECD4FDB4DFEB18A1886 (TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<!!0> UnityEngine.AddressableAssets.Addressables::LoadAssetAsync<Item>(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation)
inline AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC  Addressables_LoadAssetAsync_TisItem_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E_mA7E5C6D5DF6FF6D24FF5F9A696B029DC2667884C (RuntimeObject* ___location0, const RuntimeMethod* method)
{
	return ((  AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC  (*) (RuntimeObject*, const RuntimeMethod*))Addressables_LoadAssetAsync_TisRuntimeObject_m5258F99C48AF547127E57BA5EA94BA0953E6046B_gshared)(___location0, method);
}
// System.Threading.Tasks.Task`1<!0> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<Item>::get_Task()
inline Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 * AsyncOperationHandle_1_get_Task_m86FE3E6B42B408F8DE08F8812BA82FD85BC71687 (AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 * (*) (AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC *, const RuntimeMethod*))AsyncOperationHandle_1_get_Task_mB61A05CEE5697CC3A32352EA851DB2F324AEDB14_gshared)(__this, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Item>::GetAwaiter()
inline TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  Task_1_GetAwaiter_mE59103FD7C3C5E4B2FBBBA59123A44D8CF4AEB95 (Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  (*) (Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Item>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m886735CC91BDB48D00571B327E575ABC125EEECB (TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Item>,DataHandler/<Get>d__13>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mE2893C559E68510A9D9200EF13DA0B56F93FC660 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 * ___awaiter0, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 *, U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m50BCC66015BCA58E2AC30C4EC5B8A7984D9CE94E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Item>::GetResult()
inline Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * TaskAwaiter_1_GetResult_m327D3C55971A0F7A1945AC7B4F4839BC055CE8F3 (TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 * __this, const RuntimeMethod* method)
{
	return ((  Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * (*) (TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Item>::Add(!0)
inline void List_1_Add_m6BAAD16F92F5550F5877A1E53F3E6036B36981A8 (List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * __this, Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 *, Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void DataHandler/<Get>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetU3Ed__13_MoveNext_m6AE9831F8D34A7EFE5BBA6270A07CA376FF3E2F0 (U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void DataHandler/<Get>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetU3Ed__13_SetStateMachine_mEF37747E7614738197C5A9AA1F13354DE4DD7007 (U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task DataHandler::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * DataHandler_Get_mE102D96DC525D193656EBFD287665BA6BE80EE53 (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, String_t* ___label0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,DataHandler/<Start>d__9>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_mD77FF4B17EA68FA19AC78C557B38E129C65151BB (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_mD77FF4B17EA68FA19AC78C557B38E129C65151BB_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void DataHandler::CreateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHandler_CreateButtons_mFEFA9C61FFF2CF856CC52305144E90CFD0FE08AC (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void DataHandler/<Start>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__9_MoveNext_m0C2313A38BCB645A301A3517C62365AD41E30E6D (U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void DataHandler/<Start>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__9_SetStateMachine_mD37D7D3BC08345601BD758380D56B4F4800A9BAA (U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void InputManager::CrosshairCalculation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CrosshairCalculation_mAC43D5BD9BE9F4D31A8B986242103BB246CF2BD7 (InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE * __this, const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  Input_GetTouch_m8082D8EE3A187488373CE6AC66A70B0AAD7CC23F (int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E (const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349 (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// System.Boolean InputManager::IsPointerOverUI(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManager_IsPointerOverUI_mD63C2429F8BD99C898A5F0760D6D3196D8127C94 (InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE * __this, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  ___touch0, const RuntimeMethod* method);
// UnityEngine.GameObject DataHandler::GetFurniture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * DataHandler_GetFurniture_mB1E4B0CCFD4903982F74A4DF4334E84E41E19EE7_inline (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m121A903CE81C0758A49C721F7C1668362BFAE7E4 (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___eventSystem0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F (Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointerEventData_set_position_m9BDCBF26C28C01F781ACB8FC87448CB4ADD0BBD5_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751 (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 *, const RuntimeMethod*))List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_RaycastAll_mF78E1781C8161DEEF24B6B3FCCC1037787F9A439 (EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___eventData0, List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * ___raycastResults1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mD0D3353E379B18064F3FB3B70FF9E2BBB000A4C6_inline (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 *, const RuntimeMethod*))List_1_get_Count_mD0D3353E379B18064F3FB3B70FF9E2BBB000A4C6_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ViewportToScreenPoint_m8B42382A0571F1F6F1162F3DA05A9317F903B657 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Ray,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_m65B31E8B76200A372429F98D2065E0D20CD7F768 (ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  List_1_get_Item_m609F549E39B918892C6EFCF1B91E21481650783C_inline (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  (*) (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 *, int32_t, const RuntimeMethod*))List_1_get_Item_m609F549E39B918892C6EFCF1B91E21481650783C_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ARRaycastHit_get_pose_m5CCFFED6C4A101EA42083A8661956A2B4B4C4A0D (ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_mC9860FBAA44709A84A1E2A2C9E6E8294C963098D (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 *, const RuntimeMethod*))List_1__ctor_mC9860FBAA44709A84A1E2A2C9E6E8294C963098D_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.HorizontalLayoutGroup>()
inline HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37 * Component_GetComponent_TisHorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37_m51EAB7C9ADECBFF0B60B0B66A48D089E90E340A5 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::get_spacing()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HorizontalOrVerticalLayoutGroup_get_spacing_mF0E72DE0E088D3A1C72141A06E671820DC56B199_inline (HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB * __this, const RuntimeMethod* method);
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * LayoutGroup_get_padding_m7C98F5699A1F144A3CD754094159DD61EDEA6D18_inline (LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.RectOffset::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<UIManager>()
inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * Object_FindObjectOfType_TisUIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_mD4144990CB4057AE2D0E32294B134FAB89601DBD (const RuntimeMethod* method)
{
	return ((  UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.GraphicRaycaster>()
inline GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * Component_GetComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_m6AA66514BB63EC8F4B5D7841E531B4D5DEA409F4 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * Component_GetComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m72CF57F3AD96E6CADECF5DDE79D3592A4D5E09A7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
inline Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618  List_1_GetEnumerator_m689B95EC04960C507E25F5842758B49FE45541EF (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618  (*) (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 *, const RuntimeMethod*))List_1_GetEnumerator_m689B95EC04960C507E25F5842758B49FE45541EF_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  Enumerator_get_Current_m895DC9AD128A1929934DB911B277ED64A97FFEEF_inline (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 * __this, const RuntimeMethod* method)
{
	return ((  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  (*) (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 *, const RuntimeMethod*))Enumerator_get_Current_m895DC9AD128A1929934DB911B277ED64A97FFEEF_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * RaycastResult_get_gameObject_m9D77DEDFF498BAFE29A5F88E9F238400D04C8FDD_inline (RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
inline bool Enumerator_MoveNext_m5F4608AD1CEDECCECCEE4114DE182F6C3DA77F72 (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 *, const RuntimeMethod*))Enumerator_MoveNext_m5F4608AD1CEDECCECCEE4114DE182F6C3DA77F72_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
inline void Enumerator_Dispose_mA8DAE58C2690B7583DD41332E2391D1E2A11C42A (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 *, const RuntimeMethod*))Enumerator_Dispose_mA8DAE58C2690B7583DD41332E2391D1E2A11C42A_gshared)(__this, method);
}
// System.Void dbScript::CreateDB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dbScript_CreateDB_mD42025CE79BB727956D0C0BDF6C7707ECA50573A (dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F * __this, const RuntimeMethod* method);
// System.Void Mono.Data.Sqlite.SqliteConnection::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SqliteConnection__ctor_m44A5A4B838E48589519716A4B43AC0E8345449A6 (SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * __this, String_t* ___connectionString0, const RuntimeMethod* method);
// Mono.Data.Sqlite.SqliteCommand Mono.Data.Sqlite.SqliteConnection::CreateCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365 * SqliteConnection_CreateCommand_mE54467D789E72E02161682F6456682545037F3A3 (SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void ButtonManager::set_ItemId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_set_ItemId_m3E0F7FA67558B42D20BBCC3719AE307C358A6494 (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _itemId = value;
		int32_t L_0 = ___value0;
		__this->set__itemId_7(L_0);
		// }
		return;
	}
}
// System.Void ButtonManager::set_ButtonTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_set_ButtonTexture_m8748AFB401636FA9102F4CC07523818545EDB530 (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method)
{
	{
		// _buttonTexture = value;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_0 = ___value0;
		__this->set__buttonTexture_8(L_0);
		// buttonImage.texture = _buttonTexture.texture;
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_1 = __this->get_buttonImage_5();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = __this->get__buttonTexture_8();
		NullCheck(L_2);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = Sprite_get_texture_mA1FF8462BBB398DC8B3F0F92B2AB41BDA6AF69A5(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		RawImage_set_texture_mA09F1C8E2EBCBE1D2A06DA84BC28FB1F9ED58977(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Start_mD2AC593C875290FECA8ABABD812F179587BD48BA (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonManager_Start_mD2AC593C875290FECA8ABABD812F179587BD48BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btn = GetComponent<Button>();
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C(__this, /*hidden argument*/Component_GetComponent_TisButton_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_m95916328C175634DC742DD13D032F149F1FBF58C_RuntimeMethod_var);
		__this->set_btn_4(L_0);
		// btn.onClick.AddListener(SelectObject);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_1 = __this->get_btn_4();
		NullCheck(L_1);
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_2 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline(L_1, /*hidden argument*/NULL);
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_3 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_3, __this, (intptr_t)((intptr_t)ButtonManager_SelectObject_mB4937B8D110013000EA8C719F89A5AFBA0A5384A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_Update_mC6EB7DA6FC255BE0DF3F203614C74CA067C43D8B (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ButtonManager_Update_mC6EB7DA6FC255BE0DF3F203614C74CA067C43D8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(UIManager.Instance.OnEntered(gameObject))
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = UIManager_get_Instance_mF35995E42E3F6A065E6AA83D15551B71F2867041(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = UIManager_OnEntered_m3DF9AE2EE416E3BA3CC6C9BB24AD3513F6967111(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// transform.localScale = Vector3.one * 2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, (2.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// transform.localScale = Vector3.one;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::SelectObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_SelectObject_mB4937B8D110013000EA8C719F89A5AFBA0A5384A (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, const RuntimeMethod* method)
{
	{
		// DataHandler.Instance.SetFurniture(_itemId);
		DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_0 = DataHandler_get_Instance_mB30D79DD71C99972061EB4F3484F4DF1B07A2153(/*hidden argument*/NULL);
		int32_t L_1 = __this->get__itemId_7();
		NullCheck(L_0);
		DataHandler_SetFurniture_m69A38453986BB69709E42C2F1DBB393D5882D62E(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager__ctor_mCA10FA90D60B650C97E47EF890B7902F60657DBA (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// DataHandler DataHandler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * DataHandler_get_Instance_mB30D79DD71C99972061EB4F3484F4DF1B07A2153 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataHandler_get_Instance_mB30D79DD71C99972061EB4F3484F4DF1B07A2153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_0 = ((DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_StaticFields*)il2cpp_codegen_static_fields_for(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_il2cpp_TypeInfo_var))->get_instance_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// instance = FindObjectOfType<DataHandler>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_2 = Object_FindObjectOfType_TisDataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_m3C52D4C4BA8A4CF1D5BCD43B47BD342AFDFEEE98(/*hidden argument*/Object_FindObjectOfType_TisDataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_m3C52D4C4BA8A4CF1D5BCD43B47BD342AFDFEEE98_RuntimeMethod_var);
		((DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_StaticFields*)il2cpp_codegen_static_fields_for(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_il2cpp_TypeInfo_var))->set_instance_10(L_2);
	}

IL_0017:
	{
		// return instance;
		DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_3 = ((DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_StaticFields*)il2cpp_codegen_static_fields_for(DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5_il2cpp_TypeInfo_var))->get_instance_10();
		return L_3;
	}
}
// System.Void DataHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHandler_Start_m8FC5E573BA1ED49194D22093AB5A9DD87B8266C8 (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataHandler_Start_m8FC5E573BA1ED49194D22093AB5A9DD87B8266C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_m42D869E329879534E1C2B40AEAF92F6A1E10EC3C((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_m42D869E329879534E1C2B40AEAF92F6A1E10EC3C_RuntimeMethod_var);
		return;
	}
}
// System.Void DataHandler::CreateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHandler_CreateButtons_mFEFA9C61FFF2CF856CC52305144E90CFD0FE08AC (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataHandler_CreateButtons_mFEFA9C61FFF2CF856CC52305144E90CFD0FE08AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (Item i in _items)
		List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * L_0 = __this->get__items_7();
		NullCheck(L_0);
		Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8  L_1 = List_1_GetEnumerator_m323B3FDC2653FA11AADAED7F49CBEB44C977D815(L_0, /*hidden argument*/List_1_GetEnumerator_m323B3FDC2653FA11AADAED7F49CBEB44C977D815_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0051;
		}

IL_000e:
		{
			// foreach (Item i in _items)
			Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * L_2 = Enumerator_get_Current_m95BD367CEAEF23029FA353A22855F1CDFA017AE0_inline((Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m95BD367CEAEF23029FA353A22855F1CDFA017AE0_RuntimeMethod_var);
			V_1 = L_2;
			// ButtonManager b = Instantiate(buttonPrefab, buttonContainer.transform);
			ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * L_3 = __this->get_buttonPrefab_5();
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_buttonContainer_6();
			NullCheck(L_4);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * L_6 = Object_Instantiate_TisButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7_m4E924F4E103556BF0BEABEBFEFB6C65E62F6B51E(L_3, L_5, /*hidden argument*/Object_Instantiate_TisButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7_m4E924F4E103556BF0BEABEBFEFB6C65E62F6B51E_RuntimeMethod_var);
			// b.ItemId = currentId;
			ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * L_7 = L_6;
			int32_t L_8 = __this->get_currentId_9();
			NullCheck(L_7);
			ButtonManager_set_ItemId_m3E0F7FA67558B42D20BBCC3719AE307C358A6494_inline(L_7, L_8, /*hidden argument*/NULL);
			// b.ButtonTexture = i.itemImage;
			Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * L_9 = V_1;
			NullCheck(L_9);
			Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_10 = L_9->get_itemImage_6();
			NullCheck(L_7);
			ButtonManager_set_ButtonTexture_m8748AFB401636FA9102F4CC07523818545EDB530(L_7, L_10, /*hidden argument*/NULL);
			// currentId++;
			int32_t L_11 = __this->get_currentId_9();
			__this->set_currentId_9(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		}

IL_0051:
		{
			// foreach (Item i in _items)
			bool L_12 = Enumerator_MoveNext_m63946011928B230BA31E23DCFF48B6E36A505001((Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m63946011928B230BA31E23DCFF48B6E36A505001_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_000e;
			}
		}

IL_005a:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBEE0C1F24839D6F17171C96500027E9ECF4DADD3((Enumerator_t6A30F96CD81EE055290BA3355AA6CC7CFE5647A8 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mBEE0C1F24839D6F17171C96500027E9ECF4DADD3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void DataHandler::SetFurniture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHandler_SetFurniture_m69A38453986BB69709E42C2F1DBB393D5882D62E (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataHandler_SetFurniture_m69A38453986BB69709E42C2F1DBB393D5882D62E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// furniture = _items[id].itemPrefab;
		List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * L_0 = __this->get__items_7();
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * L_2 = List_1_get_Item_m5786F1D66D61A9D68EF25DD7F728B8A51BC11B07_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m5786F1D66D61A9D68EF25DD7F728B8A51BC11B07_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2->get_itemPrefab_5();
		__this->set_furniture_4(L_3);
		// }
		return;
	}
}
// UnityEngine.GameObject DataHandler::GetFurniture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * DataHandler_GetFurniture_mB1E4B0CCFD4903982F74A4DF4334E84E41E19EE7 (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, const RuntimeMethod* method)
{
	{
		// return furniture;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_furniture_4();
		return L_0;
	}
}
// System.Threading.Tasks.Task DataHandler::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * DataHandler_Get_mE102D96DC525D193656EBFD287665BA6BE80EE53 (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, String_t* ___label0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataHandler_Get_mE102D96DC525D193656EBFD287665BA6BE80EE53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		String_t* L_0 = ___label0;
		(&V_0)->set_label_2(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_1 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0  L_2 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncTaskMethodBuilder_Start_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m77A26525E947FA203B22D7E5A9C03CCC4CA13AA8((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_m77A26525E947FA203B22D7E5A9C03CCC4CA13AA8_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_4 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_5 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void DataHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataHandler__ctor_m2C57505210EA4E045C271DFB77C4E1FD428A8EB5 (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void DataHandler/<Get>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetU3Ed__13_MoveNext_m6AE9831F8D34A7EFE5BBA6270A07CA376FF3E2F0 (U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetU3Ed__13_MoveNext_m6AE9831F8D34A7EFE5BBA6270A07CA376FF3E2F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * V_5 = NULL;
	TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  V_6;
	memset((&V_6), 0, sizeof(V_6));
	AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_005c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_008c;
			}
		}

IL_0015:
		{
			// var locations = await Addressables.LoadResourceLocationsAsync(label).Task;
			String_t* L_4 = __this->get_label_2();
			IL2CPP_RUNTIME_CLASS_INIT(Addressables_t8AD39E84886280F198451740C05CA7E8AF2C977D_il2cpp_TypeInfo_var);
			AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44  L_5 = Addressables_LoadResourceLocationsAsync_m38A9B8D08D669F0F3A9D8B0E78DF1CA2CEFD101B(L_4, (Type_t *)NULL, /*hidden argument*/NULL);
			V_4 = L_5;
			Task_1_t94601098138C400CBEA1AAA3C91A9DE73498714B * L_6 = AsyncOperationHandle_1_get_Task_m59C8C7FAFFF97EAA6DB5AFDC6E9846876913C5C0((AsyncOperationHandle_1_t9AC3A996AF64C7E0064FA1CF4337D5A471F36C44 *)(&V_4), /*hidden argument*/AsyncOperationHandle_1_get_Task_m59C8C7FAFFF97EAA6DB5AFDC6E9846876913C5C0_RuntimeMethod_var);
			NullCheck(L_6);
			TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  L_7 = Task_1_GetAwaiter_m5C1166C5CE2BB786D6A1C54FF317D008A03D4773(L_6, /*hidden argument*/Task_1_GetAwaiter_m5C1166C5CE2BB786D6A1C54FF317D008A03D4773_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8 = TaskAwaiter_1_get_IsCompleted_m6F6D2004B0A6DE2338DD7B1B406D79DD9779097C((TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m6F6D2004B0A6DE2338DD7B1B406D79DD9779097C_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0078;
			}
		}

IL_0039:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  L_10 = V_3;
			__this->set_U3CU3Eu__1_4(L_10);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mF8EC761CFE2134BC14ADA3002C7B08031D6B4190((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_11, (TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D *)(&V_3), (U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mF8EC761CFE2134BC14ADA3002C7B08031D6B4190_RuntimeMethod_var);
			goto IL_0175;
		}

IL_005c:
		{
			TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D  L_12 = __this->get_U3CU3Eu__1_4();
			V_3 = L_12;
			TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D * L_13 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0078:
		{
			RuntimeObject* L_15 = TaskAwaiter_1_GetResult_m36E7D667B37A4C6FEFA23ECD4FDB4DFEB18A1886((TaskAwaiter_1_tD7233B50E2CCEE79CB9F7813840166B0121C7E3D *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m36E7D667B37A4C6FEFA23ECD4FDB4DFEB18A1886_RuntimeMethod_var);
			V_2 = L_15;
			// foreach (var location in locations)
			RuntimeObject* L_16 = V_2;
			NullCheck(L_16);
			RuntimeObject* L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::GetEnumerator() */, IEnumerable_1_tB72CFA76D899A64C9F9ED8117F0715F3A7280FC0_il2cpp_TypeInfo_var, L_16);
			__this->set_U3CU3E7__wrap1_5(L_17);
		}

IL_008c:
		{
		}

IL_008d:
		try
		{ // begin try (depth: 2)
			{
				int32_t L_18 = V_0;
				if ((((int32_t)L_18) == ((int32_t)1)))
				{
					goto IL_00e3;
				}
			}

IL_0091:
			{
				goto IL_0116;
			}

IL_0096:
			{
				// foreach (var location in locations)
				RuntimeObject* L_19 = __this->get_U3CU3E7__wrap1_5();
				NullCheck(L_19);
				RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation>::get_Current() */, IEnumerator_1_t1346A79FE5C47E4672969BF2C01B24DEF2E36C12_il2cpp_TypeInfo_var, L_19);
				// var obj = await Addressables.LoadAssetAsync<Item>(location).Task;
				IL2CPP_RUNTIME_CLASS_INIT(Addressables_t8AD39E84886280F198451740C05CA7E8AF2C977D_il2cpp_TypeInfo_var);
				AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC  L_21 = Addressables_LoadAssetAsync_TisItem_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E_mA7E5C6D5DF6FF6D24FF5F9A696B029DC2667884C(L_20, /*hidden argument*/Addressables_LoadAssetAsync_TisItem_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E_mA7E5C6D5DF6FF6D24FF5F9A696B029DC2667884C_RuntimeMethod_var);
				V_7 = L_21;
				Task_1_t7BABCD60C281CFE2B4C41F14FA7CF9CE19709842 * L_22 = AsyncOperationHandle_1_get_Task_m86FE3E6B42B408F8DE08F8812BA82FD85BC71687((AsyncOperationHandle_1_tC09B17367CE3E1985D42301F57E59AAFC20B63BC *)(&V_7), /*hidden argument*/AsyncOperationHandle_1_get_Task_m86FE3E6B42B408F8DE08F8812BA82FD85BC71687_RuntimeMethod_var);
				NullCheck(L_22);
				TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  L_23 = Task_1_GetAwaiter_mE59103FD7C3C5E4B2FBBBA59123A44D8CF4AEB95(L_22, /*hidden argument*/Task_1_GetAwaiter_mE59103FD7C3C5E4B2FBBBA59123A44D8CF4AEB95_RuntimeMethod_var);
				V_6 = L_23;
				bool L_24 = TaskAwaiter_1_get_IsCompleted_m886735CC91BDB48D00571B327E575ABC125EEECB((TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m886735CC91BDB48D00571B327E575ABC125EEECB_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0100;
				}
			}

IL_00bf:
			{
				int32_t L_25 = 1;
				V_0 = L_25;
				__this->set_U3CU3E1__state_0(L_25);
				TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  L_26 = V_6;
				__this->set_U3CU3Eu__2_6(L_26);
				AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mE2893C559E68510A9D9200EF13DA0B56F93FC660((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_27, (TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 *)(&V_6), (U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186_TisU3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0_mE2893C559E68510A9D9200EF13DA0B56F93FC660_RuntimeMethod_var);
				IL2CPP_LEAVE(0x175, FINALLY_0128);
			}

IL_00e3:
			{
				TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186  L_28 = __this->get_U3CU3Eu__2_6();
				V_6 = L_28;
				TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 * L_29 = __this->get_address_of_U3CU3Eu__2_6();
				il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 ));
				int32_t L_30 = (-1);
				V_0 = L_30;
				__this->set_U3CU3E1__state_0(L_30);
			}

IL_0100:
			{
				Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * L_31 = TaskAwaiter_1_GetResult_m327D3C55971A0F7A1945AC7B4F4839BC055CE8F3((TaskAwaiter_1_t6FC64E5382C02F960071BEF5F0B00CFBCCE71186 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m327D3C55971A0F7A1945AC7B4F4839BC055CE8F3_RuntimeMethod_var);
				V_5 = L_31;
				// _items.Add(obj);
				DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_32 = V_1;
				NullCheck(L_32);
				List_1_t8E134E055F8BA137A4FDDDF1D72350E5AC13A290 * L_33 = L_32->get__items_7();
				Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * L_34 = V_5;
				NullCheck(L_33);
				List_1_Add_m6BAAD16F92F5550F5877A1E53F3E6036B36981A8(L_33, L_34, /*hidden argument*/List_1_Add_m6BAAD16F92F5550F5877A1E53F3E6036B36981A8_RuntimeMethod_var);
			}

IL_0116:
			{
				// foreach (var location in locations)
				RuntimeObject* L_35 = __this->get_U3CU3E7__wrap1_5();
				NullCheck(L_35);
				bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0096;
				}
			}

IL_0126:
			{
				IL2CPP_LEAVE(0x140, FINALLY_0128);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0128;
		}

FINALLY_0128:
		{ // begin finally (depth: 2)
			{
				int32_t L_37 = V_0;
				if ((((int32_t)L_37) >= ((int32_t)0)))
				{
					goto IL_013f;
				}
			}

IL_012c:
			{
				RuntimeObject* L_38 = __this->get_U3CU3E7__wrap1_5();
				if (!L_38)
				{
					goto IL_013f;
				}
			}

IL_0134:
			{
				RuntimeObject* L_39 = __this->get_U3CU3E7__wrap1_5();
				NullCheck(L_39);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_39);
			}

IL_013f:
			{
				IL2CPP_END_FINALLY(296)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(296)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x175, IL_0175)
			IL2CPP_JUMP_TBL(0x140, IL_0140)
		}

IL_0140:
		{
			__this->set_U3CU3E7__wrap1_5((RuntimeObject*)NULL);
			goto IL_0162;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0149;
		throw e;
	}

CATCH_0149:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_40 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_41 = V_8;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_40, L_41, /*hidden argument*/NULL);
		goto IL_0175;
	} // end catch (depth: 1)

IL_0162:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_42 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_42, /*hidden argument*/NULL);
	}

IL_0175:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetU3Ed__13_MoveNext_m6AE9831F8D34A7EFE5BBA6270A07CA376FF3E2F0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * _thisAdjusted = reinterpret_cast<U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *>(__this + _offset);
	U3CGetU3Ed__13_MoveNext_m6AE9831F8D34A7EFE5BBA6270A07CA376FF3E2F0(_thisAdjusted, method);
}
// System.Void DataHandler/<Get>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetU3Ed__13_SetStateMachine_mEF37747E7614738197C5A9AA1F13354DE4DD7007 (U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetU3Ed__13_SetStateMachine_mEF37747E7614738197C5A9AA1F13354DE4DD7007_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 * _thisAdjusted = reinterpret_cast<U3CGetU3Ed__13_tF987D09083BFE084304F8803A65B915E7A3AD6D0 *>(__this + _offset);
	U3CGetU3Ed__13_SetStateMachine_mEF37747E7614738197C5A9AA1F13354DE4DD7007(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DataHandler/<Start>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__9_MoveNext_m0C2313A38BCB645A301A3517C62365AD41E30E6D (U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__9_MoveNext_m0C2313A38BCB645A301A3517C62365AD41E30E6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004c;
			}
		}

IL_0011:
		{
			// await Get(label);
			DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_3 = V_1;
			DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->get_label_8();
			NullCheck(L_3);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_6 = DataHandler_Get_mE102D96DC525D193656EBFD287665BA6BE80EE53(L_3, L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_7 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			bool L_8 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_0068;
			}
		}

IL_002c:
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->set_U3CU3E1__state_0(L_9);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_10 = V_2;
			__this->set_U3CU3Eu__1_3(L_10);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_11 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_mD77FF4B17EA68FA19AC78C557B38E129C65151BB((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_11, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77_mD77FF4B17EA68FA19AC78C557B38E129C65151BB_RuntimeMethod_var);
			goto IL_00a1;
		}

IL_004c:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_12 = __this->get_U3CU3Eu__1_3();
			V_2 = L_12;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_13 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->set_U3CU3E1__state_0(L_14);
		}

IL_0068:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// CreateButtons();
			DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_15 = V_1;
			NullCheck(L_15);
			DataHandler_CreateButtons_mFEFA9C61FFF2CF856CC52305144E90CFD0FE08AC(L_15, /*hidden argument*/NULL);
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0077;
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_17 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_16, L_17, /*hidden argument*/NULL);
		goto IL_00a1;
	} // end catch (depth: 1)

IL_008e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_18, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__9_MoveNext_m0C2313A38BCB645A301A3517C62365AD41E30E6D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 *>(__this + _offset);
	U3CStartU3Ed__9_MoveNext_m0C2313A38BCB645A301A3517C62365AD41E30E6D(_thisAdjusted, method);
}
// System.Void DataHandler/<Start>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__9_SetStateMachine_mD37D7D3BC08345601BD758380D56B4F4800A9BAA (U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__9_SetStateMachine_mD37D7D3BC08345601BD758380D56B4F4800A9BAA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__9_t80C9A3A3BCE753BE331FFAC51E4BCBEDFD4FEB77 *>(__this + _offset);
	U3CStartU3Ed__9_SetStateMachine_mD37D7D3BC08345601BD758380D56B4F4800A9BAA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Start_m9EAB4933E74781D59CB95E9FCD6580F9A1EDA14E (InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void InputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Update_m813F65B6A0D8A18ACFAFEFF8CB3F7E1FE116BCA7 (InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputManager_Update_m813F65B6A0D8A18ACFAFEFF8CB3F7E1FE116BCA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CrosshairCalculation();
		InputManager_CrosshairCalculation_mAC43D5BD9BE9F4D31A8B986242103BB246CF2BD7(__this, /*hidden argument*/NULL);
		// touch = Input.GetTouch(0);
		Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  L_0 = Input_GetTouch_m8082D8EE3A187488373CE6AC66A70B0AAD7CC23F(0, /*hidden argument*/NULL);
		__this->set_touch_8(L_0);
		// touch = Input.GetTouch(0);
		Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  L_1 = Input_GetTouch_m8082D8EE3A187488373CE6AC66A70B0AAD7CC23F(0, /*hidden argument*/NULL);
		__this->set_touch_8(L_1);
		// if (Input.touchCount <= 0 || touch.phase != TouchPhase.Began)
		int32_t L_2 = Input_get_touchCount_m497E19AA4FA22DB659F631B20FAEF65572D1B44E(/*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 * L_3 = __this->get_address_of_touch_8();
		int32_t L_4 = Touch_get_phase_m759A61477ECBBD90A57E36F1166EB9340A0FE349((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}

IL_0033:
	{
		// return;
		return;
	}

IL_0034:
	{
		// if (IsPointerOverUI(touch)) return;
		Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  L_5 = __this->get_touch_8();
		bool L_6 = InputManager_IsPointerOverUI_mD63C2429F8BD99C898A5F0760D6D3196D8127C94(__this, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// if (IsPointerOverUI(touch)) return;
		return;
	}

IL_0043:
	{
		// Instantiate(DataHandler.Instance.GetFurniture(), pose.position, pose.rotation);
		DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * L_7 = DataHandler_get_Instance_mB30D79DD71C99972061EB4F3484F4DF1B07A2153(/*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = DataHandler_GetFurniture_mB1E4B0CCFD4903982F74A4DF4334E84E41E19EE7_inline(L_7, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_9 = __this->get_address_of_pose_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = L_9->get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_11 = __this->get_address_of_pose_9();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = L_11->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_8, L_10, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean InputManager::IsPointerOverUI(UnityEngine.Touch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputManager_IsPointerOverUI_mD63C2429F8BD99C898A5F0760D6D3196D8127C94 (InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE * __this, Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8  ___touch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputManager_IsPointerOverUI_mD63C2429F8BD99C898A5F0760D6D3196D8127C94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * V_0 = NULL;
	List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * V_1 = NULL;
	{
		// PointerEventData eventdata = new PointerEventData(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_1 = (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 *)il2cpp_codegen_object_new(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m121A903CE81C0758A49C721F7C1668362BFAE7E4(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// eventdata.position = new Vector2(touch.position.x, touch.position.y);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&___touch0), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Touch_get_position_m2E60676112DA3628CF2DC76418A275C7FE521D8F((Touch_tAACD32535FF3FE5DD91125E0B6987B93C68D2DE8 *)(&___touch0), /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), L_4, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		PointerEventData_set_position_m9BDCBF26C28C01F781ACB8FC87448CB4ADD0BBD5_inline(L_2, L_7, /*hidden argument*/NULL);
		// List <RaycastResult> results = new List<RaycastResult>();
		List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * L_8 = (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 *)il2cpp_codegen_object_new(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52_il2cpp_TypeInfo_var);
		List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751(L_8, /*hidden argument*/List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751_RuntimeMethod_var);
		V_1 = L_8;
		// EventSystem.current.RaycastAll(eventdata, results);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_9 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_10 = V_0;
		List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * L_11 = V_1;
		NullCheck(L_9);
		EventSystem_RaycastAll_mF78E1781C8161DEEF24B6B3FCCC1037787F9A439(L_9, L_10, L_11, /*hidden argument*/NULL);
		// return results.Count > 0;
		List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_mD0D3353E379B18064F3FB3B70FF9E2BBB000A4C6_inline(L_12, /*hidden argument*/List_1_get_Count_mD0D3353E379B18064F3FB3B70FF9E2BBB000A4C6_RuntimeMethod_var);
		return (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void InputManager::CrosshairCalculation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_CrosshairCalculation_mAC43D5BD9BE9F4D31A8B986242103BB246CF2BD7 (InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputManager_CrosshairCalculation_mAC43D5BD9BE9F4D31A8B986242103BB246CF2BD7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 origin = arCamera.ViewportToScreenPoint(new Vector3(0.5f, 0.5f, 0));
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_arCamera_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Camera_ViewportToScreenPoint_m8B42382A0571F1F6F1162F3DA05A9317F903B657(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Ray ray = arCamera.ScreenPointToRay(origin);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = __this->get_arCamera_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		NullCheck(L_3);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_5 = Camera_ScreenPointToRay_m27638E78502DB6D6D7113F81AF7C210773B828F3(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if(_raycastManager.Raycast(ray,_hits))
		ARRaycastManager_t81A9513150BA5BE536DF064F1C6DE73349A60BE7 * L_6 = __this->get__raycastManager_5();
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_7 = V_1;
		List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * L_8 = __this->get__hits_7();
		NullCheck(L_6);
		bool L_9 = ARRaycastManager_Raycast_m65B31E8B76200A372429F98D2065E0D20CD7F768(L_6, L_7, L_8, ((int32_t)127), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		// pose = _hits[0].pose;
		List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * L_10 = __this->get__hits_7();
		NullCheck(L_10);
		ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  L_11 = List_1_get_Item_m609F549E39B918892C6EFCF1B91E21481650783C_inline(L_10, 0, /*hidden argument*/List_1_get_Item_m609F549E39B918892C6EFCF1B91E21481650783C_RuntimeMethod_var);
		V_2 = L_11;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_12 = ARRaycastHit_get_pose_m5CCFFED6C4A101EA42083A8661956A2B4B4C4A0D((ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC *)(&V_2), /*hidden argument*/NULL);
		__this->set_pose_9(L_12);
		// crosshair.transform.position = pose.position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_crosshair_6();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_13, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_15 = __this->get_address_of_pose_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = L_15->get_position_0();
		NullCheck(L_14);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_14, L_16, /*hidden argument*/NULL);
		// crosshair.transform.eulerAngles = new Vector3(90, 0, 0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_crosshair_6();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_19), (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_18, L_19, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m92E656DB5CA317F9006F3CD8CE443B7D15EE2A47 (InputManager_t208BBEDF18F7B320FCB945FC0F5D757BEBC45ACE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputManager__ctor_m92E656DB5CA317F9006F3CD8CE443B7D15EE2A47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ARRaycastHit> _hits = new List<ARRaycastHit>();
		List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * L_0 = (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 *)il2cpp_codegen_object_new(List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6_il2cpp_TypeInfo_var);
		List_1__ctor_mC9860FBAA44709A84A1E2A2C9E6E8294C963098D(L_0, /*hidden argument*/List_1__ctor_mC9860FBAA44709A84A1E2A2C9E6E8294C963098D_RuntimeMethod_var);
		__this->set__hits_7(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m4587F3817E3192E11CFE1D1C63B8CF635C86ECF0 (Item_t1FD274D610B07F7F6E6AA093A93FB9E32210D36E * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// System.Void UIContentFitter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIContentFitter_Start_mA9344D95BA4D5B6A6FD927BC1FC44E31085D7245 (UIContentFitter_t85D27C896B0AD12D3735CB5BDCD81D7A085EB67E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIContentFitter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIContentFitter_Update_m66EA026E431E7978A223F8DCEBCFDCE7A1DEAE5D (UIContentFitter_t85D27C896B0AD12D3735CB5BDCD81D7A085EB67E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIContentFitter::Fit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIContentFitter_Fit_m102BC02691FDC2109FFAD35C3080766EDD3A1800 (UIContentFitter_t85D27C896B0AD12D3735CB5BDCD81D7A085EB67E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIContentFitter_Fit_m102BC02691FDC2109FFAD35C3080766EDD3A1800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37 * V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// HorizontalLayoutGroup hg = GetComponent<HorizontalLayoutGroup>();
		HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37 * L_0 = Component_GetComponent_TisHorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37_m51EAB7C9ADECBFF0B60B0B66A48D089E90E340A5(__this, /*hidden argument*/Component_GetComponent_TisHorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37_m51EAB7C9ADECBFF0B60B0B66A48D089E90E340A5_RuntimeMethod_var);
		V_0 = L_0;
		// int childCount = transform.childCount - 1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		// float childWidth = transform.GetChild(0).GetComponent<RectTransform>().rect.width;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_5 = Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103(L_4, /*hidden argument*/Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var);
		NullCheck(L_5);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_6 = RectTransform_get_rect_mE5F283FCB99A66403AC1F0607CA49C156D73A15E(L_5, /*hidden argument*/NULL);
		V_5 = L_6;
		float L_7 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_5), /*hidden argument*/NULL);
		V_2 = L_7;
		// float width = hg.spacing * childCount +
		//               childCount *childWidth+
		//               hg.padding.left +
		//               childWidth;
		HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37 * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = HorizontalOrVerticalLayoutGroup_get_spacing_mF0E72DE0E088D3A1C72141A06E671820DC56B199_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		float L_12 = V_2;
		HorizontalLayoutGroup_tEFAFA0DDCCE4FC89CC2C0BE96E7C025D243CFE37 * L_13 = V_0;
		NullCheck(L_13);
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_14 = LayoutGroup_get_padding_m7C98F5699A1F144A3CD754094159DD61EDEA6D18_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = RectOffset_get_left_mA86EC00866C1940134873E3A1565A1F700DE67AD(L_14, /*hidden argument*/NULL);
		float L_16 = V_2;
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(((float)((float)L_10))))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_11))), (float)L_12)))), (float)(((float)((float)L_15))))), (float)L_16));
		// Vector2 size = GetComponent<RectTransform>().sizeDelta;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_17 = Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var);
		NullCheck(L_17);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = RectTransform_get_sizeDelta_mDA0A3E73679143B1B52CE2F9A417F90CB9F3DAFF(L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		// GetComponent<RectTransform>().sizeDelta = new Vector2(width,size.y);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_19 = Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_mEF939F54B6B56187EC11E16F51DCB12EB62C2103_RuntimeMethod_var);
		float L_20 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = V_4;
		float L_22 = L_21.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_23), L_20, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_sizeDelta_m7729BA56325BA667F0F7D60D642124F7909F1302(L_19, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIContentFitter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIContentFitter__ctor_m306079268F2551C80122588E1D6B8AD1FDDCD842 (UIContentFitter_t85D27C896B0AD12D3735CB5BDCD81D7A085EB67E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UIManager UIManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * UIManager_get_Instance_mF35995E42E3F6A065E6AA83D15551B71F2867041 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_get_Instance_mF35995E42E3F6A065E6AA83D15551B71F2867041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = ((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->get_instance_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// instance = FindObjectOfType<UIManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_2 = Object_FindObjectOfType_TisUIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_mD4144990CB4057AE2D0E32294B134FAB89601DBD(/*hidden argument*/Object_FindObjectOfType_TisUIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_mD4144990CB4057AE2D0E32294B134FAB89601DBD_RuntimeMethod_var);
		((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->set_instance_8(L_2);
	}

IL_0017:
	{
		// return instance;
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_3 = ((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->get_instance_8();
		return L_3;
	}
}
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mA404E1D4B4AA55F22307F16D7D7842CE7580DD0B (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Start_mA404E1D4B4AA55F22307F16D7D7842CE7580DD0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// raycaster = GetComponent<GraphicRaycaster>();
		GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * L_0 = Component_GetComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_m6AA66514BB63EC8F4B5D7841E531B4D5DEA409F4(__this, /*hidden argument*/Component_GetComponent_TisGraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83_m6AA66514BB63EC8F4B5D7841E531B4D5DEA409F4_RuntimeMethod_var);
		__this->set_raycaster_4(L_0);
		// eventSystem = GetComponent<EventSystem>();
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_1 = Component_GetComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m72CF57F3AD96E6CADECF5DDE79D3592A4D5E09A7(__this, /*hidden argument*/Component_GetComponent_TisEventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_m72CF57F3AD96E6CADECF5DDE79D3592A4D5E09A7_RuntimeMethod_var);
		__this->set_eventSystem_7(L_1);
		// pData = new PointerEventData(eventSystem);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_2 = __this->get_eventSystem_7();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_3 = (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 *)il2cpp_codegen_object_new(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m121A903CE81C0758A49C721F7C1668362BFAE7E4(L_3, L_2, /*hidden argument*/NULL);
		__this->set_pData_6(L_3);
		// pData.position = selectionPoint.position;
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_4 = __this->get_pData_6();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_selectionPoint_5();
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		PointerEventData_set_position_m9BDCBF26C28C01F781ACB8FC87448CB4ADD0BBD5_inline(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_mF2BE17F5A2488C24BD7640843202BB54E5E8AD3C (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean UIManager::OnEntered(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_OnEntered_m3DF9AE2EE416E3BA3CC6C9BB24AD3513F6967111 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___button0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_OnEntered_m3DF9AE2EE416E3BA3CC6C9BB24AD3513F6967111_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * V_0 = NULL;
	Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// List<RaycastResult> results = new List<RaycastResult>();
		List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * L_0 = (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 *)il2cpp_codegen_object_new(List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52_il2cpp_TypeInfo_var);
		List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751(L_0, /*hidden argument*/List_1__ctor_m0B79BD3D65106F726053853625E32CD4EB8B7751_RuntimeMethod_var);
		V_0 = L_0;
		// raycaster.Raycast(pData, results);
		GraphicRaycaster_t9AA334998113578A7FC0B27D7D6FEF19E74B9D83 * L_1 = __this->get_raycaster_4();
		PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * L_2 = __this->get_pData_6();
		List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * L_3 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 *, List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_1, L_2, L_3);
		// foreach (RaycastResult result in results)
		List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * L_4 = V_0;
		NullCheck(L_4);
		Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618  L_5 = List_1_GetEnumerator_m689B95EC04960C507E25F5842758B49FE45541EF(L_4, /*hidden argument*/List_1_GetEnumerator_m689B95EC04960C507E25F5842758B49FE45541EF_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_0021:
		{
			// foreach (RaycastResult result in results)
			RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  L_6 = Enumerator_get_Current_m895DC9AD128A1929934DB911B277ED64A97FFEEF_inline((Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m895DC9AD128A1929934DB911B277ED64A97FFEEF_RuntimeMethod_var);
			V_2 = L_6;
			// if(result.gameObject == button)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = RaycastResult_get_gameObject_m9D77DEDFF498BAFE29A5F88E9F238400D04C8FDD_inline((RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 *)(&V_2), /*hidden argument*/NULL);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = ___button0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_003c;
			}
		}

IL_0038:
		{
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x57, FINALLY_0047);
		}

IL_003c:
		{
			// foreach (RaycastResult result in results)
			bool L_10 = Enumerator_MoveNext_m5F4608AD1CEDECCECCEE4114DE182F6C3DA77F72((Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m5F4608AD1CEDECCECCEE4114DE182F6C3DA77F72_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0021;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA8DAE58C2690B7583DD41332E2391D1E2A11C42A((Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mA8DAE58C2690B7583DD41332E2391D1E2A11C42A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// return false;
		return (bool)0;
	}

IL_0057:
	{
		// }
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_m5E5065654115BEE5B00F84AC64469D5D642351A3 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void dbScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dbScript_Start_mE48BC57E4B6EFC39FC32C09B0E95698AFB94514F (dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F * __this, const RuntimeMethod* method)
{
	{
		// CreateDB();
		dbScript_CreateDB_mD42025CE79BB727956D0C0BDF6C7707ECA50573A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void dbScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dbScript_Update_mE7F8247AB8F4A3CFDCD74C28432F0728550D7E7D (dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void dbScript::CreateDB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dbScript_CreateDB_mD42025CE79BB727956D0C0BDF6C7707ECA50573A (dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (dbScript_CreateDB_mD42025CE79BB727956D0C0BDF6C7707ECA50573A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * V_0 = NULL;
	SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var connection = new SqliteConnection(dbName)){
		String_t* L_0 = __this->get_dbName_4();
		SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * L_1 = (SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 *)il2cpp_codegen_object_new(SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2_il2cpp_TypeInfo_var);
		SqliteConnection__ctor_m44A5A4B838E48589519716A4B43AC0E8345449A6(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			// connection.Open();
			SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * L_2 = V_0;
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(20 /* System.Void System.Data.Common.DbConnection::Open() */, L_2);
			// using (var command = connection.CreateCommand()){
			SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * L_3 = V_0;
			NullCheck(L_3);
			SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365 * L_4 = SqliteConnection_CreateCommand_mE54467D789E72E02161682F6456682545037F3A3(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
		}

IL_0019:
		try
		{ // begin try (depth: 2)
			// command.CommandText = "CREATE TABLE IF NOT EXISTS products ( id_    INTEGER NOT NULL UNIQUE, Name    TEXT NOT NULL, Desc    TEXT NOT NULL, PRIMARY KEY(id_) )";
			SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365 * L_5 = V_1;
			NullCheck(L_5);
			VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Data.Common.DbCommand::set_CommandText(System.String) */, L_5, _stringLiteral098BADDC0B49A4B96D92F4D0FF510BBEBDA88216);
			// command.ExecuteNonQuery();
			SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365 * L_6 = V_1;
			NullCheck(L_6);
			VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Data.Common.DbCommand::ExecuteNonQuery() */, L_6);
			// }
			IL2CPP_LEAVE(0x37, FINALLY_002d);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002d;
		}

FINALLY_002d:
		{ // begin finally (depth: 2)
			{
				SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365 * L_7 = V_1;
				if (!L_7)
				{
					goto IL_0036;
				}
			}

IL_0030:
			{
				SqliteCommand_t200B8B48F8FC6F3537B5CC4C7D325708EE696365 * L_8 = V_1;
				NullCheck(L_8);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
			}

IL_0036:
			{
				IL2CPP_END_FINALLY(45)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(45)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x37, IL_0037)
		}

IL_0037:
		{
			// connection.Close();
			SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * L_9 = V_0;
			NullCheck(L_9);
			VirtActionInvoker0::Invoke(15 /* System.Void System.Data.Common.DbConnection::Close() */, L_9);
			// }
			IL2CPP_LEAVE(0x49, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0048;
			}
		}

IL_0042:
		{
			SqliteConnection_t655FF6D5EC3B19CBB105B23F15A3611D086F8CC2 * L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void dbScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dbScript__ctor_mD52EED314FF4DC2660A37429C98C436C2EBC8A43 (dbScript_tDC23E908B1103545D6C5EEE80A516464A5DC183F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (dbScript__ctor_mD52EED314FF4DC2660A37429C98C436C2EBC8A43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string dbName = "URI=file: testDB.db";
		__this->set_dbName_4(_stringLiteral45B41A7F9BAE805CD31B4A158438AC12A794A265);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817_inline (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ButtonManager_set_ItemId_m3E0F7FA67558B42D20BBCC3719AE307C358A6494_inline (ButtonManager_tCF00C0938E54E2787DF86D057BE1F757F5B810F7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _itemId = value;
		int32_t L_0 = ___value0;
		__this->set__itemId_7(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * DataHandler_GetFurniture_mB1E4B0CCFD4903982F74A4DF4334E84E41E19EE7_inline (DataHandler_tC625D0AA20CDAEBC4BE004793ABF07CA284BFAE5 * __this, const RuntimeMethod* method)
{
	{
		// return furniture;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_furniture_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void PointerEventData_set_position_m9BDCBF26C28C01F781ACB8FC87448CB4ADD0BBD5_inline (PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float HorizontalOrVerticalLayoutGroup_get_spacing_mF0E72DE0E088D3A1C72141A06E671820DC56B199_inline (HorizontalOrVerticalLayoutGroup_tFE5C3DB19C2CC4906B3E5D5F4E1966CB585174AB * __this, const RuntimeMethod* method)
{
	{
		// public float spacing { get { return m_Spacing; } set { SetProperty(ref m_Spacing, value); } }
		float L_0 = __this->get_m_Spacing_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * LayoutGroup_get_padding_m7C98F5699A1F144A3CD754094159DD61EDEA6D18_inline (LayoutGroup_t9E072B95DA6476C487C0B07A815291249025C0E4 * __this, const RuntimeMethod* method)
{
	{
		// public RectOffset padding { get { return m_Padding; } set { SetProperty(ref m_Padding, value); } }
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_0 = __this->get_m_Padding_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * RaycastResult_get_gameObject_m9D77DEDFF498BAFE29A5F88E9F238400D04C8FDD_inline (RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_m_GameObject_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD0D3353E379B18064F3FB3B70FF9E2BBB000A4C6_gshared_inline (List_1_t1BB31D71CB8736DC35CCD9FFB9228FAFD427EB52 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  List_1_get_Item_m609F549E39B918892C6EFCF1B91E21481650783C_gshared_inline (List_1_tEB129E1534E65DF322C5B5AAECF0CA8A562063F6 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94* L_2 = (ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94*)__this->get__items_1();
		int32_t L_3 = ___index0;
		ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ARRaycastHitU5BU5D_t2DDAC1FD38DF991C190FAEF8144A68AFBC541E94*)L_2, (int32_t)L_3);
		return (ARRaycastHit_t509D3DB25CAC944ED3D3092C0A6096F85DDDD1BC )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  Enumerator_get_Current_m895DC9AD128A1929934DB911B277ED64A97FFEEF_gshared_inline (Enumerator_tA27E2343069402A698ECAD46C2DC47ACD7786618 * __this, const RuntimeMethod* method)
{
	{
		RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  L_0 = (RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 )__this->get_current_3();
		return (RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 )L_0;
	}
}
