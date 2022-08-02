#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.String,System.Byte[]>
struct Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831;
// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D;
// System.Action`3<System.Object,System.Object,System.Object>
struct Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58;
// System.Action`3<System.String,System.String,System.Byte[]>
struct Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7;
// System.Action`4<System.Object,System.Object,System.Int32,System.Object>
struct Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46;
// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>
struct Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEventBle>
struct Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEventBle>
struct KeyCollection_t1BFD632412712A3B3777754F5594D54E08FBF1E7;
// System.Collections.Generic.List`1<BleDeviceUnit>
struct List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<BleDeviceUnit>
struct UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityEvent`1<BleDeviceUnit>
struct UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEventBle>
struct ValueCollection_t85C1934EFBE1985189511AD729236865672C3506;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEventBle>[]
struct EntryU5BU5D_t94141E9FB94FBB9969CE3AC034895A09FDE607CC;
// BleDeviceUnit[]
struct BleDeviceUnitU5BU5D_tEAA3DA64758D9926AF50D193CEF41855DF74126D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// BTDeviceItem
struct BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// BleDeviceManager
struct BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927;
// BleDeviceUnit
struct BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD;
// BleEvent
struct BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8;
// BluetoothConnection
struct BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1;
// BluetoothDeviceScript
struct BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39;
// BluetoothPermissionChecker
struct BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEventBle
struct UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// BleDeviceManager/<>c
struct U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B;
// BleDeviceManager/<processScanTimer>d__26
struct U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5;
// BluetoothConnection/<CheckConnect>d__13
struct U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510;
// BluetoothPermissionChecker/<>c
struct U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509;
// BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3
struct U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7D3D6AF37B1C8BBE732780A99EEC2FEF0C63EE18047837A6D1C89474A524FCD7_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02B76E22CF99B4CD92FD5AE4C10F966C92A622E7;
IL2CPP_EXTERN_C String_t* _stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B5F3D82D90B8AF99EAF7E4F0128DFAEED46F610;
IL2CPP_EXTERN_C String_t* _stringLiteral1D167E030752CC00A2FFBCFB447B6068F9352C82;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0;
IL2CPP_EXTERN_C String_t* _stringLiteral2E74B8A8B275DAA0B86E930C82B3B0AF77415068;
IL2CPP_EXTERN_C String_t* _stringLiteral307189C0AE4923C4E929545D0964CD900DC5A8E9;
IL2CPP_EXTERN_C String_t* _stringLiteral30C077F51F99A5536227B9F69873BB312667F624;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral36DF2584FDB81EFABF601D6A8D159844B74F41D5;
IL2CPP_EXTERN_C String_t* _stringLiteral3B9B4B21259BFF1C9F98D3670B1565E6F6D0A3F7;
IL2CPP_EXTERN_C String_t* _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90;
IL2CPP_EXTERN_C String_t* _stringLiteral4D28CD27D381854A46AACF7986388318B713B139;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE4CBEFB6BE586D0FCB6AC6C495834D721F383F;
IL2CPP_EXTERN_C String_t* _stringLiteral558DBE7D591A74F55F4C9A235406345D47872EE1;
IL2CPP_EXTERN_C String_t* _stringLiteral5B72ADA977AA28C492C7AA52F38E74E6DD1EA6E0;
IL2CPP_EXTERN_C String_t* _stringLiteral640852548B56AB3D1EEA9CD763F5DE320842E478;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1;
IL2CPP_EXTERN_C String_t* _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900;
IL2CPP_EXTERN_C String_t* _stringLiteral7A12EC67A42A6708B46289D2E79787460E3C85B5;
IL2CPP_EXTERN_C String_t* _stringLiteral7D78A53E30B76A36D95A0FE1BB1E6B0FDF8E55D3;
IL2CPP_EXTERN_C String_t* _stringLiteral7DD3F89363089EF65E4EF3934D9630FB3C8CD845;
IL2CPP_EXTERN_C String_t* _stringLiteral81A576843994AD49105869B8BF25B9257BA2A4F9;
IL2CPP_EXTERN_C String_t* _stringLiteral82EA3FFBCF545EEFDC5FE816E7879B5F61055C91;
IL2CPP_EXTERN_C String_t* _stringLiteral831D44388900A57E6C18D677DBBC4F24E33BB90D;
IL2CPP_EXTERN_C String_t* _stringLiteral85565D4F33853F61C067E3BD873BC310C824914B;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral95ECA560FC8E552673136D6BA0324D67C6F7926B;
IL2CPP_EXTERN_C String_t* _stringLiteral99C165894B2900048144F5DEF682937FE73CA541;
IL2CPP_EXTERN_C String_t* _stringLiteral9B44550DE59B047BDBFF9E77E355BA8DB533C7F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9DADB1705A1AE3616847C8D0F7EC457E83CD71F8;
IL2CPP_EXTERN_C String_t* _stringLiteralA03EC51409398885C08B687006D93FCAC5531AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralA7FB21D55734359828D6D7B61F2DB1C8D2D7BDDB;
IL2CPP_EXTERN_C String_t* _stringLiteralAA1A3B90374A04B77995E8E90B5E4343C8156ED8;
IL2CPP_EXTERN_C String_t* _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7;
IL2CPP_EXTERN_C String_t* _stringLiteralAECE0660EE6170E556A79E1F2D82307FBFA80766;
IL2CPP_EXTERN_C String_t* _stringLiteralAFFEBC5EF3D28509729C1CE30997CD57E2E606E5;
IL2CPP_EXTERN_C String_t* _stringLiteralB13F13C0F0FAB334986A9A782E604519ADD9848B;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728;
IL2CPP_EXTERN_C String_t* _stringLiteralD406550C634FE03AB26677BEF029FA8F7B0347C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD9201F18BA0C84661E2C0B13B2EFC6D4C231B753;
IL2CPP_EXTERN_C String_t* _stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF846E291795717DFEE1288DAE5FEE1CD3B47814;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FA13CB6978C996C2D2CD09AE1057D914219830;
IL2CPP_EXTERN_C String_t* _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7;
IL2CPP_EXTERN_C String_t* _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1;
IL2CPP_EXTERN_C String_t* _stringLiteralEC5F95B17369FE7F8C5D632A354A47A844A225BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEDB9A7470230DD6F96C29EBFE8794B4E81FB3437;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BTDeviceItem_Connect_mA26E86732341B000DA707F0A7946A002B460AF36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_U3CStartScanU3Eb__27_0_m2246C3FD0B3742FB904E02E1A388F0D53B816D1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_U3CinitializeU3Eb__18_0_mEB62F34D18D3377F781E32CD4A1E4357764EB435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_elseif_m1AB15ED4C968451B2207172EA9795C024BFFAB9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_onCharacteristicAction_m03D14597230CF6A0D966DDA8C44A3E9644ED930D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_onCharacteristicNotification_m65133358EBBBB3218F25C575669A79C5FF10A859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_onConnectAction_m38E0FD79F74289145F51FB49D64F0CE136F4A9B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_onDisconnectAction_m9389E4539AABCFA18953AFF2911BC056829C1DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_onNotificationAction_m02F43DBCC3D34012F556041FB2CB78DF2229163B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BleDeviceManager_onServiceAction_mA92937590FB5479716CC56AD222B6C537D050565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BluetoothConnection_onConnectPeripheral_m39CB6D9C54F5B74753264F756758BDF1FB7EEA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BluetoothConnection_onDiscoveredPeripheral_m3C9C48C8CFDAAEAE945BEA10F926CE8001CA7A3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BluetoothConnection_onSubscribeUpdateData_m1A50861E2859E2E7D06EB2FF1F765ED72E4B19A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE903059F573AE6E06A04DFDF041249DCFE36FC15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF18DEEBB01D498DA393264A6B823F22B61C6C442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_mC6643E3AC8D9F1A92851EF9B68C6CE015FCD8FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1799761D8E726F70902A0DA06594F45D555603FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m9A3ACE7102CBB6AAB54F92E20BB2BD0FA85E4DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1308A431A125A254BD30D77616184F083C9D32EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mED67D114BF787A7379315A379F1C5861D80E13B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0408F451812450A7AB52A3F3BDE2D24ADF0FF6EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckConnectU3Ed__13_System_Collections_IEnumerator_Reset_m97D0E5B42B04656ECDFF649781A36822881696F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPermissionCheckCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mF8652D83D6F697D00FBE1DB6B933DACA114BB2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPermissionCheckCoroutineU3Eb__3_0_mA664C36F99583221571694315C42138EF9B4E124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartScanU3Eb__27_1_m1B77408EE858FF344ACAA8F7997C2F1473F69719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CdisconnectPeripheralU3Eb__54_0_m8EF14A1A799FE1A73639306DE45ECD65B9EE28C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CinitializeU3Eb__18_1_m9169B6B54BC0A9431CA25EA97F0D2194B3513714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CsendBytesU3Eb__50_0_m99D1A74B41CC9D3EB5A765B58D3F9BBF368C7E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CprocessScanTimerU3Ed__26_System_Collections_IEnumerator_Reset_mD0D569FEC037B1FD9BB24E8F23385BAEC886EF44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA7FFB782BAB636530F0FCA682570BF8C8418412E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mF2B1723BC10CA6AC48A858B672C354FCA3971D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m9F611B00DB2B3845CECFA3AA0BE062700B180916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0245780E1C52A9EA9B2883F1625AA6900DDE55C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEventBle>
struct Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t94141E9FB94FBB9969CE3AC034895A09FDE607CC* ____entries_1;
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
	KeyCollection_t1BFD632412712A3B3777754F5594D54E08FBF1E7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t85C1934EFBE1985189511AD729236865672C3506* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<BleDeviceUnit>
struct List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BleDeviceUnitU5BU5D_tEAA3DA64758D9926AF50D193CEF41855DF74126D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BleDeviceUnitU5BU5D_tEAA3DA64758D9926AF50D193CEF41855DF74126D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// System.Int64 <PrivateImplementationDetails>::7D3D6AF37B1C8BBE732780A99EEC2FEF0C63EE18047837A6D1C89474A524FCD7
	int64_t ___7D3D6AF37B1C8BBE732780A99EEC2FEF0C63EE18047837A6D1C89474A524FCD7_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// BleDeviceUnit
struct BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD  : public RuntimeObject
{
	// System.String BleDeviceUnit::_name
	String_t* ____name_0;
	// System.String BleDeviceUnit::_address
	String_t* ____address_1;
	// System.String BleDeviceUnit::_data
	String_t* ____data_2;
};

// BleEvent
struct BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8  : public RuntimeObject
{
};

struct BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields
{
	// System.String BleEvent::DISCOVERED_PERIPHERAL
	String_t* ___DISCOVERED_PERIPHERAL_0;
	// System.String BleEvent::CONNECT_PERIPHERAL
	String_t* ___CONNECT_PERIPHERAL_1;
	// System.String BleEvent::SUBSCRIBE_UPDATE_DATA
	String_t* ___SUBSCRIBE_UPDATE_DATA_2;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// BleDeviceManager/<>c
struct U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B  : public RuntimeObject
{
};

struct U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields
{
	// BleDeviceManager/<>c BleDeviceManager/<>c::<>9
	U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* ___U3CU3E9_0;
	// System.Action`1<System.String> BleDeviceManager/<>c::<>9__18_1
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__18_1_1;
	// System.Action`4<System.String,System.String,System.Int32,System.Byte[]> BleDeviceManager/<>c::<>9__27_1
	Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* ___U3CU3E9__27_1_2;
	// System.Action`1<System.String> BleDeviceManager/<>c::<>9__50_0
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__50_0_3;
	// System.Action`1<System.String> BleDeviceManager/<>c::<>9__54_0
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___U3CU3E9__54_0_4;
};

// BleDeviceManager/<processScanTimer>d__26
struct U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5  : public RuntimeObject
{
	// System.Int32 BleDeviceManager/<processScanTimer>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BleDeviceManager/<processScanTimer>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BleDeviceManager BleDeviceManager/<processScanTimer>d__26::<>4__this
	BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* ___U3CU3E4__this_2;
};

// BluetoothConnection/<CheckConnect>d__13
struct U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510  : public RuntimeObject
{
	// System.Int32 BluetoothConnection/<CheckConnect>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BluetoothConnection/<CheckConnect>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BluetoothConnection BluetoothConnection/<CheckConnect>d__13::<>4__this
	BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* ___U3CU3E4__this_2;
};

// BluetoothPermissionChecker/<>c
struct U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509  : public RuntimeObject
{
};

struct U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_StaticFields
{
	// BluetoothPermissionChecker/<>c BluetoothPermissionChecker/<>c::<>9
	U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509* ___U3CU3E9_0;
	// System.Func`1<System.Boolean> BluetoothPermissionChecker/<>c::<>9__3_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__3_0_1;
};

// BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3
struct U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5  : public RuntimeObject
{
	// System.Int32 BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BluetoothPermissionChecker BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::<>4__this
	BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* ___U3CU3E4__this_2;
};

// UnityEngine.Events.UnityEvent`1<BleDeviceUnit>
struct UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEventBle
struct UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F  : public UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A
{
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,System.String>
struct Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D  : public MulticastDelegate_t
{
};

// System.Action`3<System.String,System.String,System.Byte[]>
struct Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB  : public MulticastDelegate_t
{
};

// System.Action`3<System.String,System.String,System.String>
struct Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7  : public MulticastDelegate_t
{
};

// System.Action`4<System.String,System.String,System.Int32,System.Byte[]>
struct Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<BleDeviceUnit>
struct UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BTDeviceItem
struct BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String BTDeviceItem::deviceID
	String_t* ___deviceID_4;
	// UnityEngine.UI.Text BTDeviceItem::BTID
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___BTID_5;
	// UnityEngine.UI.Text BTDeviceItem::deviceName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___deviceName_6;
	// UnityEngine.UI.Button BTDeviceItem::selectDeviceItem
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___selectDeviceItem_7;
	// BleDeviceUnit BTDeviceItem::unit
	BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___unit_8;
};

// BleDeviceManager
struct BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String BleDeviceManager::_serviceUUID
	String_t* ____serviceUUID_7;
	// System.String BleDeviceManager::_writeUUID
	String_t* ____writeUUID_8;
	// System.String BleDeviceManager::_notifyUUID
	String_t* ____notifyUUID_9;
	// System.String BleDeviceManager::_BT_NAME_PREFIX
	String_t* ____BT_NAME_PREFIX_10;
	// System.String BleDeviceManager::_connectID
	String_t* ____connectID_11;
	// System.String BleDeviceManager::_macAddress
	String_t* ____macAddress_12;
	// System.Boolean BleDeviceManager::isConnected
	bool ___isConnected_13;
	// System.Boolean BleDeviceManager::isReset
	bool ___isReset_14;
	// System.Boolean BleDeviceManager::_isRequest
	bool ____isRequest_15;
	// System.Boolean BleDeviceManager::_isPaused
	bool ____isPaused_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEventBle> BleDeviceManager::eventDictionary
	Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* ___eventDictionary_17;
	// System.Collections.Generic.List`1<BleDeviceUnit> BleDeviceManager::scanPeripheralList
	List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* ___scanPeripheralList_18;
	// System.Collections.Generic.List`1<BleDeviceUnit> BleDeviceManager::connectPeripheralList
	List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* ___connectPeripheralList_19;
};

struct BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields
{
	// BleDeviceManager BleDeviceManager::_instance
	BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* ____instance_4;
	// System.Object BleDeviceManager::_lock
	RuntimeObject* ____lock_5;
	// System.Boolean BleDeviceManager::applicationIsQuitting
	bool ___applicationIsQuitting_6;
};

// BluetoothConnection
struct BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text BluetoothConnection::lbLog
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lbLog_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BluetoothConnection::goItemList
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___goItemList_5;
	// BleDeviceUnit BluetoothConnection::unit
	BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___unit_6;
	// UnityEngine.GameObject BluetoothConnection::Player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Player_7;
	// UnityEngine.GameObject BluetoothConnection::startbtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___startbtn_8;
	// System.Boolean BluetoothConnection::isconnection
	bool ___isconnection_9;
	// System.Int32 BluetoothConnection::firecount
	int32_t ___firecount_10;
	// System.Boolean BluetoothConnection::firestart
	bool ___firestart_11;
};

