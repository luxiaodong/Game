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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
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
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidCastException
struct InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animation
struct Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C;
// UnityEngine.Animation/Enumerator
struct Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C;
// UnityEngine.AnimationClip
struct AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE;
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36;
// UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C;
// UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F;
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824;
// UnityEngine.AnimationState
struct AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6;
// UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E;
// UnityEngine.Avatar
struct Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Motion
struct Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C;
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3;
// UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

extern RuntimeClass* AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_il2cpp_TypeInfo_var;
extern RuntimeClass* AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C_il2cpp_TypeInfo_var;
extern RuntimeClass* HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
extern RuntimeClass* StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral04E4E32AA834F9BA9336C5388E9470F196EB0891;
extern String_t* _stringLiteral35482DF98E7DEED2FC6BDE9BDD1E273E27CF1F2C;
extern String_t* _stringLiteral3903E6A07B47FB15B7DB97AA3E54D9ECDE8403FE;
extern String_t* _stringLiteral3961130C5B3A669464A4F5B64813E7A72DDCE2AC;
extern String_t* _stringLiteral3DB192144788919FBAC5C900D49CE390D3FFF2C0;
extern String_t* _stringLiteral4518459D262696CF9B5DAB1E0A1BC3AC2F9BD9DF;
extern String_t* _stringLiteral488203F92B6BE929591A420476D70A53696658FE;
extern String_t* _stringLiteral59BDBA16999CF4EF3F7712740907B2C5E860459C;
extern String_t* _stringLiteral6502516F734DD885173E353D47AAEB82BC7070A9;
extern String_t* _stringLiteral7E3996230D9AF0349B43FF7B536FC25AF0C19C71;
extern String_t* _stringLiteral90DB30F1092F19237481D194C23E43DF265AE3D6;
extern String_t* _stringLiteral951309BF66822FAA0124B93F2A6E04DB28631D28;
extern String_t* _stringLiteralB47C26932C83DD7E0C54FC87EDDE2F3B50E5104C;
extern String_t* _stringLiteralB9DF0CBB713EC6E9DFD70C9BFB0B820148433428;
extern String_t* _stringLiteralC2ACAB5E124D2B5E2EDF7FBA3930A0441C66BBD4;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralEB133F4E0F7233E456C4B73BC81F165EA7547C40;
extern String_t* _stringLiteralFCF5307272E4A4426DDA9E4E6930E2B834B95B2C;
extern const RuntimeMethod* AnimationClip_AddEvent_m09367D827FC274A158CE2B408EE0083CB1DD330B_RuntimeMethod_var;
extern const RuntimeMethod* AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_RuntimeMethod_var;
extern const RuntimeMethod* AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_RuntimeMethod_var;
extern const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_RuntimeMethod_var;
extern const RuntimeMethod* AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_RuntimeMethod_var;
extern const RuntimeMethod* AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_RuntimeMethod_var;
extern const RuntimeMethod* AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_RuntimeMethod_var;
extern const RuntimeMethod* AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7_RuntimeMethod_var;
extern const RuntimeMethod* AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var;
extern const RuntimeMethod* Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_RuntimeMethod_var;
extern const RuntimeMethod* Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_RuntimeMethod_var;
extern const RuntimeMethod* Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_RuntimeMethod_var;
extern const RuntimeMethod* Animator_GetParameter_m1FB640ED7AE379EC9DAE8E2EA169763EC1609FB6_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_m2E697071283CEE2AA83E00A2503D003D60FB984D_RuntimeMethod_var;
extern const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_RuntimeMethod_var;
extern const RuntimeType* StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C_0_0_0_var;
extern const uint32_t AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_MetadataUsageId;
extern const uint32_t AnimationClip_AddEvent_m09367D827FC274A158CE2B408EE0083CB1DD330B_MetadataUsageId;
extern const uint32_t AnimationClip_get_events_m78276F54C4645121443127B75014F49901E749EF_MetadataUsageId;
extern const uint32_t AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F_MetadataUsageId;
extern const uint32_t AnimationEvent_get_animationState_m97F2E79A917D8468424831E932A03BA9BF7713CA_MetadataUsageId;
extern const uint32_t AnimationEvent_get_animatorClipInfo_m1317C7C3C4411E70D38AF4E97305A2193494C42D_MetadataUsageId;
extern const uint32_t AnimationEvent_get_animatorStateInfo_m920DDE5B2141B925E99D2F264DD9442736E842CA_MetadataUsageId;
extern const uint32_t AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_MetadataUsageId;
extern const uint32_t AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9_MetadataUsageId;
extern const uint32_t AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_MetadataUsageId;
extern const uint32_t AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_MetadataUsageId;
extern const uint32_t AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E_MetadataUsageId;
extern const uint32_t AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_MetadataUsageId;
extern const uint32_t AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_MetadataUsageId;
extern const uint32_t AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE_MetadataUsageId;
extern const uint32_t AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_MetadataUsageId;
extern const uint32_t AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_MetadataUsageId;
extern const uint32_t AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6_MetadataUsageId;
extern const uint32_t AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_MetadataUsageId;
extern const uint32_t AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_MetadataUsageId;
extern const uint32_t AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F_MetadataUsageId;
extern const uint32_t AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_MetadataUsageId;
extern const uint32_t AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_MetadataUsageId;
extern const uint32_t AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829_MetadataUsageId;
extern const uint32_t AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_MetadataUsageId;
extern const uint32_t AnimationScriptPlayable_Equals_m39A1F71C360404625ABD1EAD32DCAEDD7736E1B3_MetadataUsageId;
extern const uint32_t AnimationScriptPlayable__cctor_mC78B0B27BE44BD802817190E620DB326D730BF70_MetadataUsageId;
extern const uint32_t AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7_MetadataUsageId;
extern const uint32_t Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191_MetadataUsageId;
extern const uint32_t AnimatorControllerParameter_Equals_m71402007E47A2C82599B74BE7E95476B89838682_MetadataUsageId;
extern const uint32_t AnimatorControllerParameter__ctor_mCCC1C8C5E13550B5745B4F10D0FCF6F948517797_MetadataUsageId;
extern const uint32_t AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_MetadataUsageId;
extern const uint32_t AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_MetadataUsageId;
extern const uint32_t AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E_MetadataUsageId;
extern const uint32_t AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_MetadataUsageId;
extern const uint32_t Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10_MetadataUsageId;
extern const uint32_t Animator_GetBehaviours_mC759364926B1EF7853444D1731CC54F59F6D0D90_MetadataUsageId;
extern const uint32_t Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_MetadataUsageId;
extern const uint32_t Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_MetadataUsageId;
extern const uint32_t Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_MetadataUsageId;
extern const uint32_t Animator_GetParameter_m1FB640ED7AE379EC9DAE8E2EA169763EC1609FB6_MetadataUsageId;
extern const uint32_t Animator_GetQuaternion_mA72AEB2BC02DDFF53745689063674CC4EFD29C5F_MetadataUsageId;
extern const uint32_t Animator_GetQuaternion_mB55100557E6EECBACA3F001A7AA7E6528343E297_MetadataUsageId;
extern const uint32_t Animator_GetVector_m03E613ACCBED5CE03C32F8B17392760E20AAF3CC_MetadataUsageId;
extern const uint32_t Animator_GetVector_mEAC79DC2C51F787566322F4BFD0C25D0CFE76855_MetadataUsageId;
extern const uint32_t Avatar__ctor_mD1FEFAE6B86B1AFE6097AD2E84AA1B56FF1C04AE_MetadataUsageId;
extern const uint32_t Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443_MetadataUsageId;
extern const uint32_t RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36;
struct AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824;
struct AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6;
struct AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD;
struct ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739;
struct StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3;