// BluetoothDeviceScript
struct BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.String> BluetoothDeviceScript::DiscoveredDeviceList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___DiscoveredDeviceList_4;
	// System.Action`1<System.String> BluetoothDeviceScript::InitializedAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___InitializedAction_5;
	// System.Action BluetoothDeviceScript::DeinitializedAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DeinitializedAction_6;
	// System.Action`1<System.String> BluetoothDeviceScript::ErrorAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ErrorAction_7;
	// System.Action`1<System.String> BluetoothDeviceScript::ServiceAddedAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ServiceAddedAction_8;
	// System.Action BluetoothDeviceScript::StartedAdvertisingAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StartedAdvertisingAction_9;
	// System.Action BluetoothDeviceScript::StoppedAdvertisingAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___StoppedAdvertisingAction_10;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredPeripheralAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___DiscoveredPeripheralAction_11;
	// System.Action`4<System.String,System.String,System.Int32,System.Byte[]> BluetoothDeviceScript::DiscoveredPeripheralWithAdvertisingInfoAction
	Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* ___DiscoveredPeripheralWithAdvertisingInfoAction_12;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::RetrievedConnectedPeripheralAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___RetrievedConnectedPeripheralAction_13;
	// System.Action`2<System.String,System.Byte[]> BluetoothDeviceScript::PeripheralReceivedWriteDataAction
	Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___PeripheralReceivedWriteDataAction_14;
	// System.Action`1<System.String> BluetoothDeviceScript::ConnectedPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ConnectedPeripheralAction_15;
	// System.Action`1<System.String> BluetoothDeviceScript::ConnectedDisconnectPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___ConnectedDisconnectPeripheralAction_16;
	// System.Action`1<System.String> BluetoothDeviceScript::DisconnectedPeripheralAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___DisconnectedPeripheralAction_17;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DiscoveredServiceAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___DiscoveredServiceAction_18;
	// System.Action`3<System.String,System.String,System.String> BluetoothDeviceScript::DiscoveredCharacteristicAction
	Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* ___DiscoveredCharacteristicAction_19;
	// System.Action`1<System.String> BluetoothDeviceScript::DidWriteCharacteristicAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___DidWriteCharacteristicAction_20;
	// System.Action`1<System.String> BluetoothDeviceScript::DidUpdateNotificationStateForCharacteristicAction
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___DidUpdateNotificationStateForCharacteristicAction_21;
	// System.Action`2<System.String,System.String> BluetoothDeviceScript::DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___DidUpdateNotificationStateForCharacteristicWithDeviceAddressAction_22;
	// System.Action`2<System.String,System.Byte[]> BluetoothDeviceScript::DidUpdateCharacteristicValueAction
	Action_2_t6167C7DD369F0ADA5FD8FB5C2476453CF404C831* ___DidUpdateCharacteristicValueAction_23;
	// System.Action`3<System.String,System.String,System.Byte[]> BluetoothDeviceScript::DidUpdateCharacteristicValueWithDeviceAddressAction
	Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* ___DidUpdateCharacteristicValueWithDeviceAddressAction_24;
};

// BluetoothPermissionChecker
struct BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean BluetoothPermissionChecker::onCheck
	bool ___onCheck_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
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


// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`4<System.Object,System.Object,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m3796936BA909B7DDC061F5C00B838D67B3EB94EF_gshared (Action_4_tB13889672F2D689F21857C968EBBDF091CA42E46* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared (Action_3_tCDB60724FE7702C8848DCEE7A25283B015D0DA58* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void UnityEngine.Events.UnityEvent`1<BleDeviceUnit>::.ctor()
inline void UnityEvent_1__ctor_m0245780E1C52A9EA9B2883F1625AA6900DDE55C5 (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mF9A94A2059CE512E485297DDBBA51C02B451E41F (Type_t* ___type0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_initialize_m80606BEA0A60EA99B194690CDFC19C32E92BB64E (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<BleDeviceManager>()
inline BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* GameObject_AddComponent_TisBleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_mC6643E3AC8D9F1A92851EF9B68C6CE015FCD8FF9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEventBle>::.ctor()
inline void Dictionary_2__ctor_mF18DEEBB01D498DA393264A6B823F22B61C6C442 (Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<BleDeviceUnit>::.ctor()
inline void List_1__ctor_m1308A431A125A254BD30D77616184F083C9D32EE (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// BluetoothDeviceScript BluetoothLEHardwareInterface::Initialize(System.Boolean,System.Boolean,System.Action`1<System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* BluetoothLEHardwareInterface_Initialize_m7883D0AACCB9F58A588C165EA0FA9CC58951377D (bool ___asCentral0, bool ___asPeripheral1, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___errorAction3, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEventBle>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F (Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* __this, String_t* ___key0, UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE*, String_t*, UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<BleDeviceUnit>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mA7FFB782BAB636530F0FCA682570BF8C8418412E (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A* __this, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A*, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEventBle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBle__ctor_mFCD6A9167D6ACDF80740A0DB19D592E242FCB008 (UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEventBle>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE903059F573AE6E06A04DFDF041249DCFE36FC15 (Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* __this, String_t* ___key0, UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE*, String_t*, UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<BleDeviceUnit>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m9F611B00DB2B3845CECFA3AA0BE062700B180916 (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A* __this, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A*, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<BleDeviceUnit>::Invoke(T0)
inline void UnityEvent_1_Invoke_mF2B1723BC10CA6AC48A858B672C354FCA3971D2E (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A* __this, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t685D88F9092494597CB318313D7BBD2940FCCB6A*, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// System.Void BleDeviceManager::stopScanTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_stopScanTimer_m2028831E7062A199D136324705F52BC6A4C71990 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void BleDeviceManager/<processScanTimer>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprocessScanTimerU3Ed__26__ctor_m6E73F31A32DFE2F464BFB4C1FDCD1BD5A6D01BB0 (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::startScanTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_startScanTimer_mF51BEEDF459BEA716895F23D1201D06D400CCC74 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<BleDeviceUnit>::Clear()
inline void List_1_Clear_m9A3ACE7102CBB6AAB54F92E20BB2BD0FA85E4DBD_inline (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Action`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`4<System.String,System.String,System.Int32,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mF918A3211265B113C0275ECF2DAAAF2A298A3F9C (Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_4__ctor_m3796936BA909B7DDC061F5C00B838D67B3EB94EF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void BluetoothLEHardwareInterface::ScanForPeripheralsWithServices(System.String[],System.Action`2<System.String,System.String>,System.Action`4<System.String,System.String,System.Int32,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ScanForPeripheralsWithServices_mF6E23938C8C644AA0CFA87C15CBD1F11D8B9496D (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___serviceUUIDs0, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___action1, Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* ___actionAdvertisingInfo2, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::StopScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_StopScan_m56E0C221751F793ED8426C95C37E9BDD0762998F (const RuntimeMethod* method) ;
// System.Void BleDeviceManager::StopScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StopScan_m13B99237DE2B5D8DBB987CF713D0D33C896344DB (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// System.Boolean BluetoothLEHardwareInterface::isBleEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothLEHardwareInterface_isBleEnabled_mF4C480ADA2C4D2C00814D9F455084BE24DBB79BB (const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::showBleSettingPopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_showBleSettingPopup_m64BE99C0193888CA4F761E36DB8CA041F6CED942 (const RuntimeMethod* method) ;
// System.Boolean BleDeviceManager::checkConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleDeviceManager_checkConnect_mC97F6C14F29C1E1A0D03A7E11A5F9FF18F9F1E88 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.String,System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m5F819EEFFB1D32FFE8F0BDCA168938F82AA5DAE4 (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared)(__this, ___object0, ___method1, method);
}
// System.Void BluetoothLEHardwareInterface::ConnectToPeripheral(System.String,System.Action`1<System.String>,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ConnectToPeripheral_mFAF4A4FAF9DE4631AB912747B9A2EB6BA7D3EC0B (String_t* ___name0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___connectAction1, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___serviceAction2, Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* ___characteristicAction3, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___disconnectAction4, const RuntimeMethod* method) ;
// System.Boolean BleDeviceManager::IsEqual(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___uuid10, String_t* ___uuid21, const RuntimeMethod* method) ;
// System.Void System.Action`3<System.String,System.String,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m579202F0D2F5439AE2C51F7E91D0C198AC5A3E38 (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_mFDF135E5454D50D572002F7C83EEB55B3CAA5211_gshared)(__this, ___object0, ___method1, method);
}
// System.Void BluetoothLEHardwareInterface::SubscribeCharacteristicWithDeviceAddress(System.String,System.String,System.String,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_SubscribeCharacteristicWithDeviceAddress_m2901F4ABF3852CB67100C6E4654BCCBA4AC9D3A6 (String_t* ___name0, String_t* ___service1, String_t* ___characteristic2, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___notificationAction3, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* ___action4, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::disconnectionAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_disconnectionAction_m4A94534C73271A4A0F3954B3546A4DBA52B0C62D (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___deviceAddress0, const RuntimeMethod* method) ;
// System.Void BleDeviceUnit::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceUnit__ctor_mEAFD104A733C93CCB64C21DF28F973E5759B7CCC (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, String_t* ___name0, String_t* ___address1, const RuntimeMethod* method) ;
// BleDeviceManager BleDeviceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D (const RuntimeMethod* method) ;
// System.Void BleDeviceManager::TriggerEvent(System.String,BleDeviceUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_TriggerEvent_mD80F01A94AB743280D7D27E2DC22E206F75771CA (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___eventName0, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___e1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::getReadData(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_getReadData_mC7C29A57467FC13A69549415263ABAB91B32A821 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___deviceAddress0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Boolean BluetoothLEHardwareInterface::IsConnectAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BluetoothLEHardwareInterface_IsConnectAddress_m0F5D0B96F3B3D0C47590EEDFE48F2478C358142B (String_t* ___connectAddress0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Byte::Equals(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___obj0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m58CEFC66D90B56A11C21C7B24BB856FD797C93A2 (uint8_t ___value0, int32_t ___toBase1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::sendBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_sendBytes_mC19EEE0B451CF1DD7D5F405DDD53BEA3A6CBAC35 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void BleDeviceUnit::setData(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BleDeviceUnit_setData_mE52DDA659C2B752BCE72A96713766499B21AC201_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Boolean BleDeviceManager::isConnectedBLE()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548_inline (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::WriteCharacteristic(System.String,System.String,System.String,System.Byte[],System.Int32,System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_WriteCharacteristic_m60A9318801C147A7EC79FF0C506E411AA0B56585 (String_t* ___name0, String_t* ___service1, String_t* ___characteristic2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data3, int32_t ___length4, bool ___withResponse5, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action6, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::DisconnectPeripheral(System.String,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_DisconnectPeripheral_mDABC20CB04ED6DCDF3676124B63DF34D7EF692D0 (String_t* ___name0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___action1, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::SetAppPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_SetAppPaused_m22C8D7AF61962817BFB1AF2A035CE9094BB3939E (bool ___isPaused0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::ConnectToPeripheralReg(System.Action`1<System.String>,System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.String>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_ConnectToPeripheralReg_mAF552F1B267BEBC2F18A577FD32694F8770F48C7 (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___connectAction0, Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___serviceAction1, Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* ___characteristicAction2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___disconnectAction3, const RuntimeMethod* method) ;
// System.Void BluetoothLEHardwareInterface::SubscribeCharacteristicWithDeviceAddressReg(System.Action`2<System.String,System.String>,System.Action`3<System.String,System.String,System.Byte[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothLEHardwareInterface_SubscribeCharacteristicWithDeviceAddressReg_m7E25D8EA3F33ED5F00A3319D81ADDDB10ADD8CCB (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* ___notificationAction0, Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* ___action1, const RuntimeMethod* method) ;
// System.Boolean BleDeviceManager::isConnectedAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleDeviceManager_isConnectedAddress_mAD558D8989F554EECB4337E02AC0F958730A126D (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::connectDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_connectDevice_m092DA8A5CD7BD167C4566FD4B88E649D1E279C7A (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<BleDeviceUnit>::get_Item(System.Int32)
inline BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* List_1_get_Item_m0408F451812450A7AB52A3F3BDE2D24ADF0FF6EB (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* (*) (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String BleDeviceUnit::getAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getAddress_m1041B7681D92B6E42B5436514F9BB6BC81AFF4F1_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<BleDeviceUnit>::get_Count()
inline int32_t List_1_get_Count_mED67D114BF787A7379315A379F1C5861D80E13B1_inline (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<BleDeviceUnit>::Add(T)
inline void List_1_Add_m1799761D8E726F70902A0DA06594F45D555603FE_inline (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* __this, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13*, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void BleDeviceManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC556DB5056FF4255B0C7B2C201B1B477B18C9E71 (U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::disconnectPeripheral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_disconnectPeripheral_mA4A5BE64133B629BEAA28548CB314F7E9B100D30 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// System.Void BluetoothConnection::BluetoothDeviceConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_BluetoothDeviceConnect_m618A8BAE459E637EED1FEC59379E3E7FA2D54C59 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<BleDeviceUnit>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m76941321DA6F6419695A1D92BEB38D692F7CE36E (UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void BleDeviceManager::StartListening(System.String,UnityEngine.Events.UnityAction`1<BleDeviceUnit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StartListening_mC50D93406F9A8E5D70174B3258A910174949BDAA (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___eventName0, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* ___listener1, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::StartScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StartScan_mB24E3F0A4AF561929F4299E84B41A2EFF4CE0457 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BluetoothConnection::CheckConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BluetoothConnection_CheckConnect_m79C31B5752FBFA08A2F4CFD86F93039FD88D8756 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void BluetoothConnection/<CheckConnect>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckConnectU3Ed__13__ctor_m188886AB3DEB4E5C18CA3A400E6BEAB2A4FF3A2D (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void BluetoothConnection::StartMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_StartMain_m67E1D0F4E011FA16A8C2149B5001DE8DD0199D9C (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) ;
// System.Void BluetoothConnection::keymap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_keymap_m8D354594364709C8EAA9952D4C7DFDA9745338E8 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void BluetoothConnection::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_Connect_mB93597286B89E94F09680BA36391BDAD8764C823 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) ;
// System.String BleDeviceUnit::getData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getData_mA4A12391750E2D982B466F9286D2D5389DF27FBA_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void BluetoothConnection::firecheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_firecheck_m4CFB5B4C43E36699BB81364A89FDE09DF8A20FCA (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void BleDeviceManager::StopListening(System.String,UnityEngine.Events.UnityAction`1<BleDeviceUnit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StopListening_m9AE8B678E974DED1E73475E23EBAC57F2F77820B (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___eventName0, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* ___listener1, const RuntimeMethod* method) ;
// System.Void BluetoothConnection::onReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_onReset_m0E65EFF3B1A83947F2A01ED08611F8D8A691611F (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) ;
// System.Void BluetoothPermissionChecker::PressBtnCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothPermissionChecker_PressBtnCapture_m04110885DE7D417D2D8D1FFD89716BE94D5172A2 (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BluetoothPermissionChecker::PermissionCheckCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BluetoothPermissionChecker_PermissionCheckCoroutine_m946C4984CAA0E40E5710FE9FE2631355EECBA449 (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) ;
// System.Void BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPermissionCheckCoroutineU3Ed__3__ctor_m6B432805A736CCF641B19F3A90A2D9EB16D902BB (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void BluetoothPermissionChecker/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFFF5CAE65515493793F924D2DFC9AFE5C8DF2610 (U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isFocused_m5E2835D701463AB393851163788F1F2DF3770E3E (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void BluetoothPermissionChecker::OpenAppSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothPermissionChecker_OpenAppSetting_m7337A178DF80DD14C5E03D48A62EB8400A2C8750 (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.String BleDeviceUnit::getName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getName_m84BD5F79A84973DBCB44E95B1EABEF80554A1329_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) ;
// System.Void BTDeviceItem::BluetoothDeviceConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BTDeviceItem_BluetoothDeviceConnect_m734BDA22C156D10AA09E62796B51D7160E1C01CA (BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void UnityEventBle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBle__ctor_mFCD6A9167D6ACDF80740A0DB19D592E242FCB008 (UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0245780E1C52A9EA9B2883F1625AA6900DDE55C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0245780E1C52A9EA9B2883F1625AA6900DDE55C5(__this, UnityEvent_1__ctor_m0245780E1C52A9EA9B2883F1625AA6900DDE55C5_RuntimeMethod_var);
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
// BleDeviceManager BleDeviceManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_mC6643E3AC8D9F1A92851EF9B68C6CE015FCD8FF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA03EC51409398885C08B687006D93FCAC5531AB2);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* V_2 = NULL;
	{
		// if (applicationIsQuitting) {
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		bool L_0 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->___applicationIsQuitting_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return null;
		return (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927*)NULL;
	}

IL_0009:
	{
		// lock (_lock) {
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____lock_5;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bb:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_00c4;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_00c4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// if (_instance == null) {
				il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
				BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_5 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_6)
				{
					goto IL_00b3_1;
				}
			}
			{
				// _instance = (BleDeviceManager)FindObjectOfType (typeof(BleDeviceManager));
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_8;
				L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
				L_9 = Object_FindObjectOfType_mF9A94A2059CE512E485297DDBBA51C02B451E41F(L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
				((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927*)CastclassClass((RuntimeObject*)L_9, BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var));
				Il2CppCodeGenWriteBarrier((void**)(&((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4), (void*)((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927*)CastclassClass((RuntimeObject*)L_9, BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var)));
				// if (FindObjectsOfType (typeof(BleDeviceManager)).Length > 1) {
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_0_0_0_var) };
				Type_t* L_11;
				L_11 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_10, NULL);
				ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_12;
				L_12 = Object_FindObjectsOfType_m26A7F8711A45112BF7D30F5273B79DE1F3A7C13F(L_11, NULL);
				NullCheck(L_12);
				if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) <= ((int32_t)1)))
				{
					goto IL_0068_1;
				}
			}
			{
				// _instance.initialize ();
				il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
				BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_13 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
				NullCheck(L_13);
				BleDeviceManager_initialize_m80606BEA0A60EA99B194690CDFC19C32E92BB64E(L_13, NULL);
				// return _instance;
				BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_14 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
				V_2 = L_14;
				goto IL_00c5;
			}

IL_0068_1:
			{
				// if (_instance == null) {
				il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
				BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_15 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_16;
				L_16 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_16)
				{
					goto IL_00b3_1;
				}
			}
			{
				// GameObject singleton = new GameObject ();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_17, NULL);
				// _instance = singleton.AddComponent<BleDeviceManager> ();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17;
				NullCheck(L_18);
				BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_19;
				L_19 = GameObject_AddComponent_TisBleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_mC6643E3AC8D9F1A92851EF9B68C6CE015FCD8FF9(L_18, GameObject_AddComponent_TisBleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_mC6643E3AC8D9F1A92851EF9B68C6CE015FCD8FF9_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
				((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4), (void*)L_19);
				// singleton.name = "(singleton) " + typeof(BleDeviceManager).ToString ();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_18;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
				NullCheck(L_22);
				String_t* L_23;
				L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
				String_t* L_24;
				L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA03EC51409398885C08B687006D93FCAC5531AB2, L_23, NULL);
				NullCheck(L_20);
				Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_20, L_24, NULL);
				// DontDestroyOnLoad (singleton);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_20, NULL);
				// _instance.initialize ();
				BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_25 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
				NullCheck(L_25);
				BleDeviceManager_initialize_m80606BEA0A60EA99B194690CDFC19C32E92BB64E(L_25, NULL);
			}

IL_00b3_1:
			{
				// return _instance;
				il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
				BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_26 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
				V_2 = L_26;
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		// }
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_27 = V_2;
		return L_27;
	}
}
// System.Void BleDeviceManager::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_initialize_m80606BEA0A60EA99B194690CDFC19C32E92BB64E (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_U3CinitializeU3Eb__18_0_mEB62F34D18D3377F781E32CD4A1E4357764EB435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF18DEEBB01D498DA393264A6B823F22B61C6C442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1308A431A125A254BD30D77616184F083C9D32EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CinitializeU3Eb__18_1_m9169B6B54BC0A9431CA25EA97F0D2194B3513714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	int32_t G_B4_3 = 0;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	{
		// if (eventDictionary == null) {
		Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* L_0 = __this->___eventDictionary_17;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// eventDictionary = new Dictionary<string, UnityEventBle> ();
		Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* L_1 = (Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE*)il2cpp_codegen_object_new(Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mF18DEEBB01D498DA393264A6B823F22B61C6C442(L_1, Dictionary_2__ctor_mF18DEEBB01D498DA393264A6B823F22B61C6C442_RuntimeMethod_var);
		__this->___eventDictionary_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventDictionary_17), (void*)L_1);
	}

IL_0013:
	{
		// scanPeripheralList = new List<BleDeviceUnit> ();
		List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* L_2 = (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13*)il2cpp_codegen_object_new(List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m1308A431A125A254BD30D77616184F083C9D32EE(L_2, List_1__ctor_m1308A431A125A254BD30D77616184F083C9D32EE_RuntimeMethod_var);
		__this->___scanPeripheralList_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scanPeripheralList_18), (void*)L_2);
		// connectPeripheralList = new List<BleDeviceUnit> ();
		List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* L_3 = (List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13*)il2cpp_codegen_object_new(List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m1308A431A125A254BD30D77616184F083C9D32EE(L_3, List_1__ctor_m1308A431A125A254BD30D77616184F083C9D32EE_RuntimeMethod_var);
		__this->___connectPeripheralList_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectPeripheralList_19), (void*)L_3);
		// BluetoothLEHardwareInterface.Initialize (true, false, (connectingAddress) => {
		//     if(connectingAddress.Length > 0) {
		//         //BluetoothLEHardwareInterface.Log ("Connecting address = " + connectingAddress);
		// 
		//         BluetoothLEHardwareInterface.ConnectToPeripheralReg(onConnectAction,
		//                                                             onServiceAction,
		//                                                             onCharacteristicAction,
		//                                                             onDisconnectAction);
		// 
		//         BluetoothLEHardwareInterface.SubscribeCharacteristicWithDeviceAddressReg(onNotificationAction,
		//                                                                                onCharacteristicNotification);
		// 
		//         _connectID = connectingAddress;
		// 
		//         if(isConnectedAddress(connectingAddress) == true) {
		//             isConnected = true;
		//         } else {
		//             connectDevice(connectingAddress);
		//         }
		//     }
		// }, (error) => {
		//     BluetoothLEHardwareInterface.Log("Center Mode Error : " + error);
		// });
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_4, __this, (intptr_t)((void*)BleDeviceManager_U3CinitializeU3Eb__18_0_mEB62F34D18D3377F781E32CD4A1E4357764EB435_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__18_1_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		G_B3_2 = 0;
		G_B3_3 = 1;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			G_B4_2 = 0;
			G_B4_3 = 1;
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* L_7 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CinitializeU3Eb__18_1_m9169B6B54BC0A9431CA25EA97F0D2194B3513714_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = L_8;
		((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__18_1_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__18_1_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0056:
	{
		BluetoothDeviceScript_tD8A11BBB5C0575F9408FA848D6D931A1B43DCE39* L_10;
		L_10 = BluetoothLEHardwareInterface_Initialize_m7883D0AACCB9F58A588C165EA0FA9CC58951377D((bool)G_B4_3, (bool)G_B4_2, G_B4_1, G_B4_0, NULL);
		// _serviceUUID = _serviceUUID.ToLower ();
		String_t* L_11 = __this->____serviceUUID_7;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_11, NULL);
		__this->____serviceUUID_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serviceUUID_7), (void*)L_12);
		// _writeUUID = _writeUUID.ToLower ();
		String_t* L_13 = __this->____writeUUID_8;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_13, NULL);
		__this->____writeUUID_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writeUUID_8), (void*)L_14);
		// _notifyUUID = _notifyUUID.ToLower ();
		String_t* L_15 = __this->____notifyUUID_9;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_15, NULL);
		__this->____notifyUUID_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____notifyUUID_9), (void*)L_16);
		// }
		return;
	}
}
// System.Void BleDeviceManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_Load_m5F042BA23FB751987215B5414ADE88546D402820 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral558DBE7D591A74F55F4C9A235406345D47872EE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BluetoothLEHardwareInterface.Log ("BleDeviceManager Load");
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(_stringLiteral558DBE7D591A74F55F4C9A235406345D47872EE1, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_Log_m76104FDC8E3AF2BFEC20D7E6F3F5B6E9C8D4F7E2 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___log0, const RuntimeMethod* method) 
{
	{
		// BluetoothLEHardwareInterface.Log (log);
		String_t* L_0 = ___log0;
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(L_0, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::StartListening(System.String,UnityEngine.Events.UnityAction`1<BleDeviceUnit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StartListening_mC50D93406F9A8E5D70174B3258A910174949BDAA (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___eventName0, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE903059F573AE6E06A04DFDF041249DCFE36FC15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mA7FFB782BAB636530F0FCA682570BF8C8418412E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* V_0 = NULL;
	{
		// UnityEventBle thisEvent = null;
		V_0 = (UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F*)NULL;
		// if (_instance.eventDictionary.TryGetValue (eventName, out thisEvent)) {
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* L_1 = L_0->___eventDictionary_17;
		String_t* L_2 = ___eventName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// thisEvent.AddListener (listener);
		UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* L_4 = V_0;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_5 = ___listener1;
		NullCheck(L_4);
		UnityEvent_1_AddListener_mA7FFB782BAB636530F0FCA682570BF8C8418412E(L_4, L_5, UnityEvent_1_AddListener_mA7FFB782BAB636530F0FCA682570BF8C8418412E_RuntimeMethod_var);
		return;
	}

IL_001e:
	{
		// thisEvent = new UnityEventBle();
		UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* L_6 = (UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F*)il2cpp_codegen_object_new(UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityEventBle__ctor_mFCD6A9167D6ACDF80740A0DB19D592E242FCB008(L_6, NULL);
		V_0 = L_6;
		// thisEvent.AddListener(listener);
		UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* L_7 = V_0;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_8 = ___listener1;
		NullCheck(L_7);
		UnityEvent_1_AddListener_mA7FFB782BAB636530F0FCA682570BF8C8418412E(L_7, L_8, UnityEvent_1_AddListener_mA7FFB782BAB636530F0FCA682570BF8C8418412E_RuntimeMethod_var);
		// _instance.eventDictionary.Add (eventName, thisEvent);
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_9 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_9);
		Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* L_10 = L_9->___eventDictionary_17;
		String_t* L_11 = ___eventName0;
		UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_mE903059F573AE6E06A04DFDF041249DCFE36FC15(L_10, L_11, L_12, Dictionary_2_Add_mE903059F573AE6E06A04DFDF041249DCFE36FC15_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BleDeviceManager::StopListening(System.String,UnityEngine.Events.UnityAction`1<BleDeviceUnit>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StopListening_m9AE8B678E974DED1E73475E23EBAC57F2F77820B (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___eventName0, UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m9F611B00DB2B3845CECFA3AA0BE062700B180916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* V_0 = NULL;
	{
		// if (_instance == null)
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// UnityEventBle thisEvent = null;
		V_0 = (UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F*)NULL;
		// if (_instance.eventDictionary.TryGetValue (eventName, out thisEvent)) {
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_2 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_2);
		Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* L_3 = L_2->___eventDictionary_17;
		String_t* L_4 = ___eventName0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// thisEvent.RemoveListener(listener);
		UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* L_6 = V_0;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_7 = ___listener1;
		NullCheck(L_6);
		UnityEvent_1_RemoveListener_m9F611B00DB2B3845CECFA3AA0BE062700B180916(L_6, L_7, UnityEvent_1_RemoveListener_m9F611B00DB2B3845CECFA3AA0BE062700B180916_RuntimeMethod_var);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void BleDeviceManager::TriggerEvent(System.String,BleDeviceUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_TriggerEvent_mD80F01A94AB743280D7D27E2DC22E206F75771CA (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___eventName0, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mF2B1723BC10CA6AC48A858B672C354FCA3971D2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* V_0 = NULL;
	{
		// UnityEventBle thisEvent = null;
		V_0 = (UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F*)NULL;
		// if (_instance.eventDictionary.TryGetValue (eventName, out thisEvent)) {
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0 = ((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____instance_4;
		NullCheck(L_0);
		Dictionary_2_tEFA10836A2C8F57809620B49E4780B129789BDFE* L_1 = L_0->___eventDictionary_17;
		String_t* L_2 = ___eventName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m0B04E4185EC67CBD32E171EB927CD4900C1A5A0F_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// thisEvent.Invoke(e);
		UnityEventBle_tAF2D962F5C5BC862CB2D1EE33422F6CB409C7B7F* L_4 = V_0;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_5 = ___e1;
		NullCheck(L_4);
		UnityEvent_1_Invoke_mF2B1723BC10CA6AC48A858B672C354FCA3971D2E(L_4, L_5, UnityEvent_1_Invoke_mF2B1723BC10CA6AC48A858B672C354FCA3971D2E_RuntimeMethod_var);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void BleDeviceManager::startScanTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_startScanTimer_mF51BEEDF459BEA716895F23D1201D06D400CCC74 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D167E030752CC00A2FFBCFB447B6068F9352C82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stopScanTimer();
		BleDeviceManager_stopScanTimer_m2028831E7062A199D136324705F52BC6A4C71990(__this, NULL);
		// StartCoroutine("processScanTimer");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral1D167E030752CC00A2FFBCFB447B6068F9352C82, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::stopScanTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_stopScanTimer_m2028831E7062A199D136324705F52BC6A4C71990 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D167E030752CC00A2FFBCFB447B6068F9352C82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopCoroutine("processScanTimer");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral1D167E030752CC00A2FFBCFB447B6068F9352C82, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BleDeviceManager::processScanTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BleDeviceManager_processScanTimer_m36563B5EA6E0EA04B0AF17B82F0C2FB18ED9E52B (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* L_0 = (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5*)il2cpp_codegen_object_new(U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CprocessScanTimerU3Ed__26__ctor_m6E73F31A32DFE2F464BFB4C1FDCD1BD5A6D01BB0(L_0, 0, NULL);
		U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BleDeviceManager::StartScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StartScan_mB24E3F0A4AF561929F4299E84B41A2EFF4CE0457 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_U3CStartScanU3Eb__27_0_m2246C3FD0B3742FB904E02E1A388F0D53B816D1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m9A3ACE7102CBB6AAB54F92E20BB2BD0FA85E4DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartScanU3Eb__27_1_m1B77408EE858FF344ACAA8F7997C2F1473F69719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DD3F89363089EF65E4EF3934D9630FB3C8CD845);
		s_Il2CppMethodInitialized = true;
	}
	Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* G_B4_0 = NULL;
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* G_B3_0 = NULL;
	Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		// startScanTimer();
		BleDeviceManager_startScanTimer_mF51BEEDF459BEA716895F23D1201D06D400CCC74(__this, NULL);
		// if(scanPeripheralList != null)
		List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* L_0 = __this->___scanPeripheralList_18;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// scanPeripheralList.Clear ();
		List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* L_1 = __this->___scanPeripheralList_18;
		NullCheck(L_1);
		List_1_Clear_m9A3ACE7102CBB6AAB54F92E20BB2BD0FA85E4DBD_inline(L_1, List_1_Clear_m9A3ACE7102CBB6AAB54F92E20BB2BD0FA85E4DBD_RuntimeMethod_var);
	}

IL_0019:
	{
		// BluetoothLEHardwareInterface.Log ("StartScan");
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(_stringLiteral7DD3F89363089EF65E4EF3934D9630FB3C8CD845, NULL);
		// BluetoothLEHardwareInterface.ScanForPeripheralsWithServices (null, (address, name) => {
		// 
		//     Debug.Log("name   : "+name);
		//     if( !name.Contains(_BT_NAME_PREFIX) ) return;
		// 
		//     for(int i = 0; i < scanPeripheralList.Count; i++)
		//     {
		//         if(scanPeripheralList[i].getAddress().Equals(address))
		//         {
		//             return;
		//         }
		//     }
		// 
		//     BleDeviceUnit unit = new BleDeviceUnit(name, address);
		//     scanPeripheralList.Add(unit);
		// 
		//     BleDeviceManager.Instance.TriggerEvent(BleEvent.DISCOVERED_PERIPHERAL, unit);
		// 
		// }, (address, name, rssi, advertisingInfo) => {
		//     /*
		//     if (advertisingInfo != null)
		//         BluetoothLEHardwareInterface.Log (string.Format ("Device: {0} RSSI: {1} Data Length: {2} Bytes: {3}", name, rssi, advertisingInfo.Length, BytesToString (advertisingInfo)));
		//     else
		//         BluetoothLEHardwareInterface.Log (string.Format ("Device: {0} RSSI: {1} advertisingInfo = null"));
		//     *
		// });
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_2 = (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)il2cpp_codegen_object_new(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E(L_2, __this, (intptr_t)((void*)BleDeviceManager_U3CStartScanU3Eb__27_0_m2246C3FD0B3742FB904E02E1A388F0D53B816D1C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_3 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__27_1_2;
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = L_2;
		G_B3_2 = NULL;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_2;
			G_B4_2 = NULL;
			goto IL_004f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* L_5 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_6 = (Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D*)il2cpp_codegen_object_new(Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_4__ctor_mF918A3211265B113C0275ECF2DAAAF2A298A3F9C(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CStartScanU3Eb__27_1_m1B77408EE858FF344ACAA8F7997C2F1473F69719_RuntimeMethod_var), NULL);
		Action_4_t2EE4CD6F8DD9CA2246E15DED8A5F3C473FF68E1D* L_7 = L_6;
		((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__27_1_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__27_1_2), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_004f:
	{
		BluetoothLEHardwareInterface_ScanForPeripheralsWithServices_mF6E23938C8C644AA0CFA87C15CBD1F11D8B9496D((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)G_B4_2, G_B4_1, G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::StopScan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StopScan_m13B99237DE2B5D8DBB987CF713D0D33C896344DB (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// stopScanTimer();
		BleDeviceManager_stopScanTimer_m2028831E7062A199D136324705F52BC6A4C71990(__this, NULL);
		// BluetoothLEHardwareInterface.StopScan ();
		BluetoothLEHardwareInterface_StopScan_m56E0C221751F793ED8426C95C37E9BDD0762998F(NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::StopAutoConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_StopAutoConnect_m7DE76A4E18E87040F1F494FF33B44AC47576EC60 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// StopScan();
		BleDeviceManager_StopScan_m13B99237DE2B5D8DBB987CF713D0D33C896344DB(__this, NULL);
		// }
		return;
	}
}
// System.Boolean BleDeviceManager::checkConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleDeviceManager_checkConnect_mC97F6C14F29C1E1A0D03A7E11A5F9FF18F9F1E88 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// if (BluetoothLEHardwareInterface.isBleEnabled () == false) {
		bool L_0;
		L_0 = BluetoothLEHardwareInterface_isBleEnabled_mF4C480ADA2C4D2C00814D9F455084BE24DBB79BB(NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// BluetoothLEHardwareInterface.showBleSettingPopup();
		BluetoothLEHardwareInterface_showBleSettingPopup_m64BE99C0193888CA4F761E36DB8CA041F6CED942(NULL);
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void BleDeviceManager::connectDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_connectDevice_m092DA8A5CD7BD167C4566FD4B88E649D1E279C7A (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onCharacteristicAction_m03D14597230CF6A0D966DDA8C44A3E9644ED930D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onConnectAction_m38E0FD79F74289145F51FB49D64F0CE136F4A9B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onDisconnectAction_m9389E4539AABCFA18953AFF2911BC056829C1DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onServiceAction_mA92937590FB5479716CC56AD222B6C537D050565_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (checkConnect () == false)
		bool L_0;
		L_0 = BleDeviceManager_checkConnect_mC97F6C14F29C1E1A0D03A7E11A5F9FF18F9F1E88(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// BluetoothLEHardwareInterface.ConnectToPeripheral (address,
		//                                                   onConnectAction,
		//                                                   onServiceAction,
		//                                                   onCharacteristicAction,
		//                                                   onDisconnectAction);
		String_t* L_1 = ___address0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_2, __this, (intptr_t)((void*)BleDeviceManager_onConnectAction_m38E0FD79F74289145F51FB49D64F0CE136F4A9B3_RuntimeMethod_var), NULL);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_3 = (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)il2cpp_codegen_object_new(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E(L_3, __this, (intptr_t)((void*)BleDeviceManager_onServiceAction_mA92937590FB5479716CC56AD222B6C537D050565_RuntimeMethod_var), NULL);
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_4 = (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7*)il2cpp_codegen_object_new(Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_3__ctor_m5F819EEFFB1D32FFE8F0BDCA168938F82AA5DAE4(L_4, __this, (intptr_t)((void*)BleDeviceManager_onCharacteristicAction_m03D14597230CF6A0D966DDA8C44A3E9644ED930D_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_5, __this, (intptr_t)((void*)BleDeviceManager_onDisconnectAction_m9389E4539AABCFA18953AFF2911BC056829C1DE8_RuntimeMethod_var), NULL);
		BluetoothLEHardwareInterface_ConnectToPeripheral_mFAF4A4FAF9DE4631AB912747B9A2EB6BA7D3EC0B(L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::onConnectAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_onConnectAction_m38E0FD79F74289145F51FB49D64F0CE136F4A9B3 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BleDeviceManager::onServiceAction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_onServiceAction_mA92937590FB5479716CC56AD222B6C537D050565 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, String_t* ___serviceUUID1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BleDeviceManager::onCharacteristicAction(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_onCharacteristicAction_m03D14597230CF6A0D966DDA8C44A3E9644ED930D (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, String_t* ___serviceUUID1, String_t* ___characteristicUUID2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onCharacteristicNotification_m65133358EBBBB3218F25C575669A79C5FF10A859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onNotificationAction_m02F43DBCC3D34012F556041FB2CB78DF2229163B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsEqual (serviceUUID, _serviceUUID))
		String_t* L_0 = ___serviceUUID1;
		String_t* L_1 = __this->____serviceUUID_7;
		bool L_2;
		L_2 = BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// if (IsEqual (characteristicUUID, _notifyUUID))
		String_t* L_3 = ___characteristicUUID2;
		String_t* L_4 = __this->____notifyUUID_9;
		bool L_5;
		L_5 = BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67(__this, L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		// _connectID = address;
		String_t* L_6 = ___address0;
		__this->____connectID_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectID_11), (void*)L_6);
		// BluetoothLEHardwareInterface.SubscribeCharacteristicWithDeviceAddress (_connectID,
		//                                                                _serviceUUID,
		//                                                                _notifyUUID,
		//                                                                onNotificationAction,
		//                                                                onCharacteristicNotification);
		String_t* L_7 = __this->____connectID_11;
		String_t* L_8 = __this->____serviceUUID_7;
		String_t* L_9 = __this->____notifyUUID_9;
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_10 = (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)il2cpp_codegen_object_new(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E(L_10, __this, (intptr_t)((void*)BleDeviceManager_onNotificationAction_m02F43DBCC3D34012F556041FB2CB78DF2229163B_RuntimeMethod_var), NULL);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_11 = (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*)il2cpp_codegen_object_new(Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_3__ctor_m579202F0D2F5439AE2C51F7E91D0C198AC5A3E38(L_11, __this, (intptr_t)((void*)BleDeviceManager_onCharacteristicNotification_m65133358EBBBB3218F25C575669A79C5FF10A859_RuntimeMethod_var), NULL);
		BluetoothLEHardwareInterface_SubscribeCharacteristicWithDeviceAddress_m2901F4ABF3852CB67100C6E4654BCCBA4AC9D3A6(L_7, L_8, L_9, L_10, L_11, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void BleDeviceManager::onDisconnectAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_onDisconnectAction_m9389E4539AABCFA18953AFF2911BC056829C1DE8 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// isConnected = false;
		__this->___isConnected_13 = (bool)0;
		// disconnectionAction(address);
		String_t* L_0 = ___address0;
		BleDeviceManager_disconnectionAction_m4A94534C73271A4A0F3954B3546A4DBA52B0C62D(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::onNotificationAction(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_onNotificationAction_m02F43DBCC3D34012F556041FB2CB78DF2229163B (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, String_t* ___notification1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* V_0 = NULL;
	{
		// isConnected = true;
		__this->___isConnected_13 = (bool)1;
		// BleDeviceUnit unit = new BleDeviceUnit ("", address);
		String_t* L_0 = ___address0;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_1 = (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD*)il2cpp_codegen_object_new(BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BleDeviceUnit__ctor_mEAFD104A733C93CCB64C21DF28F973E5759B7CCC(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_0, NULL);
		V_0 = L_1;
		// BleDeviceManager.Instance.TriggerEvent (BleEvent.CONNECT_PERIPHERAL, unit);
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_2;
		L_2 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		il2cpp_codegen_runtime_class_init_inline(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		String_t* L_3 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___CONNECT_PERIPHERAL_1;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_4 = V_0;
		NullCheck(L_2);
		BleDeviceManager_TriggerEvent_mD80F01A94AB743280D7D27E2DC22E206F75771CA(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::onCharacteristicNotification(System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_onCharacteristicNotification_m65133358EBBBB3218F25C575669A79C5FF10A859 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, String_t* ___characteristic1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes2, const RuntimeMethod* method) 
{
	{
		// if (_connectID.Equals (address))
		String_t* L_0 = __this->____connectID_11;
		String_t* L_1 = ___address0;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// getReadData(address, bytes);
		String_t* L_3 = ___address0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes2;
		BleDeviceManager_getReadData_mC7C29A57467FC13A69549415263ABAB91B32A821(__this, L_3, L_4, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void BleDeviceManager::setMacAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_setMacAddress_mD2E29FF0715A5FE9EA6CF68ACF33ED9FA9064A2B (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// _macAddress = address;
		String_t* L_0 = ___address0;
		__this->____macAddress_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____macAddress_12), (void*)L_0);
		// }
		return;
	}
}
// System.String BleDeviceManager::getMacAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleDeviceManager_getMacAddress_m44CBAE95FD51BCA2713470E24D5B37CAD8E98FBF (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// return _macAddress;
		String_t* L_0 = __this->____macAddress_12;
		return L_0;
	}
}
// System.Boolean BleDeviceManager::isConnectedBLE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// return isConnected;
		bool L_0 = __this->___isConnected_13;
		return L_0;
	}
}
// System.Void BleDeviceManager::setConnectedBLE(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_setConnectedBLE_mDC6262B1D09232298B7129359417FF7979285FF6 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, bool ___connected0, const RuntimeMethod* method) 
{
	{
		// isConnected = connected;
		bool L_0 = ___connected0;
		__this->___isConnected_13 = L_0;
		// }
		return;
	}
}
// System.Boolean BleDeviceManager::isConnectedAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleDeviceManager_isConnectedAddress_mAD558D8989F554EECB4337E02AC0F958730A126D (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// return BluetoothLEHardwareInterface.IsConnectAddress(address);
		String_t* L_0 = ___address0;
		bool L_1;
		L_1 = BluetoothLEHardwareInterface_IsConnectAddress_m0F5D0B96F3B3D0C47590EEDFE48F2478C358142B(L_0, NULL);
		return L_1;
	}
}
// System.Void BleDeviceManager::disconncecToast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_disconncecToast_mAAF6B6C2908311EC868C265C3DCB67978C5A9A2C (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85565D4F33853F61C067E3BD873BC310C824914B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ("disconncecToast");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral85565D4F33853F61C067E3BD873BC310C824914B, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::disconnectionAction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_disconnectionAction_m4A94534C73271A4A0F3954B3546A4DBA52B0C62D (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___deviceAddress0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7FB21D55734359828D6D7B61F2DB1C8D2D7BDDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ("disconnectionAction");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA7FB21D55734359828D6D7B61F2DB1C8D2D7BDDB, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::getReadData(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_getReadData_mC7C29A57467FC13A69549415263ABAB91B32A821 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___deviceAddress0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7D3D6AF37B1C8BBE732780A99EEC2FEF0C63EE18047837A6D1C89474A524FCD7_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B9B4B21259BFF1C9F98D3670B1565E6F6D0A3F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral640852548B56AB3D1EEA9CD763F5DE320842E478);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81A576843994AD49105869B8BF25B9257BA2A4F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DADB1705A1AE3616847C8D0F7EC457E83CD71F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5FA13CB6978C996C2D2CD09AE1057D914219830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC5F95B17369FE7F8C5D632A354A47A844A225BF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	uint8_t V_6 = 0x0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	{
		// int index = 0;
		V_1 = 0;
		// if( bytes[index].Equals(0x02) == false || bytes[bytes.Length-1].Equals(0x03) == false )
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes1;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), (uint8_t)2, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bytes1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bytes1;
		NullCheck(L_4);
		NullCheck(L_3);
		bool L_5;
		L_5 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1))))), (uint8_t)3, NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}

IL_0024:
	{
		// BluetoothLEHardwareInterface.Log("STX or ETX error ==");
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(_stringLiteralEC5F95B17369FE7F8C5D632A354A47A844A225BF, NULL);
		// return;
		return;
	}

IL_002f:
	{
		// string CMD = System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index],bytes[++index]});
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___bytes1;
		int32_t L_10 = V_1;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		V_1 = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___bytes1;
		int32_t L_16 = V_1;
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		V_1 = L_17;
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_19);
		NullCheck(L_6);
		String_t* L_20;
		L_20 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_14);
		V_2 = L_20;
		// temp = System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index],bytes[++index]});
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_21;
		L_21 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___bytes1;
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		V_1 = L_26;
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___bytes1;
		int32_t L_31 = V_1;
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		V_1 = L_32;
		NullCheck(L_30);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_34);
		NullCheck(L_21);
		String_t* L_35;
		L_35 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_21, L_29);
		V_0 = L_35;
		// int len = int.Parse(temp);
		String_t* L_36 = V_0;
		int32_t L_37;
		L_37 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_36, NULL);
		V_3 = L_37;
		// string PAYLOAD = "";
		V_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for( int i=0; i<len; i++ )
		V_7 = 0;
		goto IL_00b5;
	}

IL_008c:
	{
		// PAYLOAD += System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index]});
		String_t* L_38 = V_4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_39;
		L_39 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___bytes1;
		int32_t L_43 = V_1;
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		V_1 = L_44;
		NullCheck(L_42);
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_46);
		NullCheck(L_39);
		String_t* L_47;
		L_47 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_39, L_41);
		String_t* L_48;
		L_48 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, L_47, NULL);
		V_4 = L_48;
		// for( int i=0; i<len; i++ )
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00b5:
	{
		// for( int i=0; i<len; i++ )
		int32_t L_50 = V_7;
		int32_t L_51 = V_3;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_008c;
		}
	}
	{
		// string CHKSUM = System.Text.Encoding.ASCII.GetString(new byte[]{bytes[++index],bytes[++index]});
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_52;
		L_52 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = L_53;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___bytes1;
		int32_t L_56 = V_1;
		int32_t L_57 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		V_1 = L_57;
		NullCheck(L_55);
		int32_t L_58 = L_57;
		uint8_t L_59 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = L_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = ___bytes1;
		int32_t L_62 = V_1;
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 1));
		V_1 = L_63;
		NullCheck(L_61);
		int32_t L_64 = L_63;
		uint8_t L_65 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)L_65);
		NullCheck(L_52);
		String_t* L_66;
		L_66 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_52, L_60);
		V_5 = L_66;
		// byte chksumCal = 0;
		V_6 = (uint8_t)0;
		// len = bytes.Length - 4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___bytes1;
		NullCheck(L_67);
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_67)->max_length)), 4));
		// for( int i=0; i<len; i++ )
		V_8 = 0;
		goto IL_0100;
	}