#ifndef U3CMODULEU3E_T6EFABDA0B2A020FB3DD6CA286799D867733667F1_H
#define U3CMODULEU3E_T6EFABDA0B2A020FB3DD6CA286799D867733667F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6EFABDA0B2A020FB3DD6CA286799D867733667F1 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6EFABDA0B2A020FB3DD6CA286799D867733667F1_H
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
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifndef LIST_1_T34BD75698B68DE47D684862A345F6F9797CE3F9B_H
#define LIST_1_T34BD75698B68DE47D684862A345F6F9797CE3F9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>
struct  List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____items_1)); }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* get__items_1() const { return ____items_1; }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B_StaticFields, ____emptyArray_5)); }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T34BD75698B68DE47D684862A345F6F9797CE3F9B_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	intptr_t* ___native_trace_ips_15;
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
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
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
#ifndef ENUMERATOR_T6F97AECE1A160A668D8D8798607BE29B1D8CD92C_H
#define ENUMERATOR_T6F97AECE1A160A668D8D8798607BE29B1D8CD92C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation_Enumerator
struct  Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C  : public RuntimeObject
{
public:
	// UnityEngine.Animation UnityEngine.Animation_Enumerator::m_Outer
	Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___m_Outer_0;
	// System.Int32 UnityEngine.Animation_Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;

public:
	inline static int32_t get_offset_of_m_Outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C, ___m_Outer_0)); }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * get_m_Outer_0() const { return ___m_Outer_0; }
	inline Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C ** get_address_of_m_Outer_0() { return &___m_Outer_0; }
	inline void set_m_Outer_0(Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * value)
	{
		___m_Outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Outer_0), value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C, ___m_CurrentIndex_1)); }
	inline int32_t get_m_CurrentIndex_1() const { return ___m_CurrentIndex_1; }
	inline int32_t* get_address_of_m_CurrentIndex_1() { return &___m_CurrentIndex_1; }
	inline void set_m_CurrentIndex_1(int32_t value)
	{
		___m_CurrentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T6F97AECE1A160A668D8D8798607BE29B1D8CD92C_H
#ifndef HUMANTRAIT_TCD3BF6F692C3AE5803A1872F826932F07BA1ADE9_H
#define HUMANTRAIT_TCD3BF6F692C3AE5803A1872F826932F07BA1ADE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanTrait
struct  HumanTrait_tCD3BF6F692C3AE5803A1872F826932F07BA1ADE9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANTRAIT_TCD3BF6F692C3AE5803A1872F826932F07BA1ADE9_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#define ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#ifndef ANIMATORSTATEINFO_TF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2_H
#define ANIMATORSTATEINFO_TF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_TF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2_H
#ifndef ANIMATORTRANSITIONINFO_T66D37578B8898C817BD5A5781B420BF92F60AA6B_H
#define ANIMATORTRANSITIONINFO_T66D37578B8898C817BD5A5781B420BF92F60AA6B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorTransitionInfo
struct  AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B 
{
public:
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;

public:
	inline static int32_t get_offset_of_m_FullPath_0() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_FullPath_0)); }
	inline int32_t get_m_FullPath_0() const { return ___m_FullPath_0; }
	inline int32_t* get_address_of_m_FullPath_0() { return &___m_FullPath_0; }
	inline void set_m_FullPath_0(int32_t value)
	{
		___m_FullPath_0 = value;
	}

	inline static int32_t get_offset_of_m_UserName_1() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_UserName_1)); }
	inline int32_t get_m_UserName_1() const { return ___m_UserName_1; }
	inline int32_t* get_address_of_m_UserName_1() { return &___m_UserName_1; }
	inline void set_m_UserName_1(int32_t value)
	{
		___m_UserName_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_Name_2)); }
	inline int32_t get_m_Name_2() const { return ___m_Name_2; }
	inline int32_t* get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(int32_t value)
	{
		___m_Name_2 = value;
	}

	inline static int32_t get_offset_of_m_HasFixedDuration_3() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_HasFixedDuration_3)); }
	inline bool get_m_HasFixedDuration_3() const { return ___m_HasFixedDuration_3; }
	inline bool* get_address_of_m_HasFixedDuration_3() { return &___m_HasFixedDuration_3; }
	inline void set_m_HasFixedDuration_3(bool value)
	{
		___m_HasFixedDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_Duration_4() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_Duration_4)); }
	inline float get_m_Duration_4() const { return ___m_Duration_4; }
	inline float* get_address_of_m_Duration_4() { return &___m_Duration_4; }
	inline void set_m_Duration_4(float value)
	{
		___m_Duration_4 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_5() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_NormalizedTime_5)); }
	inline float get_m_NormalizedTime_5() const { return ___m_NormalizedTime_5; }
	inline float* get_address_of_m_NormalizedTime_5() { return &___m_NormalizedTime_5; }
	inline void set_m_NormalizedTime_5(float value)
	{
		___m_NormalizedTime_5 = value;
	}

	inline static int32_t get_offset_of_m_AnyState_6() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_AnyState_6)); }
	inline bool get_m_AnyState_6() const { return ___m_AnyState_6; }
	inline bool* get_address_of_m_AnyState_6() { return &___m_AnyState_6; }
	inline void set_m_AnyState_6(bool value)
	{
		___m_AnyState_6 = value;
	}

	inline static int32_t get_offset_of_m_TransitionType_7() { return static_cast<int32_t>(offsetof(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B, ___m_TransitionType_7)); }
	inline int32_t get_m_TransitionType_7() const { return ___m_TransitionType_7; }
	inline int32_t* get_address_of_m_TransitionType_7() { return &___m_TransitionType_7; }
	inline void set_m_TransitionType_7(int32_t value)
	{
		___m_TransitionType_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
#endif // ANIMATORTRANSITIONINFO_T66D37578B8898C817BD5A5781B420BF92F60AA6B_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_TD52C4EACCF9B8F7A21A34D11D3971A823B131F03_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_TD52C4EACCF9B8F7A21A34D11D3971A823B131F03_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_tD52C4EACCF9B8F7A21A34D11D3971A823B131F03  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_TD52C4EACCF9B8F7A21A34D11D3971A823B131F03_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // DELEGATE_T_H
#ifndef INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#define INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#ifndef INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#define INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef ANIMATIONCULLINGTYPE_TA919F6AFDDBDCB81BED4A3F03448F744A8FECD0C_H
#define ANIMATIONCULLINGTYPE_TA919F6AFDDBDCB81BED4A3F03448F744A8FECD0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCullingType
struct  AnimationCullingType_tA919F6AFDDBDCB81BED4A3F03448F744A8FECD0C 
{
public:
	// System.Int32 UnityEngine.AnimationCullingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationCullingType_tA919F6AFDDBDCB81BED4A3F03448F744A8FECD0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCULLINGTYPE_TA919F6AFDDBDCB81BED4A3F03448F744A8FECD0C_H
#ifndef ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#define ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_TD2F265379583AAF1BF8D84F1BB8DB12980FA504C_H
#ifndef ANIMATIONEVENTSOURCE_T0CA86CB3D775209B46F475A99887C93530F20702_H
#define ANIMATIONEVENTSOURCE_T0CA86CB3D775209B46F475A99887C93530F20702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONEVENTSOURCE_T0CA86CB3D775209B46F475A99887C93530F20702_H
#ifndef ANIMATIONPLAYMODE_T5DC6A9F8B23853CDFBFD9672B7275249A22288D9_H
#define ANIMATIONPLAYMODE_T5DC6A9F8B23853CDFBFD9672B7275249A22288D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationPlayMode
struct  AnimationPlayMode_t5DC6A9F8B23853CDFBFD9672B7275249A22288D9 
{
public:
	// System.Int32 UnityEngine.AnimationPlayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationPlayMode_t5DC6A9F8B23853CDFBFD9672B7275249A22288D9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYMODE_T5DC6A9F8B23853CDFBFD9672B7275249A22288D9_H
#ifndef ANIMATORCONTROLLERPARAMETERTYPE_T340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F_H
#define ANIMATORCONTROLLERPARAMETERTYPE_T340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_t340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_t340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPARAMETERTYPE_T340CE2BBAB87F4684FEA76C24F1BCB9FC10D5B1F_H
#ifndef ANIMATORCULLINGMODE_T9E72A730F46CAED8736352678469610F391D22C9_H
#define ANIMATORCULLINGMODE_T9E72A730F46CAED8736352678469610F391D22C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorCullingMode
struct  AnimatorCullingMode_t9E72A730F46CAED8736352678469610F391D22C9 
{
public:
	// System.Int32 UnityEngine.AnimatorCullingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorCullingMode_t9E72A730F46CAED8736352678469610F391D22C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCULLINGMODE_T9E72A730F46CAED8736352678469610F391D22C9_H
#ifndef ANIMATORRECORDERMODE_T01A6A766010DB418514F48BEB2A7CABCFFCB74A8_H
#define ANIMATORRECORDERMODE_T01A6A766010DB418514F48BEB2A7CABCFFCB74A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorRecorderMode
struct  AnimatorRecorderMode_t01A6A766010DB418514F48BEB2A7CABCFFCB74A8 
{
public:
	// System.Int32 UnityEngine.AnimatorRecorderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorRecorderMode_t01A6A766010DB418514F48BEB2A7CABCFFCB74A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORRECORDERMODE_T01A6A766010DB418514F48BEB2A7CABCFFCB74A8_H
#ifndef ANIMATORUPDATEMODE_TDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0_H
#define ANIMATORUPDATEMODE_TDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorUpdateMode
struct  AnimatorUpdateMode_tDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0 
{
public:
	// System.Int32 UnityEngine.AnimatorUpdateMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorUpdateMode_tDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORUPDATEMODE_TDD2D2D131F4E5D2D2A5AF9EFDE368B1C1548EEA0_H
#ifndef AVATARIKGOAL_T15BB8118646D4C1217A2A8F4098ACB473B9C4C11_H
#define AVATARIKGOAL_T15BB8118646D4C1217A2A8F4098ACB473B9C4C11_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarIKGoal
struct  AvatarIKGoal_t15BB8118646D4C1217A2A8F4098ACB473B9C4C11 
{
public:
	// System.Int32 UnityEngine.AvatarIKGoal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarIKGoal_t15BB8118646D4C1217A2A8F4098ACB473B9C4C11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARIKGOAL_T15BB8118646D4C1217A2A8F4098ACB473B9C4C11_H
#ifndef AVATARIKHINT_T028BCD8BF2C863037216C614C5610AE0BE226E26_H
#define AVATARIKHINT_T028BCD8BF2C863037216C614C5610AE0BE226E26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarIKHint
struct  AvatarIKHint_t028BCD8BF2C863037216C614C5610AE0BE226E26 
{
public:
	// System.Int32 UnityEngine.AvatarIKHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarIKHint_t028BCD8BF2C863037216C614C5610AE0BE226E26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARIKHINT_T028BCD8BF2C863037216C614C5610AE0BE226E26_H
#ifndef AVATARTARGET_T1CC16E1E066BB1C49B8B8662388FD349F5E1976D_H
#define AVATARTARGET_T1CC16E1E066BB1C49B8B8662388FD349F5E1976D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AvatarTarget
struct  AvatarTarget_t1CC16E1E066BB1C49B8B8662388FD349F5E1976D 
{
public:
	// System.Int32 UnityEngine.AvatarTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvatarTarget_t1CC16E1E066BB1C49B8B8662388FD349F5E1976D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATARTARGET_T1CC16E1E066BB1C49B8B8662388FD349F5E1976D_H
#ifndef BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#define BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_TA2716F5212749C61B0E7B7B77E0CD3D79B742890_H
#ifndef DURATIONUNIT_T666C27AFB3FD7906761A9960E6995184089C367D_H
#define DURATIONUNIT_T666C27AFB3FD7906761A9960E6995184089C367D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DurationUnit
struct  DurationUnit_t666C27AFB3FD7906761A9960E6995184089C367D 
{
public:
	// System.Int32 UnityEngine.DurationUnit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DurationUnit_t666C27AFB3FD7906761A9960E6995184089C367D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DURATIONUNIT_T666C27AFB3FD7906761A9960E6995184089C367D_H
#ifndef ANIMATIONHUMANSTREAM_T576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2_H
#define ANIMATIONHUMANSTREAM_T576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Animations.AnimationHumanStream
struct  AnimationHumanStream_t576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2 
{
public:
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(AnimationHumanStream_t576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2, ___stream_0)); }
	inline intptr_t get_stream_0() const { return ___stream_0; }
	inline intptr_t* get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(intptr_t value)
	{
		___stream_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONHUMANSTREAM_T576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2_H
#ifndef ANIMATIONSTREAM_TF539D75F7B97F32656D025617E8EDB5C9A2F715E_H
#define ANIMATIONSTREAM_TF539D75F7B97F32656D025617E8EDB5C9A2F715E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Animations.AnimationStream
struct  AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E 
{
public:
	// System.UInt32 UnityEngine.Experimental.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___constant_1)); }
	inline intptr_t get_constant_1() const { return ___constant_1; }
	inline intptr_t* get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(intptr_t value)
	{
		___constant_1 = value;
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___input_2)); }
	inline intptr_t get_input_2() const { return ___input_2; }
	inline intptr_t* get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(intptr_t value)
	{
		___input_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___output_3)); }
	inline intptr_t get_output_3() const { return ___output_3; }
	inline intptr_t* get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(intptr_t value)
	{
		___output_3 = value;
	}

	inline static int32_t get_offset_of_workspace_4() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___workspace_4)); }
	inline intptr_t get_workspace_4() const { return ___workspace_4; }
	inline intptr_t* get_address_of_workspace_4() { return &___workspace_4; }
	inline void set_workspace_4(intptr_t value)
	{
		___workspace_4 = value;
	}

	inline static int32_t get_offset_of_inputStreamAccessor_5() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___inputStreamAccessor_5)); }
	inline intptr_t get_inputStreamAccessor_5() const { return ___inputStreamAccessor_5; }
	inline intptr_t* get_address_of_inputStreamAccessor_5() { return &___inputStreamAccessor_5; }
	inline void set_inputStreamAccessor_5(intptr_t value)
	{
		___inputStreamAccessor_5 = value;
	}

	inline static int32_t get_offset_of_animationHandleBinder_6() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___animationHandleBinder_6)); }
	inline intptr_t get_animationHandleBinder_6() const { return ___animationHandleBinder_6; }
	inline intptr_t* get_address_of_animationHandleBinder_6() { return &___animationHandleBinder_6; }
	inline void set_animationHandleBinder_6(intptr_t value)
	{
		___animationHandleBinder_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTREAM_TF539D75F7B97F32656D025617E8EDB5C9A2F715E_H
#ifndef HUMANBODYBONES_T84CDC0803F451E10186E589016F33D8404227892_H
#define HUMANBODYBONES_T84CDC0803F451E10186E589016F33D8404227892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBodyBones
struct  HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892 
{
public:
	// System.Int32 UnityEngine.HumanBodyBones::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANBODYBONES_T84CDC0803F451E10186E589016F33D8404227892_H
#ifndef HUMANLIMIT_T6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3_H
#define HUMANLIMIT_T6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Min_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Max_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Center_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3_H
#ifndef MATCHTARGETWEIGHTMASK_TD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B_H
#define MATCHTARGETWEIGHTMASK_TD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MatchTargetWeightMask
struct  MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B 
{
public:
	// UnityEngine.Vector3 UnityEngine.MatchTargetWeightMask::m_PositionXYZWeight
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PositionXYZWeight_0;
	// System.Single UnityEngine.MatchTargetWeightMask::m_RotationWeight
	float ___m_RotationWeight_1;

public:
	inline static int32_t get_offset_of_m_PositionXYZWeight_0() { return static_cast<int32_t>(offsetof(MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B, ___m_PositionXYZWeight_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PositionXYZWeight_0() const { return ___m_PositionXYZWeight_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PositionXYZWeight_0() { return &___m_PositionXYZWeight_0; }
	inline void set_m_PositionXYZWeight_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PositionXYZWeight_0 = value;
	}

	inline static int32_t get_offset_of_m_RotationWeight_1() { return static_cast<int32_t>(offsetof(MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B, ___m_RotationWeight_1)); }
	inline float get_m_RotationWeight_1() const { return ___m_RotationWeight_1; }
	inline float* get_address_of_m_RotationWeight_1() { return &___m_RotationWeight_1; }
	inline void set_m_RotationWeight_1(float value)
	{
		___m_RotationWeight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHTARGETWEIGHTMASK_TD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PLAYMODE_TE55342CFE774475487030D6B30D815DEF4C509C3_H
#define PLAYMODE_TE55342CFE774475487030D6B30D815DEF4C509C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PlayMode
struct  PlayMode_tE55342CFE774475487030D6B30D815DEF4C509C3 
{
public:
	// System.Int32 UnityEngine.PlayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayMode_tE55342CFE774475487030D6B30D815DEF4C509C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODE_TE55342CFE774475487030D6B30D815DEF4C509C3_H
#ifndef PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#define PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifndef PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#define PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifndef PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#define PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifndef QUEUEMODE_TDCE68A36B6B5512E9D21340513C9AA64FDA946DA_H
#define QUEUEMODE_TDCE68A36B6B5512E9D21340513C9AA64FDA946DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueueMode
struct  QueueMode_tDCE68A36B6B5512E9D21340513C9AA64FDA946DA 
{
public:
	// System.Int32 UnityEngine.QueueMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueueMode_tDCE68A36B6B5512E9D21340513C9AA64FDA946DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEMODE_TDCE68A36B6B5512E9D21340513C9AA64FDA946DA_H
#ifndef SENDMESSAGEOPTIONS_T4EA4645A7D0C4E0186BD7A984CDF4EE2C8F26250_H
#define SENDMESSAGEOPTIONS_T4EA4645A7D0C4E0186BD7A984CDF4EE2C8F26250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t4EA4645A7D0C4E0186BD7A984CDF4EE2C8F26250 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t4EA4645A7D0C4E0186BD7A984CDF4EE2C8F26250, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T4EA4645A7D0C4E0186BD7A984CDF4EE2C8F26250_H
#ifndef SKELETONBONE_TCDF297229129311214294465F3FA353DB09726F5_H
#define SKELETONBONE_TCDF297229129311214294465F3FA353DB09726F5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_2() const { return ___position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___scale_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_scale_4() const { return ___scale_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};
#endif // SKELETONBONE_TCDF297229129311214294465F3FA353DB09726F5_H
#ifndef STATEINFOINDEX_TB33643A51F1038D1AA318A291031162A6A79814E_H
#define STATEINFOINDEX_TB33643A51F1038D1AA318A291031162A6A79814E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateInfoIndex
struct  StateInfoIndex_tB33643A51F1038D1AA318A291031162A6A79814E 
{
public:
	// System.Int32 UnityEngine.StateInfoIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StateInfoIndex_tB33643A51F1038D1AA318A291031162A6A79814E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEINFOINDEX_TB33643A51F1038D1AA318A291031162A6A79814E_H
#ifndef TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#define TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifndef WRAPMODE_T3704F0388A4F801D2F54B1EA1EE8DC014D667AFD_H
#define WRAPMODE_T3704F0388A4F801D2F54B1EA1EE8DC014D667AFD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WrapMode
struct  WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD 
{
public:
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t3704F0388A4F801D2F54B1EA1EE8DC014D667AFD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPMODE_T3704F0388A4F801D2F54B1EA1EE8DC014D667AFD_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
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
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
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
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ANIMATIONEVENT_TEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_H
#define ANIMATIONEVENT_TEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_ObjectReferenceParameter_3)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StateSender_8)); }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_TEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_H
#ifndef ANIMATIONSTATE_T48FF4D41FEF3492F8286100BE3758CE3A4656386_H
#define ANIMATIONSTATE_T48FF4D41FEF3492F8286100BE3758CE3A4656386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386  : public TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T48FF4D41FEF3492F8286100BE3758CE3A4656386_H
#ifndef ANIMATIONCLIPPLAYABLE_T6EF38F9EED94096D4793638AFC8D11D285B43183_H
#define ANIMATIONCLIPPLAYABLE_T6EF38F9EED94096D4793638AFC8D11D285B43183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T6EF38F9EED94096D4793638AFC8D11D285B43183_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#define ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#ifndef ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#define ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#ifndef ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#define ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#ifndef ANIMATIONOFFSETPLAYABLE_T1534674D22C39D6ED74F24A108C3475C7301A93E_H
#define ANIMATIONOFFSETPLAYABLE_T1534674D22C39D6ED74F24A108C3475C7301A93E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T1534674D22C39D6ED74F24A108C3475C7301A93E_H
#ifndef ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#define ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#ifndef ANIMATIONPOSEPLAYABLE_T92EAB5BB4093D236F90ED0242488039EA87AFA07_H
#define ANIMATIONPOSEPLAYABLE_T92EAB5BB4093D236F90ED0242488039EA87AFA07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPosePlayable
struct  AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields
{
public:
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPOSEPLAYABLE_T92EAB5BB4093D236F90ED0242488039EA87AFA07_H
#ifndef ANIMATIONREMOVESCALEPLAYABLE_T02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_H
#define ANIMATIONREMOVESCALEPLAYABLE_T02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct  AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields
{
public:
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONREMOVESCALEPLAYABLE_T02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T352C2C3D059CFC0404FF4FBBA302F16C5966F44B_H
#define ANIMATORCONTROLLERPLAYABLE_T352C2C3D059CFC0404FF4FBBA302F16C5966F44B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T352C2C3D059CFC0404FF4FBBA302F16C5966F44B_H
#ifndef ANIMATORCONTROLLERPARAMETER_T63F7756B07B981111CB00490DE84B06BC2A25E68_H
#define ANIMATORCONTROLLERPARAMETER_T63F7756B07B981111CB00490DE84B06BC2A25E68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorControllerParameter
struct  AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68  : public RuntimeObject
{
public:
	// System.String UnityEngine.AnimatorControllerParameter::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.AnimatorControllerParameterType UnityEngine.AnimatorControllerParameter::m_Type
	int32_t ___m_Type_1;
	// System.Single UnityEngine.AnimatorControllerParameter::m_DefaultFloat
	float ___m_DefaultFloat_2;
	// System.Int32 UnityEngine.AnimatorControllerParameter::m_DefaultInt
	int32_t ___m_DefaultInt_3;
	// System.Boolean UnityEngine.AnimatorControllerParameter::m_DefaultBool
	bool ___m_DefaultBool_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultFloat_2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_DefaultFloat_2)); }
	inline float get_m_DefaultFloat_2() const { return ___m_DefaultFloat_2; }
	inline float* get_address_of_m_DefaultFloat_2() { return &___m_DefaultFloat_2; }
	inline void set_m_DefaultFloat_2(float value)
	{
		___m_DefaultFloat_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultInt_3() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_DefaultInt_3)); }
	inline int32_t get_m_DefaultInt_3() const { return ___m_DefaultInt_3; }
	inline int32_t* get_address_of_m_DefaultInt_3() { return &___m_DefaultInt_3; }
	inline void set_m_DefaultInt_3(int32_t value)
	{
		___m_DefaultInt_3 = value;
	}

	inline static int32_t get_offset_of_m_DefaultBool_4() { return static_cast<int32_t>(offsetof(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68, ___m_DefaultBool_4)); }
	inline bool get_m_DefaultBool_4() const { return ___m_DefaultBool_4; }
	inline bool* get_address_of_m_DefaultBool_4() { return &___m_DefaultBool_4; }
	inline void set_m_DefaultBool_4(bool value)
	{
		___m_DefaultBool_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
// Native definition for COM marshalling of UnityEngine.AnimatorControllerParameter
struct AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Type_1;
	float ___m_DefaultFloat_2;
	int32_t ___m_DefaultInt_3;
	int32_t ___m_DefaultBool_4;
};
#endif // ANIMATORCONTROLLERPARAMETER_T63F7756B07B981111CB00490DE84B06BC2A25E68_H
#ifndef AVATAR_T14B515893D5504566D487FFE046DCB8C8C50D02B_H
#define AVATAR_T14B515893D5504566D487FFE046DCB8C8C50D02B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Avatar
struct  Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVATAR_T14B515893D5504566D487FFE046DCB8C8C50D02B_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef ANIMATIONSCRIPTPLAYABLE_T73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_H
#define ANIMATIONSCRIPTPLAYABLE_T73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Animations.AnimationScriptPlayable
struct  AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_StaticFields
{
public:
	// UnityEngine.Experimental.Animations.AnimationScriptPlayable UnityEngine.Experimental.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSCRIPTPLAYABLE_T73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef HUMANBONE_T2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_H
#define HUMANBONE_T2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___limit_2)); }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};
#endif // HUMANBONE_T2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_H
#ifndef MOTION_T497BF9244B6A769D1AE925C3876B187C56C8CF8F_H
#define MOTION_T497BF9244B6A769D1AE925C3876B187C56C8CF8F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// System.Boolean UnityEngine.Motion::<isAnimatorMotion>k__BackingField
	bool ___U3CisAnimatorMotionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F, ___U3CisAnimatorMotionU3Ek__BackingField_4)); }
	inline bool get_U3CisAnimatorMotionU3Ek__BackingField_4() const { return ___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisAnimatorMotionU3Ek__BackingField_4() { return &___U3CisAnimatorMotionU3Ek__BackingField_4; }
	inline void set_U3CisAnimatorMotionU3Ek__BackingField_4(bool value)
	{
		___U3CisAnimatorMotionU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T497BF9244B6A769D1AE925C3876B187C56C8CF8F_H
#ifndef RUNTIMEANIMATORCONTROLLER_TDA6672C8194522C2F60F8F2F241657E57C3520BD_H
#define RUNTIMEANIMATORCONTROLLER_TDA6672C8194522C2F60F8F2F241657E57C3520BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_TDA6672C8194522C2F60F8F2F241657E57C3520BD_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef ANIMATIONCLIP_T336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE_H
#define ANIMATIONCLIP_T336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE  : public Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE_H
#ifndef ANIMATOROVERRIDECONTROLLER_T130F04B57E753FD4288EF3235699ABE7C88FF312_H
#define ANIMATOROVERRIDECONTROLLER_T130F04B57E753FD4288EF3235699ABE7C88FF312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorOverrideController
struct  AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312  : public RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD
{
public:
	// UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * ___OnOverrideControllerDirty_4;

public:
	inline static int32_t get_offset_of_OnOverrideControllerDirty_4() { return static_cast<int32_t>(offsetof(AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312, ___OnOverrideControllerDirty_4)); }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * get_OnOverrideControllerDirty_4() const { return ___OnOverrideControllerDirty_4; }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E ** get_address_of_OnOverrideControllerDirty_4() { return &___OnOverrideControllerDirty_4; }
	inline void set_OnOverrideControllerDirty_4(OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * value)
	{
		___OnOverrideControllerDirty_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnOverrideControllerDirty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOROVERRIDECONTROLLER_T130F04B57E753FD4288EF3235699ABE7C88FF312_H
#ifndef ONOVERRIDECONTROLLERDIRTYCALLBACK_T73560E6E30067C09BC58A15F9D2726051B077E2E_H
#define ONOVERRIDECONTROLLERDIRTYCALLBACK_T73560E6E30067C09BC58A15F9D2726051B077E2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback
struct  OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONOVERRIDECONTROLLERDIRTYCALLBACK_T73560E6E30067C09BC58A15F9D2726051B077E2E_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef STATEMACHINEBEHAVIOUR_T698612ED92024B087045C388731B7673550C786C_H
#define STATEMACHINEBEHAVIOUR_T698612ED92024B087045C388731B7673550C786C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T698612ED92024B087045C388731B7673550C786C_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef ANIMATION_TCFC171459D159DDEC6500B55543A76219D49BB9C_H
#define ANIMATION_TCFC171459D159DDEC6500B55543A76219D49BB9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_TCFC171459D159DDEC6500B55543A76219D49BB9C_H
#ifndef ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#define ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_TF1A88E66B3B731DDA75A066DBAE9C55837660F5A_H
// UnityEngine.AnimationEvent[]
struct AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * m_Items[1];

public:
	inline AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.ScriptableObject[]
struct ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * m_Items[1];

public:
	inline ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.StateMachineBehaviour[]
struct StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * m_Items[1];

public:
	inline StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AnimatorClipInfo[]
struct AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  m_Items[1];

public:
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * m_Items[1];

public:
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * m_Items[1];

public:
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_back(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_pinvoke_cleanup(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke& marshaled);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com_back(const Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0& unmarshaled);
extern "C" void Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshal_com_cleanup(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Experimental.Animations.AnimationScriptPlayable>()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_m2E697071283CEE2AA83E00A2503D003D60FB984D_gshared (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Behaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Behaviour__ctor_m409AEC21511ACF9A4CC0654DF4B8253E0D81D22C (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Internal_StopByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_StopByName_m63247E1BE6C536F9E5A8014E83C082F0C23C365B (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Internal_RewindByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_RewindByName_m7FD1374BF8128B20B0960F2301505905A69EBF23 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_Rewind(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Rewind_m56A2EA451BA487CF3479F687F0939A01D46FFDD5 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Sample_mC122990C5E1E96C6FFF1EC94DFB8DBF202937E40 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_mD134EE8853844F098E4D1F3F734CBE4C47C9B8B4 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_mE08973B841DBC7FAD198F1D2183CA7BA8AD3D331 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_mEC461952584EED1F4A121FF5DAD84C7C30A04698 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___targetWeight1, float ___fadeLength2, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___queue2, int32_t ___mode3, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_PlayQueued_m6A79744E0DC847D392011A19BCDD020EC6B3B347 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, int32_t ___queue1, int32_t ___mode2, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m654E46075C4F216F54C05F7519C15D392211A727 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m4D305FA97612D44A1EE2A1D8D1BC147B3CE3DD81 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::RemoveClip2(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip2_m86CF46CA460AADCE9373872AD22B2EE51BFB1FB1 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___clipName0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_SyncLayer_mFB27BDAD7D14C91456B2508248BEBA9ADE53C0B2 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, int32_t ___layer1, const RuntimeMethod* method);
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___outer0, const RuntimeMethod* method);
// System.Boolean UnityEngine.TrackedReference::op_Implicit(UnityEngine.TrackedReference)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_op_Implicit_mE2F202D7C4D71679836CC2AE2CA08645E3208E44 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * p0, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_get_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_get_localBounds_m7650F745DCB21773EFC056A3D958C8DD9B69B0E7 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animation::INTERNAL_set_localBounds(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_set_localBounds_mCE745D9678A2941780F1FFAEDBE769F1DC105DC8 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Motion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443 (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___self0, const RuntimeMethod* method);
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m931A996622B39AA833BFE7D02F76B78A2132193E (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m231B25987E821249C2C34B719D2084055F371C6F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, float ___inTime2, int32_t ___wrapMode3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_get_localBounds_Injected_m277865BE1FE12E500BC0B790AB87B3CF78CC4219 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_Injected_m860E505029DD0A28844EA28C6A4E813E245EDA8F (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_mA9B809BFABC24C3F2619F552074EEC085A41623C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, RuntimeObject * ___evt0, const RuntimeMethod* method);
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * AnimationClip_GetEventsInternal_m777F9D070F4C4F91554DDB1C2E06F044590CE9C3 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m40054ECBDADC5E963060414DF2E5334F2A4ED33A (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, RuntimeArray * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" IL2CPP_METHOD_ATTR bool AnimationEvent_get_isFiredByLegacy_m3C97058CCCF537E3F5FF86C99DB27E4696799ECF (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" IL2CPP_METHOD_ATTR bool AnimationEvent_get_isFiredByAnimator_mC87145EB434E27B5B1713E96552C56B4FF1AA0B7 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method);
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimationEvent_get_functionName_m4277661AB67E6D1466E190CF25EACC6C0A21CF8B (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" IL2CPP_METHOD_ATTR float AnimationEvent_get_time_m0CBDB47796472E0652835CE876AFB85B26220CB1 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.TrackedReference::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackedReference__ctor_m3F870F888D748E167296D3434305F6769CDB5B04 (TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  p0, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
extern "C" IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812 (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607 (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961 (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1 (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533 (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m8AA9834CFFE57CC417688157BD10A22312FA2C2F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m2A45CD7EA21DBC7A1EA8DA26BE132E00925DC0D3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m47670461F4728B925592D4054D331E636F1CBD40 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_angularVelocity_Injected_m24880936B97814434A5742D4063C88651838D9DF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m37A98F61D180A4C6136664A85A930D91507774C7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootPosition_Injected_m22D0A61CA143C2F980EF1C8256CF566BBA5E8F0D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_mD1D15DA26C4949050CE7F7B314F1F0D4F41D400D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootRotation_Injected_m5D8A4B89E2E5BDFB91A3F6AB097B8C60BC037D9A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value0, const RuntimeMethod* method);
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CheckIfInIKPass()
extern "C" IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_bodyPositionInternal_mCF2F9CCE09284EE6919E6D7BBCD16A22B82196DD (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m4C64A42A3636EF434302F92E6B801E2715FC0230 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m2B436C16A410688B8907F11AD22B92772AD8DE58 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_mA6D0FEB76F7F2126AA8DA760B1C87905E2DC3FA8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_bodyRotationInternal_mC5410345EC3CEB0F28CE018307B8B4F40F3C7751 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mEFA1CD332553A417FCAE2ED56F1178F64E6515D3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m6A49C5393DDAE53924C5C81D83B21B24C72B7216 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0FBF45C6C1AB5D6483A31DC5D2200864AD7D9F8E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetGoalPosition_m106F8E21B06DA2464698EE75485FAD053DD0BE4E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_mE542057F582AB3FD1301E9F2940BE2B3607A2DF4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___goalPosition1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetGoalRotation_m741B3B9895B02D6147D05854D3930931BA195E4C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___goalRotation1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m4888D7926BB35DAD60197FA1BC613EAB87D254BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m3BB804D79095653CD1F63D0D114930C0A01C2157 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Animator::GetHintPosition(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetHintPosition_m93D6D38CEDCC44A7B80482E0F9D581A73FE27270 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetHintPosition_Injected_mBE63368CFFFA9F9D54CD0917B6FBB5CB28FD0CA5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetHintPosition_m79B9695B2348B5B3C6A6DC2CE81C08D7DF8D4C7E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___hintPosition1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetHintPosition_Injected_m15557B68009F083A23C3DA250E7BCAFF3804C064 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___hintPosition1, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetHintWeightPosition_m10A180D6957586E77C2A05D49365DB65C542A9F3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetHintWeightPosition_m9A39FA8AB2D028F3E242387D85554D7D8720CD00 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___lookAtPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method);
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E (int32_t ___humanId0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m608EB22856A73BDE07A3B75A43D235637C1078CB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_Injected_m8EC895FF336BF559BDC47AFCDABD457750DD0DF3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* Animator_InternalGetBehavioursByKey_m52F3AE2E7511170953E268CA9B52B47F4A25F133 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * ___info2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * ___info1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method);
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m07028D8BD6DF22DC75C55B07CC08E7579611A6AA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___matchPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B * ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_m503525DC32BF7379C617C7D25C6A32B7FD91A785 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___matchPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B  ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_mDACB5CE4A57F0B22117DAD8A86825F508F033209 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___completeMatch0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3F342CB712406BE5FCB6713CF138487FAB29903E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m26226EA598D61D35ABB8FDEBEA502C761C59202E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_mE10A5B0C9C14F9E3D9613052B36C7E105054A04F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetRecorderStartTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_m841DBA0E0108A11BB3FB8650AC3599CFB20A5C20 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Animator::GetRecorderStopTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m94ED7A05A5DD6FC9468753E8B763966743EF3D02 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::get_logWarnings()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animator::IsInIKPass()
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Rebind(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_Rebind_m34E593057D8424474C06FDEF6BDF0130E659EA5A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___writeDefaultValues0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::EvaluateController(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_EvaluateController_m561E1283AFB8BCE8A75218014522374AD1D099A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___deltaTime0, const RuntimeMethod* method);
// System.String UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_GetAnimatorStateName_m0E505B13A147EAE32639015A4995CC6850EC18BF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE (int32_t ___instanceID0, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
extern "C" IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.AnimatorControllerParameter::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mBC6037CF46E647026CF3AD51E76B4003A181EB60 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speed_mB93F76867DC51C1F3BDFFEAB5C4F6EF7AEB40200 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speedMultiplier_m9593FB23FAFB4838ACB33AB15178EBB3E4A5B662 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_tagHash_m8D7BE8C634C5BD3FD24CEA453FD1075ECD9AFB64 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsTag_m4E330F31FDC7A13E1B93F3ED09A7AEBF3F43A2D6 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_get_loop_mB264307D24226C562001C71924B32DB83A80F73F (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsName_mBEE354AFF11910FFFDD10021E6E15BE2937C65C8 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsUserName_m101F488EA28505B2883E2CEC0104E89513600605 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_userNameHash_m2876268DEDF69387A86A69001AE60AB204C86AAC (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// UnityEngine.DurationUnit UnityEngine.AnimatorTransitionInfo::get_durationUnit()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_durationUnit_m409C65471B93597321E7572D3E0F2FE2D8F4392E (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorTransitionInfo::get_duration()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_duration_mCD359E75836B4EA85432040C28B566424BAE8B34 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m940B8544DC63C7DFABEED164AD41F6CE807332BC (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_anyState_m5C8E945801A4789B8F977A4200A9A3CBF36A9513 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_entry_mAD38B24E7929275525D48748A4B3DEBE09EB2B89 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_exit_m45D887085FAFC678B9EF924D72340E11D6FDC501 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Experimental.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_m2E697071283CEE2AA83E00A2503D003D60FB984D (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_m2E697071283CEE2AA83E00A2503D003D60FB984D_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7 (AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Animations.AnimationScriptPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_mE9B490654A320F11EFBB0E3180C6CF647E384C80 (AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Animations.AnimationScriptPlayable::Equals(UnityEngine.Experimental.Animations.AnimationScriptPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m39A1F71C360404625ABD1EAD32DCAEDD7736E1B3 (AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * __this, AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
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
// System.Void UnityEngine.Animation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Animation__ctor_mA77CD633A8D3F1400CDC9CB2D3C5952B9AAD7E29 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m409AEC21511ACF9A4CC0654DF4B8253E0D81D22C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationClip UnityEngine.Animation::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * (*Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_clip_m7E1F846B79C143FC538A143503B0BF025560F02F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_clip()");
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_clip_m06FE7EA35E27FC7797B271B7F3CB30B8A668E8AF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_clip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animation::get_playAutomatically()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_playAutomatically_m610636CAC8FE5ED11625AF1296FC40F5B56FA85E (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_playAutomatically_m610636CAC8FE5ED11625AF1296FC40F5B56FA85E_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_playAutomatically_m610636CAC8FE5ED11625AF1296FC40F5B56FA85E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_playAutomatically_m610636CAC8FE5ED11625AF1296FC40F5B56FA85E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_playAutomatically()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_playAutomatically(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, bool);
	static Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_playAutomatically_mCDD868E1071E64C036871FF4E842FB982B3FD780_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_playAutomatically(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.WrapMode UnityEngine.Animation::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_get_wrapMode_mEF788CA2DB020A082719E93F29BC4B297E7889CD (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_get_wrapMode_mEF788CA2DB020A082719E93F29BC4B297E7889CD_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_wrapMode_mEF788CA2DB020A082719E93F29BC4B297E7889CD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_wrapMode_mEF788CA2DB020A082719E93F29BC4B297E7889CD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_wrapMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_wrapMode_mA415B14FC56EE193C1C59CFAD02B2BA0F9549F48 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_wrapMode_mA415B14FC56EE193C1C59CFAD02B2BA0F9549F48_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_set_wrapMode_mA415B14FC56EE193C1C59CFAD02B2BA0F9549F48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_wrapMode_mA415B14FC56EE193C1C59CFAD02B2BA0F9549F48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::Stop()
extern "C" IL2CPP_METHOD_ATTR void Animation_Stop_mDEEBC36F3D8E57380C0161D8A744AE7019282B36 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Stop_mB618F3753B63E9FF2CB6A664E4AF849F95964A66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Stop(UnityEngine.Animation)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Animation::Stop(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Stop_m91C96AFB0DE13B6B26A7A047D1B7B1A936CA0784 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animation_Internal_StopByName_m63247E1BE6C536F9E5A8014E83C082F0C23C365B(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Internal_StopByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_StopByName_m63247E1BE6C536F9E5A8014E83C082F0C23C365B (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animation_Internal_StopByName_m63247E1BE6C536F9E5A8014E83C082F0C23C365B_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*);
	static Animation_Internal_StopByName_m63247E1BE6C536F9E5A8014E83C082F0C23C365B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Internal_StopByName_m63247E1BE6C536F9E5A8014E83C082F0C23C365B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Internal_StopByName(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animation::Rewind(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Rewind_mC507D039CEFF4F256AB7535FBBF689DF33292084 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animation_Internal_RewindByName_m7FD1374BF8128B20B0960F2301505905A69EBF23(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Internal_RewindByName(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Internal_RewindByName_m7FD1374BF8128B20B0960F2301505905A69EBF23 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animation_Internal_RewindByName_m7FD1374BF8128B20B0960F2301505905A69EBF23_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*);
	static Animation_Internal_RewindByName_m7FD1374BF8128B20B0960F2301505905A69EBF23_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Internal_RewindByName_m7FD1374BF8128B20B0960F2301505905A69EBF23_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Internal_RewindByName(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animation::Rewind()
extern "C" IL2CPP_METHOD_ATTR void Animation_Rewind_m5CF607FB602ECA56B225EAC9FFC80454638677BE (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_CALL_Rewind_m56A2EA451BA487CF3479F687F0939A01D46FFDD5(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Rewind(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Rewind_m56A2EA451BA487CF3479F687F0939A01D46FFDD5 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_Rewind_m56A2EA451BA487CF3479F687F0939A01D46FFDD5_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_INTERNAL_CALL_Rewind_m56A2EA451BA487CF3479F687F0939A01D46FFDD5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Rewind_m56A2EA451BA487CF3479F687F0939A01D46FFDD5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Rewind(UnityEngine.Animation)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Animation::Sample()
extern "C" IL2CPP_METHOD_ATTR void Animation_Sample_mACF20C888D7DB129968422C59DE081BCFCBFABEB (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_CALL_Sample_mC122990C5E1E96C6FFF1EC94DFB8DBF202937E40(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_Sample_mC122990C5E1E96C6FFF1EC94DFB8DBF202937E40 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_Sample_mC122990C5E1E96C6FFF1EC94DFB8DBF202937E40_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_INTERNAL_CALL_Sample_mC122990C5E1E96C6FFF1EC94DFB8DBF202937E40_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_Sample_mC122990C5E1E96C6FFF1EC94DFB8DBF202937E40_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_Sample(UnityEngine.Animation)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_isPlaying_m3091CFE1195B480F55212EE4128FF4452ACAC8AC (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_isPlaying_m3091CFE1195B480F55212EE4128FF4452ACAC8AC_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_isPlaying_m3091CFE1195B480F55212EE4128FF4452ACAC8AC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_isPlaying_m3091CFE1195B480F55212EE4128FF4452ACAC8AC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animation::IsPlaying(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animation_IsPlaying_m7E78EE738A3A1F0B2B0365171EFE2B55B1E421A0 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animation_IsPlaying_m7E78EE738A3A1F0B2B0365171EFE2B55B1E421A0_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*);
	static Animation_IsPlaying_m7E78EE738A3A1F0B2B0365171EFE2B55B1E421A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_IsPlaying_m7E78EE738A3A1F0B2B0365171EFE2B55B1E421A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::IsPlaying(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_get_Item_mA50F89B91D6170D6824B0B562790470586445AB9 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_0 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_1 = Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play()
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_mEC9F6C1F931E11D4D69043AD44CC71698B776A51 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		bool L_1 = Animation_Play_mD134EE8853844F098E4D1F3F734CBE4C47C9B8B4(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_2 = V_1;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_mD134EE8853844F098E4D1F3F734CBE4C47C9B8B4 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___mode0;
		bool L_1 = Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_mE08973B841DBC7FAD198F1D2183CA7BA8AD3D331 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, int32_t ___mode1, const RuntimeMethod* method)
{
	typedef bool (*Animation_Play_mE08973B841DBC7FAD198F1D2183CA7BA8AD3D331_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*, int32_t);
	static Animation_Play_mE08973B841DBC7FAD198F1D2183CA7BA8AD3D331_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Play_mE08973B841DBC7FAD198F1D2183CA7BA8AD3D331_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)");
	bool retVal = _il2cpp_icall_func(__this, ___animation0, ___mode1);
	return retVal;
}
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m743CCCF04B64977460915D9E7007B0859BDF6AE9 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		int32_t L_1 = V_0;
		bool L_2 = Animation_Play_mE08973B841DBC7FAD198F1D2183CA7BA8AD3D331(__this, L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef void (*Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*, float, int32_t);
	static Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)");
	_il2cpp_icall_func(__this, ___animation0, ___fadeLength1, ___mode2);
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_mC00AB685359B01B55AC9B096D73A83D9D21BEBF9 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		int32_t L_2 = V_0;
		Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::CrossFade(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_CrossFade_m74707094D426BF239F6905EDE78D78A74D78FE38 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		V_0 = 0;
		V_1 = (0.3f);
		String_t* L_0 = ___animation0;
		float L_1 = V_1;
		int32_t L_2 = V_0;
		Animation_CrossFade_mF596DAFB8AE061D03DA3CE7BEEE659CB8FB5D308(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_mEC461952584EED1F4A121FF5DAD84C7C30A04698 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___targetWeight1, float ___fadeLength2, const RuntimeMethod* method)
{
	typedef void (*Animation_Blend_mEC461952584EED1F4A121FF5DAD84C7C30A04698_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*, float, float);
	static Animation_Blend_mEC461952584EED1F4A121FF5DAD84C7C30A04698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Blend_mEC461952584EED1F4A121FF5DAD84C7C30A04698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Blend(System.String,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___animation0, ___targetWeight1, ___fadeLength2);
}
// System.Void UnityEngine.Animation::Blend(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_mFACB2256AA87D83B9BF295F2FD76B1F4473B8BB8 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___targetWeight1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.3f);
		String_t* L_0 = ___animation0;
		float L_1 = ___targetWeight1;
		float L_2 = V_0;
		Animation_Blend_mEC461952584EED1F4A121FF5DAD84C7C30A04698(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::Blend(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_Blend_m33E12340D2A9E65015C0DFAE91B38C6FD8A73B99 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.3f);
		V_1 = (1.0f);
		String_t* L_0 = ___animation0;
		float L_1 = V_1;
		float L_2 = V_0;
		Animation_Blend_mEC461952584EED1F4A121FF5DAD84C7C30A04698(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___queue2, int32_t ___mode3, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*, float, int32_t, int32_t);
	static Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode,UnityEngine.PlayMode)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___animation0, ___fadeLength1, ___queue2, ___mode3);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single,UnityEngine.QueueMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_CrossFadeQueued_mE6373701C29A74C51883F5CB596744BCD15D3D20 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, int32_t ___queue2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_1 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		int32_t L_2 = ___queue2;
		int32_t L_3 = V_0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_4 = Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_CrossFadeQueued_mBCEE6B90F1730CC2C9A3CAF9BA845F942F1F4C4E (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, float ___fadeLength1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___animation0;
		float L_1 = ___fadeLength1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_4 = Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_5 = V_2;
		return L_5;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::CrossFadeQueued(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_CrossFadeQueued_mD2CA74BA565DA54717C1A4E1DA727A2A5A849412 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_3 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = (0.3f);
		String_t* L_0 = ___animation0;
		float L_1 = V_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_4 = Animation_CrossFadeQueued_mAADE2E9BF940D749575E7E7B0104D846DEE817EF(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_5 = V_3;
		return L_5;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode,UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_PlayQueued_m6A79744E0DC847D392011A19BCDD020EC6B3B347 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, int32_t ___queue1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_PlayQueued_m6A79744E0DC847D392011A19BCDD020EC6B3B347_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*, int32_t, int32_t);
	static Animation_PlayQueued_m6A79744E0DC847D392011A19BCDD020EC6B3B347_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayQueued_m6A79744E0DC847D392011A19BCDD020EC6B3B347_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode,UnityEngine.PlayMode)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___animation0, ___queue1, ___mode2);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String,UnityEngine.QueueMode)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_PlayQueued_m9137537F7D5541C7202F3A145B58987C88B97212 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, int32_t ___queue1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_1 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___animation0;
		int32_t L_1 = ___queue1;
		int32_t L_2 = V_0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_3 = Animation_PlayQueued_m6A79744E0DC847D392011A19BCDD020EC6B3B347(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::PlayQueued(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_PlayQueued_mCE4E05F3A61656E91CB7ADF1DE489477A463F040 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		String_t* L_0 = ___animation0;
		int32_t L_1 = V_1;
		int32_t L_2 = V_0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_3 = Animation_PlayQueued_m6A79744E0DC847D392011A19BCDD020EC6B3B347(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_4 = V_2;
		return L_4;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m2576942FA38EC558109C6D81D3CEEA51EE8DEF97 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip0, String_t* ___newName1, const RuntimeMethod* method)
{
	{
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_0 = ___clip0;
		String_t* L_1 = ___newName1;
		Animation_AddClip_m654E46075C4F216F54C05F7519C15D392211A727(__this, L_0, L_1, ((int32_t)-2147483648LL), ((int32_t)2147483647LL), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m4D305FA97612D44A1EE2A1D8D1BC147B3CE3DD81 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, bool ___addLoopFrame4, const RuntimeMethod* method)
{
	typedef void (*Animation_AddClip_m4D305FA97612D44A1EE2A1D8D1BC147B3CE3DD81_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, String_t*, int32_t, int32_t, bool);
	static Animation_AddClip_m4D305FA97612D44A1EE2A1D8D1BC147B3CE3DD81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_AddClip_m4D305FA97612D44A1EE2A1D8D1BC147B3CE3DD81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___clip0, ___newName1, ___firstFrame2, ___lastFrame3, ___addLoopFrame4);
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_AddClip_m654E46075C4F216F54C05F7519C15D392211A727 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip0, String_t* ___newName1, int32_t ___firstFrame2, int32_t ___lastFrame3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_0 = ___clip0;
		String_t* L_1 = ___newName1;
		int32_t L_2 = ___firstFrame2;
		int32_t L_3 = ___lastFrame3;
		bool L_4 = V_0;
		Animation_AddClip_m4D305FA97612D44A1EE2A1D8D1BC147B3CE3DD81(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::RemoveClip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip_mCAF86DC0DB854829130C150D26B38155DC8F3906 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip0, const RuntimeMethod* method)
{
	typedef void (*Animation_RemoveClip_mCAF86DC0DB854829130C150D26B38155DC8F3906_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static Animation_RemoveClip_mCAF86DC0DB854829130C150D26B38155DC8F3906_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_RemoveClip_mCAF86DC0DB854829130C150D26B38155DC8F3906_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::RemoveClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(__this, ___clip0);
}
// System.Void UnityEngine.Animation::RemoveClip(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip_m69424A8DE54C49790BB9BA56936D91F67DA94203 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___clipName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clipName0;
		Animation_RemoveClip2_m86CF46CA460AADCE9373872AD22B2EE51BFB1FB1(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animation::GetClipCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_GetClipCount_mE0FAE290AA3CF1CF80915339876DAAD5485E9C4A (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_GetClipCount_mE0FAE290AA3CF1CF80915339876DAAD5485E9C4A_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_GetClipCount_mE0FAE290AA3CF1CF80915339876DAAD5485E9C4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetClipCount_mE0FAE290AA3CF1CF80915339876DAAD5485E9C4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetClipCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::RemoveClip2(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animation_RemoveClip2_m86CF46CA460AADCE9373872AD22B2EE51BFB1FB1 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___clipName0, const RuntimeMethod* method)
{
	typedef void (*Animation_RemoveClip2_m86CF46CA460AADCE9373872AD22B2EE51BFB1FB1_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*);
	static Animation_RemoveClip2_m86CF46CA460AADCE9373872AD22B2EE51BFB1FB1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_RemoveClip2_m86CF46CA460AADCE9373872AD22B2EE51BFB1FB1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::RemoveClip2(System.String)");
	_il2cpp_icall_func(__this, ___clipName0);
}
// System.Boolean UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef bool (*Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::PlayDefaultAnimation(UnityEngine.PlayMode)");
	bool retVal = _il2cpp_icall_func(__this, ___mode0);
	return retVal;
}
// System.Boolean UnityEngine.Animation::Play(UnityEngine.AnimationPlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m8F0C3CE208F35E209A2182795E10D46F49B5B839 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___mode0;
		bool L_1 = Animation_PlayDefaultAnimation_m406A78CA23531AF46EA6DEA35C436DB3CCB9CFE2(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.AnimationPlayMode)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m23946E47E6CB7B3B546C3560A13C4F065E8BF993 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___animation0, int32_t ___mode1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___animation0;
		int32_t L_1 = ___mode1;
		bool L_2 = Animation_Play_mE08973B841DBC7FAD198F1D2183CA7BA8AD3D331(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Animation::SyncLayer(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_SyncLayer_m6B0CB662B5E777E26B227FD18E9069493FF5042B (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___layer0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___layer0;
		Animation_INTERNAL_CALL_SyncLayer_mFB27BDAD7D14C91456B2508248BEBA9ADE53C0B2(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_CALL_SyncLayer_mFB27BDAD7D14C91456B2508248BEBA9ADE53C0B2 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___self0, int32_t ___layer1, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_CALL_SyncLayer_mFB27BDAD7D14C91456B2508248BEBA9ADE53C0B2_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_INTERNAL_CALL_SyncLayer_mFB27BDAD7D14C91456B2508248BEBA9ADE53C0B2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_CALL_SyncLayer_mFB27BDAD7D14C91456B2508248BEBA9ADE53C0B2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_CALL_SyncLayer(UnityEngine.Animation,System.Int32)");
	_il2cpp_icall_func(___self0, ___layer1);
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animation_GetEnumerator_m1AA556FBFDF08728D25984E9C3123C187DC76191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * L_0 = (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C *)il2cpp_codegen_object_new(Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C_il2cpp_TypeInfo_var);
		Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, String_t*);
	static Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * (*Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AnimationClip UnityEngine.Animation::GetClip(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * Animation_GetClip_m969655322B952D724332615B75AAD0092CDD59D1 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_0 = NULL;
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * V_1 = NULL;
	{
		String_t* L_0 = ___name0;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_1 = Animation_GetState_mA9C3339C7F4E26737EED4E0509DA5214105FFA5C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = V_0;
		bool L_3 = TrackedReference_op_Implicit_mE2F202D7C4D71679836CC2AE2CA08645E3208E44(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_4 = V_0;
		NullCheck(L_4);
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_5 = AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0020:
	{
		V_1 = (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *)NULL;
		goto IL_0027;
	}

IL_0027:
	{
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UnityEngine.Animation::get_animatePhysics()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_animatePhysics_m923EC44ADFB100AAD3EE72A9F7C24A479958256E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_animatePhysics()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_animatePhysics(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_animatePhysics_m420F6751AE842725DDA4D742CE53CF534D0BADA4 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_animatePhysics_m420F6751AE842725DDA4D742CE53CF534D0BADA4_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, bool);
	static Animation_set_animatePhysics_m420F6751AE842725DDA4D742CE53CF534D0BADA4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_animatePhysics_m420F6751AE842725DDA4D742CE53CF534D0BADA4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_animatePhysics(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animation::get_animateOnlyIfVisible()
extern "C" IL2CPP_METHOD_ATTR bool Animation_get_animateOnlyIfVisible_mBE1186FC1ED733649FD67C2ED0B838382071DBAD (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef bool (*Animation_get_animateOnlyIfVisible_mBE1186FC1ED733649FD67C2ED0B838382071DBAD_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_animateOnlyIfVisible_mBE1186FC1ED733649FD67C2ED0B838382071DBAD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_animateOnlyIfVisible_mBE1186FC1ED733649FD67C2ED0B838382071DBAD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_animateOnlyIfVisible()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_animateOnlyIfVisible(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_animateOnlyIfVisible_mB0CE6228E378D24454C6C65E2B65D402D5B89DC0 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_animateOnlyIfVisible_mB0CE6228E378D24454C6C65E2B65D402D5B89DC0_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, bool);
	static Animation_set_animateOnlyIfVisible_mB0CE6228E378D24454C6C65E2B65D402D5B89DC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_animateOnlyIfVisible_mB0CE6228E378D24454C6C65E2B65D402D5B89DC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_animateOnlyIfVisible(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AnimationCullingType UnityEngine.Animation::get_cullingType()
extern "C" IL2CPP_METHOD_ATTR int32_t Animation_get_cullingType_m8D6141CFEA7E913CEE58A2652071C9390D1E447D (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animation_get_cullingType_m8D6141CFEA7E913CEE58A2652071C9390D1E447D_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *);
	static Animation_get_cullingType_m8D6141CFEA7E913CEE58A2652071C9390D1E447D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_get_cullingType_m8D6141CFEA7E913CEE58A2652071C9390D1E447D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::get_cullingType()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animation::set_cullingType(UnityEngine.AnimationCullingType)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_cullingType_m57AF53973E8751532BD09F564895C292CB20E1B5 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_set_cullingType_m57AF53973E8751532BD09F564895C292CB20E1B5_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, int32_t);
	static Animation_set_cullingType_m57AF53973E8751532BD09F564895C292CB20E1B5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_set_cullingType_m57AF53973E8751532BD09F564895C292CB20E1B5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::set_cullingType(UnityEngine.AnimationCullingType)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Bounds UnityEngine.Animation::get_localBounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Animation_get_localBounds_mD384DFBADB2EB74C1E04D26DBC216E4740BD3227 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, const RuntimeMethod* method)
{
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Animation_INTERNAL_get_localBounds_m7650F745DCB21773EFC056A3D958C8DD9B69B0E7(__this, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = V_0;
		V_1 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animation::set_localBounds(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR void Animation_set_localBounds_mB5C8DF67DF84DC6A5F0BF194C6D45A4FB4AE7C26 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method)
{
	{
		Animation_INTERNAL_set_localBounds_mCE745D9678A2941780F1FFAEDBE769F1DC105DC8(__this, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::INTERNAL_get_localBounds(UnityEngine.BoundsU26)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_get_localBounds_m7650F745DCB21773EFC056A3D958C8DD9B69B0E7 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_get_localBounds_m7650F745DCB21773EFC056A3D958C8DD9B69B0E7_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *);
	static Animation_INTERNAL_get_localBounds_m7650F745DCB21773EFC056A3D958C8DD9B69B0E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_get_localBounds_m7650F745DCB21773EFC056A3D958C8DD9B69B0E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_get_localBounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animation::INTERNAL_set_localBounds(UnityEngine.BoundsU26)
extern "C" IL2CPP_METHOD_ATTR void Animation_INTERNAL_set_localBounds_mCE745D9678A2941780F1FFAEDBE769F1DC105DC8 (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animation_INTERNAL_set_localBounds_mCE745D9678A2941780F1FFAEDBE769F1DC105DC8_ftn) (Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C *, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *);
	static Animation_INTERNAL_set_localBounds_mCE745D9678A2941780F1FFAEDBE769F1DC105DC8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_INTERNAL_set_localBounds_mCE745D9678A2941780F1FFAEDBE769F1DC105DC8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::INTERNAL_set_localBounds(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animation_Enumerator::.ctor(UnityEngine.Animation)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_mE90274D68218FACBF1EC2BBB177244F49E446E11 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = ___outer0;
		__this->set_m_Outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Animation_Enumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m7E017EDF8269D883AB26739301E19787C385F315 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = __this->get_m_Outer_0();
		int32_t L_1 = __this->get_m_CurrentIndex_1();
		NullCheck(L_0);
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = Animation_GetStateAtIndex_mC1F37F66327704F8DD88BE26AD73B2D5051698CA(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation_Enumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC4528CDA0A6BA22B421D8ABB26F0C1843B710195 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_tCFC171459D159DDEC6500B55543A76219D49BB9C * L_0 = __this->get_m_Outer_0();
		NullCheck(L_0);
		int32_t L_1 = Animation_GetStateCount_m9E1764870EAF179CD0D21E3FB5D2DB3086962650(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_m_CurrentIndex_1();
		__this->set_m_CurrentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_m_CurrentIndex_1();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation_Enumerator::Reset()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Reset_mB6DD93470BE4B0948C32BE2919B76788E5C1C1D3 (Enumerator_t6F97AECE1A160A668D8D8798607BE29B1D8CD92C * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_CurrentIndex_1((-1));
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
// System.Void UnityEngine.AnimationClip::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationClip__ctor_mD6CF66D5B878C5D717E86A241A6D3C16542427C3 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	{
		Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443(__this, /*hidden argument*/NULL);
		AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___self0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m87F8D1F5CA59266F288F97C2D1B041EE161C047C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m0B2FF5496BB41415D97BEB4F3D6DEAA6C3C18F20 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, float ___time1, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___go0;
		float L_1 = ___time1;
		int32_t L_2 = AnimationClip_get_wrapMode_m931A996622B39AA833BFE7D02F76B78A2132193E(__this, /*hidden argument*/NULL);
		AnimationClip_SampleAnimation_m231B25987E821249C2C34B719D2084055F371C6F(L_0, __this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SampleAnimation_m231B25987E821249C2C34B719D2084055F371C6F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go0, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * ___clip1, float ___inTime2, int32_t ___wrapMode3, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_SampleAnimation_m231B25987E821249C2C34B719D2084055F371C6F_ftn) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, float, int32_t);
	static AnimationClip_SampleAnimation_m231B25987E821249C2C34B719D2084055F371C6F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SampleAnimation_m231B25987E821249C2C34B719D2084055F371C6F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SampleAnimation(UnityEngine.GameObject,UnityEngine.AnimationClip,System.Single,UnityEngine.WrapMode)");
	_il2cpp_icall_func(___go0, ___clip1, ___inTime2, ___wrapMode3);
}
// System.Single UnityEngine.AnimationClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_length_m55DCD61003D76E19AB0B3649A3C0F072D829CD4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_length()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AnimationClip::get_startTime()
extern "C" IL2CPP_METHOD_ATTR float AnimationClip_get_startTime_m4B1BBD48E4829F0F6B8F851E9C6B27CDCE2EE982 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_startTime_m4B1BBD48E4829F0F6B8F851E9C6B27CDCE2EE982_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_startTime_m4B1BBD48E4829F0F6B8F851E9C6B27CDCE2EE982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_startTime_m4B1BBD48E4829F0F6B8F851E9C6B27CDCE2EE982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_startTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AnimationClip::get_stopTime()
extern "C" IL2CPP_METHOD_ATTR float AnimationClip_get_stopTime_mEF9315B7BD9F84ED9075366FDB2A28E01F448A56 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_stopTime_mEF9315B7BD9F84ED9075366FDB2A28E01F448A56_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_stopTime_mEF9315B7BD9F84ED9075366FDB2A28E01F448A56_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_stopTime_mEF9315B7BD9F84ED9075366FDB2A28E01F448A56_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_stopTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.AnimationClip::get_frameRate()
extern "C" IL2CPP_METHOD_ATTR float AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef float (*AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_frameRate_mDDD2917F025BD64718024A30201EAFADD230C197_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_frameRate()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_frameRate(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, float);
	static AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_frameRate_m67AFA111B36DB56C9F44922470F1B9DADF79F2B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_frameRate(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, String_t* ___relativePath0, Type_t * ___type1, String_t* ___propertyName2, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C * ___curve3, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, String_t*, Type_t *, String_t*, AnimationCurve_tD2F265379583AAF1BF8D84F1BB8DB12980FA504C *);
	static AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_m2012B8495566C4CFB7AAD00564499A101B0394D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___relativePath0, ___type1, ___propertyName2, ___curve3);
}
// System.Void UnityEngine.AnimationClip::EnsureQuaternionContinuity()
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_EnsureQuaternionContinuity_m0C59F0A551284C16DA1C594266BB1BE00160006F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::EnsureQuaternionContinuity()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.AnimationClip::ClearCurves()
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_ClearCurves_mEF0DFAC6FC1EAC3A5DF07C000268B77F74AD9F60 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_ClearCurves_mEF0DFAC6FC1EAC3A5DF07C000268B77F74AD9F60_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_ClearCurves_mEF0DFAC6FC1EAC3A5DF07C000268B77F74AD9F60_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_ClearCurves_mEF0DFAC6FC1EAC3A5DF07C000268B77F74AD9F60_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::ClearCurves()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.WrapMode UnityEngine.AnimationClip::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationClip_get_wrapMode_m931A996622B39AA833BFE7D02F76B78A2132193E (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AnimationClip_get_wrapMode_m931A996622B39AA833BFE7D02F76B78A2132193E_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_wrapMode_m931A996622B39AA833BFE7D02F76B78A2132193E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_wrapMode_m931A996622B39AA833BFE7D02F76B78A2132193E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_wrapMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_wrapMode_m22F4B300902F25F64B85EF448D7D86A2074E6AFD (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_wrapMode_m22F4B300902F25F64B85EF448D7D86A2074E6AFD_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, int32_t);
	static AnimationClip_set_wrapMode_m22F4B300902F25F64B85EF448D7D86A2074E6AFD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_wrapMode_m22F4B300902F25F64B85EF448D7D86A2074E6AFD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Bounds UnityEngine.AnimationClip::get_localBounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  AnimationClip_get_localBounds_m73F80CDE00380C309B7A9E2D8B887F51CA1C58AD (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		AnimationClip_get_localBounds_Injected_m277865BE1FE12E500BC0B790AB87B3CF78CC4219(__this, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.AnimationClip::set_localBounds(UnityEngine.Bounds)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_m7BD49685DBD99B57E4DBBD395A16CB6CE2CA7D40 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___value0, const RuntimeMethod* method)
{
	{
		AnimationClip_set_localBounds_Injected_m860E505029DD0A28844EA28C6A4E813E245EDA8F(__this, (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.AnimationClip::get_legacy()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_legacy_mD5ACD53883943150B90378B86216E8330F499485_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_legacy()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, bool);
	static AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_legacy_m810FC1E97431C532BC03F9A99334A78C212521DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_legacy(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.AnimationClip::get_humanMotion()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_humanMotion_mAC111B1F869FBFDED993607BB5050423BAF89469 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_humanMotion_mAC111B1F869FBFDED993607BB5050423BAF89469_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_humanMotion_mAC111B1F869FBFDED993607BB5050423BAF89469_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_humanMotion_mAC111B1F869FBFDED993607BB5050423BAF89469_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_humanMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_empty()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_empty_mA4F9A8D03636F9F93AEC6A6B103EA610F3E8ADB5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_empty()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasGenericRootTransform()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasGenericRootTransform_m3B36D07BF202E7563509916BA53728FC6A144E6E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasGenericRootTransform()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionFloatCurves()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionFloatCurves_m7CE6DB4BABDA95132DFA8B3D765F97F057B8BC63 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasMotionFloatCurves_m7CE6DB4BABDA95132DFA8B3D765F97F057B8BC63_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasMotionFloatCurves_m7CE6DB4BABDA95132DFA8B3D765F97F057B8BC63_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionFloatCurves_m7CE6DB4BABDA95132DFA8B3D765F97F057B8BC63_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionFloatCurves()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasMotionCurves()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasMotionCurves_m6805BC5D8C22A62C166EDF50A6A1191D76F99EC4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasMotionCurves()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootCurves()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootCurves_m54E4627B00FDA2EEF1AA24227060F60D462233FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootCurves()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
extern "C" IL2CPP_METHOD_ATTR bool AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef bool (*AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_hasRootMotion_m8D147F46654439710C1BCEC238861512DD4A8E2F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_hasRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::AddEvent(UnityEngine.AnimationEvent)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_AddEvent_m09367D827FC274A158CE2B408EE0083CB1DD330B (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClip_AddEvent_m09367D827FC274A158CE2B408EE0083CB1DD330B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * L_0 = ___evt0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral90DB30F1092F19237481D194C23E43DF265AE3D6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, AnimationClip_AddEvent_m09367D827FC274A158CE2B408EE0083CB1DD330B_RuntimeMethod_var);
	}

IL_0012:
	{
		AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * L_2 = ___evt0;
		AnimationClip_AddEventInternal_mA9B809BFABC24C3F2619F552074EEC085A41623C(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::AddEventInternal(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_AddEventInternal_mA9B809BFABC24C3F2619F552074EEC085A41623C (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, RuntimeObject * ___evt0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_AddEventInternal_mA9B809BFABC24C3F2619F552074EEC085A41623C_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, RuntimeObject *);
	static AnimationClip_AddEventInternal_mA9B809BFABC24C3F2619F552074EEC085A41623C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_AddEventInternal_mA9B809BFABC24C3F2619F552074EEC085A41623C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::AddEventInternal(System.Object)");
	_il2cpp_icall_func(__this, ___evt0);
}
// UnityEngine.AnimationEvent[] UnityEngine.AnimationClip::get_events()
extern "C" IL2CPP_METHOD_ATTR AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824* AnimationClip_get_events_m78276F54C4645121443127B75014F49901E749EF (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClip_get_events_m78276F54C4645121443127B75014F49901E749EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824* V_0 = NULL;
	{
		RuntimeArray * L_0 = AnimationClip_GetEventsInternal_m777F9D070F4C4F91554DDB1C2E06F044590CE9C3(__this, /*hidden argument*/NULL);
		V_0 = ((AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824*)Castclass((RuntimeObject*)L_0, AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824_il2cpp_TypeInfo_var));
		goto IL_0012;
	}

IL_0012:
	{
		AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationClip::set_events(UnityEngine.AnimationEvent[])
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_events_mC7DAB8003F8007DC47A1CF239F26A4B35BFFA371 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824* ___value0, const RuntimeMethod* method)
{
	{
		AnimationEventU5BU5D_tAC055C4BB4A734012C3F2C1067E25C46952DB824* L_0 = ___value0;
		AnimationClip_SetEventsInternal_m40054ECBDADC5E963060414DF2E5334F2A4ED33A(__this, (RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::SetEventsInternal(System.Array)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_SetEventsInternal_m40054ECBDADC5E963060414DF2E5334F2A4ED33A (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, RuntimeArray * ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_SetEventsInternal_m40054ECBDADC5E963060414DF2E5334F2A4ED33A_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, RuntimeArray *);
	static AnimationClip_SetEventsInternal_m40054ECBDADC5E963060414DF2E5334F2A4ED33A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetEventsInternal_m40054ECBDADC5E963060414DF2E5334F2A4ED33A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetEventsInternal(System.Array)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Array UnityEngine.AnimationClip::GetEventsInternal()
extern "C" IL2CPP_METHOD_ATTR RuntimeArray * AnimationClip_GetEventsInternal_m777F9D070F4C4F91554DDB1C2E06F044590CE9C3 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, const RuntimeMethod* method)
{
	typedef RuntimeArray * (*AnimationClip_GetEventsInternal_m777F9D070F4C4F91554DDB1C2E06F044590CE9C3_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *);
	static AnimationClip_GetEventsInternal_m777F9D070F4C4F91554DDB1C2E06F044590CE9C3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_GetEventsInternal_m777F9D070F4C4F91554DDB1C2E06F044590CE9C3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::GetEventsInternal()");
	RuntimeArray * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.BoundsU26)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_get_localBounds_Injected_m277865BE1FE12E500BC0B790AB87B3CF78CC4219 (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_get_localBounds_Injected_m277865BE1FE12E500BC0B790AB87B3CF78CC4219_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *);
	static AnimationClip_get_localBounds_Injected_m277865BE1FE12E500BC0B790AB87B3CF78CC4219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_get_localBounds_Injected_m277865BE1FE12E500BC0B790AB87B3CF78CC4219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::get_localBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.BoundsU26)
extern "C" IL2CPP_METHOD_ATTR void AnimationClip_set_localBounds_Injected_m860E505029DD0A28844EA28C6A4E813E245EDA8F (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * __this, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * ___value0, const RuntimeMethod* method)
{
	typedef void (*AnimationClip_set_localBounds_Injected_m860E505029DD0A28844EA28C6A4E813E245EDA8F_ftn) (AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *);
	static AnimationClip_set_localBounds_Injected_m860E505029DD0A28844EA28C6A4E813E245EDA8F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_set_localBounds_Injected_m860E505029DD0A28844EA28C6A4E813E245EDA8F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::set_localBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___value0);
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


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL, NULL);
}
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_back(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_pinvoke_cleanup(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL, NULL);
}
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com_back(const AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled, AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
extern "C" void AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshal_com_cleanup(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent__ctor_m6C228EB716B6B53DE2665091C056428EFB90897F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_m_Time_0((0.0f));
		__this->set_m_FunctionName_1(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_StringParameter_2(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_m_ObjectReferenceParameter_3((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL);
		__this->set_m_FloatParameter_4((0.0f));
		__this->set_m_IntParameter_5(0);
		__this->set_m_MessageOptions_6(0);
		__this->set_m_Source_7(0);
		__this->set_m_StateSender_8((AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *)NULL);
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_data()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimationEvent_get_data_mEB2ADBF55D1BDEBF3EB7834CA6F97FF89F21C0B2 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_StringParameter_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_data_mBF03EA6C4AF8B1031EF310731E48D24BBF37F5C6 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_StringParameter_2(L_0);
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_stringParameter()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimationEvent_get_stringParameter_m7EB09A29913049EE1AE3F7EB770917A9E66DF35A (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_StringParameter_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_stringParameter_m1F6B7BEA799AA7F6F2FD67CD489E437634E968F4 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_StringParameter_2(L_0);
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
extern "C" IL2CPP_METHOD_ATTR float AnimationEvent_get_floatParameter_m69D86FA42954A0EAEA6DEF2B59869AC07C8C4A10 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_FloatParameter_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_floatParameter_m0C01DF22AC77299A384E694C58DDA9FE3EEF8354 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_FloatParameter_4(L_0);
		return;
	}
}
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationEvent_get_intParameter_m8ECF6848E8C839AF0BDA8D265983B28208EF5E45 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_IntParameter_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_intParameter_m3F3078C7F6DE5E32453961EDC2383C4891431653 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_IntParameter_5(L_0);
		return;
	}
}
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
extern "C" IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * AnimationEvent_get_objectReferenceParameter_m451A9337C5CEDDDE0B60FB03A4B3C119F1917AE6 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * V_0 = NULL;
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = __this->get_m_ObjectReferenceParameter_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_objectReferenceParameter_mD92DC48CE0EC5BE7A38BF5545C57E7CCDDAB6E32 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___value0, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___value0;
		__this->set_m_ObjectReferenceParameter_3(L_0);
		return;
	}
}
// System.String UnityEngine.AnimationEvent::get_functionName()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimationEvent_get_functionName_m4277661AB67E6D1466E190CF25EACC6C0A21CF8B (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_FunctionName_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_functionName_m3F7CCC02127FEA59E2E280BECAF5EC54742B7B61 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_m_FunctionName_1(L_0);
		return;
	}
}
// System.Single UnityEngine.AnimationEvent::get_time()
extern "C" IL2CPP_METHOD_ATTR float AnimationEvent_get_time_m0CBDB47796472E0652835CE876AFB85B26220CB1 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Time_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_time_m849F7155C32E372130EDFEFFAE92ED94F29EE729 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Time_0(L_0);
		return;
	}
}
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationEvent_get_messageOptions_m89169D31E4D2863C1F7DA1CD989101FDC6C52B75 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MessageOptions_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
extern "C" IL2CPP_METHOD_ATTR void AnimationEvent_set_messageOptions_m526A1DD5A1441F1D1064F16948D6A4C21F9EE061 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_MessageOptions_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByLegacy()
extern "C" IL2CPP_METHOD_ATTR bool AnimationEvent_get_isFiredByLegacy_m3C97058CCCF537E3F5FF86C99DB27E4696799ECF (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Source_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AnimationEvent::get_isFiredByAnimator()
extern "C" IL2CPP_METHOD_ATTR bool AnimationEvent_get_isFiredByAnimator_mC87145EB434E27B5B1713E96552C56B4FF1AA0B7 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Source_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
extern "C" IL2CPP_METHOD_ATTR AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * AnimationEvent_get_animationState_m97F2E79A917D8468424831E932A03BA9BF7713CA (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent_get_animationState_m97F2E79A917D8468424831E932A03BA9BF7713CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * V_0 = NULL;
	{
		bool L_0 = AnimationEvent_get_isFiredByLegacy_m3C97058CCCF537E3F5FF86C99DB27E4696799ECF(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral951309BF66822FAA0124B93F2A6E04DB28631D28, /*hidden argument*/NULL);
	}

IL_0016:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_1 = __this->get_m_StateSender_8();
		V_0 = L_1;
		goto IL_0022;
	}

IL_0022:
	{
		AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::get_animatorStateInfo()
extern "C" IL2CPP_METHOD_ATTR AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  AnimationEvent_get_animatorStateInfo_m920DDE5B2141B925E99D2F264DD9442736E842CA (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent_get_animatorStateInfo_m920DDE5B2141B925E99D2F264DD9442736E842CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_mC87145EB434E27B5B1713E96552C56B4FF1AA0B7(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral3903E6A07B47FB15B7DB97AA3E54D9ECDE8403FE, /*hidden argument*/NULL);
	}

IL_0016:
	{
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_1 = __this->get_m_AnimatorStateInfo_9();
		V_0 = L_1;
		goto IL_0022;
	}

IL_0022:
	{
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::get_animatorClipInfo()
extern "C" IL2CPP_METHOD_ATTR AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  AnimationEvent_get_animatorClipInfo_m1317C7C3C4411E70D38AF4E97305A2193494C42D (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationEvent_get_animatorClipInfo_m1317C7C3C4411E70D38AF4E97305A2193494C42D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = AnimationEvent_get_isFiredByAnimator_mC87145EB434E27B5B1713E96552C56B4FF1AA0B7(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralEB133F4E0F7233E456C4B73BC81F165EA7547C40, /*hidden argument*/NULL);
	}

IL_0016:
	{
		AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  L_1 = __this->get_m_AnimatorClipInfo_10();
		V_0 = L_1;
		goto IL_0022;
	}

IL_0022:
	{
		AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.AnimationEvent::GetHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimationEvent_GetHash_m38521BB51BF037666894D7CED4444D9CED154517 (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		String_t* L_0 = AnimationEvent_get_functionName_m4277661AB67E6D1466E190CF25EACC6C0A21CF8B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		float L_3 = AnimationEvent_get_time_m0CBDB47796472E0652835CE876AFB85B26220CB1(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)33), (int32_t)L_2)), (int32_t)L_4));
		int32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0031;
	}

IL_0031:
	{
		int32_t L_6 = V_2;
		return L_6;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimationState::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationState__ctor_mD763623A91BDF7F4AA95507A977F815103284E06 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method)
{
	{
		TrackedReference__ctor_m3F870F888D748E167296D3434305F6769CDB5B04(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationClip UnityEngine.AnimationState::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092 (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * __this, const RuntimeMethod* method)
{
	typedef AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * (*AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092_ftn) (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 *);
	static AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_clip_m099599D843F26BA5EF7541F1B1782AFD80F69092_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_clip()");
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + 1);
	return AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E((AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationClipPlayable_GetHandle_mB1B706B9ADB194766DC938C332469AC698AD0D9E((AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE_AdjustorThunk (RuntimeObject * __this, AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183  ___other0, const RuntimeMethod* method)
{
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 * _thisAdjusted = reinterpret_cast<AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 *>(__this + 1);
	return AnimationClipPlayable_Equals_m06BA3E1C3AE0CC205C8531CCF6596C99C8D927EE(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_mC3942EB4B00EAC10035AA7EBE23CA679C8790D20_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral6502516F734DD885173E353D47AAEB82BC7070A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + 1);
	AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + 1);
	return AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59 (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationLayerMixerPlayable_GetHandle_mD4159505D29B17D507599ED6FA3BEC1370691DB8((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59_AdjustorThunk (RuntimeObject * __this, AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___other0, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * _thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 *>(__this + 1);
	return AnimationLayerMixerPlayable_Equals_m0A6A86FEDCE98E63B84BD01D0D362D03EA733E59(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationLayerMixerPlayable__cctor_m3712A5D44F275E70624C0D734C9CED9BD12D0AC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_mA2156DFDEA435F14446528098837ED3FF6B7147C((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_m172B8D6DA48AD49F0740833F7D18CD468B072E5E_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral35482DF98E7DEED2FC6BDE9BDD1E273E27CF1F2C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + 1);
	AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567 (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + 1);
	return AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationMixerPlayable_GetHandle_mC5939239D7C47C6E0FF4EC72021EE793863BC567((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F_AdjustorThunk (RuntimeObject * __this, AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___other0, const RuntimeMethod* method)
{
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * _thisAdjusted = reinterpret_cast<AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A *>(__this + 1);
	return AnimationMixerPlayable_Equals_m7CB1B61B74A6BE00A35AD072490F07D4C7A17B0F(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMixerPlayable__cctor_m820F56C1D4257D4F5446BD66402D4428E0DF8E3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mD446E3257F803A3D4C04D394A75AA5376533CF43((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_mCC63F3E0D55A21A9E56D80D26150AD2B78C6EC50_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral59BDBA16999CF4EF3F7712740907B2C5E860459C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + 1);
	AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076 (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + 1);
	return AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationMotionXToDeltaPlayable_GetHandle_mE36F0671962333EAF5B434A062930D9E76A79076((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E_AdjustorThunk (RuntimeObject * __this, AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___other0, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * _thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC *>(__this + 1);
	return AnimationMotionXToDeltaPlayable_Equals_m53B4AAB54D7F3633C3954056F8C334BB8B7D590E(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationMotionXToDeltaPlayable__cctor_mCB948CE31E0AAEC53CB1D6746D091604413C5EEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mC51D5F76DD0CE29B305932303A4A5AA42ACCD9E6((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607 (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_mF434E44E279E1DBD0887921B38A5C57812B1371A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral04E4E32AA834F9BA9336C5388E9470F196EB0891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + 1);
	AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + 1);
	return AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationOffsetPlayable_GetHandle_m5213878A6D7F29801F74CD3A8B866D444793665E((AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C"  bool AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF_AdjustorThunk (RuntimeObject * __this, AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___other0, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * _thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E *>(__this + 1);
	return AnimationOffsetPlayable_Equals_m30B207FC6287EABF6FC1FDA47784322A3ABB98DF(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationOffsetPlayable__cctor_m174AD41778526FA15E41C6A11303A4F190A4CEA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_m380B4761BE82E4684F82A18933DBBC79E3D5F607((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_m35A103AAF8E80E7C007214546C71B4E90901C2A2_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteralFCF5307272E4A4426DDA9E4E6930E2B834B95B2C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + 1);
	AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + 1);
	return AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961 (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationPosePlayable_GetHandle_m9D856E83755A447ABCD6C0D8FE011AFF659A016E((AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C"  bool AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961_AdjustorThunk (RuntimeObject * __this, AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___other0, const RuntimeMethod* method)
{
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * _thisAdjusted = reinterpret_cast<AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 *>(__this + 1);
	return AnimationPosePlayable_Equals_m4417430115DCF9B39D3E4B64424120CE7E555961(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationPosePlayable__cctor_mDE42A26BC2624427AA8086C4AB69FB531949153F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mF02468DCD2C8C0226C89C4DF90454DD9D230595D((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1 (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_m1E16540EE6283270E3DE85D46C3BE1F8B85E73C2_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteralB9DF0CBB713EC6E9DFD70C9BFB0B820148433428, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + 1);
	AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + 1);
	return AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationRemoveScalePlayable_GetHandle_mA5063F10E01C8546F88E9ABE07B71373BF290EED((AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *)(&___other0), /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = L_0;
		RuntimeObject * L_2 = Box(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject * L_3 = Box(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var, __this);
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_2);
		*__this = *(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *)UnBox(L_3);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
extern "C"  bool AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD_AdjustorThunk (RuntimeObject * __this, AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___other0, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * _thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B *>(__this + 1);
	return AnimationRemoveScalePlayable_Equals_m58B139243E3B27CE86CA4CC470895BF719CD9BAD(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationRemoveScalePlayable__cctor_m7BA13559FDA2BF8E061839B333085C402DED6829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_mB06216973E6B635E7F4A3C8E372E5F7E89D327E1((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		__this->set_m_Handle_0(L_0);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = ___handle0;
		AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + 1);
	AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + 1);
	return AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8(_thisAdjusted, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * L_0 = __this->get_address_of_m_Handle_0();
		bool L_1 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_2 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_2, _stringLiteral7E3996230D9AF0349B43FF7B536FC25AF0C19C71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_3 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		bool L_4 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_mC6A8CB67F39B0B39BF77ED6177B3C2DF1BC91533_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_5 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_5, _stringLiteralB47C26932C83DD7E0C54FC87EDDE2F3B50E5104C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_RuntimeMethod_var);
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_6 = ___handle0;
		__this->set_m_Handle_0(L_6);
		return;
	}
}
extern "C"  void AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + 1);
	AnimatorControllerPlayable_SetHandle_m2CAE8DABC4B19AB6BD90249D0D7FC7A9E07C3A96(_thisAdjusted, ___handle0, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173 (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimatorControllerPlayable_GetHandle_mB83731910E1534BECA36F64BA22AA68A71D08CA8((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173_AdjustorThunk (RuntimeObject * __this, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___other0, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * _thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B *>(__this + 1);
	return AnimatorControllerPlayable_Equals_m04685CCA5A5FC388A0387D3453A677C0CB47D173(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerPlayable__cctor_m6FCC197F3BF33EAFC37D5217617FCDC64E8B304E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_m739B1BFC592B6C160410141057F1B2BA1B971897((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
// System.Void UnityEngine.Animator::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Animator__ctor_m4FCF89193629604098F700B0A0D6DA11CD5C766C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m409AEC21511ACF9A4CC0654DF4B8253E0D81D22C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_isOptimizable()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isOptimizable_mD6CA0D573A848FB25F0664F1FA346BC5A7304484 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isOptimizable_mD6CA0D573A848FB25F0664F1FA346BC5A7304484_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isOptimizable_mD6CA0D573A848FB25F0664F1FA346BC5A7304484_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isOptimizable_mD6CA0D573A848FB25F0664F1FA346BC5A7304484_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isOptimizable()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_isHuman()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_mFD0E2CDDB50DE69A6048B2D7575EE1E9F4E22AE9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_hasRootMotion()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasRootMotion_mD77AF741113D388C6AB56C463F66C2AA25E4377A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_isRootPositionOrRotationControlledByCurves()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isRootPositionOrRotationControlledByCurves_m2C5C861D09EDE628BC7C7AE99CF1330FEB11C89E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isRootPositionOrRotationControlledByCurves_m2C5C861D09EDE628BC7C7AE99CF1330FEB11C89E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isRootPositionOrRotationControlledByCurves_m2C5C861D09EDE628BC7C7AE99CF1330FEB11C89E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isRootPositionOrRotationControlledByCurves_m2C5C861D09EDE628BC7C7AE99CF1330FEB11C89E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isRootPositionOrRotationControlledByCurves()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_humanScale()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_humanScale_m3D0BCB1800320DB76758593AD60D433937E5D352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_humanScale()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_isInitialized()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isInitialized_mC4B380F4376B55D1D019C2A9650AA31C6090CA9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isInitialized()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloat_m1C8B853CA82031CE4775FBDCDEDDB3C9E702695F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___name0;
		float L_1 = Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloat_mD81DFC8E86940E023CF5512DC8E7003A5FF63260 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___id0;
		float L_1 = Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_mE4C29F6980EBBBD954637721E6E13A0BE2B13C43 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_mC260C82EF3FD1DB6B66FE898C595D5F901E59681 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_mF9C412D31B389EC3305BB8FC299A09AA95A8A415 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_mDB08D164D3B75C6C71B053DCC759ECC606E88FF9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___value1;
		float L_2 = ___dampTime2;
		float L_3 = ___deltaTime3;
		Animator_SetFloatIDDamp_m8AA9834CFFE57CC417688157BD10A22312FA2C2F(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBool_mA8837B3CA5790D26D1FDB51DF5DD9B846B898717 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1 = Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBool_m3EF049B6FDEE9452A1F23A4B0710B49F43342A66 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1 = Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m497805BA217139E42808899782FA05C15BC9879E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		bool L_1 = ___value1;
		Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBool_m706B7DB1DAED4AE10ECD1BF6876FB0B524082A10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		bool L_1 = ___value1;
		Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m16203A9DA336AED55D110B790DC65B0E168D808A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = Animator_GetIntegerString_m2A45CD7EA21DBC7A1EA8DA26BE132E00925DC0D3(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m1DDF7A3E992C16F0DB2FF02BF37A280181BE90BC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetInteger_m1E6D66416F48D6E02E7618A0142D70F5232BCC22 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetInteger_m89D0F15197F3B4D75E02194B432685F68F458B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		int32_t L_1 = ___value1;
		Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTrigger_m68D29B7FA54C2F230F5AD780D462612B18E74245 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2ED217B225743B9C9EB3E7B0B8905FFEEB221002 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m70120C9A00EA482BF0880D2C02EC814CE3D71FD1 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTrigger_mE0784AD15610BB61C5A59663BD9E11FF73ACDABC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_m82BC703CA3BAF21FBA3C975E2EEC2324430F3340 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1 = Animator_IsParameterControlledByCurveString_m47670461F4728B925592D4054D331E636F1CBD40(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_m9ED3A58307F5928EA276A460BC4EAC6543C5BB28 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___id0;
		bool L_1 = Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_deltaPosition_m85287AA699C50B6AA7489CD313F8CFED5D998533 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_deltaRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_deltaRotation_m933C75B70C9BB65406836F97FDE973EAA6E1F7A3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_velocity_m9AD156A57EEBC07FEDF54DABE02115539DC4D3A7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_angularVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_angularVelocity_m0BDC5AAAF2D45A47DF06C3CDEA2AD30811581AE0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_angularVelocity_Injected_m24880936B97814434A5742D4063C88651838D9DF(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_rootPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_rootPosition_m13E24EA82E61F8EE2454C899C30FFA3A7247F298 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_rootPosition_Injected_m37A98F61D180A4C6136664A85A930D91507774C7(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_rootPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootPosition_m946DB4E102AE031F1D25EF49AAA25F85C5BED5FB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Animator_set_rootPosition_Injected_m22D0A61CA143C2F980EF1C8256CF566BBA5E8F0D(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_rootRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_rootRotation_m68969AC7E749C182149EF6A05307930613FAB6B0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_rootRotation_Injected_mD1D15DA26C4949050CE7F7B314F1F0D4F41D400D(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_rootRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootRotation_m8CA6095289815E6248C6F16F48D2BB385E18245D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		Animator_set_rootRotation_Injected_m5D8A4B89E2E5BDFB91A3F6AB097B8C60BC037D9A(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::get_applyRootMotion()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_applyRootMotion_mD07C6372485DDF19274F1C70CE1540549F91EA2F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_applyRootMotion_mD07C6372485DDF19274F1C70CE1540549F91EA2F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_applyRootMotion_mD07C6372485DDF19274F1C70CE1540549F91EA2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_applyRootMotion_mD07C6372485DDF19274F1C70CE1540549F91EA2F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_applyRootMotion()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_mD25B7FCFCDAD7C5D107E860D2E46AB765271A982_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_linearVelocityBlending()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_linearVelocityBlending_m88BAD7B78E517B2FA321DB8DFE85F62F27D2F642 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_linearVelocityBlending_m88BAD7B78E517B2FA321DB8DFE85F62F27D2F642_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_linearVelocityBlending_m88BAD7B78E517B2FA321DB8DFE85F62F27D2F642_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_linearVelocityBlending_m88BAD7B78E517B2FA321DB8DFE85F62F27D2F642_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_linearVelocityBlending()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_linearVelocityBlending_mE5F9A4AD3658DA353C49B68905FDCE73F7471491 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_linearVelocityBlending_mE5F9A4AD3658DA353C49B68905FDCE73F7471491_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_linearVelocityBlending_mE5F9A4AD3658DA353C49B68905FDCE73F7471491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_linearVelocityBlending_mE5F9A4AD3658DA353C49B68905FDCE73F7471491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_linearVelocityBlending(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_animatePhysics()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_animatePhysics_m8F31859ED055E02D2F2EF7A84E69D02970FE1D6D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_animatePhysics(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_animatePhysics_mD5579487179EF4F1FDA7CC8129DB6C719EAD4B6A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * G_B2_0 = NULL;
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimatorUpdateMode UnityEngine.Animator::get_updateMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_updateMode_m0116C4E46BD6837B24F75012D7FF8ECEA9525017_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_updateMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_updateMode_mE9B6BEDF6F0684E86ED34A0C748A759C218EA96B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_updateMode(UnityEngine.AnimatorUpdateMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_hasTransformHierarchy()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_hasTransformHierarchy_m5BD42C4CB5F13AF56A3071C0D9921852AB1CB230 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasTransformHierarchy_m5BD42C4CB5F13AF56A3071C0D9921852AB1CB230_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_hasTransformHierarchy_m5BD42C4CB5F13AF56A3071C0D9921852AB1CB230_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasTransformHierarchy_m5BD42C4CB5F13AF56A3071C0D9921852AB1CB230_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasTransformHierarchy()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_allowConstantClipSamplingOptimization()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_allowConstantClipSamplingOptimization_m7FEEC9A60BC43D79DE54832AABE9D277C2D179AE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_allowConstantClipSamplingOptimization_m7FEEC9A60BC43D79DE54832AABE9D277C2D179AE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_allowConstantClipSamplingOptimization_m7FEEC9A60BC43D79DE54832AABE9D277C2D179AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_allowConstantClipSamplingOptimization_m7FEEC9A60BC43D79DE54832AABE9D277C2D179AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_allowConstantClipSamplingOptimization()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_allowConstantClipSamplingOptimization(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_allowConstantClipSamplingOptimization_mB2160F2FB2D13711BA78527076A62BBE82B737BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_allowConstantClipSamplingOptimization_mB2160F2FB2D13711BA78527076A62BBE82B737BE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_allowConstantClipSamplingOptimization_mB2160F2FB2D13711BA78527076A62BBE82B737BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_allowConstantClipSamplingOptimization_mB2160F2FB2D13711BA78527076A62BBE82B737BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_allowConstantClipSamplingOptimization(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_gravityWeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_gravityWeight_mA6208FEAB09B698B0624B1D1AAAB7F44D9FE2E53 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_gravityWeight_mA6208FEAB09B698B0624B1D1AAAB7F44D9FE2E53_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_gravityWeight_mA6208FEAB09B698B0624B1D1AAAB7F44D9FE2E53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_gravityWeight_mA6208FEAB09B698B0624B1D1AAAB7F44D9FE2E53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_gravityWeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_bodyPosition_m4594168CE51A9DD05E8A51FB27C0F81A3775B770 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Animator_get_bodyPositionInternal_mCF2F9CCE09284EE6919E6D7BBCD16A22B82196DD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyPosition_mD270AAECA3037B2795B5C8DC8F5BA1EA18E90F3A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		Animator_set_bodyPositionInternal_m4C64A42A3636EF434302F92E6B801E2715FC0230(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_bodyPositionInternal_mCF2F9CCE09284EE6919E6D7BBCD16A22B82196DD (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_bodyPositionInternal_Injected_m2B436C16A410688B8907F11AD22B92772AD8DE58(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m4C64A42A3636EF434302F92E6B801E2715FC0230 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Animator_set_bodyPositionInternal_Injected_mA6D0FEB76F7F2126AA8DA760B1C87905E2DC3FA8(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_bodyRotation_mB4CBBBA2BC15DE87005412E34C134B023D16DE4F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Animator_get_bodyRotationInternal_mC5410345EC3CEB0F28CE018307B8B4F40F3C7751(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_0013:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyRotation_mB51FBE97714BF4A8BE2A79AFFCBFC71B23232D48 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		Animator_set_bodyRotationInternal_mEFA1CD332553A417FCAE2ED56F1178F64E6515D3(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_bodyRotationInternal_mC5410345EC3CEB0F28CE018307B8B4F40F3C7751 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_bodyRotationInternal_Injected_m6A49C5393DDAE53924C5C81D83B21B24C72B7216(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mEFA1CD332553A417FCAE2ED56F1178F64E6515D3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		Animator_set_bodyRotationInternal_Injected_m0FBF45C6C1AB5D6483A31DC5D2200864AD7D9F8E(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPosition(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetIKPosition_mFD78C939315E6B8A337CE99C48621BEF0C163133 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Animator_GetGoalPosition_m106F8E21B06DA2464698EE75485FAD053DD0BE4E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetGoalPosition_m106F8E21B06DA2464698EE75485FAD053DD0BE4E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___goal0;
		Animator_GetGoalPosition_Injected_mE542057F582AB3FD1301E9F2940BE2B3607A2DF4(__this, L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPosition_m2A57FAB29642C1C7E19F85F0DFD5421DA32598C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goalPosition1;
		Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m27E296D914F30F2C0BAE57149A4B7E430959E61F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goalPosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737(__this, L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___goalPosition1), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotation(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetIKRotation_mCA2582EAD91AE8E9C0E533EDBAF73C7196B4922A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Animator_GetGoalRotation_m741B3B9895B02D6147D05854D3930931BA195E4C(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetGoalRotation_m741B3B9895B02D6147D05854D3930931BA195E4C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___goal0;
		Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotation_mE871B19486D3E41AF8A361EF1C0393D22F5F0E15 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goalRotation1;
		Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_mEF3F4FDFC5C77775B3DF86C1D2A213AA2FCEA465 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goalRotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___goal0;
		Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___goalRotation1), /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Animator::GetIKPositionWeight(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKPositionWeight_m280493E1191D8D13291465ADC26BF0EC4444FE49 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = Animator_GetGoalWeightPosition_m4888D7926BB35DAD60197FA1BC613EAB87D254BE(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m4888D7926BB35DAD60197FA1BC613EAB87D254BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetGoalWeightPosition_m4888D7926BB35DAD60197FA1BC613EAB87D254BE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetGoalWeightPosition_m4888D7926BB35DAD60197FA1BC613EAB87D254BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightPosition_m4888D7926BB35DAD60197FA1BC613EAB87D254BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)");
	float retVal = _il2cpp_icall_func(__this, ___goal0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m443110C146EEBAFFC49C0194A721070A2D9F2D10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightPosition_m890B8E9CCFF48C094B5E34EE35CC105567F83481_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// System.Single UnityEngine.Animator::GetIKRotationWeight(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKRotationWeight_mEE99C7491BA09BF53FAA2BA7FB5C49D7CA1FADAF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = Animator_GetGoalWeightRotation_m3BB804D79095653CD1F63D0D114930C0A01C2157(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m3BB804D79095653CD1F63D0D114930C0A01C2157 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetGoalWeightRotation_m3BB804D79095653CD1F63D0D114930C0A01C2157_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetGoalWeightRotation_m3BB804D79095653CD1F63D0D114930C0A01C2157_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightRotation_m3BB804D79095653CD1F63D0D114930C0A01C2157_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)");
	float retVal = _il2cpp_icall_func(__this, ___goal0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m3730BB1FF4712D6863B7A32AA2096821CEC3A8CE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___goal0;
		float L_1 = ___value1;
		Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightRotation_mC32F9430FA93AD28AC309F724398A1CAAEF88904_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___goal0, ___value1);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKHintPosition(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetIKHintPosition_mABCA44DFB484059F1CF1EB988465A70DE2A17587 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Animator_GetHintPosition_m93D6D38CEDCC44A7B80482E0F9D581A73FE27270(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetHintPosition(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetHintPosition_m93D6D38CEDCC44A7B80482E0F9D581A73FE27270 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___hint0;
		Animator_GetHintPosition_Injected_mBE63368CFFFA9F9D54CD0917B6FBB5CB28FD0CA5(__this, L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPosition_mFB76758DA8445A766C2F29FCBD7D199DCE54193B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___hintPosition1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___hintPosition1;
		Animator_SetHintPosition_m79B9695B2348B5B3C6A6DC2CE81C08D7DF8D4C7E(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetHintPosition(UnityEngine.AvatarIKHint,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetHintPosition_m79B9695B2348B5B3C6A6DC2CE81C08D7DF8D4C7E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___hintPosition1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___hint0;
		Animator_SetHintPosition_Injected_m15557B68009F083A23C3DA250E7BCAFF3804C064(__this, L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___hintPosition1), /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Animator::GetIKHintPositionWeight(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetIKHintPositionWeight_mD178E65CFE4690EBBDC86419F4321278715BBFD6 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		float L_1 = Animator_GetHintWeightPosition_m10A180D6957586E77C2A05D49365DB65C542A9F3(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetHintWeightPosition_m10A180D6957586E77C2A05D49365DB65C542A9F3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetHintWeightPosition_m10A180D6957586E77C2A05D49365DB65C542A9F3_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetHintWeightPosition_m10A180D6957586E77C2A05D49365DB65C542A9F3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetHintWeightPosition_m10A180D6957586E77C2A05D49365DB65C542A9F3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetHintWeightPosition(UnityEngine.AvatarIKHint)");
	float retVal = _il2cpp_icall_func(__this, ___hint0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIKHintPositionWeight(UnityEngine.AvatarIKHint,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIKHintPositionWeight_m96A474393FF2F05D2A1B5F631790DEF908FE00CD (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___hint0;
		float L_1 = ___value1;
		Animator_SetHintWeightPosition_m9A39FA8AB2D028F3E242387D85554D7D8720CD00(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetHintWeightPosition_m9A39FA8AB2D028F3E242387D85554D7D8720CD00 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetHintWeightPosition_m9A39FA8AB2D028F3E242387D85554D7D8720CD00_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetHintWeightPosition_m9A39FA8AB2D028F3E242387D85554D7D8720CD00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetHintWeightPosition_m9A39FA8AB2D028F3E242387D85554D7D8720CD00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetHintWeightPosition(UnityEngine.AvatarIKHint,System.Single)");
	_il2cpp_icall_func(__this, ___hint0, ___value1);
}
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_mDE13BABEC48388F30A268099BBE6E6E9780BA8F8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___lookAtPosition0;
		Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_mD621D4C229D132ECD57B1D9F90783A16FEBA5A84 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lookAtPosition0, const RuntimeMethod* method)
{
	{
		Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___lookAtPosition0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m2983E7C852140D99418B82A32523F9D4F945C7D0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE(__this, L_0, (0.0f), (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mB1386785E5D4F8B53AD5106A3F34C07CE63C9CDC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE(__this, L_0, L_1, (1.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mA2896325CE8033D1EEC400544B49A76B95541688 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE(__this, L_0, L_1, L_2, (0.0f), (0.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mF1F1303AB83C5CE55A2E89948CFDE52B009FC50C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = ___eyesWeight3;
		Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE(__this, L_0, L_1, L_2, L_3, (0.5f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m6211EF8CF73CD7747A54A8F749099647921A2730 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		float L_0 = ___weight0;
		float L_1 = ___bodyWeight1;
		float L_2 = ___headWeight2;
		float L_3 = ___eyesWeight3;
		float L_4 = ___clampWeight4;
		Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___weight0, float ___bodyWeight1, float ___headWeight2, float ___eyesWeight3, float ___clampWeight4, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float, float, float, float, float);
	static Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtWeightInternal_mFE3EA212AD2159F6A66BF80D30385227E836A4BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___weight0, ___bodyWeight1, ___headWeight2, ___eyesWeight3, ___clampWeight4);
}
// System.Void UnityEngine.Animator::SetBoneLocalRotation(UnityEngine.HumanBodyBones,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotation_m4449A7E23FA46399630C63ABD72C431C9B28169A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___humanBoneId0;
		int32_t L_1 = HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E(L_0, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___rotation1;
		Animator_SetBoneLocalRotationInternal_m608EB22856A73BDE07A3B75A43D235637C1078CB(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal(System.Int32,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_m608EB22856A73BDE07A3B75A43D235637C1078CB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___humanBoneId0;
		Animator_SetBoneLocalRotationInternal_Injected_m8EC895FF336BF559BDC47AFCDABD457750DD0DF3(__this, L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotation1), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.ScriptableObject UnityEngine.Animator::GetBehaviour(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * Animator_GetBehaviour_m06115C5CD1D260AD78FE6F256D57F83458C332B7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * (*Animator_GetBehaviour_m06115C5CD1D260AD78FE6F256D57F83458C332B7_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Type_t *);
	static Animator_GetBehaviour_m06115C5CD1D260AD78FE6F256D57F83458C332B7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBehaviour_m06115C5CD1D260AD78FE6F256D57F83458C332B7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBehaviour(System.Type)");
	ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * retVal = _il2cpp_icall_func(__this, ___type0);
	return retVal;
}
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehaviours(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* Animator_InternalGetBehaviours_mDBC9C83F3BA9F431602F4C3D85400B47BF8716DF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* (*Animator_InternalGetBehaviours_mDBC9C83F3BA9F431602F4C3D85400B47BF8716DF_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Type_t *);
	static Animator_InternalGetBehaviours_mDBC9C83F3BA9F431602F4C3D85400B47BF8716DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InternalGetBehaviours_mDBC9C83F3BA9F431602F4C3D85400B47BF8716DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InternalGetBehaviours(System.Type)");
	ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* retVal = _il2cpp_icall_func(__this, ___type0);
	return retVal;
}
// UnityEngine.StateMachineBehaviour[] UnityEngine.Animator::GetBehaviours(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3* Animator_GetBehaviours_mC759364926B1EF7853444D1731CC54F59F6D0D90 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetBehaviours_mC759364926B1EF7853444D1731CC54F59F6D0D90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3* V_0 = NULL;
	{
		int32_t L_0 = ___fullPathHash0;
		int32_t L_1 = ___layerIndex1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_2, /*hidden argument*/NULL);
		ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* L_4 = Animator_InternalGetBehavioursByKey_m52F3AE2E7511170953E268CA9B52B47F4A25F133(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		V_0 = ((StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3*)IsInst((RuntimeObject*)L_4, StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3_il2cpp_TypeInfo_var));
		goto IL_001e;
	}

IL_001e:
	{
		StateMachineBehaviourU5BU5D_tD7944A6A1F662507F17D170ECB320AA56EDEBED3* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.ScriptableObject[] UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* Animator_InternalGetBehavioursByKey_m52F3AE2E7511170953E268CA9B52B47F4A25F133 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___fullPathHash0, int32_t ___layerIndex1, Type_t * ___type2, const RuntimeMethod* method)
{
	typedef ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* (*Animator_InternalGetBehavioursByKey_m52F3AE2E7511170953E268CA9B52B47F4A25F133_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, Type_t *);
	static Animator_InternalGetBehavioursByKey_m52F3AE2E7511170953E268CA9B52B47F4A25F133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InternalGetBehavioursByKey_m52F3AE2E7511170953E268CA9B52B47F4A25F133_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InternalGetBehavioursByKey(System.Int32,System.Int32,System.Type)");
	ScriptableObjectU5BU5D_t741850250F9CBD2D71480094B194D61DEC247739* retVal = _il2cpp_icall_func(__this, ___fullPathHash0, ___layerIndex1, ___type2);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_stabilizeFeet()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_stabilizeFeet_m7FCD67A778730DECE959EF483A6A3DD8B55E8042 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_stabilizeFeet_m7FCD67A778730DECE959EF483A6A3DD8B55E8042_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_stabilizeFeet_m7FCD67A778730DECE959EF483A6A3DD8B55E8042_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_stabilizeFeet_m7FCD67A778730DECE959EF483A6A3DD8B55E8042_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_stabilizeFeet()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_stabilizeFeet(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_stabilizeFeet_m6CCE35F0EC668A77BE1BAB4F58B9C7924D21AE34 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_stabilizeFeet_m6CCE35F0EC668A77BE1BAB4F58B9C7924D21AE34_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_stabilizeFeet_m6CCE35F0EC668A77BE1BAB4F58B9C7924D21AE34_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_stabilizeFeet_m6CCE35F0EC668A77BE1BAB4F58B9C7924D21AE34_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_stabilizeFeet(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m2360A8B027C5DC4BC1CAE571A46929539C799B9B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.String UnityEngine.Animator::GetLayerName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_GetLayerName_mD62237602E03993FEAFE4DFB3356122DDAC30A87 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef String_t* (*Animator_GetLayerName_mD62237602E03993FEAFE4DFB3356122DDAC30A87_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetLayerName_mD62237602E03993FEAFE4DFB3356122DDAC30A87_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerName_mD62237602E03993FEAFE4DFB3356122DDAC30A87_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerName(System.Int32)");
	String_t* retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Int32 UnityEngine.Animator::GetLayerIndex(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetLayerIndex_mEC89F89066206986412D1CA9AB8C9E0FB242F8C5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___layerName0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetLayerIndex_mEC89F89066206986412D1CA9AB8C9E0FB242F8C5_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_GetLayerIndex_mEC89F89066206986412D1CA9AB8C9E0FB242F8C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerIndex_mEC89F89066206986412D1CA9AB8C9E0FB242F8C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerIndex(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___layerName0);
	return retVal;
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m3BB4629945E1B7275FC9850F2FFB435015E1ED42 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetLayerWeight_m3BB4629945E1B7275FC9850F2FFB435015E1ED42_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetLayerWeight_m3BB4629945E1B7275FC9850F2FFB435015E1ED42_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m3BB4629945E1B7275FC9850F2FFB435015E1ED42_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_mCD79BBDCD7DD47929E00C5EA69DEF2573EAD939F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___weight1);
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfoU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, int32_t ___stateInfoIndex1, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * ___info2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *);
	static Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___stateInfoIndex1, ___info2);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  Animator_GetCurrentAnimatorStateInfo_mBE5ED0D60A6F5CD0EDD40AF1494098D4E7BF84F2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B(__this, L_0, 0, (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *)(&V_0), /*hidden argument*/NULL);
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_1 = V_0;
		V_1 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  Animator_GetNextAnimatorStateInfo_m66A6A93E12C1AB63FDB255483B66A57A0E2D527D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorStateInfo_mBDC199173734AF60218E4727E74F689180BC8D8B(__this, L_0, 1, (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *)(&V_0), /*hidden argument*/NULL);
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_1 = V_0;
		V_1 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfoU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * ___info1, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *);
	static Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___info1);
}
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  Animator_GetAnimatorTransitionInfo_mF4E216230B82075A0F27113CFD86AFC6290DE941 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = ___layerIndex0;
		Animator_GetAnimatorTransitionInfo_m729E8495EC0CEC63E0968BDCFC92D72392589F48(__this, L_0, (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *)(&V_0), /*hidden argument*/NULL);
		AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  L_1 = V_0;
		V_1 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B  L_2 = V_1;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool);
	static Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoCount(System.Int32,System.Boolean)");
	int32_t retVal = _il2cpp_icall_func(__this, ___layerIndex0, ___current1);
	return retVal;
}
// System.Int32 UnityEngine.Animator::GetCurrentAnimatorClipInfoCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetCurrentAnimatorClipInfoCount_mB68F6F9521716016B3019FC67B7DA54F0A68507B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___layerIndex0;
		int32_t L_1 = Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E(__this, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Animator::GetNextAnimatorClipInfoCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetNextAnimatorClipInfoCount_mCD21740EE411DBC7B1C296D6B714A0D6939BF03A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___layerIndex0;
		int32_t L_1 = Animator_GetAnimatorClipInfoCount_m0C22B3029680BA11CA78809ECCB8AED1249D8D8E(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* Animator_GetCurrentAnimatorClipInfo_m594B9A950ECAD03E8F85A715E49010E967845462 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* (*Animator_GetCurrentAnimatorClipInfo_m594B9A950ECAD03E8F85A715E49010E967845462_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetCurrentAnimatorClipInfo_m594B9A950ECAD03E8F85A715E49010E967845462_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentAnimatorClipInfo_m594B9A950ECAD03E8F85A715E49010E967845462_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* Animator_GetNextAnimatorClipInfo_mC12CD69327006906834874F9B559DD0A4878ECCA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* (*Animator_GetNextAnimatorClipInfo_mC12CD69327006906834874F9B559DD0A4878ECCA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetNextAnimatorClipInfo_mC12CD69327006906834874F9B559DD0A4878ECCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetNextAnimatorClipInfo_mC12CD69327006906834874F9B559DD0A4878ECCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32)");
	AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// System.Void UnityEngine.Animator::GetCurrentAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * ___clips1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_0 = ___clips1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC2ACAB5E124D2B5E2EDF7FBA3930A0441C66BBD4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Animator_GetCurrentAnimatorClipInfo_m8625554630FDFEC6AD60E38B2CFD4D5B1DC6036F_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___layerIndex0;
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_3 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E(__this, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___isCurrent1, RuntimeObject * ___clips2, const RuntimeMethod* method)
{
	typedef void (*Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool, RuntimeObject *);
	static Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoInternal(System.Int32,System.Boolean,System.Object)");
	_il2cpp_icall_func(__this, ___layerIndex0, ___isCurrent1, ___clips2);
}
// UnityEngine.AnimatorClipInfo[] UnityEngine.Animator::GetAnimatorClipInfoInternalWinRT(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* Animator_GetAnimatorClipInfoInternalWinRT_mEA9C2511A46BE92D3BDD42B9DF687730491C12D3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___isCurrent1, const RuntimeMethod* method)
{
	typedef AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* (*Animator_GetAnimatorClipInfoInternalWinRT_mEA9C2511A46BE92D3BDD42B9DF687730491C12D3_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool);
	static Animator_GetAnimatorClipInfoInternalWinRT_mEA9C2511A46BE92D3BDD42B9DF687730491C12D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorClipInfoInternalWinRT_mEA9C2511A46BE92D3BDD42B9DF687730491C12D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorClipInfoInternalWinRT(System.Int32,System.Boolean)");
	AnimatorClipInfoU5BU5D_tCAC39F9AE6CEE1EA08285D9D5C44DB3ADD6C1ED6* retVal = _il2cpp_icall_func(__this, ___layerIndex0, ___isCurrent1);
	return retVal;
}
// System.Void UnityEngine.Animator::GetNextAnimatorClipInfo(System.Int32,System.Collections.Generic.List`1<UnityEngine.AnimatorClipInfo>)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * ___clips1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_0 = ___clips1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC2ACAB5E124D2B5E2EDF7FBA3930A0441C66BBD4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Animator_GetNextAnimatorClipInfo_mA7E644BD404E93AE54AA61BBF9C6925485895A49_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___layerIndex0;
		List_1_t34BD75698B68DE47D684862A345F6F9797CE3F9B * L_3 = ___clips1;
		Animator_GetAnimatorClipInfoInternal_mD1DD5AC22F4A108D72E26E9CBCCC4FF8379E757E(__this, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_m03E4399EA4D614A08F61AD5295CDFE5E4B43798C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___layerIndex0);
	return retVal;
}
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
extern "C" IL2CPP_METHOD_ATTR AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* (*Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameters()");
	AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Animator::get_parameterCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_parameterCount_m0AB5E182B18E60C50822D6227E9112EA6846942A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_parameterCount_m0AB5E182B18E60C50822D6227E9112EA6846942A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_parameterCount_m0AB5E182B18E60C50822D6227E9112EA6846942A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_parameterCount_m0AB5E182B18E60C50822D6227E9112EA6846942A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_parameterCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AnimatorControllerParameter UnityEngine.Animator::GetParameter(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * Animator_GetParameter_m1FB640ED7AE379EC9DAE8E2EA169763EC1609FB6 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetParameter_m1FB640ED7AE379EC9DAE8E2EA169763EC1609FB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* V_0 = NULL;
	AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * V_1 = NULL;
	{
		AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* L_0 = Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2 = ___index0;
		AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* L_3 = Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))
		{
			goto IL_003a;
		}
	}

IL_001d:
	{
		AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* L_4 = Animator_get_parameters_m1BD5F40B26D17498C0DD24E7720A2788953542FA(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))));
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3961130C5B3A669464A4F5B64813E7A72DDCE2AC, L_6, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_8 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Animator_GetParameter_m1FB640ED7AE379EC9DAE8E2EA169763EC1609FB6_RuntimeMethod_var);
	}

IL_003a:
	{
		AnimatorControllerParameterU5BU5D_t7B886A2A1648ECF218447ED1DE8D241652F863FD* L_9 = V_0;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		goto IL_0043;
	}

IL_0043:
	{
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Animator::get_feetPivotActive()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_feetPivotActive_mE8173AAA450001BA63387ECD31A39117B0BF79BF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_feetPivotActive_mE8173AAA450001BA63387ECD31A39117B0BF79BF_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_feetPivotActive_mE8173AAA450001BA63387ECD31A39117B0BF79BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_feetPivotActive_mE8173AAA450001BA63387ECD31A39117B0BF79BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_feetPivotActive()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_feetPivotActive(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_feetPivotActive_m6E32D992901B2C9C6FBA351849FCF10CE732BD3A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_feetPivotActive_m6E32D992901B2C9C6FBA351849FCF10CE732BD3A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float);
	static Animator_set_feetPivotActive_m6E32D992901B2C9C6FBA351849FCF10CE732BD3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_feetPivotActive_m6E32D992901B2C9C6FBA351849FCF10CE732BD3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_feetPivotActive(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_pivotWeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_pivotWeight_m8E7B5A1429EF3502C6B20C9085C4BB4959C0A420 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_pivotWeight_m8E7B5A1429EF3502C6B20C9085C4BB4959C0A420_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_pivotWeight_m8E7B5A1429EF3502C6B20C9085C4BB4959C0A420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotWeight_m8E7B5A1429EF3502C6B20C9085C4BB4959C0A420_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotWeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_pivotPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_pivotPosition_mD3E0AFD85D3DC0B1F14335F8AEDD3C2BA0FC2EF7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_m503525DC32BF7379C617C7D25C6A32B7FD91A785 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___matchPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B  ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___targetBodyPart2;
		float L_1 = ___startNormalizedTime4;
		float L_2 = ___targetNormalizedTime5;
		Animator_MatchTarget_Injected_m07028D8BD6DF22DC75C55B07CC08E7579611A6AA(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___matchPosition0), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___matchRotation1), L_0, (MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B *)(&___weightMask3), L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_mDA2BEE902BD00E5AC958F466CD649EEC485FB7EA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___matchPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B  ___weightMask3, float ___startNormalizedTime4, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___matchPosition0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___matchRotation1;
		int32_t L_2 = ___targetBodyPart2;
		MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B  L_3 = ___weightMask3;
		float L_4 = ___startNormalizedTime4;
		Animator_MatchTarget_m503525DC32BF7379C617C7D25C6A32B7FD91A785(__this, L_0, L_1, L_2, L_3, L_4, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_mE386283FE0FC2E5EF16C87C51E9315647E12F6BC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___matchPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B  ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___matchPosition0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___matchRotation1;
		int32_t L_2 = ___targetBodyPart2;
		MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B  L_3 = ___weightMask3;
		float L_4 = ___startNormalizedTime4;
		float L_5 = ___targetNormalizedTime5;
		Animator_MatchTarget_m503525DC32BF7379C617C7D25C6A32B7FD91A785(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::InterruptMatchTarget()
extern "C" IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_mA9050E15F143D59D6BDC98036A93B7656CD76427 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	{
		Animator_InterruptMatchTarget_mDACB5CE4A57F0B22117DAD8A86825F508F033209(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_mDACB5CE4A57F0B22117DAD8A86825F508F033209 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___completeMatch0, const RuntimeMethod* method)
{
	typedef void (*Animator_InterruptMatchTarget_mDACB5CE4A57F0B22117DAD8A86825F508F033209_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_InterruptMatchTarget_mDACB5CE4A57F0B22117DAD8A86825F508F033209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InterruptMatchTarget_mDACB5CE4A57F0B22117DAD8A86825F508F033209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InterruptMatchTarget(System.Boolean)");
	_il2cpp_icall_func(__this, ___completeMatch0);
}
// System.Boolean UnityEngine.Animator::get_isMatchingTarget()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_isMatchingTarget_mD42DD9B3302152752B21D401ED763D6AD9B38434 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_isMatchingTarget_mD42DD9B3302152752B21D401ED763D6AD9B38434_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_isMatchingTarget_mD42DD9B3302152752B21D401ED763D6AD9B38434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isMatchingTarget_mD42DD9B3302152752B21D401ED763D6AD9B38434_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isMatchingTarget()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_speed()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_speed_mCDF58C7C373B9B449A902B9F0974CF5D10806D08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_speed_mCDF58C7C373B9B449A902B9F0974CF5D10806D08_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_speed_mCDF58C7C373B9B449A902B9F0974CF5D10806D08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_speed_mCDF58C7C373B9B449A902B9F0974CF5D10806D08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_speed()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float);
	static Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::ForceStateNormalizedTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_ForceStateNormalizedTime_m86C3F46345467C0817CC09926101AC298814A7C7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___normalizedTime0, const RuntimeMethod* method)
{
	{
		float L_0 = ___normalizedTime0;
		Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E(__this, 0, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m65BA22AECB97BA6A2795532170EAAE2F2624D344 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = V_2;
		float L_4 = V_1;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m25D39570F2C6173B0CCC2DFD26D4FC0349FA0D3D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = V_1;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m1D7CD08A665231299FD3DB9A04AD1E281223AEE9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___fixedTimeOffset3;
		float L_5 = V_0;
		Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.String,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m4CEF8CFF9F21363D27F9F52503742B85B3542575 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		float L_2 = ___fixedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___fixedTimeOffset3;
		float L_5 = ___normalizedTransitionTime4;
		Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mA778155C34725E1187269329703E7B3D32A9A2BD (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___fixedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m7C1EEB98A010B134A1DDE13285A5953EAFF28BC4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_m21E665D27B52B01DEF505028A89EFB38E24F2F2D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		V_2 = (-1);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___fixedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___fixedTransitionDuration1, int32_t ___layer2, float ___fixedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	typedef void (*Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float, int32_t, float, float);
	static Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFadeInFixedTime_mEB4506D9054E5FD7EA0CC8C55467C1263866F062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFadeInFixedTime(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___stateHashName0, ___fixedTransitionDuration1, ___layer2, ___fixedTimeOffset3, ___normalizedTransitionTime4);
}
// System.Void UnityEngine.Animator::WriteDefaultValues()
extern "C" IL2CPP_METHOD_ATTR void Animator_WriteDefaultValues_m7033D8B1F4FC84915E488B86CCFBD1C569E94407 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_WriteDefaultValues_m7033D8B1F4FC84915E488B86CCFBD1C569E94407_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_WriteDefaultValues_m7033D8B1F4FC84915E488B86CCFBD1C569E94407_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_WriteDefaultValues_m7033D8B1F4FC84915E488B86CCFBD1C569E94407_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::WriteDefaultValues()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m5DED42029636028ECBB0980C1EEFDC759C820C82 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___normalizedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m0CA5B115CEDD1B61AB99FD55ACCB0BD19A7414F9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_mFA3F611B9EEA8C089A0BCE96AB44596A6E22B61A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		String_t* L_0 = ___stateName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_mD8D1644B1A474D3B6A0C80EE9457EB1A6CC9A13C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		float L_2 = ___normalizedTransitionDuration1;
		int32_t L_3 = ___layer2;
		float L_4 = ___normalizedTimeOffset3;
		float L_5 = ___normalizedTransitionTime4;
		Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08(__this, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, float ___normalizedTransitionTime4, const RuntimeMethod* method)
{
	typedef void (*Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float, int32_t, float, float);
	static Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___stateHashName0, ___normalizedTransitionDuration1, ___layer2, ___normalizedTimeOffset3, ___normalizedTransitionTime4);
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_mCDEE543099E8737621ED1510C3D133EF6EEE062D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, float ___normalizedTimeOffset3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = ___normalizedTimeOffset3;
		float L_4 = V_0;
		Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m1F780D0DA1A16951350661BF235C1ED52C73DDCD (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, int32_t ___layer2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = ___layer2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_CrossFade_m1C372B696F421B631675B5A98414FE8B4A3EFEEE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateHashName0, float ___normalizedTransitionDuration1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		V_0 = (0.0f);
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (-1);
		int32_t L_0 = ___stateHashName0;
		float L_1 = ___normalizedTransitionDuration1;
		int32_t L_2 = V_2;
		float L_3 = V_1;
		float L_4 = V_0;
		Animator_CrossFade_m7EA2465E0FFFEF1989F0F7286B6EB09FC0D8BD08(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mEE6FEED07D11FDBF24FFB2D525511136E395037C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m3F342CB712406BE5FCB6713CF138487FAB29903E(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m89016494E963FCBDCB4C765015802116CF812A12 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m3F342CB712406BE5FCB6713CF138487FAB29903E(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m3F342CB712406BE5FCB6713CF138487FAB29903E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___fixedTime2;
		Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___fixedTime2, const RuntimeMethod* method)
{
	typedef void (*Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, float);
	static Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___fixedTime2);
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mFBECEE6D4226D2AEA0899D8CB1ED6D0769580559 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::PlayInFixedTime(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_PlayInFixedTime_mB93FD8FD775AF730F850F7812C054A338CAFFE9A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_PlayInFixedTime_m865434CF725839D134EBD716DD4A4A9D0508F605(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m987807F675789E0ECC8F8B8E32A2F03DF71BD055 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		String_t* L_0 = ___stateName0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m254CA699DF64E86856EC8C54D1A739E3C0A49793 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		String_t* L_0 = ___stateName0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m1942D7FB37F84959D2C6A859E11F70791E95FA50 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___stateName0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___stateName0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___layer1;
		float L_3 = ___normalizedTime2;
		Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const RuntimeMethod* method)
{
	typedef void (*Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t, float);
	static Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___stateNameHash0, ___layer1, ___normalizedTime2);
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m97F572DAD265F0665F53FA6975A608239F9AA341 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, int32_t ___layer1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = ___layer1;
		float L_2 = V_0;
		Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_Play_m37825C5C965759D2455BCB4B2E7ECFB71502D6C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___stateNameHash0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		V_0 = (-std::numeric_limits<float>::infinity());
		V_1 = (-1);
		int32_t L_0 = ___stateNameHash0;
		int32_t L_1 = V_1;
		float L_2 = V_0;
		Animator_Play_m20B525F785DA59888E645125DB2DDC071E924F3E(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTarget_m396C340CA7B31C57F8E610CF582F907C7AD5D575 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___targetIndex0, float ___targetNormalizedTime1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTarget_m396C340CA7B31C57F8E610CF582F907C7AD5D575_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetTarget_m396C340CA7B31C57F8E610CF582F907C7AD5D575_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTarget_m396C340CA7B31C57F8E610CF582F907C7AD5D575_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)");
	_il2cpp_icall_func(__this, ___targetIndex0, ___targetNormalizedTime1);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_targetPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_get_targetPosition_mF071072E0756B405AA7BF41620E6B0934363E348 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_targetPosition_Injected_m26226EA598D61D35ABB8FDEBEA502C761C59202E(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_targetRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_get_targetRotation_m5EF7707F477F396D98D09B409A2C21CD6E27A1F9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Animator_get_targetRotation_Injected_mE10A5B0C9C14F9E3D9613052B36C7E105054A04F(__this, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Animator::IsControlled(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsControlled_m34BF4AFBFEBF838BE20452D3F45C08BDA624F622 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Animator::IsBoneTransform(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsBoneTransform_m26ECBD44C950410039C092C2BA958F780BD4B161 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsBoneTransform_m26ECBD44C950410039C092C2BA958F780BD4B161_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *);
	static Animator_IsBoneTransform_m26ECBD44C950410039C092C2BA958F780BD4B161_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsBoneTransform_m26ECBD44C950410039C092C2BA958F780BD4B161_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsBoneTransform(UnityEngine.Transform)");
	bool retVal = _il2cpp_icall_func(__this, ___transform0);
	return retVal;
}
// UnityEngine.Transform UnityEngine.Animator::get_avatarRoot()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_get_avatarRoot_m270009E383898ABC6985896DB0688209FBD99016 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*Animator_get_avatarRoot_m270009E383898ABC6985896DB0688209FBD99016_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_avatarRoot_m270009E383898ABC6985896DB0688209FBD99016_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatarRoot_m270009E383898ABC6985896DB0688209FBD99016_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatarRoot()");
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		int32_t L_0 = ___humanBoneId0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___humanBoneId0;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)55))))
		{
			goto IL_0027;
		}
	}

IL_0010:
	{
		int32_t L_2 = ((int32_t)((int32_t)55));
		RuntimeObject * L_3 = Box(HumanBodyBones_t84CDC0803F451E10186E589016F33D8404227892_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral3DB192144788919FBAC5C900D49CE390D3FFF2C0, L_3, /*hidden argument*/NULL);
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_5 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Animator_GetBoneTransform_m44760610785563E713D82AC1FC0771B38CDBB16F_RuntimeMethod_var);
	}

IL_0027:
	{
		int32_t L_6 = ___humanBoneId0;
		int32_t L_7 = HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E(L_6, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, const RuntimeMethod* method)
{
	typedef Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_mC33B048536349D354D9FE17D46377B8E467599E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * retVal = _il2cpp_icall_func(__this, ___humanBoneId0);
	return retVal;
}
// UnityEngine.AnimatorCullingMode UnityEngine.Animator::get_cullingMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_cullingMode_m8FA8362E52D24D4E51B89274E768A25992C774C8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_cullingMode_m8FA8362E52D24D4E51B89274E768A25992C774C8_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_cullingMode_m8FA8362E52D24D4E51B89274E768A25992C774C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_cullingMode_m8FA8362E52D24D4E51B89274E768A25992C774C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_cullingMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_cullingMode_mE863324107A9723E49D300D42847D2B8B2280D0C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::StartPlayback()
extern "C" IL2CPP_METHOD_ATTR void Animator_StartPlayback_mCBD620E0104BC6F3EBA745D0C647D64DDA7DB090 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_StartPlayback_mCBD620E0104BC6F3EBA745D0C647D64DDA7DB090_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_StartPlayback_mCBD620E0104BC6F3EBA745D0C647D64DDA7DB090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartPlayback_mCBD620E0104BC6F3EBA745D0C647D64DDA7DB090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::StopPlayback()
extern "C" IL2CPP_METHOD_ATTR void Animator_StopPlayback_m394F31A53B1336C488E5558E4648EF3795BE98F7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_StopPlayback_m394F31A53B1336C488E5558E4648EF3795BE98F7_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_StopPlayback_m394F31A53B1336C488E5558E4648EF3795BE98F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopPlayback_m394F31A53B1336C488E5558E4648EF3795BE98F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_playbackTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_playbackTime_m0850EF55DEFF356E5EA8E033604DFBA418D69B43 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_playbackTime_m0850EF55DEFF356E5EA8E033604DFBA418D69B43_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_playbackTime_m0850EF55DEFF356E5EA8E033604DFBA418D69B43_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_playbackTime_m0850EF55DEFF356E5EA8E033604DFBA418D69B43_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_playbackTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_playbackTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_playbackTime_mCF07F720D406B02F987DAFA8BD813482491DA34F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_playbackTime_mCF07F720D406B02F987DAFA8BD813482491DA34F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float);
	static Animator_set_playbackTime_mCF07F720D406B02F987DAFA8BD813482491DA34F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_playbackTime_mCF07F720D406B02F987DAFA8BD813482491DA34F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_playbackTime(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::StartRecording(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_StartRecording_m8089F922AEAFDA6D474A15BFE18DD349B47B86D4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___frameCount0, const RuntimeMethod* method)
{
	typedef void (*Animator_StartRecording_m8089F922AEAFDA6D474A15BFE18DD349B47B86D4_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_StartRecording_m8089F922AEAFDA6D474A15BFE18DD349B47B86D4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartRecording_m8089F922AEAFDA6D474A15BFE18DD349B47B86D4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartRecording(System.Int32)");
	_il2cpp_icall_func(__this, ___frameCount0);
}
// System.Void UnityEngine.Animator::StopRecording()
extern "C" IL2CPP_METHOD_ATTR void Animator_StopRecording_m6EEFB210A883664106E869214262DC6851B88219 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_StopRecording_m6EEFB210A883664106E869214262DC6851B88219_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_StopRecording_m6EEFB210A883664106E869214262DC6851B88219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopRecording_m6EEFB210A883664106E869214262DC6851B88219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopRecording()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_recorderStartTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_recorderStartTime_m928E63095DEB87885E425700E6B9EBBE19FC9116 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Animator_GetRecorderStartTime_m841DBA0E0108A11BB3FB8650AC3599CFB20A5C20(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_recorderStartTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_recorderStartTime_m151ED310065383A8D121B94548C6E05A006049C8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStartTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_m841DBA0E0108A11BB3FB8650AC3599CFB20A5C20 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_GetRecorderStartTime_m841DBA0E0108A11BB3FB8650AC3599CFB20A5C20_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_GetRecorderStartTime_m841DBA0E0108A11BB3FB8650AC3599CFB20A5C20_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStartTime_m841DBA0E0108A11BB3FB8650AC3599CFB20A5C20_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStartTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_recorderStopTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_recorderStopTime_m10EEC0256C01C13F05C72EB758543D2F4A9798C9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Animator_GetRecorderStopTime_m94ED7A05A5DD6FC9468753E8B763966743EF3D02(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_recorderStopTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_recorderStopTime_mFF48C4820DC3CA70A042A791AEE33ABF85578448 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStopTime()
extern "C" IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m94ED7A05A5DD6FC9468753E8B763966743EF3D02 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_GetRecorderStopTime_m94ED7A05A5DD6FC9468753E8B763966743EF3D02_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_GetRecorderStopTime_m94ED7A05A5DD6FC9468753E8B763966743EF3D02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStopTime_m94ED7A05A5DD6FC9468753E8B763966743EF3D02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStopTime()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.AnimatorRecorderMode UnityEngine.Animator::get_recorderMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_get_recorderMode_mA22639C3F6E0E153A56FD9F5FA75B1BBC4A1328A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_get_recorderMode_mA22639C3F6E0E153A56FD9F5FA75B1BBC4A1328A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_recorderMode_mA22639C3F6E0E153A56FD9F5FA75B1BBC4A1328A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_recorderMode_mA22639C3F6E0E153A56FD9F5FA75B1BBC4A1328A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_recorderMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" IL2CPP_METHOD_ATTR RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * (*Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_runtimeAnimatorController_m68C657899041D4CEF8958BBBDD39941647C2B53E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_runtimeAnimatorController()");
	RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_mE5D0038029047B06727775438D1A32ADD677A36D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_runtimeAnimatorController_mE5D0038029047B06727775438D1A32ADD677A36D_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD *);
	static Animator_set_runtimeAnimatorController_mE5D0038029047B06727775438D1A32ADD677A36D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_runtimeAnimatorController_mE5D0038029047B06727775438D1A32ADD677A36D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_m283AF0BA9B841E3FD1ADC5541C41B936A9D1EB05_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::ClearInternalControllerPlayable()
extern "C" IL2CPP_METHOD_ATTR void Animator_ClearInternalControllerPlayable_mF380952094D4A5C2D2679B4088672514513F73D0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_ClearInternalControllerPlayable_mF380952094D4A5C2D2679B4088672514513F73D0_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_ClearInternalControllerPlayable_mF380952094D4A5C2D2679B4088672514513F73D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ClearInternalControllerPlayable_mF380952094D4A5C2D2679B4088672514513F73D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ClearInternalControllerPlayable()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Animator::HasState(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_HasState_mF2AF64FC485EB4767F8546FAE9B1C5409D5EB1ED (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, int32_t ___stateID1, const RuntimeMethod* method)
{
	typedef bool (*Animator_HasState_mF2AF64FC485EB4767F8546FAE9B1C5409D5EB1ED_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t);
	static Animator_HasState_mF2AF64FC485EB4767F8546FAE9B1C5409D5EB1ED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_HasState_mF2AF64FC485EB4767F8546FAE9B1C5409D5EB1ED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::HasState(System.Int32,System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___layerIndex0, ___stateID1);
	return retVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F (String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn) (String_t*);
	static Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
// UnityEngine.Avatar UnityEngine.Animator::get_avatar()
extern "C" IL2CPP_METHOD_ATTR Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * (*Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_avatar_mA5262FC4CE3DB7CAC1F3977B5FD1539107B469D1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_avatar()");
	Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_avatar(UnityEngine.Avatar)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_avatar_mF47007049EEB9158A347C9D520D37F284C902B24 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_avatar_mF47007049EEB9158A347C9D520D37F284C902B24_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B *);
	static Animator_set_avatar_mF47007049EEB9158A347C9D520D37F284C902B24_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_avatar_mF47007049EEB9158A347C9D520D37F284C902B24_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_avatar(UnityEngine.Avatar)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.String UnityEngine.Animator::GetStats()
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_GetStats_mAA018B2E43AB7302397FFD5EB6B025177AB1BBE4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef String_t* (*Animator_GetStats_mAA018B2E43AB7302397FFD5EB6B025177AB1BBE4_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_GetStats_mAA018B2E43AB7302397FFD5EB6B025177AB1BBE4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetStats_mAA018B2E43AB7302397FFD5EB6B025177AB1BBE4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetStats()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Playables.PlayableGraph UnityEngine.Animator::get_playableGraph()
extern "C" IL2CPP_METHOD_ATTR PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  Animator_get_playableGraph_m92B144545CB11E45EDE4797B0AEB7CEE15E12A26 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA ));
		Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D(__this, (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *)(&V_0), /*hidden argument*/NULL);
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_0 = V_0;
		V_1 = L_0;
		goto IL_0018;
	}

IL_0018:
	{
		PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA  L_1 = V_1;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraphU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA * ___graph0, const RuntimeMethod* method)
{
	typedef void (*Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA *);
	static Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetCurrentGraph_mC84D76AF70D99C6151BE20F76FAB9840E39FD77D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetCurrentGraph(UnityEngine.Playables.PlayableGraph&)");
	_il2cpp_icall_func(__this, ___graph0);
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
extern "C" IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_CheckIfInIKPass_mD5AD9B7BD27B551BD8EA8EA13384237A4DC02E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral488203F92B6BE929591A420476D70A53696658FE, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInIKPass()
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInIKPass_m464BA0915D3FF398D1356A65187DACD74633D973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInIKPass()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, float);
	static Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatString_mE425F554C50682E41D362D7593B3B069609B7091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatString(System.String,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float);
	static Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_mC8049D4DC5D19929FF51172902E35D496F9EB805_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatString_mB1518F1964EE15625814C558BB3565330491F3C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatString(System.String)");
	float retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef float (*Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m651CA5557BCABC522FAC92CF89CFE39240E82BD8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	float retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, bool);
	static Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolString_mA61F1A44D13EF82A7C2CAF466EBA81E65D054D46_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolString(System.String,System.Boolean)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool);
	static Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_m03BC09B1F267F9B07FF9F8EDDBAA4D0AA8D61EF0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolString_m8A5CDC7098636F88CA4DADCA80CCBAAFABECE8EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolString(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef bool (*Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_m69B15F09CC6076D1778A729FD2CF360C30666C1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, int32_t);
	static Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerString_m6D069E7F310547EA883ABC2D72BA41C3CDA6B1C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerString(System.String,System.Int32)");
	_il2cpp_icall_func(__this, ___name0, ___value1);
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, int32_t);
	static Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_mF9CF13102019C3714F927B3827EEF4473C0AB5BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___id0, ___value1);
}
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerString_m2A45CD7EA21DBC7A1EA8DA26BE132E00925DC0D3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetIntegerString_m2A45CD7EA21DBC7A1EA8DA26BE132E00925DC0D3_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_GetIntegerString_m2A45CD7EA21DBC7A1EA8DA26BE132E00925DC0D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerString_m2A45CD7EA21DBC7A1EA8DA26BE132E00925DC0D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerString(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef int32_t (*Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerID_m7BE46FDFA31412B2F0F604989D1074381158ACF8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerID(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m77CE57996467D0C973FA2D0CB4DF87BD062C8A1E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerID_mD08597B567A91FC132350A343E69A084EC958040_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m31B233F948D7551D220FEDA56B002E6724B89851_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___name0);
}
// System.Void UnityEngine.Animator::ResetTriggerID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerID_m2E7AD9D9943EC2B4CF5D571197DC84D64F4DDEEB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerID(System.Int32)");
	_il2cpp_icall_func(__this, ___id0);
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m47670461F4728B925592D4054D331E636F1CBD40 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsParameterControlledByCurveString_m47670461F4728B925592D4054D331E636F1CBD40_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*);
	static Animator_IsParameterControlledByCurveString_m47670461F4728B925592D4054D331E636F1CBD40_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveString_m47670461F4728B925592D4054D331E636F1CBD40_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveString(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___name0);
	return retVal;
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef bool (*Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveID_mBA13406D9BC43297A366EB83E1BA4A3F906E3A16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveID(System.Int32)");
	bool retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, String_t*, float, float, float);
	static Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatStringDamp_m2DFC0ED89DB0DBF202DF6A1A20D6A91CA6C20B70_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___name0, ___value1, ___dampTime2, ___deltaTime3);
}
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m8AA9834CFFE57CC417688157BD10A22312FA2C2F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method)
{
	typedef void (*Animator_SetFloatIDDamp_m8AA9834CFFE57CC417688157BD10A22312FA2C2F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, float, float, float);
	static Animator_SetFloatIDDamp_m8AA9834CFFE57CC417688157BD10A22312FA2C2F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatIDDamp_m8AA9834CFFE57CC417688157BD10A22312FA2C2F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___id0, ___value1, ___dampTime2, ___deltaTime3);
}
// System.Boolean UnityEngine.Animator::get_layersAffectMassCenter()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_layersAffectMassCenter_mA5921DBCF196C4C679769592488FA1DEE7833156 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_layersAffectMassCenter_mA5921DBCF196C4C679769592488FA1DEE7833156_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_layersAffectMassCenter_mA5921DBCF196C4C679769592488FA1DEE7833156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layersAffectMassCenter_mA5921DBCF196C4C679769592488FA1DEE7833156_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layersAffectMassCenter()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_layersAffectMassCenter_m8708F75887FA105ADF3C44ED7EA354446F00441F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_layersAffectMassCenter_m8708F75887FA105ADF3C44ED7EA354446F00441F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_layersAffectMassCenter_m8708F75887FA105ADF3C44ED7EA354446F00441F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_layersAffectMassCenter_m8708F75887FA105ADF3C44ED7EA354446F00441F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Animator::get_leftFeetBottomHeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_leftFeetBottomHeight_m8461F0EB7FE9BCD8E1530913C4348800E34DF0E7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_leftFeetBottomHeight_m8461F0EB7FE9BCD8E1530913C4348800E34DF0E7_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_leftFeetBottomHeight_m8461F0EB7FE9BCD8E1530913C4348800E34DF0E7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_leftFeetBottomHeight_m8461F0EB7FE9BCD8E1530913C4348800E34DF0E7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_leftFeetBottomHeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Animator::get_rightFeetBottomHeight()
extern "C" IL2CPP_METHOD_ATTR float Animator_get_rightFeetBottomHeight_m112F060DC88BE0E848319D9BA0BAEB206FFB2DA3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef float (*Animator_get_rightFeetBottomHeight_m112F060DC88BE0E848319D9BA0BAEB206FFB2DA3_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_rightFeetBottomHeight_m112F060DC88BE0E848319D9BA0BAEB206FFB2DA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rightFeetBottomHeight_m112F060DC88BE0E848319D9BA0BAEB206FFB2DA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rightFeetBottomHeight()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_supportsOnAnimatorMove()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_supportsOnAnimatorMove_m991F24C9B7F77ACF642AA1B1223CD36E6A027654 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_supportsOnAnimatorMove_m991F24C9B7F77ACF642AA1B1223CD36E6A027654_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_supportsOnAnimatorMove_m991F24C9B7F77ACF642AA1B1223CD36E6A027654_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_supportsOnAnimatorMove_m991F24C9B7F77ACF642AA1B1223CD36E6A027654_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_supportsOnAnimatorMove()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::OnUpdateModeChanged()
extern "C" IL2CPP_METHOD_ATTR void Animator_OnUpdateModeChanged_m23178B198EF48EE94745E73923C161C897B77B59 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_OnUpdateModeChanged_m23178B198EF48EE94745E73923C161C897B77B59_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_OnUpdateModeChanged_m23178B198EF48EE94745E73923C161C897B77B59_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_OnUpdateModeChanged_m23178B198EF48EE94745E73923C161C897B77B59_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::OnUpdateModeChanged()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::OnCullingModeChanged()
extern "C" IL2CPP_METHOD_ATTR void Animator_OnCullingModeChanged_mE2FD619BB24F776D8C92C8CC48CAFECE0835EE51 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_OnCullingModeChanged_mE2FD619BB24F776D8C92C8CC48CAFECE0835EE51_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_OnCullingModeChanged_mE2FD619BB24F776D8C92C8CC48CAFECE0835EE51_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_OnCullingModeChanged_mE2FD619BB24F776D8C92C8CC48CAFECE0835EE51_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::OnCullingModeChanged()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::WriteDefaultPose()
extern "C" IL2CPP_METHOD_ATTR void Animator_WriteDefaultPose_m2E67E745BFFE730A34857CE85D0995BE13256D98 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_WriteDefaultPose_m2E67E745BFFE730A34857CE85D0995BE13256D98_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_WriteDefaultPose_m2E67E745BFFE730A34857CE85D0995BE13256D98_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_WriteDefaultPose_m2E67E745BFFE730A34857CE85D0995BE13256D98_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::WriteDefaultPose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::Update(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_Update_mAE0FB9CE2845E7FDB38EF44037BAD857E2ADC79B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	typedef void (*Animator_Update_mAE0FB9CE2845E7FDB38EF44037BAD857E2ADC79B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float);
	static Animator_Update_mAE0FB9CE2845E7FDB38EF44037BAD857E2ADC79B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Update_mAE0FB9CE2845E7FDB38EF44037BAD857E2ADC79B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Update(System.Single)");
	_il2cpp_icall_func(__this, ___deltaTime0);
}
// System.Void UnityEngine.Animator::Rebind()
extern "C" IL2CPP_METHOD_ATTR void Animator_Rebind_m8B1703BF1EE6583BA63D1CB811CFAF058CA2507E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	{
		Animator_Rebind_m34E593057D8424474C06FDEF6BDF0130E659EA5A(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Rebind(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_Rebind_m34E593057D8424474C06FDEF6BDF0130E659EA5A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___writeDefaultValues0, const RuntimeMethod* method)
{
	typedef void (*Animator_Rebind_m34E593057D8424474C06FDEF6BDF0130E659EA5A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_Rebind_m34E593057D8424474C06FDEF6BDF0130E659EA5A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Rebind_m34E593057D8424474C06FDEF6BDF0130E659EA5A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Rebind(System.Boolean)");
	_il2cpp_icall_func(__this, ___writeDefaultValues0);
}
// System.Void UnityEngine.Animator::ApplyBuiltinRootMotion()
extern "C" IL2CPP_METHOD_ATTR void Animator_ApplyBuiltinRootMotion_mE4EF4BF803A797B0E18F7D8A809EC72D4CFC18CE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef void (*Animator_ApplyBuiltinRootMotion_mE4EF4BF803A797B0E18F7D8A809EC72D4CFC18CE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_ApplyBuiltinRootMotion_mE4EF4BF803A797B0E18F7D8A809EC72D4CFC18CE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ApplyBuiltinRootMotion_mE4EF4BF803A797B0E18F7D8A809EC72D4CFC18CE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ApplyBuiltinRootMotion()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::EvaluateController()
extern "C" IL2CPP_METHOD_ATTR void Animator_EvaluateController_mC9D0A784F91BB6B3ADCB2E0A1AB01533FF361673 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	{
		Animator_EvaluateController_m561E1283AFB8BCE8A75218014522374AD1D099A9(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::EvaluateController(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_EvaluateController_m561E1283AFB8BCE8A75218014522374AD1D099A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___deltaTime0, const RuntimeMethod* method)
{
	typedef void (*Animator_EvaluateController_m561E1283AFB8BCE8A75218014522374AD1D099A9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, float);
	static Animator_EvaluateController_m561E1283AFB8BCE8A75218014522374AD1D099A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_EvaluateController_m561E1283AFB8BCE8A75218014522374AD1D099A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::EvaluateController(System.Single)");
	_il2cpp_icall_func(__this, ___deltaTime0);
}
// System.String UnityEngine.Animator::GetCurrentStateName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_GetCurrentStateName_m1BAE377291B1E4B420EB5CD083A2783A8F621FCF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___layerIndex0;
		String_t* L_1 = Animator_GetAnimatorStateName_m0E505B13A147EAE32639015A4995CC6850EC18BF(__this, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Animator::GetNextStateName(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_GetNextStateName_m427DD45E44C5EE622A6CD822BD8DF58B5B2EC8C9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___layerIndex0;
		String_t* L_1 = Animator_GetAnimatorStateName_m0E505B13A147EAE32639015A4995CC6850EC18BF(__this, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_GetAnimatorStateName_m0E505B13A147EAE32639015A4995CC6850EC18BF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___layerIndex0, bool ___current1, const RuntimeMethod* method)
{
	typedef String_t* (*Animator_GetAnimatorStateName_m0E505B13A147EAE32639015A4995CC6850EC18BF_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, bool);
	static Animator_GetAnimatorStateName_m0E505B13A147EAE32639015A4995CC6850EC18BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateName_m0E505B13A147EAE32639015A4995CC6850EC18BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateName(System.Int32,System.Boolean)");
	String_t* retVal = _il2cpp_icall_func(__this, ___layerIndex0, ___current1);
	return retVal;
}
// System.String UnityEngine.Animator::ResolveHash(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Animator_ResolveHash_mE6F1ACEE1F738999765B78EABF9D998F28F5AE93 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hash0, const RuntimeMethod* method)
{
	typedef String_t* (*Animator_ResolveHash_mE6F1ACEE1F738999765B78EABF9D998F28F5AE93_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t);
	static Animator_ResolveHash_mE6F1ACEE1F738999765B78EABF9D998F28F5AE93_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResolveHash_mE6F1ACEE1F738999765B78EABF9D998F28F5AE93_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResolveHash(System.Int32)");
	String_t* retVal = _il2cpp_icall_func(__this, ___hash0);
	return retVal;
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_mE755494196C56C22909C97125F48EC6A7CFED617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_logWarnings(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_logWarnings_m0BFC4E26DF5D9A01E79715C0A85AE9DC5E2BDB8F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_logWarnings_m0BFC4E26DF5D9A01E79715C0A85AE9DC5E2BDB8F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_logWarnings_m0BFC4E26DF5D9A01E79715C0A85AE9DC5E2BDB8F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_logWarnings_m0BFC4E26DF5D9A01E79715C0A85AE9DC5E2BDB8F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_logWarnings(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_fireEvents()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_fireEvents_mF807481E0A905B48FFC28938FC0CA600E2B7F0A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_fireEvents_mF807481E0A905B48FFC28938FC0CA600E2B7F0A9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_fireEvents_mF807481E0A905B48FFC28938FC0CA600E2B7F0A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_fireEvents_mF807481E0A905B48FFC28938FC0CA600E2B7F0A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_fireEvents()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_fireEvents(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_fireEvents_mB1767CE278820A9C5DCEEB8497B5C8B7BA0D8A58 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_fireEvents_mB1767CE278820A9C5DCEEB8497B5C8B7BA0D8A58_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_fireEvents_mB1767CE278820A9C5DCEEB8497B5C8B7BA0D8A58_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_fireEvents_mB1767CE278820A9C5DCEEB8497B5C8B7BA0D8A58_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_fireEvents(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Animator::get_keepAnimatorControllerStateOnDisable()
extern "C" IL2CPP_METHOD_ATTR bool Animator_get_keepAnimatorControllerStateOnDisable_mC51AE601A0B4B89616C84ABC67809FF2324404BF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method)
{
	typedef bool (*Animator_get_keepAnimatorControllerStateOnDisable_mC51AE601A0B4B89616C84ABC67809FF2324404BF_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *);
	static Animator_get_keepAnimatorControllerStateOnDisable_mC51AE601A0B4B89616C84ABC67809FF2324404BF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_keepAnimatorControllerStateOnDisable_mC51AE601A0B4B89616C84ABC67809FF2324404BF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_keepAnimatorControllerStateOnDisable()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Animator::set_keepAnimatorControllerStateOnDisable(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_keepAnimatorControllerStateOnDisable_m94E816054D292EACDD360B6930009EFC4C2F41BE (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_keepAnimatorControllerStateOnDisable_m94E816054D292EACDD360B6930009EFC4C2F41BE_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, bool);
	static Animator_set_keepAnimatorControllerStateOnDisable_m94E816054D292EACDD360B6930009EFC4C2F41BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_keepAnimatorControllerStateOnDisable_m94E816054D292EACDD360B6930009EFC4C2F41BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_keepAnimatorControllerStateOnDisable(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Animator::GetVector(System.String)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetVector_m03E613ACCBED5CE03C32F8B17392760E20AAF3CC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetVector_m03E613ACCBED5CE03C32F8B17392760E20AAF3CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetVector(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Animator_GetVector_mEAC79DC2C51F787566322F4BFD0C25D0CFE76855 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetVector_mEAC79DC2C51F787566322F4BFD0C25D0CFE76855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetVector(System.String,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetVector_m377657D17CA62E532FC40BB8C1B0E0AFC91FCD7D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::SetVector(System.Int32,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetVector_m98B240F6938B1A3FBD6EBE165F722A7C3213259F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetQuaternion(System.String)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetQuaternion_mA72AEB2BC02DDFF53745689063674CC4EFD29C5F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetQuaternion_mA72AEB2BC02DDFF53745689063674CC4EFD29C5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetQuaternion(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Animator_GetQuaternion_mB55100557E6EECBACA3F001A7AA7E6528343E297 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Animator_GetQuaternion_mB55100557E6EECBACA3F001A7AA7E6528343E297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetQuaternion(System.String,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetQuaternion_mE7B909DF4FDB545AF8D6E02D3C81EFCC6385A5C4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, String_t* ___name0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::SetQuaternion(System.Int32,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetQuaternion_mE8EFF4FF8329AF9921793FF2A3BC8739A272CA61 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___id0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_Injected_mB3C1937C55150A4E113BB2D8D6FEC323268C7BBA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaRotation_Injected_mC688777CD9ACA48B55E760856F0B653047238F08_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_velocity_Injected_m48D33C181B2B87A5CCAA25FEC5D70F97C547996B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_velocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_angularVelocity_Injected_m24880936B97814434A5742D4063C88651838D9DF (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_angularVelocity_Injected_m24880936B97814434A5742D4063C88651838D9DF_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_angularVelocity_Injected_m24880936B97814434A5742D4063C88651838D9DF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_angularVelocity_Injected_m24880936B97814434A5742D4063C88651838D9DF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_angularVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m37A98F61D180A4C6136664A85A930D91507774C7 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_rootPosition_Injected_m37A98F61D180A4C6136664A85A930D91507774C7_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_rootPosition_Injected_m37A98F61D180A4C6136664A85A930D91507774C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootPosition_Injected_m37A98F61D180A4C6136664A85A930D91507774C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootPosition_Injected_m22D0A61CA143C2F980EF1C8256CF566BBA5E8F0D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_rootPosition_Injected_m22D0A61CA143C2F980EF1C8256CF566BBA5E8F0D_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_set_rootPosition_Injected_m22D0A61CA143C2F980EF1C8256CF566BBA5E8F0D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_rootPosition_Injected_m22D0A61CA143C2F980EF1C8256CF566BBA5E8F0D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_rootPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_mD1D15DA26C4949050CE7F7B314F1F0D4F41D400D (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_rootRotation_Injected_mD1D15DA26C4949050CE7F7B314F1F0D4F41D400D_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_get_rootRotation_Injected_mD1D15DA26C4949050CE7F7B314F1F0D4F41D400D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootRotation_Injected_mD1D15DA26C4949050CE7F7B314F1F0D4F41D400D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_rootRotation_Injected_m5D8A4B89E2E5BDFB91A3F6AB097B8C60BC037D9A (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_rootRotation_Injected_m5D8A4B89E2E5BDFB91A3F6AB097B8C60BC037D9A_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_set_rootRotation_Injected_m5D8A4B89E2E5BDFB91A3F6AB097B8C60BC037D9A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_rootRotation_Injected_m5D8A4B89E2E5BDFB91A3F6AB097B8C60BC037D9A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_rootRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m2B436C16A410688B8907F11AD22B92772AD8DE58 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_bodyPositionInternal_Injected_m2B436C16A410688B8907F11AD22B92772AD8DE58_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_bodyPositionInternal_Injected_m2B436C16A410688B8907F11AD22B92772AD8DE58_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyPositionInternal_Injected_m2B436C16A410688B8907F11AD22B92772AD8DE58_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_mA6D0FEB76F7F2126AA8DA760B1C87905E2DC3FA8 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_bodyPositionInternal_Injected_mA6D0FEB76F7F2126AA8DA760B1C87905E2DC3FA8_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_set_bodyPositionInternal_Injected_mA6D0FEB76F7F2126AA8DA760B1C87905E2DC3FA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyPositionInternal_Injected_mA6D0FEB76F7F2126AA8DA760B1C87905E2DC3FA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m6A49C5393DDAE53924C5C81D83B21B24C72B7216 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_bodyRotationInternal_Injected_m6A49C5393DDAE53924C5C81D83B21B24C72B7216_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_get_bodyRotationInternal_Injected_m6A49C5393DDAE53924C5C81D83B21B24C72B7216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyRotationInternal_Injected_m6A49C5393DDAE53924C5C81D83B21B24C72B7216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0FBF45C6C1AB5D6483A31DC5D2200864AD7D9F8E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Animator_set_bodyRotationInternal_Injected_m0FBF45C6C1AB5D6483A31DC5D2200864AD7D9F8E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_set_bodyRotationInternal_Injected_m0FBF45C6C1AB5D6483A31DC5D2200864AD7D9F8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyRotationInternal_Injected_m0FBF45C6C1AB5D6483A31DC5D2200864AD7D9F8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_mE542057F582AB3FD1301E9F2940BE2B3607A2DF4 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Animator_GetGoalPosition_Injected_mE542057F582AB3FD1301E9F2940BE2B3607A2DF4_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_GetGoalPosition_Injected_mE542057F582AB3FD1301E9F2940BE2B3607A2DF4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalPosition_Injected_mE542057F582AB3FD1301E9F2940BE2B3607A2DF4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___goal0, ___ret1);
}
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___goalPosition1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalPosition_Injected_m3FCA5A1E8B603902FDEC306CF4324BC4551D3737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalPosition1);
}
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalRotation_Injected_m4011F9579BE99CDC1BEBAF4280EB5F5472A109DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___goal0, ___ret1);
}
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___goal0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___goalRotation1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalRotation_Injected_m37692B68D8CC4D92559553F9AAE52D714C4699A9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___goal0, ___goalRotation1);
}
// System.Void UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_GetHintPosition_Injected_mBE63368CFFFA9F9D54CD0917B6FBB5CB28FD0CA5 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Animator_GetHintPosition_Injected_mBE63368CFFFA9F9D54CD0917B6FBB5CB28FD0CA5_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_GetHintPosition_Injected_mBE63368CFFFA9F9D54CD0917B6FBB5CB28FD0CA5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetHintPosition_Injected_mBE63368CFFFA9F9D54CD0917B6FBB5CB28FD0CA5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___hint0, ___ret1);
}
// System.Void UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetHintPosition_Injected_m15557B68009F083A23C3DA250E7BCAFF3804C064 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___hint0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___hintPosition1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetHintPosition_Injected_m15557B68009F083A23C3DA250E7BCAFF3804C064_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_SetHintPosition_Injected_m15557B68009F083A23C3DA250E7BCAFF3804C064_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetHintPosition_Injected_m15557B68009F083A23C3DA250E7BCAFF3804C064_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetHintPosition_Injected(UnityEngine.AvatarIKHint,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___hint0, ___hintPosition1);
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___lookAtPosition0, const RuntimeMethod* method)
{
	typedef void (*Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtPositionInternal_Injected_mE43763E88F5BEA74AE47D478B1137A48090A38DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___lookAtPosition0);
}
// System.Void UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetBoneLocalRotationInternal_Injected_m8EC895FF336BF559BDC47AFCDABD457750DD0DF3 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, int32_t ___humanBoneId0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation1, const RuntimeMethod* method)
{
	typedef void (*Animator_SetBoneLocalRotationInternal_Injected_m8EC895FF336BF559BDC47AFCDABD457750DD0DF3_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, int32_t, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_SetBoneLocalRotationInternal_Injected_m8EC895FF336BF559BDC47AFCDABD457750DD0DF3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoneLocalRotationInternal_Injected_m8EC895FF336BF559BDC47AFCDABD457750DD0DF3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoneLocalRotationInternal_Injected(System.Int32,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___humanBoneId0, ___rotation1);
}
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotPosition_Injected_mB1F3E5A4C30ACA150523947ADE54820B5AA03C68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3U26,UnityEngine.QuaternionU26,System.Int32,UnityEngine.MatchTargetWeightMaskU26,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m07028D8BD6DF22DC75C55B07CC08E7579611A6AA (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___matchPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___matchRotation1, int32_t ___targetBodyPart2, MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B * ___weightMask3, float ___startNormalizedTime4, float ___targetNormalizedTime5, const RuntimeMethod* method)
{
	typedef void (*Animator_MatchTarget_Injected_m07028D8BD6DF22DC75C55B07CC08E7579611A6AA_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *, int32_t, MatchTargetWeightMask_tD0E4BC703C9314CF1F7EA5AAFA1826D1133CFF9B *, float, float);
	static Animator_MatchTarget_Injected_m07028D8BD6DF22DC75C55B07CC08E7579611A6AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_MatchTarget_Injected_m07028D8BD6DF22DC75C55B07CC08E7579611A6AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___matchPosition0, ___matchRotation1, ___targetBodyPart2, ___weightMask3, ___startNormalizedTime4, ___targetNormalizedTime5);
}
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3U26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m26226EA598D61D35ABB8FDEBEA502C761C59202E (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_targetPosition_Injected_m26226EA598D61D35ABB8FDEBEA502C761C59202E_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static Animator_get_targetPosition_Injected_m26226EA598D61D35ABB8FDEBEA502C761C59202E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetPosition_Injected_m26226EA598D61D35ABB8FDEBEA502C761C59202E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.QuaternionU26)
extern "C" IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_mE10A5B0C9C14F9E3D9613052B36C7E105054A04F (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Animator_get_targetRotation_Injected_mE10A5B0C9C14F9E3D9613052B36C7E105054A04F_ftn) (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static Animator_get_targetRotation_Injected_mE10A5B0C9C14F9E3D9613052B36C7E105054A04F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetRotation_Injected_mE10A5B0C9C14F9E3D9613052B36C7E105054A04F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::get_clip()
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method)
{
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * V_0 = NULL;
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_m_ClipInstanceID_0();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->get_m_ClipInstanceID_0();
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_2 = AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE *)(NULL));
	}

IL_001d:
	{
		V_0 = G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * L_3 = V_0;
		return L_3;
	}
}
extern "C"  AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * _thisAdjusted = reinterpret_cast<AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 *>(__this + 1);
	return AnimatorClipInfo_get_clip_mF5A49B54502CBFE17327989ED0701EDC23F1B2A4(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorClipInfo::get_weight()
extern "C" IL2CPP_METHOD_ATTR float AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6 (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Weight_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * _thisAdjusted = reinterpret_cast<AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 *>(__this + 1);
	return AnimatorClipInfo_get_weight_m1A1275CE522B4691DA88D618E1C40E57074795C6(_thisAdjusted, method);
}
// UnityEngine.AnimationClip UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE (int32_t ___instanceID0, const RuntimeMethod* method)
{
	typedef AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * (*AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE_ftn) (int32_t);
	static AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimatorClipInfo_InstanceIDToAnimationClipPPtr_m84ABBDE6B5906BC43660E9885278035907AAC7EE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimatorClipInfo::InstanceIDToAnimationClipPPtr(System.Int32)");
	AnimationClip_t336CFC94F6275526DC0B9BEEF833D4D89D6DEDDE * retVal = _il2cpp_icall_func(___instanceID0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Name_0());
	marshaled.___m_Type_1 = unmarshaled.get_m_Type_1();
	marshaled.___m_DefaultFloat_2 = unmarshaled.get_m_DefaultFloat_2();
	marshaled.___m_DefaultInt_3 = unmarshaled.get_m_DefaultInt_3();
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.get_m_DefaultBool_4());
}
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_back(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke& marshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Type_temp_1 = 0;
	unmarshaled_m_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.set_m_Type_1(unmarshaled_m_Type_temp_1);
	float unmarshaled_m_DefaultFloat_temp_2 = 0.0f;
	unmarshaled_m_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.set_m_DefaultFloat_2(unmarshaled_m_DefaultFloat_temp_2);
	int32_t unmarshaled_m_DefaultInt_temp_3 = 0;
	unmarshaled_m_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.set_m_DefaultInt_3(unmarshaled_m_DefaultInt_temp_3);
	bool unmarshaled_m_DefaultBool_temp_4 = false;
	unmarshaled_m_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.set_m_DefaultBool_4(unmarshaled_m_DefaultBool_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_pinvoke_cleanup(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.AnimatorControllerParameter
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_com(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Name_0());
	marshaled.___m_Type_1 = unmarshaled.get_m_Type_1();
	marshaled.___m_DefaultFloat_2 = unmarshaled.get_m_DefaultFloat_2();
	marshaled.___m_DefaultInt_3 = unmarshaled.get_m_DefaultInt_3();
	marshaled.___m_DefaultBool_4 = static_cast<int32_t>(unmarshaled.get_m_DefaultBool_4());
}
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_com_back(const AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com& marshaled, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Type_temp_1 = 0;
	unmarshaled_m_Type_temp_1 = marshaled.___m_Type_1;
	unmarshaled.set_m_Type_1(unmarshaled_m_Type_temp_1);
	float unmarshaled_m_DefaultFloat_temp_2 = 0.0f;
	unmarshaled_m_DefaultFloat_temp_2 = marshaled.___m_DefaultFloat_2;
	unmarshaled.set_m_DefaultFloat_2(unmarshaled_m_DefaultFloat_temp_2);
	int32_t unmarshaled_m_DefaultInt_temp_3 = 0;
	unmarshaled_m_DefaultInt_temp_3 = marshaled.___m_DefaultInt_3;
	unmarshaled.set_m_DefaultInt_3(unmarshaled_m_DefaultInt_temp_3);
	bool unmarshaled_m_DefaultBool_temp_4 = false;
	unmarshaled_m_DefaultBool_temp_4 = static_cast<bool>(marshaled.___m_DefaultBool_4);
	unmarshaled.set_m_DefaultBool_4(unmarshaled_m_DefaultBool_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorControllerParameter
extern "C" void AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshal_com_cleanup(AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.Void UnityEngine.AnimatorControllerParameter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AnimatorControllerParameter__ctor_mCCC1C8C5E13550B5745B4F10D0FCF6F948517797 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerParameter__ctor_mCCC1C8C5E13550B5745B4F10D0FCF6F948517797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Name_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.AnimatorControllerParameter::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* AnimatorControllerParameter_get_name_mBC6037CF46E647026CF3AD51E76B4003A181EB60 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.AnimatorControllerParameter::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorControllerParameter_Equals_m71402007E47A2C82599B74BE7E95476B89838682 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimatorControllerParameter_Equals_m71402007E47A2C82599B74BE7E95476B89838682_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 *)IsInstClass((RuntimeObject*)L_0, AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68_il2cpp_TypeInfo_var));
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_2 = __this->get_m_Name_0();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_m_Name_0();
		bool L_5 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = __this->get_m_Type_1();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_m_Type_1();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0067;
		}
	}
	{
		float L_9 = __this->get_m_DefaultFloat_2();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_10 = V_0;
		NullCheck(L_10);
		float L_11 = L_10->get_m_DefaultFloat_2();
		if ((!(((float)L_9) == ((float)L_11))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_12 = __this->get_m_DefaultInt_3();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_m_DefaultInt_3();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		bool L_15 = __this->get_m_DefaultBool_4();
		AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = L_16->get_m_DefaultBool_4();
		G_B7_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B7_0 = 0;
	}

IL_0068:
	{
		V_1 = (bool)G_B7_0;
		goto IL_006e;
	}

IL_006e:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Int32 UnityEngine.AnimatorControllerParameter::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorControllerParameter_GetHashCode_mF9447E55008C5B10243C7D0D81376BFC2CAA1730 (AnimatorControllerParameter_t63F7756B07B981111CB00490DE84B06BC2A25E68 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = AnimatorControllerParameter_get_name_mBC6037CF46E647026CF3AD51E76B4003A181EB60(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
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
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
extern "C" IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA538F1349FCF3968C5042F2D8860114F51818CB2 (AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * ___controller0, const RuntimeMethod* method)
{
	{
		AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * L_0 = ___controller0;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * L_1 = L_0->get_OnOverrideControllerDirty_4();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312 * L_2 = ___controller0;
		NullCheck(L_2);
		OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * L_3 = L_2->get_OnOverrideControllerDirty_4();
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
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
extern "C"  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_m9277DED194C85B1C3B4C7ABBB1D54CCB43C724D8 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::Invoke()
extern "C" IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m002CFC2CE3C42A058380BE98F015E654D5F9F177 (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 0)
				{
					// open
					typedef void (*FunctionPointerType) (const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnOverrideControllerDirtyCallback_BeginInvoke_m35CE43BF7D40E88192183CF666F2BB7EFE8C6F9D (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.AnimatorOverrideController_OnOverrideControllerDirtyCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_EndInvoke_m39CFD9FD2CC3035CFF6809F56447932B1394C08E (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_FullPath_2();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_m_Name_0();
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->get_m_Path_1();
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
extern "C"  bool AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_IsName_mD133471910C1ACE0979F3FD11462C9B8BB24CA96(_thisAdjusted, ___name0, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FullPath_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_fullPathHash_m2865A5467A1201025DAD3E58E420D0870CDF90C2(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Path_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_nameHash_m290E8D6A9EDE89FC1410E44E380F5AE4F4E3EEC2(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_shortNameHash_m36C7DCCCB2E03A06180CFC077C5B6FE6FCF4E31B(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedTime_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_normalizedTime_m3AB6A2DB592BB9CA0B9A4EF8A382C4DF3F5F6BBD(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Length_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_length_mBEC06803962C9F4E60611516424CD43D7155A56D(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_speed()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speed_mB93F76867DC51C1F3BDFFEAB5C4F6EF7AEB40200 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Speed_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_speed_mB93F76867DC51C1F3BDFFEAB5C4F6EF7AEB40200_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_speed_mB93F76867DC51C1F3BDFFEAB5C4F6EF7AEB40200(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorStateInfo::get_speedMultiplier()
extern "C" IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_speedMultiplier_m9593FB23FAFB4838ACB33AB15178EBB3E4A5B662 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SpeedMultiplier_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorStateInfo_get_speedMultiplier_m9593FB23FAFB4838ACB33AB15178EBB3E4A5B662_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_speedMultiplier_m9593FB23FAFB4838ACB33AB15178EBB3E4A5B662(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_tagHash_m8D7BE8C634C5BD3FD24CEA453FD1075ECD9AFB64 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Tag_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorStateInfo_get_tagHash_m8D7BE8C634C5BD3FD24CEA453FD1075ECD9AFB64_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_tagHash_m8D7BE8C634C5BD3FD24CEA453FD1075ECD9AFB64(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsTag_m4E330F31FDC7A13E1B93F3ED09A7AEBF3F43A2D6 (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___tag0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_Tag_7();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimatorStateInfo_IsTag_m4E330F31FDC7A13E1B93F3ED09A7AEBF3F43A2D6_AdjustorThunk (RuntimeObject * __this, String_t* ___tag0, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_IsTag_m4E330F31FDC7A13E1B93F3ED09A7AEBF3F43A2D6(_thisAdjusted, ___tag0, method);
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorStateInfo_get_loop_mB264307D24226C562001C71924B32DB83A80F73F (AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Loop_8();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorStateInfo_get_loop_mB264307D24226C562001C71924B32DB83A80F73F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * _thisAdjusted = reinterpret_cast<AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 *>(__this + 1);
	return AnimatorStateInfo_get_loop_mB264307D24226C562001C71924B32DB83A80F73F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_back(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.get_m_FullPath_0();
	marshaled.___m_UserName_1 = unmarshaled.get_m_UserName_1();
	marshaled.___m_Name_2 = unmarshaled.get_m_Name_2();
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.get_m_HasFixedDuration_3());
	marshaled.___m_Duration_4 = unmarshaled.get_m_Duration_4();
	marshaled.___m_NormalizedTime_5 = unmarshaled.get_m_NormalizedTime_5();
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.get_m_AnyState_6());
	marshaled.___m_TransitionType_7 = unmarshaled.get_m_TransitionType_7();
}
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com_back(const AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled, AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B& unmarshaled)
{
	int32_t unmarshaled_m_FullPath_temp_0 = 0;
	unmarshaled_m_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.set_m_FullPath_0(unmarshaled_m_FullPath_temp_0);
	int32_t unmarshaled_m_UserName_temp_1 = 0;
	unmarshaled_m_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.set_m_UserName_1(unmarshaled_m_UserName_temp_1);
	int32_t unmarshaled_m_Name_temp_2 = 0;
	unmarshaled_m_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.set_m_Name_2(unmarshaled_m_Name_temp_2);
	bool unmarshaled_m_HasFixedDuration_temp_3 = false;
	unmarshaled_m_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.set_m_HasFixedDuration_3(unmarshaled_m_HasFixedDuration_temp_3);
	float unmarshaled_m_Duration_temp_4 = 0.0f;
	unmarshaled_m_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.set_m_Duration_4(unmarshaled_m_Duration_temp_4);
	float unmarshaled_m_NormalizedTime_temp_5 = 0.0f;
	unmarshaled_m_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.set_m_NormalizedTime_5(unmarshaled_m_NormalizedTime_temp_5);
	bool unmarshaled_m_AnyState_temp_6 = false;
	unmarshaled_m_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.set_m_AnyState_6(unmarshaled_m_AnyState_temp_6);
	int32_t unmarshaled_m_TransitionType_temp_7 = 0;
	unmarshaled_m_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.set_m_TransitionType_7(unmarshaled_m_TransitionType_temp_7);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
extern "C" void AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshal_com_cleanup(AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsName_mBEE354AFF11910FFFDD10021E6E15BE2937C65C8 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_Name_2();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___name0;
		int32_t L_4 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_m_FullPath_0();
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
extern "C"  bool AnimatorTransitionInfo_IsName_mBEE354AFF11910FFFDD10021E6E15BE2937C65C8_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_IsName_mBEE354AFF11910FFFDD10021E6E15BE2937C65C8(_thisAdjusted, ___name0, method);
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsUserName_m101F488EA28505B2883E2CEC0104E89513600605 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, String_t* ___name0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = Animator_StringToHash_m80E4CCCB84AAD032A5D84EF5832B7F35C1E5AE3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_m_UserName_1();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimatorTransitionInfo_IsUserName_m101F488EA28505B2883E2CEC0104E89513600605_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_IsUserName_m101F488EA28505B2883E2CEC0104E89513600605(_thisAdjusted, ___name0, method);
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FullPath_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_fullPathHash_mCB00E82B499A9F4084FEFFE8757F352541EA055E(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Name_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_nameHash_m128B8297723ED8268678A8F1342090FED08A5680(_thisAdjusted, method);
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_userNameHash_m2876268DEDF69387A86A69001AE60AB204C86AAC (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_UserName_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_userNameHash_m2876268DEDF69387A86A69001AE60AB204C86AAC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_userNameHash_m2876268DEDF69387A86A69001AE60AB204C86AAC(_thisAdjusted, method);
}
// UnityEngine.DurationUnit UnityEngine.AnimatorTransitionInfo::get_durationUnit()
extern "C" IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_durationUnit_m409C65471B93597321E7572D3E0F2FE2D8F4392E (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_m_HasFixedDuration_3();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t AnimatorTransitionInfo_get_durationUnit_m409C65471B93597321E7572D3E0F2FE2D8F4392E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_durationUnit_m409C65471B93597321E7572D3E0F2FE2D8F4392E(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_duration()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_duration_mCD359E75836B4EA85432040C28B566424BAE8B34 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Duration_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorTransitionInfo_get_duration_mCD359E75836B4EA85432040C28B566424BAE8B34_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_duration_mCD359E75836B4EA85432040C28B566424BAE8B34(_thisAdjusted, method);
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m940B8544DC63C7DFABEED164AD41F6CE807332BC (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_NormalizedTime_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float AnimatorTransitionInfo_get_normalizedTime_m940B8544DC63C7DFABEED164AD41F6CE807332BC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_normalizedTime_m940B8544DC63C7DFABEED164AD41F6CE807332BC(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_anyState_m5C8E945801A4789B8F977A4200A9A3CBF36A9513 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_AnyState_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorTransitionInfo_get_anyState_m5C8E945801A4789B8F977A4200A9A3CBF36A9513_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_anyState_m5C8E945801A4789B8F977A4200A9A3CBF36A9513(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_entry_mAD38B24E7929275525D48748A4B3DEBE09EB2B89 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_TransitionType_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorTransitionInfo_get_entry_mAD38B24E7929275525D48748A4B3DEBE09EB2B89_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_entry_mAD38B24E7929275525D48748A4B3DEBE09EB2B89(_thisAdjusted, method);
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_get_exit_m45D887085FAFC678B9EF924D72340E11D6FDC501 (AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_TransitionType_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
extern "C"  bool AnimatorTransitionInfo_get_exit_m45D887085FAFC678B9EF924D72340E11D6FDC501_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B * _thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t66D37578B8898C817BD5A5781B420BF92F60AA6B *>(__this + 1);
	return AnimatorTransitionInfo_get_exit_m45D887085FAFC678B9EF924D72340E11D6FDC501(_thisAdjusted, method);
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
// System.Void UnityEngine.Avatar::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Avatar__ctor_mD1FEFAE6B86B1AFE6097AD2E84AA1B56FF1C04AE (Avatar_t14B515893D5504566D487FFE046DCB8C8C50D02B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Avatar__ctor_mD1FEFAE6B86B1AFE6097AD2E84AA1B56FF1C04AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
extern "C" IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7 (AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = PlayableHandle_IsValid_mDA0A998EA6E2442C5F3B6CDFAF07EBA9A6873059((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_m2E697071283CEE2AA83E00A2503D003D60FB984D((PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 *)(&___handle0), /*hidden argument*/PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_m2E697071283CEE2AA83E00A2503D003D60FB984D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA * L_2 = (InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA *)il2cpp_codegen_object_new(InvalidCastException_t91DF9E7D7FCCDA6C562CB4A9A18903E016680FDA_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m3795145150387C6C362DA693613505C604AB8812(L_2, _stringLiteral4518459D262696CF9B5DAB1E0A1BC3AC2F9BD9DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7_RuntimeMethod_var);
	}

IL_0025:
	{
	}

IL_0026:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_3 = ___handle0;
		__this->set_m_Handle_0(L_3);
		return;
	}
}
extern "C"  void AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7_AdjustorThunk (RuntimeObject * __this, PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___handle0, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F *>(__this + 1);
	AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Animations.AnimationScriptPlayable::GetHandle()
extern "C" IL2CPP_METHOD_ATTR PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_mE9B490654A320F11EFBB0E3180C6CF647E384C80 (AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * __this, const RuntimeMethod* method)
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = V_0;
		return L_1;
	}
}
extern "C"  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  AnimationScriptPlayable_GetHandle_mE9B490654A320F11EFBB0E3180C6CF647E384C80_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F *>(__this + 1);
	return AnimationScriptPlayable_GetHandle_mE9B490654A320F11EFBB0E3180C6CF647E384C80(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Experimental.Animations.AnimationScriptPlayable::Equals(UnityEngine.Experimental.Animations.AnimationScriptPlayable)
extern "C" IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_m39A1F71C360404625ABD1EAD32DCAEDD7736E1B3 (AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * __this, AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable_Equals_m39A1F71C360404625ABD1EAD32DCAEDD7736E1B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = AnimationScriptPlayable_GetHandle_mE9B490654A320F11EFBB0E3180C6CF647E384C80((AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F *)__this, /*hidden argument*/NULL);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_1 = AnimationScriptPlayable_GetHandle_mE9B490654A320F11EFBB0E3180C6CF647E384C80((AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		bool L_2 = PlayableHandle_op_Equality_mBA774AE123AF794A1EB55148206CDD52DAFA42DF(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool AnimationScriptPlayable_Equals_m39A1F71C360404625ABD1EAD32DCAEDD7736E1B3_AdjustorThunk (RuntimeObject * __this, AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  ___other0, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * _thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F *>(__this + 1);
	return AnimationScriptPlayable_Equals_m39A1F71C360404625ABD1EAD32DCAEDD7736E1B3(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.Experimental.Animations.AnimationScriptPlayable::.cctor()
extern "C" IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_mC78B0B27BE44BD802817190E620DB326D730BF70 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnimationScriptPlayable__cctor_mC78B0B27BE44BD802817190E620DB326D730BF70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_il2cpp_TypeInfo_var);
		PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  L_0 = PlayableHandle_get_Null_m09DE585EF795EFA2811950173C80F4FA24CBAAD1(/*hidden argument*/NULL);
		AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  L_1;
		memset(&L_1, 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_mCEAA71DEFF829CA9D60EFB004CC0278FE8C58EF7((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_il2cpp_TypeInfo_var))->set_m_NullPlayable_1(L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_back(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  unmarshaled_limit_temp_2;
	memset(&unmarshaled_limit_temp_2, 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_pinvoke_cleanup(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_BoneName_0());
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_HumanName_1());
	marshaled.___limit_2 = unmarshaled.get_limit_2();
}
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com_back(const HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled, HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995& unmarshaled)
{
	unmarshaled.set_m_BoneName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.set_m_HumanName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  unmarshaled_limit_temp_2;
	memset(&unmarshaled_limit_temp_2, 0, sizeof(unmarshaled_limit_temp_2));
	unmarshaled_limit_temp_2 = marshaled.___limit_2;
	unmarshaled.set_limit_2(unmarshaled_limit_temp_2);
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
extern "C" void HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshal_com_cleanup(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
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
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E (int32_t ___humanId0, const RuntimeMethod* method)
{
	typedef int32_t (*HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn) (int32_t);
	static HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_GetBoneIndexFromMono_mEE030DE71CE19611BB3CC881799CCF3828D0928E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___humanId0);
	return retVal;
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
// System.Void UnityEngine.Motion::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443 (Motion_t497BF9244B6A769D1AE925C3876B187C56C8CF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Motion__ctor_mAED8097767A0FD4F3B5A8E687D569E33DB6F8443_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.RuntimeAnimatorController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32 (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RuntimeAnimatorController__ctor_mF55B0DDD5700D725CD4E59521E5A16BD774ABC32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AnimationClip[] UnityEngine.RuntimeAnimatorController::get_animationClips()
extern "C" IL2CPP_METHOD_ATTR AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7 (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD * __this, const RuntimeMethod* method)
{
	typedef AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* (*RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn) (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD *);
	static RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RuntimeAnimatorController_get_animationClips_mDD7156EB54EF5141D36C686A5C73FAD7DB465AE7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.RuntimeAnimatorController::get_animationClips()");
	AnimationClipU5BU5D_t26BCE82D4E5CBA43CAD83905725B4D6D500B3E36* retVal = _il2cpp_icall_func(__this);
	return retVal;
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
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_back(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_position_temp_2;
	memset(&unmarshaled_position_temp_2, 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_rotation_temp_3;
	memset(&unmarshaled_rotation_temp_3, 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_scale_temp_4;
	memset(&unmarshaled_scale_temp_4, 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_pinvoke_cleanup(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_name_0());
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_parentName_1());
	marshaled.___position_2 = unmarshaled.get_position_2();
	marshaled.___rotation_3 = unmarshaled.get_rotation_3();
	marshaled.___scale_4 = unmarshaled.get_scale_4();
}
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com_back(const SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled, SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5& unmarshaled)
{
	unmarshaled.set_name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.set_parentName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_position_temp_2;
	memset(&unmarshaled_position_temp_2, 0, sizeof(unmarshaled_position_temp_2));
	unmarshaled_position_temp_2 = marshaled.___position_2;
	unmarshaled.set_position_2(unmarshaled_position_temp_2);
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  unmarshaled_rotation_temp_3;
	memset(&unmarshaled_rotation_temp_3, 0, sizeof(unmarshaled_rotation_temp_3));
	unmarshaled_rotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.set_rotation_3(unmarshaled_rotation_temp_3);
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  unmarshaled_scale_temp_4;
	memset(&unmarshaled_scale_temp_4, 0, sizeof(unmarshaled_scale_temp_4));
	unmarshaled_scale_temp_4 = marshaled.___scale_4;
	unmarshaled.set_scale_4(unmarshaled_scale_temp_4);
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
extern "C" void SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshal_com_cleanup(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
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
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m60289315ADCB494227D881EEFA6C4458BACA79DB (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mAB25325C96611ADDF93038EC6792EC4F76AEF4EE (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mE12079F72B209DDFFAB4088B2B210EA20C2C4266 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m83F9656CE5265BD15F3B5D1AB91411A211922730 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mAE38B3B50B0A495AF30E6711F52381668B63DAA2 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mB977958BB73727EF2F721BB449DFEA781529785B (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m5497D76EAE53BEF94431E3C1AAD0B58B89E745C7 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m8A0744B8E90157AE466269DF324C44BFCBB47FF3 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mAAD23D49A3F84438928677D2FA3F8E26CFDE2522 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF1E4E77449D427AE5DDD68FD8EECCAD1E54E1EE9 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_m43A13AA682B9E86F6D2952338F47CE1B2BF9D4A7 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_mD8060C6C70456CDC4D678184723C05A7750846F3 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m09D6AC0300060ACF7B82283AD947E9A260585576 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___stateInfo1, int32_t ___layerIndex2, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller3, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m6DE0F767D565EFC33361BA13A6DCC65AC89D3D07 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
extern "C" IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m01575716EA20F88A56C3CB778FACE2CBDA68EF26 (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C * __this, Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * ___animator0, int32_t ___stateMachinePathHash1, AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___controller2, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