IL_00ee:
	{
		// chksumCal += bytes[i+1];
		uint8_t L_68 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___bytes1;
		int32_t L_70 = V_8;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_72)));
		// for( int i=0; i<len; i++ )
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0100:
	{
		// for( int i=0; i<len; i++ )
		int32_t L_74 = V_8;
		int32_t L_75 = V_3;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00ee;
		}
	}
	{
		// temp = System.Convert.ToString(chksumCal, 16);
		uint8_t L_76 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_77;
		L_77 = Convert_ToString_m58CEFC66D90B56A11C21C7B24BB856FD797C93A2(L_76, ((int32_t)16), NULL);
		V_0 = L_77;
		// if( IsEqual(temp, CHKSUM) == false )
		String_t* L_78 = V_0;
		String_t* L_79 = V_5;
		bool L_80;
		L_80 = BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67(__this, L_78, L_79, NULL);
		if (L_80)
		{
			goto IL_0125;
		}
	}
	{
		// BluetoothLEHardwareInterface.Log("chksum error ==");
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(_stringLiteral640852548B56AB3D1EEA9CD763F5DE320842E478, NULL);
		// return;
		return;
	}

IL_0125:
	{
		// if( IsEqual(CMD, "KD") == true )
		String_t* L_81 = V_2;
		bool L_82;
		L_82 = BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67(__this, L_81, _stringLiteralE5FA13CB6978C996C2D2CD09AE1057D914219830, NULL);
		if (!L_82)
		{
			goto IL_017a;
		}
	}
	{
		// byte [] sendData = {0x02,0x41,0x44,0x30,0x30,0x39,0x34,0x03};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = L_83;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_85 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7D3D6AF37B1C8BBE732780A99EEC2FEF0C63EE18047837A6D1C89474A524FCD7_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_84, L_85, NULL);
		V_9 = L_84;
		// sendBytes(sendData);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_9;
		BleDeviceManager_sendBytes_mC19EEE0B451CF1DD7D5F405DDD53BEA3A6CBAC35(__this, L_86, NULL);
		// BleDeviceUnit unit = new BleDeviceUnit("","");
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_87 = (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD*)il2cpp_codegen_object_new(BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		BleDeviceUnit__ctor_mEAFD104A733C93CCB64C21DF28F973E5759B7CCC(L_87, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_10 = L_87;
		// unit.setData(PAYLOAD);
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_88 = V_10;
		String_t* L_89 = V_4;
		NullCheck(L_88);
		BleDeviceUnit_setData_mE52DDA659C2B752BCE72A96713766499B21AC201_inline(L_88, L_89, NULL);
		// BleDeviceManager.Instance.TriggerEvent(BleEvent.SUBSCRIBE_UPDATE_DATA, unit);
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_90;
		L_90 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		il2cpp_codegen_runtime_class_init_inline(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		String_t* L_91 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___SUBSCRIBE_UPDATE_DATA_2;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_92 = V_10;
		NullCheck(L_90);
		BleDeviceManager_TriggerEvent_mD80F01A94AB743280D7D27E2DC22E206F75771CA(L_90, L_91, L_92, NULL);
		return;
	}

IL_017a:
	{
		// else if( IsEqual(CMD, "ND") == true )
		String_t* L_93 = V_2;
		bool L_94;
		L_94 = BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67(__this, L_93, _stringLiteral81A576843994AD49105869B8BF25B9257BA2A4F9, NULL);
		if (L_94)
		{
			goto IL_01ca;
		}
	}
	{
		// else if( IsEqual(CMD, "BD") == true )
		String_t* L_95 = V_2;
		bool L_96;
		L_96 = BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67(__this, L_95, _stringLiteral3B9B4B21259BFF1C9F98D3670B1565E6F6D0A3F7, NULL);
		if (!L_96)
		{
			goto IL_01c0;
		}
	}
	{
		// byte [] sendData = {0x02,0x41,0x44,0x30,0x30,0x39,0x34,0x03};
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = L_97;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_99 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____7D3D6AF37B1C8BBE732780A99EEC2FEF0C63EE18047837A6D1C89474A524FCD7_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_98, L_99, NULL);
		V_11 = L_98;
		// sendBytes(sendData);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = V_11;
		BleDeviceManager_sendBytes_mC19EEE0B451CF1DD7D5F405DDD53BEA3A6CBAC35(__this, L_100, NULL);
		// int numBaterry = int.Parse(PAYLOAD);
		String_t* L_101 = V_4;
		int32_t L_102;
		L_102 = Int32_Parse_m59B9CC9D5E5B6C99C14251E57FB43BE6AB658767(L_101, NULL);
		// if( numBaterry <= 790 )
		return;
	}

IL_01c0:
	{
		// BluetoothLEHardwareInterface.Log("CMD else ~~~");
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(_stringLiteral9DADB1705A1AE3616847C8D0F7EC457E83CD71F8, NULL);
	}

IL_01ca:
	{
		// }
		return;
	}
}
// System.Void BleDeviceManager::setDeviceVibrate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_setDeviceVibrate_m79CD6ADA02FD4174DEA96CA736180E4C46DBC5E6 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___vibratorData0, const RuntimeMethod* method) 
{
	{
		// sendBytes(vibratorData);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___vibratorData0;
		BleDeviceManager_sendBytes_mC19EEE0B451CF1DD7D5F405DDD53BEA3A6CBAC35(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::elseif()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_elseif_m1AB15ED4C968451B2207172EA9795C024BFFAB9B (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BleDeviceManager_elseif_m1AB15ED4C968451B2207172EA9795C024BFFAB9B_RuntimeMethod_var)));
	}
}
// System.Int32 BleDeviceManager::getDataAtOffset(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BleDeviceManager_getDataAtOffset_m834B2DEEEA1AD24663CE0211039DA81AA12415B0 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, int32_t ___offset1, const RuntimeMethod* method) 
{
	{
		// return ((char)bytes[offset]);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		int32_t L_1 = ___offset1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.Void BleDeviceManager::sendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_sendData_m1D161B4D44B1C65292178BB512DC43C4542FF1FB (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// byte[] data = null;
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// if (isConnectedBLE() == false)
		bool L_0;
		L_0 = BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return;
		return;
	}

IL_000b:
	{
		// sendBytes(data);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		BleDeviceManager_sendBytes_mC19EEE0B451CF1DD7D5F405DDD53BEA3A6CBAC35(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::sendBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_sendBytes_mC19EEE0B451CF1DD7D5F405DDD53BEA3A6CBAC35 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CsendBytesU3Eb__50_0_m99D1A74B41CC9D3EB5A765B58D3F9BBF368C7E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	String_t* G_B2_5 = NULL;
	String_t* G_B2_6 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	String_t* G_B1_5 = NULL;
	String_t* G_B1_6 = NULL;
	{
		// BluetoothLEHardwareInterface.WriteCharacteristic(_connectID, _serviceUUID, _writeUUID, data, data.Length,
		//                                                   false, (characteristicUUID) =>
		//                                                   {
		//                                                       BluetoothLEHardwareInterface.Log("sendBytes Write Succeeded");
		//                                                   });
		String_t* L_0 = __this->____connectID_11;
		String_t* L_1 = __this->____serviceUUID_7;
		String_t* L_2 = __this->____writeUUID_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___data0;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_3;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = 0;
		G_B1_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		G_B1_3 = L_3;
		G_B1_4 = L_2;
		G_B1_5 = L_1;
		G_B1_6 = L_0;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = 0;
			G_B2_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
			G_B2_3 = L_3;
			G_B2_4 = L_2;
			G_B2_5 = L_1;
			G_B2_6 = L_0;
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* L_7 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CsendBytesU3Eb__50_0_m99D1A74B41CC9D3EB5A765B58D3F9BBF368C7E1D_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_9 = L_8;
		((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__50_0_3), (void*)L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
		G_B2_6 = G_B1_6;
	}

IL_0036:
	{
		BluetoothLEHardwareInterface_WriteCharacteristic_m60A9318801C147A7EC79FF0C506E411AA0B56585(G_B2_6, G_B2_5, G_B2_4, G_B2_3, G_B2_2, (bool)G_B2_1, G_B2_0, NULL);
		// }
		return;
	}
}
// System.String BleDeviceManager::BytesToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleDeviceManager_BytesToString_mBD76BD31AC63628669943931C071D3E890500013 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		// string result = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach (var b in bytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0027;
	}

IL_000c:
	{
		// foreach (var b in bytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// result += b.ToString ("X2");
		String_t* L_5 = V_0;
		String_t* L_6;
		L_6 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_3), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0027:
	{
		// foreach (var b in bytes)
		int32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000c;
		}
	}
	{
		// return result;
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.Boolean BleDeviceManager::IsEqual(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BleDeviceManager_IsEqual_m4869734BC5CC063E2006854966D1C60D6CC91C67 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___uuid10, String_t* ___uuid21, const RuntimeMethod* method) 
{
	{
		// return (uuid1.ToUpper().CompareTo(uuid2.ToUpper()) == 0);
		String_t* L_0 = ___uuid10;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_0, NULL);
		String_t* L_2 = ___uuid21;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_2, NULL);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = String_CompareTo_m32A3DFBEA443A4091053D53825DBB76E6EAFECCF(L_1, L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.String BleDeviceManager::getConnectAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleDeviceManager_getConnectAddress_m6130BF517B8B7A8410F62F062EAF1C64D425E3AC (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// return _connectID;
		String_t* L_0 = __this->____connectID_11;
		return L_0;
	}
}
// System.Void BleDeviceManager::disconnectPeripheral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_disconnectPeripheral_mA4A5BE64133B629BEAA28548CB314F7E9B100D30 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CdisconnectPeripheralU3Eb__54_0_m8EF14A1A799FE1A73639306DE45ECD65B9EE28C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// if( _connectID != null && _connectID.Length > 0 )
		String_t* L_0 = __this->____connectID_11;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_1 = __this->____connectID_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// BluetoothLEHardwareInterface.DisconnectPeripheral(_connectID, (address) => {
		//     //Debug.Log ("disconnectPeripheral callback _connectID = " + _connectID);
		// });
		String_t* L_3 = __this->____connectID_11;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__54_0_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_3;
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* L_6 = ((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_7 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3CdisconnectPeripheralU3Eb__54_0_m8EF14A1A799FE1A73639306DE45ECD65B9EE28C9_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_8 = L_7;
		((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__54_0_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9__54_0_4), (void*)L_8);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_1;
	}

IL_003b:
	{
		BluetoothLEHardwareInterface_DisconnectPeripheral_mDABC20CB04ED6DCDF3676124B63DF34D7EF692D0(G_B4_1, G_B4_0, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.String BleDeviceManager::getDeviceName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleDeviceManager_getDeviceName_mF2E63AD2E8921CDB861E3815EC2AEAACE475F2C9 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void BleDeviceManager::setAppPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_setAppPaused_m9F630CF1ECCB85C1948F4AE63006BD319C72098B (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, bool ___isPaused0, const RuntimeMethod* method) 
{
	{
		// _isPaused = isPaused;
		bool L_0 = ___isPaused0;
		__this->____isPaused_16 = L_0;
		// BluetoothLEHardwareInterface.SetAppPaused(isPaused);
		bool L_1 = ___isPaused0;
		BluetoothLEHardwareInterface_SetAppPaused_m22C8D7AF61962817BFB1AF2A035CE9094BB3939E(L_1, NULL);
		// }
		return;
	}
}
// System.Void BleDeviceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager__ctor_m7106511B7AA73C1500FADC39A3E5319126F7B7A7 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B76E22CF99B4CD92FD5AE4C10F966C92A622E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D78A53E30B76A36D95A0FE1BB1E6B0FDF8E55D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95ECA560FC8E552673136D6BA0324D67C6F7926B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFFEBC5EF3D28509729C1CE30997CD57E2E606E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _serviceUUID = "0000fff0-0000-1000-8000-00805f9b34fb";
		__this->____serviceUUID_7 = _stringLiteral95ECA560FC8E552673136D6BA0324D67C6F7926B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____serviceUUID_7), (void*)_stringLiteral95ECA560FC8E552673136D6BA0324D67C6F7926B);
		// private string _writeUUID = "0000fff2-0000-1000-8000-00805f9b34fb";
		__this->____writeUUID_8 = _stringLiteral7D78A53E30B76A36D95A0FE1BB1E6B0FDF8E55D3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____writeUUID_8), (void*)_stringLiteral7D78A53E30B76A36D95A0FE1BB1E6B0FDF8E55D3);
		// private string _notifyUUID = "0000fff1-0000-1000-8000-00805f9b34fb";
		__this->____notifyUUID_9 = _stringLiteral02B76E22CF99B4CD92FD5AE4C10F966C92A622E7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____notifyUUID_9), (void*)_stringLiteral02B76E22CF99B4CD92FD5AE4C10F966C92A622E7);
		// private string _BT_NAME_PREFIX = "ARGO";
		__this->____BT_NAME_PREFIX_10 = _stringLiteralAFFEBC5EF3D28509729C1CE30997CD57E2E606E5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____BT_NAME_PREFIX_10), (void*)_stringLiteralAFFEBC5EF3D28509729C1CE30997CD57E2E606E5);
		// private string _connectID = "";
		__this->____connectID_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectID_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string _macAddress = "";
		__this->____macAddress_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____macAddress_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BleDeviceManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager__cctor_mEDD688E4F17A4CE35D141B765890EBDF33130C34 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static object _lock = new object ();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____lock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->____lock_5), (void*)L_0);
		// private static bool applicationIsQuitting = false;
		((BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_StaticFields*)il2cpp_codegen_static_fields_for(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var))->___applicationIsQuitting_6 = (bool)0;
		return;
	}
}
// System.Void BleDeviceManager::<initialize>b__18_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_U3CinitializeU3Eb__18_0_mEB62F34D18D3377F781E32CD4A1E4357764EB435 (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___connectingAddress0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onCharacteristicAction_m03D14597230CF6A0D966DDA8C44A3E9644ED930D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onCharacteristicNotification_m65133358EBBBB3218F25C575669A79C5FF10A859_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onConnectAction_m38E0FD79F74289145F51FB49D64F0CE136F4A9B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onDisconnectAction_m9389E4539AABCFA18953AFF2911BC056829C1DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onNotificationAction_m02F43DBCC3D34012F556041FB2CB78DF2229163B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_onServiceAction_mA92937590FB5479716CC56AD222B6C537D050565_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(connectingAddress.Length > 0) {
		String_t* L_0 = ___connectingAddress0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		// BluetoothLEHardwareInterface.ConnectToPeripheralReg(onConnectAction,
		//                                                     onServiceAction,
		//                                                     onCharacteristicAction,
		//                                                     onDisconnectAction);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_2, __this, (intptr_t)((void*)BleDeviceManager_onConnectAction_m38E0FD79F74289145F51FB49D64F0CE136F4A9B3_RuntimeMethod_var), NULL);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_3 = (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)il2cpp_codegen_object_new(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E(L_3, __this, (intptr_t)((void*)BleDeviceManager_onServiceAction_mA92937590FB5479716CC56AD222B6C537D050565_RuntimeMethod_var), NULL);
		Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7* L_4 = (Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7*)il2cpp_codegen_object_new(Action_3_t9B83CE1387ECB52C4E519D213AC210F7946330F7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_3__ctor_m5F819EEFFB1D32FFE8F0BDCA168938F82AA5DAE4(L_4, __this, (intptr_t)((void*)BleDeviceManager_onCharacteristicAction_m03D14597230CF6A0D966DDA8C44A3E9644ED930D_RuntimeMethod_var), NULL);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_5 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_5, __this, (intptr_t)((void*)BleDeviceManager_onDisconnectAction_m9389E4539AABCFA18953AFF2911BC056829C1DE8_RuntimeMethod_var), NULL);
		BluetoothLEHardwareInterface_ConnectToPeripheralReg_mAF552F1B267BEBC2F18A577FD32694F8770F48C7(L_2, L_3, L_4, L_5, NULL);
		// BluetoothLEHardwareInterface.SubscribeCharacteristicWithDeviceAddressReg(onNotificationAction,
		//                                                                        onCharacteristicNotification);
		Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D* L_6 = (Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D*)il2cpp_codegen_object_new(Action_2_t3EDD987DFCD31953576008A0D7D4F44D8C984B1D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_2__ctor_m12237C67318618EE9FB04CCF4C4EFAC833EDC79E(L_6, __this, (intptr_t)((void*)BleDeviceManager_onNotificationAction_m02F43DBCC3D34012F556041FB2CB78DF2229163B_RuntimeMethod_var), NULL);
		Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB* L_7 = (Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB*)il2cpp_codegen_object_new(Action_3_t5A0962ABAB9B3F862F898284CDA0D4B7762D61DB_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_3__ctor_m579202F0D2F5439AE2C51F7E91D0C198AC5A3E38(L_7, __this, (intptr_t)((void*)BleDeviceManager_onCharacteristicNotification_m65133358EBBBB3218F25C575669A79C5FF10A859_RuntimeMethod_var), NULL);
		BluetoothLEHardwareInterface_SubscribeCharacteristicWithDeviceAddressReg_m7E25D8EA3F33ED5F00A3319D81ADDDB10ADD8CCB(L_6, L_7, NULL);
		// _connectID = connectingAddress;
		String_t* L_8 = ___connectingAddress0;
		__this->____connectID_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectID_11), (void*)L_8);
		// if(isConnectedAddress(connectingAddress) == true) {
		String_t* L_9 = ___connectingAddress0;
		bool L_10;
		L_10 = BleDeviceManager_isConnectedAddress_mAD558D8989F554EECB4337E02AC0F958730A126D(__this, L_9, NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		// isConnected = true;
		__this->___isConnected_13 = (bool)1;
		return;
	}

IL_0073:
	{
		// connectDevice(connectingAddress);
		String_t* L_11 = ___connectingAddress0;
		BleDeviceManager_connectDevice_m092DA8A5CD7BD167C4566FD4B88E649D1E279C7A(__this, L_11, NULL);
	}

IL_007a:
	{
		// }, (error) => {
		return;
	}
}
// System.Void BleDeviceManager::<StartScan>b__27_0(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceManager_U3CStartScanU3Eb__27_0_m2246C3FD0B3742FB904E02E1A388F0D53B816D1C (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, String_t* ___address0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1799761D8E726F70902A0DA06594F45D555603FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mED67D114BF787A7379315A379F1C5861D80E13B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0408F451812450A7AB52A3F3BDE2D24ADF0FF6EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9201F18BA0C84661E2C0B13B2EFC6D4C231B753);
		s_Il2CppMethodInitialized = true;
	}
	BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Debug.Log("name   : "+name);
		String_t* L_0 = ___name1;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD9201F18BA0C84661E2C0B13B2EFC6D4C231B753, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		// if( !name.Contains(_BT_NAME_PREFIX) ) return;
		String_t* L_2 = ___name1;
		String_t* L_3 = __this->____BT_NAME_PREFIX_10;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		// if( !name.Contains(_BT_NAME_PREFIX) ) return;
		return;
	}

IL_001f:
	{
		// for(int i = 0; i < scanPeripheralList.Count; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_0023:
	{
		// if(scanPeripheralList[i].getAddress().Equals(address))
		List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* L_5 = __this->___scanPeripheralList_18;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_7;
		L_7 = List_1_get_Item_m0408F451812450A7AB52A3F3BDE2D24ADF0FF6EB(L_5, L_6, List_1_get_Item_m0408F451812450A7AB52A3F3BDE2D24ADF0FF6EB_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = BleDeviceUnit_getAddress_m1041B7681D92B6E42B5436514F9BB6BC81AFF4F1_inline(L_7, NULL);
		String_t* L_9 = ___address0;
		NullCheck(L_8);
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// return;
		return;
	}

IL_003d:
	{
		// for(int i = 0; i < scanPeripheralList.Count; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0041:
	{
		// for(int i = 0; i < scanPeripheralList.Count; i++)
		int32_t L_12 = V_1;
		List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* L_13 = __this->___scanPeripheralList_18;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mED67D114BF787A7379315A379F1C5861D80E13B1_inline(L_13, List_1_get_Count_mED67D114BF787A7379315A379F1C5861D80E13B1_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0023;
		}
	}
	{
		// BleDeviceUnit unit = new BleDeviceUnit(name, address);
		String_t* L_15 = ___name1;
		String_t* L_16 = ___address0;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_17 = (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD*)il2cpp_codegen_object_new(BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		BleDeviceUnit__ctor_mEAFD104A733C93CCB64C21DF28F973E5759B7CCC(L_17, L_15, L_16, NULL);
		V_0 = L_17;
		// scanPeripheralList.Add(unit);
		List_1_tDB0438FA8FD9FC1EDCF76641BDED99DBD5C6DB13* L_18 = __this->___scanPeripheralList_18;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_19 = V_0;
		NullCheck(L_18);
		List_1_Add_m1799761D8E726F70902A0DA06594F45D555603FE_inline(L_18, L_19, List_1_Add_m1799761D8E726F70902A0DA06594F45D555603FE_RuntimeMethod_var);
		// BleDeviceManager.Instance.TriggerEvent(BleEvent.DISCOVERED_PERIPHERAL, unit);
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_20;
		L_20 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		il2cpp_codegen_runtime_class_init_inline(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		String_t* L_21 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___DISCOVERED_PERIPHERAL_0;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_22 = V_0;
		NullCheck(L_20);
		BleDeviceManager_TriggerEvent_mD80F01A94AB743280D7D27E2DC22E206F75771CA(L_20, L_21, L_22, NULL);
		// }, (address, name, rssi, advertisingInfo) => {
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
// System.Void BleDeviceManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m75835002D18680B912A96B0F049C4AF26C4E75C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* L_0 = (U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B*)il2cpp_codegen_object_new(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mC556DB5056FF4255B0C7B2C201B1B477B18C9E71(L_0, NULL);
		((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void BleDeviceManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mC556DB5056FF4255B0C7B2C201B1B477B18C9E71 (U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BleDeviceManager/<>c::<initialize>b__18_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CinitializeU3Eb__18_1_m9169B6B54BC0A9431CA25EA97F0D2194B3513714 (U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82EA3FFBCF545EEFDC5FE816E7879B5F61055C91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BluetoothLEHardwareInterface.Log("Center Mode Error : " + error);
		String_t* L_0 = ___error0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral82EA3FFBCF545EEFDC5FE816E7879B5F61055C91, L_0, NULL);
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(L_1, NULL);
		// });
		return;
	}
}
// System.Void BleDeviceManager/<>c::<StartScan>b__27_1(System.String,System.String,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartScanU3Eb__27_1_m1B77408EE858FF344ACAA8F7997C2F1473F69719 (U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* __this, String_t* ___address0, String_t* ___name1, int32_t ___rssi2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___advertisingInfo3, const RuntimeMethod* method) 
{
	{
		// });
		return;
	}
}
// System.Void BleDeviceManager/<>c::<sendBytes>b__50_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CsendBytesU3Eb__50_0_m99D1A74B41CC9D3EB5A765B58D3F9BBF368C7E1D (U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* __this, String_t* ___characteristicUUID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36DF2584FDB81EFABF601D6A8D159844B74F41D5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BluetoothLEHardwareInterface.Log("sendBytes Write Succeeded");
		BluetoothLEHardwareInterface_Log_mE8BD6E73FB65405834DBC8CADB78FD01B1C67385(_stringLiteral36DF2584FDB81EFABF601D6A8D159844B74F41D5, NULL);
		// });
		return;
	}
}
// System.Void BleDeviceManager/<>c::<disconnectPeripheral>b__54_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CdisconnectPeripheralU3Eb__54_0_m8EF14A1A799FE1A73639306DE45ECD65B9EE28C9 (U3CU3Ec_t3001DBE6CDCDC04902D01C10DCF6EAFC5C69DC4B* __this, String_t* ___address0, const RuntimeMethod* method) 
{
	{
		// });
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
// System.Void BleDeviceManager/<processScanTimer>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprocessScanTimerU3Ed__26__ctor_m6E73F31A32DFE2F464BFB4C1FDCD1BD5A6D01BB0 (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BleDeviceManager/<processScanTimer>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprocessScanTimerU3Ed__26_System_IDisposable_Dispose_m4B928CF85A6D8EC2740342382E51B0E46FFAA812 (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BleDeviceManager/<processScanTimer>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CprocessScanTimerU3Ed__26_MoveNext_m4D04DD420F85822C75172E98CA31A490AE25E406 (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(10);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StopScan();
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_5 = V_1;
		NullCheck(L_5);
		BleDeviceManager_StopScan_m13B99237DE2B5D8DBB987CF713D0D33C896344DB(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object BleDeviceManager/<processScanTimer>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CprocessScanTimerU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF71318D14E2ACABC116ED8E52171682CB57E333D (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BleDeviceManager/<processScanTimer>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CprocessScanTimerU3Ed__26_System_Collections_IEnumerator_Reset_mD0D569FEC037B1FD9BB24E8F23385BAEC886EF44 (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CprocessScanTimerU3Ed__26_System_Collections_IEnumerator_Reset_mD0D569FEC037B1FD9BB24E8F23385BAEC886EF44_RuntimeMethod_var)));
	}
}
// System.Object BleDeviceManager/<processScanTimer>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CprocessScanTimerU3Ed__26_System_Collections_IEnumerator_get_Current_m365C206C7AAAD605B46FE12CE56A46725ACF6B7A (U3CprocessScanTimerU3Ed__26_t438A38BD1650D0514AB2276E180BFDB0638E40D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void BleDeviceUnit::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceUnit__ctor_mEAFD104A733C93CCB64C21DF28F973E5759B7CCC (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, String_t* ___name0, String_t* ___address1, const RuntimeMethod* method) 
{
	{
		// public BleDeviceUnit( string name, string address )
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _name = name;
		String_t* L_0 = ___name0;
		__this->____name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_0);
		// _address = address;
		String_t* L_1 = ___address1;
		__this->____address_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____address_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void BleDeviceUnit::setName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceUnit_setName_m7FA49EEE0D9277DCAE11680F2940C4427CB8990D (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// _name = value;
		String_t* L_0 = ___value0;
		__this->____name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____name_0), (void*)L_0);
		// }
		return;
	}
}
// System.String BleDeviceUnit::getName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getName_m84BD5F79A84973DBCB44E95B1EABEF80554A1329 (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) 
{
	{
		// return _name;
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
// System.Void BleDeviceUnit::setAddress(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceUnit_setAddress_m9F5DFF03AAF9DED514DF6C73051DD353E7359F2E (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// _address = value;
		String_t* L_0 = ___value0;
		__this->____address_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____address_1), (void*)L_0);
		// }
		return;
	}
}
// System.String BleDeviceUnit::getAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getAddress_m1041B7681D92B6E42B5436514F9BB6BC81AFF4F1 (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) 
{
	{
		// return _address;
		String_t* L_0 = __this->____address_1;
		return L_0;
	}
}
// System.Void BleDeviceUnit::setData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleDeviceUnit_setData_mE52DDA659C2B752BCE72A96713766499B21AC201 (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		String_t* L_0 = ___value0;
		__this->____data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_2), (void*)L_0);
		// }
		return;
	}
}
// System.String BleDeviceUnit::getData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getData_mA4A12391750E2D982B466F9286D2D5389DF27FBA (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		String_t* L_0 = __this->____data_2;
		return L_0;
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
// System.Void BleEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleEvent__ctor_m2DFE77F6BD2E1B511B485AC15112D53532AE804B (BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BleEvent::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BleEvent__cctor_m2CE7E5C1F8603B58990C65566475A573D15DC4E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E74B8A8B275DAA0B86E930C82B3B0AF77415068);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B72ADA977AA28C492C7AA52F38E74E6DD1EA6E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD406550C634FE03AB26677BEF029FA8F7B0347C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string DISCOVERED_PERIPHERAL = "DISCOVERED_PERIPHERAL";
		((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___DISCOVERED_PERIPHERAL_0 = _stringLiteral5B72ADA977AA28C492C7AA52F38E74E6DD1EA6E0;
		Il2CppCodeGenWriteBarrier((void**)(&((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___DISCOVERED_PERIPHERAL_0), (void*)_stringLiteral5B72ADA977AA28C492C7AA52F38E74E6DD1EA6E0);
		// public static string CONNECT_PERIPHERAL = "CONNECT_PERIPHERAL";
		((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___CONNECT_PERIPHERAL_1 = _stringLiteral2E74B8A8B275DAA0B86E930C82B3B0AF77415068;
		Il2CppCodeGenWriteBarrier((void**)(&((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___CONNECT_PERIPHERAL_1), (void*)_stringLiteral2E74B8A8B275DAA0B86E930C82B3B0AF77415068);
		// public static string SUBSCRIBE_UPDATE_DATA = "SUBSCRIBE_UPDATE_DATA";
		((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___SUBSCRIBE_UPDATE_DATA_2 = _stringLiteralD406550C634FE03AB26677BEF029FA8F7B0347C9;
		Il2CppCodeGenWriteBarrier((void**)(&((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___SUBSCRIBE_UPDATE_DATA_2), (void*)_stringLiteralD406550C634FE03AB26677BEF029FA8F7B0347C9);
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
// System.Void BluetoothConnection::BluetoothDeviceConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_BluetoothDeviceConnect_m618A8BAE459E637EED1FEC59379E3E7FA2D54C59 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( BleDeviceManager.Instance.isConnectedBLE() == true )
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0;
		L_0 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// BleDeviceManager.Instance.disconnectPeripheral();
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_2;
		L_2 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_2);
		BleDeviceManager_disconnectPeripheral_mA4A5BE64133B629BEAA28548CB314F7E9B100D30(L_2, NULL);
	}

IL_0016:
	{
		// BleDeviceManager.Instance.connectDevice(unit.getAddress());
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_3;
		L_3 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_4 = __this->___unit_6;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BleDeviceUnit_getAddress_m1041B7681D92B6E42B5436514F9BB6BC81AFF4F1_inline(L_4, NULL);
		NullCheck(L_3);
		BleDeviceManager_connectDevice_m092DA8A5CD7BD167C4566FD4B88E649D1E279C7A(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_Connect_mB93597286B89E94F09680BA36391BDAD8764C823 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	{
		// BluetoothDeviceConnect(0);
		BluetoothConnection_BluetoothDeviceConnect_m618A8BAE459E637EED1FEC59379E3E7FA2D54C59(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_OnEnable_m32E3A867E108F789394163FAC33E17BB3ABD8D9E (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_m82D427509929D2F21494141B9BE5D3E3CE96A22A((-1), NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::StartMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_StartMain_m67E1D0F4E011FA16A8C2149B5001DE8DD0199D9C (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30C077F51F99A5536227B9F69873BB312667F624);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF846E291795717DFEE1288DAE5FEE1CD3B47814);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (startbtn == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___startbtn_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// startbtn = GameObject.Find("Start_Button");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral30C077F51F99A5536227B9F69873BB312667F624, NULL);
		__this->___startbtn_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___startbtn_8), (void*)L_2);
		// Player = GameObject.Find("Player_2017");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralDF846E291795717DFEE1288DAE5FEE1CD3B47814, NULL);
		__this->___Player_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Player_7), (void*)L_3);
	}

IL_002e:
	{
		// if (isconnection == false)
		bool L_4 = __this->___isconnection_9;
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// startbtn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___startbtn_8;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void BluetoothConnection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_Start_mE108A56B35C30315A1912116CF0F1A55C3F0E6D6 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothConnection_onConnectPeripheral_m39CB6D9C54F5B74753264F756758BDF1FB7EEA66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothConnection_onDiscoveredPeripheral_m3C9C48C8CFDAAEAE945BEA10F926CE8001CA7A3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothConnection_onSubscribeUpdateData_m1A50861E2859E2E7D06EB2FF1F765ED72E4B19A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// goItemList = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___goItemList_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___goItemList_5), (void*)L_0);
		// BleDeviceManager.Instance.StartListening (BleEvent.CONNECT_PERIPHERAL, onConnectPeripheral);
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_1;
		L_1 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		il2cpp_codegen_runtime_class_init_inline(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		String_t* L_2 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___CONNECT_PERIPHERAL_1;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_3 = (UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*)il2cpp_codegen_object_new(UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction_1__ctor_m76941321DA6F6419695A1D92BEB38D692F7CE36E(L_3, __this, (intptr_t)((void*)BluetoothConnection_onConnectPeripheral_m39CB6D9C54F5B74753264F756758BDF1FB7EEA66_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		BleDeviceManager_StartListening_mC50D93406F9A8E5D70174B3258A910174949BDAA(L_1, L_2, L_3, NULL);
		// BleDeviceManager.Instance.StartListening (BleEvent.DISCOVERED_PERIPHERAL, onDiscoveredPeripheral);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_4;
		L_4 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		String_t* L_5 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___DISCOVERED_PERIPHERAL_0;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_6 = (UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*)il2cpp_codegen_object_new(UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction_1__ctor_m76941321DA6F6419695A1D92BEB38D692F7CE36E(L_6, __this, (intptr_t)((void*)BluetoothConnection_onDiscoveredPeripheral_m3C9C48C8CFDAAEAE945BEA10F926CE8001CA7A3B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		BleDeviceManager_StartListening_mC50D93406F9A8E5D70174B3258A910174949BDAA(L_4, L_5, L_6, NULL);
		// BleDeviceManager.Instance.StartListening (BleEvent.SUBSCRIBE_UPDATE_DATA, onSubscribeUpdateData);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_7;
		L_7 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		String_t* L_8 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___SUBSCRIBE_UPDATE_DATA_2;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_9 = (UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*)il2cpp_codegen_object_new(UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction_1__ctor_m76941321DA6F6419695A1D92BEB38D692F7CE36E(L_9, __this, (intptr_t)((void*)BluetoothConnection_onSubscribeUpdateData_m1A50861E2859E2E7D06EB2FF1F765ED72E4B19A2_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		BleDeviceManager_StartListening_mC50D93406F9A8E5D70174B3258A910174949BDAA(L_7, L_8, L_9, NULL);
		// BleDeviceManager.Instance.disconnectPeripheral();
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_10;
		L_10 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_10);
		BleDeviceManager_disconnectPeripheral_mA4A5BE64133B629BEAA28548CB314F7E9B100D30(L_10, NULL);
		// BleDeviceManager.Instance.StartScan();
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_11;
		L_11 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_11);
		BleDeviceManager_StartScan_mB24E3F0A4AF561929F4299E84B41A2EFF4CE0457(L_11, NULL);
		// StartCoroutine(CheckConnect());
		RuntimeObject* L_12;
		L_12 = BluetoothConnection_CheckConnect_m79C31B5752FBFA08A2F4CFD86F93039FD88D8756(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BluetoothConnection::CheckConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BluetoothConnection_CheckConnect_m79C31B5752FBFA08A2F4CFD86F93039FD88D8756 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* L_0 = (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510*)il2cpp_codegen_object_new(U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckConnectU3Ed__13__ctor_m188886AB3DEB4E5C18CA3A400E6BEAB2A4FF3A2D(L_0, 0, NULL);
		U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BluetoothConnection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_Update_mAFEC7672189B18EF293DD01FD1254860980D841F (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}

IL_0032:
	{
		// StartMain();
		BluetoothConnection_StartMain_m67E1D0F4E011FA16A8C2149B5001DE8DD0199D9C(__this, NULL);
	}

IL_0038:
	{
		// keymap();
		BluetoothConnection_keymap_m8D354594364709C8EAA9952D4C7DFDA9745338E8(__this, NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::ClearDeviceList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_ClearDeviceList_mCD0987B7A693B6758133FAC72B034CAC0B6213D5 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if( goItemList.Count > 0 )
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___goItemList_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// for( int i = 0; i<goItemList.Count; i++ )
		V_0 = 0;
		goto IL_0027;
	}

IL_0012:
	{
		// DestroyImmediate(goItemList[0]);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___goItemList_5;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
		// for( int i = 0; i<goItemList.Count; i++ )
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0027:
	{
		// for( int i = 0; i<goItemList.Count; i++ )
		int32_t L_5 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___goItemList_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0012;
		}
	}
	{
		// goItemList.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___goItemList_5;
		NullCheck(L_8);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_8, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void BluetoothConnection::CloseBluetoothConnectionPopup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_CloseBluetoothConnectionPopup_m4E54E0F75D8161423435D7E0DAFA237DB63FEE48 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BleDeviceManager.Instance.StopScan();
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0;
		L_0 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_0);
		BleDeviceManager_StopScan_m13B99237DE2B5D8DBB987CF713D0D33C896344DB(L_0, NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::onDiscoveredPeripheral(BleDeviceUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_onDiscoveredPeripheral_m3C9C48C8CFDAAEAE945BEA10F926CE8001CA7A3B (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A12EC67A42A6708B46289D2E79787460E3C85B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("====3");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7A12EC67A42A6708B46289D2E79787460E3C85B5, NULL);
		// this.unit = unit;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_0 = ___unit0;
		__this->___unit_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unit_6), (void*)L_0);
		// Connect();
		BluetoothConnection_Connect_mB93597286B89E94F09680BA36391BDAD8764C823(__this, NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::onConnectPeripheral(BleDeviceUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_onConnectPeripheral_m39CB6D9C54F5B74753264F756758BDF1FB7EEA66 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___unit0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BluetoothConnection::onReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_onReset_m0E65EFF3B1A83947F2A01ED08611F8D8A691611F (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BleDeviceManager.Instance.StopScan();
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0;
		L_0 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_0);
		BleDeviceManager_StopScan_m13B99237DE2B5D8DBB987CF713D0D33C896344DB(L_0, NULL);
		// BleDeviceManager.Instance.disconnectPeripheral();
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_1;
		L_1 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_1);
		BleDeviceManager_disconnectPeripheral_mA4A5BE64133B629BEAA28548CB314F7E9B100D30(L_1, NULL);
		// BleDeviceManager.Instance.StartScan();
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_2;
		L_2 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_2);
		BleDeviceManager_StartScan_mB24E3F0A4AF561929F4299E84B41A2EFF4CE0457(L_2, NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::firecheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_firecheck_m4CFB5B4C43E36699BB81364A89FDE09DF8A20FCA (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}

IL_0032:
	{
		// firestart = false;
		__this->___firestart_11 = (bool)0;
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void BluetoothConnection::onSubscribeUpdateData(BleDeviceUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_onSubscribeUpdateData_m1A50861E2859E2E7D06EB2FF1F765ED72E4B19A2 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___unit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral307189C0AE4923C4E929545D0964CD900DC5A8E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C165894B2900048144F5DEF682937FE73CA541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAECE0660EE6170E556A79E1F2D82307FBFA80766);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB13F13C0F0FAB334986A9A782E604519ADD9848B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDB9A7470230DD6F96C29EBFE8794B4E81FB3437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// string keyData = unit.getData();
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_0 = ___unit0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = BleDeviceUnit_getData_mA4A12391750E2D982B466F9286D2D5389DF27FBA_inline(L_0, NULL);
		V_0 = L_1;
		// lbLog.text = ""+keyData + "=======keyData : "+keyData.Length;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___lbLog_4;
		String_t* L_3 = V_0;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_3 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, _stringLiteralAECE0660EE6170E556A79E1F2D82307FBFA80766, L_6, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_7);
		// if (keyData.Length == 0 && firestart==true)
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0041;
		}
	}
	{
		bool L_10 = __this->___firestart_11;
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		// firecheck();
		BluetoothConnection_firecheck_m4CFB5B4C43E36699BB81364A89FDE09DF8A20FCA(__this, NULL);
	}

IL_0041:
	{
		// int len = keyData.Length;
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		V_1 = L_12;
		// for( int i=0; i<len; i++)
		V_4 = 0;
		goto IL_026a;
	}

IL_0050:
	{
		// subString = keyData.Substring(i, i+1);
		String_t* L_13 = V_0;
		int32_t L_14 = V_4;
		int32_t L_15 = V_4;
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_13, L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		V_2 = L_16;
		// lbLog.text = "===    "+firecount+"=====  "+subString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___lbLog_4;
		int32_t* L_18 = (&__this->___firecount_10);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		String_t* L_20 = V_2;
		String_t* L_21;
		L_21 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteralB13F13C0F0FAB334986A9A782E604519ADD9848B, L_19, _stringLiteralEDB9A7470230DD6F96C29EBFE8794B4E81FB3437, L_20, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_21);
		// if (subString.Equals("P"))
		String_t* L_22 = V_2;
		NullCheck(L_22);
		bool L_23;
		L_23 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_22, _stringLiteralFCA440D9A4F7E2D10772A726D6FB427BAE128D34, NULL);
		if (!L_23)
		{
			goto IL_00cf;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_24;
		L_24 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_24;
		String_t* L_25;
		L_25 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_26)
		{
			goto IL_0264;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_27;
		L_27 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_27;
		String_t* L_28;
		L_28 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		if (!L_29)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_0264;
	}

IL_00cf:
	{
		// else if (subString.Equals("O"))
		String_t* L_30 = V_2;
		NullCheck(L_30);
		bool L_31;
		L_31 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_30, _stringLiteral99C165894B2900048144F5DEF682937FE73CA541, NULL);
		if (!L_31)
		{
			goto IL_011b;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_32;
		L_32 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_32;
		String_t* L_33;
		L_33 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_34;
		L_34 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_33, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_34)
		{
			goto IL_0264;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_35;
		L_35 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_35;
		String_t* L_36;
		L_36 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_37;
		L_37 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_36, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		if (!L_37)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_0264;
	}

IL_011b:
	{
		// else if (subString.Equals("R"))
		String_t* L_38 = V_2;
		NullCheck(L_38);
		bool L_39;
		L_39 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_38, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, NULL);
		if (L_39)
		{
			goto IL_0264;
		}
	}
	{
		// else if (subString.Equals("Q"))
		String_t* L_40 = V_2;
		NullCheck(L_40);
		bool L_41;
		L_41 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_40, _stringLiteral49A7EA21ECB328D154FA2262BB41626D795F4D90, NULL);
		if (L_41)
		{
			goto IL_0264;
		}
	}
	{
		// else if (subString.Equals(","))
		String_t* L_42 = V_2;
		NullCheck(L_42);
		bool L_43;
		L_43 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_42, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		if (L_43)
		{
			goto IL_0264;
		}
	}
	{
		// else if( subString.Equals("f") )
		String_t* L_44 = V_2;
		NullCheck(L_44);
		bool L_45;
		L_45 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_44, _stringLiteral2C945D246C2B7897F000E1C591A686EB9EF010F0, NULL);
		if (L_45)
		{
			goto IL_0264;
		}
	}
	{
		// else if (subString.Equals("e"))
		String_t* L_46 = V_2;
		NullCheck(L_46);
		bool L_47;
		L_47 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_46, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, NULL);
		if (!L_47)
		{
			goto IL_01e1;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "tutorial")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_48;
		L_48 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_48;
		String_t* L_49;
		L_49 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_50;
		L_50 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_49, _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7, NULL);
		if (L_50)
		{
			goto IL_0264;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "StageSelect")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_51;
		L_51 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_51;
		String_t* L_52;
		L_52 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_53;
		L_53 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_52, _stringLiteral307189C0AE4923C4E929545D0964CD900DC5A8E9, NULL);
		if (L_53)
		{
			goto IL_0264;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_54;
		L_54 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_54;
		String_t* L_55;
		L_55 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_56;
		L_56 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_55, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_56)
		{
			goto IL_0264;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_57;
		L_57 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_57;
		String_t* L_58;
		L_58 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_59;
		L_59 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_58, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		if (!L_59)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_0264;
	}

IL_01e1:
	{
		// else if( subString.Equals("?") )
		String_t* L_60 = V_2;
		NullCheck(L_60);
		bool L_61;
		L_61 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_60, _stringLiteral738F291E53E97C08DAE378C71EF70A60E31AE900, NULL);
		if (!L_61)
		{
			goto IL_0224;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_62;
		L_62 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_62;
		String_t* L_63;
		L_63 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_64;
		L_64 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_63, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_64)
		{
			goto IL_0264;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_65;
		L_65 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_65;
		String_t* L_66;
		L_66 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_67;
		L_67 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_66, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		if (!L_67)
		{
			goto IL_0264;
		}
	}
	{
		goto IL_0264;
	}

IL_0224:
	{
		// else if (subString.Equals(")"))
		String_t* L_68 = V_2;
		NullCheck(L_68);
		bool L_69;
		L_69 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_68, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		if (!L_69)
		{
			goto IL_0264;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_70;
		L_70 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_70;
		String_t* L_71;
		L_71 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_72;
		L_72 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_71, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_72)
		{
			goto IL_0264;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_73;
		L_73 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_5 = L_73;
		String_t* L_74;
		L_74 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_5), NULL);
		bool L_75;
		L_75 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_74, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
	}

IL_0264:
	{
		// for( int i=0; i<len; i++)
		int32_t L_76 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_026a:
	{
		// for( int i=0; i<len; i++)
		int32_t L_77 = V_4;
		int32_t L_78 = V_1;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_0050;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BluetoothConnection::keymap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_keymap_m8D354594364709C8EAA9952D4C7DFDA9745338E8 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral307189C0AE4923C4E929545D0964CD900DC5A8E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D28CD27D381854A46AACF7986388318B713B139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKeyDown(KeyCode.P))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)112), NULL);
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "tutorial")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7, NULL);
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_6)
		{
			goto IL_024e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_7;
		L_7 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		return;
	}

IL_0056:
	{
		// else if (Input.GetKeyDown(KeyCode.O))
		bool L_10;
		L_10 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)111), NULL);
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "tutorial")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_11;
		L_11 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_11;
		String_t* L_12;
		L_12 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7, NULL);
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_14;
		L_14 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_16;
		L_16 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_15, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_16)
		{
			goto IL_024e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_17;
		L_17 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_17;
		String_t* L_18;
		L_18 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		return;
	}

IL_00ac:
	{
		// else if (Input.GetKeyDown(KeyCode.A))
		bool L_20;
		L_20 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)97), NULL);
		if (!L_20)
		{
			goto IL_0141;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "0.Intro")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_21;
		L_21 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_21;
		String_t* L_22;
		L_22 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_23;
		L_23 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_22, _stringLiteral4D28CD27D381854A46AACF7986388318B713B139, NULL);
		if (L_23)
		{
			goto IL_024e;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "StageSelect")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_24;
		L_24 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_24;
		String_t* L_25;
		L_25 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_26;
		L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral307189C0AE4923C4E929545D0964CD900DC5A8E9, NULL);
		if (L_26)
		{
			goto IL_024e;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "tutorial")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_27;
		L_27 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_27;
		String_t* L_28;
		L_28 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_29;
		L_29 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7, NULL);
		if (L_29)
		{
			goto IL_024e;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_30;
		L_30 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_30;
		String_t* L_31;
		L_31 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_32)
		{
			goto IL_024e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_33;
		L_33 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_33;
		String_t* L_34;
		L_34 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_35;
		L_35 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_34, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		return;
	}

IL_0141:
	{
		// else if( Input.GetKeyDown(KeyCode.B) )
		bool L_36;
		L_36 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)98), NULL);
		if (!L_36)
		{
			goto IL_019b;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_37;
		L_37 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_37;
		String_t* L_38;
		L_38 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_39;
		L_39 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_38, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_39)
		{
			goto IL_024e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_40;
		L_40 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_40;
		String_t* L_41;
		L_41 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_42;
		L_42 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_41, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		if (L_42)
		{
			goto IL_024e;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "tutorial")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_43;
		L_43 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_43;
		String_t* L_44;
		L_44 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_45;
		L_45 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_44, _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7, NULL);
		return;
	}

IL_019b:
	{
		// else if (Input.GetKeyDown(KeyCode.C))
		bool L_46;
		L_46 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)99), NULL);
		if (!L_46)
		{
			goto IL_020b;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "tutorial")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_47;
		L_47 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_47;
		String_t* L_48;
		L_48 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_49;
		L_49 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_48, _stringLiteralAB27F5B30BFE848051EFF7908053D018688899C7, NULL);
		if (L_49)
		{
			goto IL_024e;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "StageSelect")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_50;
		L_50 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_50;
		String_t* L_51;
		L_51 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_52;
		L_52 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_51, _stringLiteral307189C0AE4923C4E929545D0964CD900DC5A8E9, NULL);
		if (L_52)
		{
			goto IL_024e;
		}
	}
	{
		// else if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_53;
		L_53 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_53;
		String_t* L_54;
		L_54 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_55;
		L_55 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_54, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_55)
		{
			goto IL_024e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_56;
		L_56 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_56;
		String_t* L_57;
		L_57 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_58;
		L_58 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_57, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		return;
	}

IL_020b:
	{
		// else if( Input.GetKeyDown(KeyCode.D) )
		bool L_59;
		L_59 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)100), NULL);
		if (!L_59)
		{
			goto IL_0246;
		}
	}
	{
		// if (SceneManager.GetActiveScene().name == "1.ARShooter" || SceneManager.GetActiveScene().name == "1.ARShooter-2")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_60;
		L_60 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_60;
		String_t* L_61;
		L_61 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_62;
		L_62 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_61, _stringLiteralB66172516C6AC4768D3828D3DF3078A1FB1A2837, NULL);
		if (L_62)
		{
			goto IL_024e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_63;
		L_63 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_63;
		String_t* L_64;
		L_64 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_65;
		L_65 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_64, _stringLiteralEA01391E06700DCBBE50CF10AE71066FC51BE4A1, NULL);
		return;
	}

IL_0246:
	{
		// else if (Input.GetKeyDown(KeyCode.E))
		bool L_66;
		L_66 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)101), NULL);
	}

IL_024e:
	{
		// }
		return;
	}
}
// System.Void BluetoothConnection::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection_OnDestroy_m275327938BFC50934424820DF6E24D710F584046 (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothConnection_onConnectPeripheral_m39CB6D9C54F5B74753264F756758BDF1FB7EEA66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BluetoothConnection_onDiscoveredPeripheral_m3C9C48C8CFDAAEAE945BEA10F926CE8001CA7A3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BleDeviceManager.Instance.StopListening (BleEvent.CONNECT_PERIPHERAL, onConnectPeripheral);
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0;
		L_0 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		il2cpp_codegen_runtime_class_init_inline(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var);
		String_t* L_1 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___CONNECT_PERIPHERAL_1;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_2 = (UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*)il2cpp_codegen_object_new(UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m76941321DA6F6419695A1D92BEB38D692F7CE36E(L_2, __this, (intptr_t)((void*)BluetoothConnection_onConnectPeripheral_m39CB6D9C54F5B74753264F756758BDF1FB7EEA66_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		BleDeviceManager_StopListening_m9AE8B678E974DED1E73475E23EBAC57F2F77820B(L_0, L_1, L_2, NULL);
		// BleDeviceManager.Instance.StopListening (BleEvent.DISCOVERED_PERIPHERAL, onDiscoveredPeripheral);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_3;
		L_3 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		String_t* L_4 = ((BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_StaticFields*)il2cpp_codegen_static_fields_for(BleEvent_tDDDF0BD1B7B471F6B802DC2FF555505B031BE9D8_il2cpp_TypeInfo_var))->___DISCOVERED_PERIPHERAL_0;
		UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77* L_5 = (UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77*)il2cpp_codegen_object_new(UnityAction_1_t2AA207555BC9A0F86D6D89AF303E38A8EF91FC77_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m76941321DA6F6419695A1D92BEB38D692F7CE36E(L_5, __this, (intptr_t)((void*)BluetoothConnection_onDiscoveredPeripheral_m3C9C48C8CFDAAEAE945BEA10F926CE8001CA7A3B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		BleDeviceManager_StopListening_m9AE8B678E974DED1E73475E23EBAC57F2F77820B(L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void BluetoothConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothConnection__ctor_m9E651DFF1820FBF7758A653401AA63E41FAE617E (BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BluetoothConnection/<CheckConnect>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckConnectU3Ed__13__ctor_m188886AB3DEB4E5C18CA3A400E6BEAB2A4FF3A2D (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BluetoothConnection/<CheckConnect>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckConnectU3Ed__13_System_IDisposable_Dispose_m5FC46B54B66DADF1CBEEB124E623568D7ECCB7F1 (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BluetoothConnection/<CheckConnect>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckConnectU3Ed__13_MoveNext_m26531ED510E920A485EBF2DB4B115F294E8950A9 (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (BleDeviceManager.Instance.isConnectedBLE() == false)
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_5;
		L_5 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548_inline(L_5, NULL);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		// onReset();
		BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* L_7 = V_1;
		NullCheck(L_7);
		BluetoothConnection_onReset_m0E65EFF3B1A83947F2A01ED08611F8D8A691611F(L_7, NULL);
		goto IL_001e;
	}

IL_0052:
	{
		// else if (BleDeviceManager.Instance.isConnectedBLE() == true)
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_8;
		L_8 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_001e;
		}
	}
	{
		// isconnection = true;
		BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* L_10 = V_1;
		NullCheck(L_10);
		L_10->___isconnection_9 = (bool)1;
		// startbtn.SetActive(true);
		BluetoothConnection_tB4039D4F26E54B43B164C600742CC03BDF5D9FC1* L_11 = V_1;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___startbtn_8;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// while (true)
		goto IL_001e;
	}
}
// System.Object BluetoothConnection/<CheckConnect>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckConnectU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC6E335A4043889BFDC97B62FD966D6B12B260F0 (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BluetoothConnection/<CheckConnect>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckConnectU3Ed__13_System_Collections_IEnumerator_Reset_m97D0E5B42B04656ECDFF649781A36822881696F3 (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckConnectU3Ed__13_System_Collections_IEnumerator_Reset_m97D0E5B42B04656ECDFF649781A36822881696F3_RuntimeMethod_var)));
	}
}
// System.Object BluetoothConnection/<CheckConnect>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckConnectU3Ed__13_System_Collections_IEnumerator_get_Current_mFD5D3A36C6A124AEECE34F92CFD24289BCC78A7E (U3CCheckConnectU3Ed__13_tF233601A7D5FFA4D84608F28B19EF50BCBDAC510* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void BluetoothPermissionChecker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothPermissionChecker_Start_mA4499B916E63DB41283CF0CDA6BD055B0122F6AE (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) 
{
	{
		// PressBtnCapture();
		BluetoothPermissionChecker_PressBtnCapture_m04110885DE7D417D2D8D1FFD89716BE94D5172A2(__this, NULL);
		// }
		return;
	}
}
// System.Void BluetoothPermissionChecker::PressBtnCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothPermissionChecker_PressBtnCapture_m04110885DE7D417D2D8D1FFD89716BE94D5172A2 (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) 
{
	{
		// if (onCheck == false)
		bool L_0 = __this->___onCheck_4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartCoroutine(PermissionCheckCoroutine());
		RuntimeObject* L_1;
		L_1 = BluetoothPermissionChecker_PermissionCheckCoroutine_m946C4984CAA0E40E5710FE9FE2631355EECBA449(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator BluetoothPermissionChecker::PermissionCheckCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BluetoothPermissionChecker_PermissionCheckCoroutine_m946C4984CAA0E40E5710FE9FE2631355EECBA449 (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* L_0 = (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5*)il2cpp_codegen_object_new(U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPermissionCheckCoroutineU3Ed__3__ctor_m6B432805A736CCF641B19F3A90A2D9EB16D902BB(L_0, 0, NULL);
		U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BluetoothPermissionChecker::OpenAppSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothPermissionChecker_OpenAppSetting_m7337A178DF80DD14C5E03D48A62EB8400A2C8750 (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B5F3D82D90B8AF99EAF7E4F0128DFAEED46F610);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DE4CBEFB6BE586D0FCB6AC6C495834D721F383F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B44550DE59B047BDBFF9E77E355BA8DB533C7F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA1A3B90374A04B77995E8E90B5E4343C8156ED8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	String_t* V_2 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_3 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// using (var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_0);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
			V_0 = L_0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00f8_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
						if (!L_1)
						{
							goto IL_0101_1;
						}
					}
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
						NullCheck(L_2);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
					}

IL_0101_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using (AndroidJavaObject currentActivityObject = unityClass.GetStatic<AndroidJavaObject>("currentActivity"))
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
					L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
					V_1 = L_4;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_00ec_2:
						{// begin finally (depth: 3)
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
								if (!L_5)
								{
									goto IL_00f5_2;
								}
							}
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
								NullCheck(L_6);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
							}

IL_00f5_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							// string packageName = currentActivityObject.Call<string>("getPackageName");
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
							ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
							L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
							NullCheck(L_7);
							String_t* L_9;
							L_9 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_7, _stringLiteral1B5F3D82D90B8AF99EAF7E4F0128DFAEED46F610, L_8, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
							V_2 = L_9;
							// using (var uriClass = new AndroidJavaClass("android.net.Uri"))
							AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
							NullCheck(L_10);
							AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteralE67D89BB61E8A81A2B0B7802F9E515D915AA51E7, NULL);
							V_3 = L_10;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_00e0_3:
								{// begin finally (depth: 4)
									{
										AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_11 = V_3;
										if (!L_11)
										{
											goto IL_00e9_3;
										}
									}
									{
										AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_12 = V_3;
										NullCheck(L_12);
										InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
									}

IL_00e9_3:
									{
										return;
									}
								}// end finally (depth: 4)
							});
							try
							{// begin try (depth: 4)
								{
									// using (AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("fromParts", "package", packageName, null))
									AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = V_3;
									ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
									ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
									NullCheck(L_15);
									ArrayElementTypeCheck (L_15, _stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE);
									(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral8B0499A461635C223E03DBDCDFCA5C4F38616DFE);
									ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
									String_t* L_17 = V_2;
									NullCheck(L_16);
									ArrayElementTypeCheck (L_16, L_17);
									(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
									NullCheck(L_13);
									AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18;
									L_18 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_13, _stringLiteral4DE4CBEFB6BE586D0FCB6AC6C495834D721F383F, L_16, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
									V_4 = L_18;
								}
								{
									auto __finallyBlock = il2cpp::utils::Finally([&]
									{

FINALLY_00d2_4:
										{// begin finally (depth: 5)
											{
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_4;
												if (!L_19)
												{
													goto IL_00dd_4;
												}
											}
											{
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = V_4;
												NullCheck(L_20);
												InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
											}

IL_00dd_4:
											{
												return;
											}
										}// end finally (depth: 5)
									});
									try
									{// begin try (depth: 5)
										{
											// using (var intentObject = new AndroidJavaObject("android.content.Intent", "android.settings.APPLICATION_DETAILS_SETTINGS", uriObject))
											ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
											ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
											NullCheck(L_22);
											ArrayElementTypeCheck (L_22, _stringLiteralAA1A3B90374A04B77995E8E90B5E4343C8156ED8);
											(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralAA1A3B90374A04B77995E8E90B5E4343C8156ED8);
											ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = V_4;
											NullCheck(L_23);
											ArrayElementTypeCheck (L_23, L_24);
											(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_24);
											AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
											NullCheck(L_25);
											AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_25, _stringLiteralC5E7F48ACAC428EC5EA35E9BBED10A0E23CBE728, L_23, NULL);
											V_5 = L_25;
										}
										{
											auto __finallyBlock = il2cpp::utils::Finally([&]
											{

FINALLY_00c4_5:
												{// begin finally (depth: 6)
													{
														AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = V_5;
														if (!L_26)
														{
															goto IL_00cf_5;
														}
													}
													{
														AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = V_5;
														NullCheck(L_27);
														InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
													}

IL_00cf_5:
													{
														return;
													}
												}// end finally (depth: 6)
											});
											try
											{// begin try (depth: 6)
												// intentObject.Call<AndroidJavaObject>("addCategory", "android.intent.category.DEFAULT");
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_28 = V_5;
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_29;
												NullCheck(L_30);
												ArrayElementTypeCheck (L_30, _stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508);
												(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralD92D76CC23BCED62C43359FA368E7072808F6508);
												NullCheck(L_28);
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31;
												L_31 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_28, _stringLiteral9B44550DE59B047BDBFF9E77E355BA8DB533C7F1, L_30, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
												// intentObject.Call<AndroidJavaObject>("setFlags", 0x10000000);
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_32 = V_5;
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = L_33;
												int32_t L_35 = ((int32_t)268435456);
												RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
												NullCheck(L_34);
												ArrayElementTypeCheck (L_34, L_36);
												(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_36);
												NullCheck(L_32);
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37;
												L_37 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_32, _stringLiteral050714A292B0DD14A239E41C7F85CAD2FA9AE27A, L_34, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
												// currentActivityObject.Call("startActivity", intentObject);
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38 = V_1;
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
												ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_39;
												AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_41 = V_5;
												NullCheck(L_40);
												ArrayElementTypeCheck (L_40, L_41);
												(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_41);
												NullCheck(L_38);
												AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_38, _stringLiteral6CB60CD0F517BE0AB5DBF3CCB647F6428F1FA6D1, L_40, NULL);
												// }
												goto IL_00d0_5;
											}// end try (depth: 6)
											catch(Il2CppExceptionWrapper& e)
											{
												__finallyBlock.StoreException(e.ex);
											}
										}

IL_00d0_5:
										{
											goto IL_00de_4;
										}
									}// end try (depth: 5)
									catch(Il2CppExceptionWrapper& e)
									{
										__finallyBlock.StoreException(e.ex);
									}
								}

IL_00de_4:
								{
									goto IL_00ea_3;
								}
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_00ea_3:
						{
							// }
							goto IL_00f6_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_00f6_2:
				{
					goto IL_0102_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0102_1:
		{
			// }
			goto IL_010b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0104;
		}
		throw e;
	}

CATCH_0104:
	{// begin catch(System.Exception)
		// Debug.LogException(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_m82E44FEC6B03BC34AFC2CAF6583051570C60CB9E(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010b;
	}// end catch (depth: 1)

IL_010b:
	{
		// }
		return;
	}
}
// System.Void BluetoothPermissionChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BluetoothPermissionChecker__ctor_m5C5E465186C164B705598BF9CE727BF44C7C8D0B (BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BluetoothPermissionChecker/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m581BD36068DC45058780993D9422D7E9B85DD6C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509* L_0 = (U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509*)il2cpp_codegen_object_new(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFFF5CAE65515493793F924D2DFC9AFE5C8DF2610(L_0, NULL);
		((U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void BluetoothPermissionChecker/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFFF5CAE65515493793F924D2DFC9AFE5C8DF2610 (U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean BluetoothPermissionChecker/<>c::<PermissionCheckCoroutine>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CPermissionCheckCoroutineU3Eb__3_0_mA664C36F99583221571694315C42138EF9B4E124 (U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitUntil(() => Application.isFocused == true);
		bool L_0;
		L_0 = Application_get_isFocused_m5E2835D701463AB393851163788F1F2DF3770E3E(NULL);
		return L_0;
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
// System.Void BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPermissionCheckCoroutineU3Ed__3__ctor_m6B432805A736CCF641B19F3A90A2D9EB16D902BB (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPermissionCheckCoroutineU3Ed__3_System_IDisposable_Dispose_m45CF0153AB18D7C055E38349D50AF1FDD85B8A60 (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPermissionCheckCoroutineU3Ed__3_MoveNext_m52A3566DBCCCAA7966D36D48D67D9CDC775D96B2 (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPermissionCheckCoroutineU3Eb__3_0_mA664C36F99583221571694315C42138EF9B4E124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831D44388900A57E6C18D677DBBC4F24E33BB90D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* V_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B7_0 = NULL;
	U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* G_B7_1 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B6_0 = NULL;
	U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* G_B6_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_0088;
			}
			case 3:
			{
				goto IL_00c2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("11111111111");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral831D44388900A57E6C18D677DBBC4F24E33BB90D, NULL);
		// onCheck = true;
		BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* L_3 = V_1;
		NullCheck(L_3);
		L_3->___onCheck_4 = (bool)1;
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0052:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Permission.HasUserAuthorizedPermission(Permission.FineLocation) == false)
		bool L_5;
		L_5 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_5)
		{
			goto IL_00e4;
		}
	}
	{
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mFB96123E7F4EAFB684C6E527830C892107EEDE21(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		// yield return new WaitForSeconds(0.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0088:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(() => Application.isFocused == true);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = ((U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_8 = L_7;
		G_B6_0 = L_8;
		G_B6_1 = __this;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = __this;
			goto IL_00af;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var);
		U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509* L_9 = ((U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_10 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CPermissionCheckCoroutineU3Eb__3_0_mA664C36F99583221571694315C42138EF9B4E124_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_11 = L_10;
		((U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC7BC287616B5478784B46FBCDFEFE678BA7A6509_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_00af:
	{
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_12 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_12, G_B7_0, NULL);
		NullCheck(G_B7_1);
		G_B7_1->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&G_B7_1->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00c2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (Permission.HasUserAuthorizedPermission(Permission.FineLocation) == false)
		bool L_13;
		L_13 = Permission_HasUserAuthorizedPermission_m2742B284815A87BA03E79B45CA8DB35CF6A78736(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_13)
		{
			goto IL_00e4;
		}
	}
	{
		// OpenAppSetting();
		BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* L_14 = V_1;
		NullCheck(L_14);
		BluetoothPermissionChecker_OpenAppSetting_m7337A178DF80DD14C5E03D48A62EB8400A2C8750(L_14, NULL);
		// onCheck = false;
		BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* L_15 = V_1;
		NullCheck(L_15);
		L_15->___onCheck_4 = (bool)0;
		// yield break;
		return (bool)0;
	}

IL_00e4:
	{
		// onCheck = false;
		BluetoothPermissionChecker_tCE1F23E3562A2E8BDCC9ED646A94F74415485B2F* L_16 = V_1;
		NullCheck(L_16);
		L_16->___onCheck_4 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPermissionCheckCoroutineU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m565525C15B7E383F80A8C03975031CAFE65963E2 (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPermissionCheckCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mF8652D83D6F697D00FBE1DB6B933DACA114BB2A0 (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPermissionCheckCoroutineU3Ed__3_System_Collections_IEnumerator_Reset_mF8652D83D6F697D00FBE1DB6B933DACA114BB2A0_RuntimeMethod_var)));
	}
}
// System.Object BluetoothPermissionChecker/<PermissionCheckCoroutine>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPermissionCheckCoroutineU3Ed__3_System_Collections_IEnumerator_get_Current_mF180BD0C8C05C05A25EEAC2CE490AC03267B6D20 (U3CPermissionCheckCoroutineU3Ed__3_tAAAA14A8AB38AF305E8E11E8A23D207CE80E98F5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void BTDeviceItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BTDeviceItem_Start_m2DFBC021B3B4FA94E4C3D6900ADD3A3937AE7792 (BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BTDeviceItem_Connect_mA26E86732341B000DA707F0A7946A002B460AF36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectDeviceItem.onClick.AddListener(Connect);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___selectDeviceItem_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)BTDeviceItem_Connect_mA26E86732341B000DA707F0A7946A002B460AF36_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void BTDeviceItem::setItem(BleDeviceUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BTDeviceItem_setItem_m0D0DA374EA05228D9C841C21EB6D607E1FD99602 (BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0* __this, BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* ___unit0, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// this.unit = unit;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_0 = ___unit0;
		__this->___unit_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unit_8), (void*)L_0);
		// BTID.text = deviceID = unit.getAddress();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___BTID_5;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_2 = ___unit0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = BleDeviceUnit_getAddress_m1041B7681D92B6E42B5436514F9BB6BC81AFF4F1_inline(L_2, NULL);
		String_t* L_4 = L_3;
		V_0 = L_4;
		__this->___deviceID_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceID_4), (void*)L_4);
		String_t* L_5 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// deviceName.text = unit.getName();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___deviceName_6;
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_7 = ___unit0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = BleDeviceUnit_getName_m84BD5F79A84973DBCB44E95B1EABEF80554A1329_inline(L_7, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void BTDeviceItem::BluetoothDeviceConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BTDeviceItem_BluetoothDeviceConnect_m734BDA22C156D10AA09E62796B51D7160E1C01CA (BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( BleDeviceManager.Instance.isConnectedBLE() == true )
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_0;
		L_0 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// BleDeviceManager.Instance.disconnectPeripheral();
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_2;
		L_2 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		NullCheck(L_2);
		BleDeviceManager_disconnectPeripheral_mA4A5BE64133B629BEAA28548CB314F7E9B100D30(L_2, NULL);
	}

IL_0016:
	{
		// BleDeviceManager.Instance.connectDevice(unit.getAddress());
		il2cpp_codegen_runtime_class_init_inline(BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927_il2cpp_TypeInfo_var);
		BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* L_3;
		L_3 = BleDeviceManager_get_Instance_m53BD101551766C77D2B1C2FEB97C35CC2FD6767D(NULL);
		BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* L_4 = __this->___unit_8;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = BleDeviceUnit_getAddress_m1041B7681D92B6E42B5436514F9BB6BC81AFF4F1_inline(L_4, NULL);
		NullCheck(L_3);
		BleDeviceManager_connectDevice_m092DA8A5CD7BD167C4566FD4B88E649D1E279C7A(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void BTDeviceItem::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BTDeviceItem_Connect_mA26E86732341B000DA707F0A7946A002B460AF36 (BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0* __this, const RuntimeMethod* method) 
{
	{
		// BluetoothDeviceConnect(0);
		BTDeviceItem_BluetoothDeviceConnect_m734BDA22C156D10AA09E62796B51D7160E1C01CA(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void BTDeviceItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BTDeviceItem__ctor_m742543920605142DDBD827E62360F5B2F7432845 (BTDeviceItem_t69D3B5FF945FFA6C8E83D57CAB15105162B850A0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BleDeviceUnit_setData_mE52DDA659C2B752BCE72A96713766499B21AC201_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// _data = value;
		String_t* L_0 = ___value0;
		__this->____data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_2), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BleDeviceManager_isConnectedBLE_mB72D5F2A945CC4DF75D1387524625DB970E15548_inline (BleDeviceManager_t62243831FC5B58B974E2DF905D3C3AB7CCF6D927* __this, const RuntimeMethod* method) 
{
	{
		// return isConnected;
		bool L_0 = __this->___isConnected_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getAddress_m1041B7681D92B6E42B5436514F9BB6BC81AFF4F1_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) 
{
	{
		// return _address;
		String_t* L_0 = __this->____address_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getData_mA4A12391750E2D982B466F9286D2D5389DF27FBA_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) 
{
	{
		// return _data;
		String_t* L_0 = __this->____data_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BleDeviceUnit_getName_m84BD5F79A84973DBCB44E95B1EABEF80554A1329_inline (BleDeviceUnit_tE74DBD6B1E4590765DB057CEE243A7EDCCA85ECD* __this, const RuntimeMethod* method) 
{
	{
		// return _name;
		String_t* L_0 = __this->____name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
