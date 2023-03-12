#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>>
struct Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36;
// System.Action`1<System.Collections.Generic.List`1<DataBubble>>
struct Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<DataGeneral>
struct Action_1_tCEEE0B18F1A86FC2F79B6B656CD5BC5978FE62E6;
// System.Action`1<DataPoint>
struct Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Int64>
struct Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<DataPoint,DataPoint>
struct Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804;
// System.Action`2<GameState,GameMode>
struct Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.Int32Enum,System.Int32Enum>
struct Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2;
// System.Action`3<DataPoint,DataPoint,DataEarnedScore>
struct Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<VisualLine>
struct IEnumerable_1_t10A163DDC6B2B87D762987FDD0F5D2D1E75B1BEB;
// System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>
struct List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD;
// System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>
struct List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC;
// System.Collections.Generic.List`1<DataBubble>
struct List_1_t62E58927A0F169B5F81B5F83844E282886221832;
// System.Collections.Generic.List`1<DataPoint>
struct List_1_t96566392A1534B3355461EF8F723027D5F1FAE02;
// System.Collections.Generic.List`1<DataPuzzle>
struct List_1_t5F3AD22726BD3B075CDB67705D1F0D844A1E8E95;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D;
// System.Collections.Generic.List`1<UnityEngine.TextAsset>
struct List_1_tC0FCC010411366A6623886AFA93A0B022E62D015;
// System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>
struct List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08;
// System.Collections.Generic.List`1<UIChallengeEntry>
struct List_1_tAF01013CCC1F3B503C9B11E0B15F54C1984B2504;
// System.Collections.Generic.List`1<VisualLine>
struct List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A;
// System.Tuple`2<DataBubble,UnityEngine.GameObject>
struct Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4;
// System.Tuple`2<DataPoint,DataPoint>
struct Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Tuple`2<DataBubble,UnityEngine.GameObject>[]
struct Tuple_2U5BU5D_t3B24D6074C3A4B5F1FEDBEE08315DE0327840474;
// System.Tuple`2<DataPoint,DataPoint>[]
struct Tuple_2U5BU5D_t1F879E8F16DBB12DF5688FF383088B92215E1D2B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// DataBubble[]
struct DataBubbleU5BU5D_tB54629853AB946EE97D5A8F1FD614ECC0B67B733;
// DataPoint[]
struct DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// VisualLine[]
struct VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE;
// DataBubble
struct DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Events
struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F;
// GameCore
struct GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE;
// GameInputManager
struct GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// SOChallengeList
struct SOChallengeList_t658F5DA42E032932EDC2425BDAA88796AB5180B5;
// SOChallenges
struct SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A;
// SerializedDataIO
struct SerializedDataIO_t8C0B3EC151B783B03E6BFB9D281AC730624CD8FF;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIChallengeComplete
struct UIChallengeComplete_t76465A8B2D26B7889D8C55EFE33E856CC3E2D8A3;
// UIChallengeEntry
struct UIChallengeEntry_t53D3A56956CA470BC46E4488E7A0545160FD8149;
// UIChallengeList
struct UIChallengeList_t5A7EBD7BDB7F2D063ADA0F647CC3D3E2C74732BA;
// UIConfirmationDialog
struct UIConfirmationDialog_tEBFECED77B7BF5900610B65EF6380FAC36D487F6;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VisualBubbleManager
struct VisualBubbleManager_t2F7E9DE6EABA2036291586C5E09DF2AE6333BAD5;
// VisualBubbleWandering
struct VisualBubbleWandering_t2D543FAE29C32FB4804124A2D70B6B1B6CFA7B9C;
// VisualCore
struct VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21;
// VisualLine
struct VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80;
// VisualLineManager
struct VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0;
// VisualObjectFadeInDirection
struct VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C;
// VisualParticleManager
struct VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685;
// VisualRemoveBubbleOnMenu
struct VisualRemoveBubbleOnMenu_t93C2EDDE8B084F60C9E2C445941F99E10B365268;
// VisualRotateOnYAxis
struct VisualRotateOnYAxis_tC090CF80195FCCB6D4CC00747E92DB9571F76919;
// VisualScoreTextFeedback
struct VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Utils/WichmannRng
struct WichmannRng_t62A4AA026BACBB6159A0C8734154AF634990C37B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral054B718CD4BB60A8DF9348C3268DE382FA6EED37;
IL2CPP_EXTERN_C String_t* _stringLiteral130C99166C02D48144FC27422E95839DC28860FE;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral31EFA689DF4CD97FAC115898A330885CA99BF2DE;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralD78A0EC2F6E508132695B3EC0CE3ECEF7A406B26;
IL2CPP_EXTERN_C String_t* _stringLiteralE227BECEC45BE9D9DE03632EDED18D82AD0B1AD4;
IL2CPP_EXTERN_C String_t* _stringLiteralED63977759DD065DC763CB3FFBFA94F309069C3A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m246D550248C544E03E121B3089C59CE58D1BAF4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3DAD45DADB8AF2936D92422B6B477B4F7EBE7A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7F9290008E210B41F5662411922D5DAD7F3815A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF0635EDF1E6422687698F58FA6B12AFCC8404F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m26E88257121A65AD829FBDA24AC628BF19A88814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3D9EE9B797DEEFC306E8CC231EA8A7C3939B591B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m440D7E55DFFA1FCD4584FD182723A679FC82D032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEE19E65ECF05A0F2CAB3A9F2A0B57914142598B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m08EB1C808B9459CCE8B28995FE25B6D278C55E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m23C9CCF2C730723E1D85E6C0646C146045FE191C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD3E81AD24651F3E88DCADF882D9218FFAA15A2E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C_m6FB4583B24E9BE9FA4CF1461309C798092FE635F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m6953F3B95AC7051CC7977085DBC864C8BAE0818C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m324CB927194AB824D9DE6914946574A1DD9B4DAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m536F099195DA83F77FC8BC80882B17220DE97606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m285CD0581E23FE9B25DB8249B6D2D7E4F45C7D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5FD51B037041C0F28E375CA1D0D94E7B54F4176A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBC56495C8B5D2960DD4A9B2EB0A67FA96C957E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC1B4EE6B440F395BC55510FD571F0C31B2A03FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mABBDE8841E905F62EFA84CA308BA4C2967500A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m6C74CCA9240400A10DF828C4AB074C1154D1CA7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m97732D99D2140AF62B1771030299384748A18718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD031A8ADB87FB89A6E7CB92A0EEEF15C950F6543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD361533C747EDA2E4B886212B847F9504A7F4012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1AB800A1F5DCF3D9CCF4500EC52C04E3A31ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m168035BE450481E2656BD5DE5CBB4CB4D5942DC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m703A35C97032D51AEC03388E8DB83802F9F74B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualCore_OnBubbleDestroyed_mEB2FA80028D634E5A07E48F789833027683ADEF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualCore_OnBubblesChange_m5A99CBF018CFC06E27644EEA48ADB39952B65C5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualCore_OnGuideLinesChange_m0B165D0C73FF56A6BF03BB9E1B0377809120005F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualCore_OnLineCreated_m87EE4F76105E7073655B758F8F6BC7D8162BE686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualCore_OnLineDestroyed_m6250CC31B537593D84CFA00E350B3327AB7F37E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualCore_OnLineUpdate_mF377614AB75ECBF1486A9F921DC685A9A15EA246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualCore_U3CStartU3Eb__19_0_m4F05768D99D9F622346EE86DCA3B0F8FAEE08BA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualParticleManager_U3CStartU3Eb__6_0_m04DA52189AFCBCB94030DAC8652F0B6B03D7257F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualParticleManager_U3CStartU3Eb__6_1_m95BC28356A88E658072853EFD4094604731FBC0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualRemoveBubbleOnMenu_StartShrinkOut_mD4370E0B1850027CBEECF22BC2A0BDD26B8F52E8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>
struct List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Tuple_2U5BU5D_t3B24D6074C3A4B5F1FEDBEE08315DE0327840474* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>
struct List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Tuple_2U5BU5D_t1F879E8F16DBB12DF5688FF383088B92215E1D2B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DataBubble>
struct List_1_t62E58927A0F169B5F81B5F83844E282886221832  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DataBubbleU5BU5D_tB54629853AB946EE97D5A8F1FD614ECC0B67B733* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<DataPoint>
struct List_1_t96566392A1534B3355461EF8F723027D5F1FAE02  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>
struct List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<VisualLine>
struct List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Tuple`2<DataBubble,UnityEngine.GameObject>
struct Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Item2_1;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
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

// VisualLine
struct VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80  : public RuntimeObject
{
	// UnityEngine.LineRenderer VisualLine::renderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___renderer_0;
	// VisualLineManager VisualLine::manager
	VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* ___manager_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataBubble,UnityEngine.GameObject>>
struct Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataPoint,DataPoint>>
struct Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<DataBubble>
struct Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t62E58927A0F169B5F81B5F83844E282886221832* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
struct Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<TMPro.TextMeshProUGUI>
struct Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<VisualLine>
struct Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// DataEarnedScore
struct DataEarnedScore_tE28A1465D34CE4F1A121F14E227D7DDEDFE5925E 
{
	// System.Int64 DataEarnedScore::score
	int64_t ___score_0;
	// System.Int64 DataEarnedScore::bonus
	int64_t ___bonus_1;
	// System.Int64 DataEarnedScore::total
	int64_t ___total_2;
	// System.Collections.Generic.List`1<DataPoint> DataEarnedScore::locations
	List_1_t96566392A1534B3355461EF8F723027D5F1FAE02* ___locations_3;
};
// Native definition for P/Invoke marshalling of DataEarnedScore
struct DataEarnedScore_tE28A1465D34CE4F1A121F14E227D7DDEDFE5925E_marshaled_pinvoke
{
	int64_t ___score_0;
	int64_t ___bonus_1;
	int64_t ___total_2;
	List_1_t96566392A1534B3355461EF8F723027D5F1FAE02* ___locations_3;
};
// Native definition for COM marshalling of DataEarnedScore
struct DataEarnedScore_tE28A1465D34CE4F1A121F14E227D7DDEDFE5925E_marshaled_com
{
	int64_t ___score_0;
	int64_t ___bonus_1;
	int64_t ___total_2;
	List_1_t96566392A1534B3355461EF8F723027D5F1FAE02* ___locations_3;
};

// DataGeneral
struct DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985 
{
	// System.Int32 DataGeneral::seed
	int32_t ___seed_3;
	// System.Int64 DataGeneral::score
	int64_t ___score_4;
	// System.Int32 DataGeneral::level
	int32_t ___level_5;
	// System.Boolean DataGeneral::showTutorial
	bool ___showTutorial_6;
	// System.Boolean DataGeneral::showHelp
	bool ___showHelp_7;
	// System.Boolean DataGeneral::showParticles
	bool ___showParticles_8;
	// System.Single DataGeneral::musicVolume
	float ___musicVolume_9;
	// System.Single DataGeneral::sfxVolume
	float ___sfxVolume_10;
	// System.Collections.Generic.List`1<DataPuzzle> DataGeneral::challenges
	List_1_t5F3AD22726BD3B075CDB67705D1F0D844A1E8E95* ___challenges_11;
};
// Native definition for P/Invoke marshalling of DataGeneral
struct DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985_marshaled_pinvoke
{
	int32_t ___seed_3;
	int64_t ___score_4;
	int32_t ___level_5;
	int32_t ___showTutorial_6;
	int32_t ___showHelp_7;
	int32_t ___showParticles_8;
	float ___musicVolume_9;
	float ___sfxVolume_10;
	List_1_t5F3AD22726BD3B075CDB67705D1F0D844A1E8E95* ___challenges_11;
};
// Native definition for COM marshalling of DataGeneral
struct DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985_marshaled_com
{
	int32_t ___seed_3;
	int64_t ___score_4;
	int32_t ___level_5;
	int32_t ___showTutorial_6;
	int32_t ___showHelp_7;
	int32_t ___showParticles_8;
	float ___musicVolume_9;
	float ___sfxVolume_10;
	List_1_t5F3AD22726BD3B075CDB67705D1F0D844A1E8E95* ___challenges_11;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// DataPoint
struct DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 
{
	// UnityEngine.Vector2 DataPoint::pos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// System.Collections.Generic.List`1/Enumerator<DataPoint>
struct Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t96566392A1534B3355461EF8F723027D5F1FAE02* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Tuple`2<DataPoint,DataPoint>
struct Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___m_Item2_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// DataBubble
struct DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3  : public RuntimeObject
{
	// DataPoint DataBubble::position
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___position_0;
	// DataPoint DataBubble::targetOffset
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___targetOffset_1;
	// DataPoint DataBubble::currentOffset
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___currentOffset_2;
	// System.Single DataBubble::speed
	float ___speed_3;
	// BubbleType DataBubble::type
	int32_t ___type_4;
	// System.Single DataBubble::cycleTime
	float ___cycleTime_5;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>>
struct Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36  : public MulticastDelegate_t
{
};

// System.Action`1<System.Collections.Generic.List`1<DataBubble>>
struct Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<DataPoint>
struct Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A  : public MulticastDelegate_t
{
};

// System.Action`2<DataPoint,DataPoint>
struct Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804  : public MulticastDelegate_t
{
};

// System.Action`2<GameState,GameMode>
struct Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D  : public MulticastDelegate_t
{
};

// System.Action`3<DataPoint,DataPoint,DataEarnedScore>
struct Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SOChallenges
struct SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// SOChallengeList SOChallenges::basic
	SOChallengeList_t658F5DA42E032932EDC2425BDAA88796AB5180B5* ___basic_4;
	// SOChallengeList SOChallenges::large
	SOChallengeList_t658F5DA42E032932EDC2425BDAA88796AB5180B5* ___large_5;
	// SOChallengeList SOChallenges::moving
	SOChallengeList_t658F5DA42E032932EDC2425BDAA88796AB5180B5* ___moving_6;
	// SOChallengeList SOChallenges::varied
	SOChallengeList_t658F5DA42E032932EDC2425BDAA88796AB5180B5* ___varied_7;
	// System.Collections.Generic.List`1<UnityEngine.TextAsset> SOChallenges::levels
	List_1_tC0FCC010411366A6623886AFA93A0B022E62D015* ___levels_8;
	// System.Boolean SOChallenges::hasInit
	bool ___hasInit_9;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// Data
struct Data_tD68044ADE8612868F3B424B065920F50C65B5CCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Events Data::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_4;
	// SerializedDataIO Data::dataIO
	SerializedDataIO_t8C0B3EC151B783B03E6BFB9D281AC730624CD8FF* ___dataIO_5;
	// UIConfirmationDialog Data::confirmationDialog
	UIConfirmationDialog_tEBFECED77B7BF5900610B65EF6380FAC36D487F6* ___confirmationDialog_6;
	// DataGeneral Data::data
	DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985 ___data_7;
};

// Events
struct Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`2<DataPoint,DataPoint> Events::OnLineCreated
	Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* ___OnLineCreated_4;
	// System.Action`2<DataPoint,DataPoint> Events::OnLineUpdated
	Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* ___OnLineUpdated_5;
	// System.Action`3<DataPoint,DataPoint,DataEarnedScore> Events::OnLineDestroyed
	Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF* ___OnLineDestroyed_6;
	// System.Action`2<GameState,GameMode> Events::OnGameStateChangeRequest
	Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D* ___OnGameStateChangeRequest_7;
	// System.Action Events::OnCorrectTutorialSwipe
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnCorrectTutorialSwipe_8;
	// System.Action`1<DataPoint> Events::OnClick
	Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* ___OnClick_9;
	// System.Action`2<GameState,GameMode> Events::OnGameStateChange
	Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D* ___OnGameStateChange_10;
	// System.Action`1<System.Collections.Generic.List`1<DataBubble>> Events::OnBubblesChange
	Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1* ___OnBubblesChange_11;
	// System.Action`1<System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>> Events::OnGuideLinesChange
	Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36* ___OnGuideLinesChange_12;
	// System.Action`1<DataPoint> Events::OnBubbleDestroyed
	Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* ___OnBubbleDestroyed_13;
	// System.Action`1<System.Boolean> Events::OnShowHelpToggle
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnShowHelpToggle_14;
	// System.Action`1<System.Boolean> Events::OnShowParticlesToggle
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnShowParticlesToggle_15;
	// System.Action`1<System.Boolean> Events::OnTutorialToggle
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnTutorialToggle_16;
	// System.Action`1<System.Boolean> Events::OnRequestPauseState
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnRequestPauseState_17;
	// System.Action`1<System.Single> Events::OnUpdateMusicVolume
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___OnUpdateMusicVolume_18;
	// System.Action`1<System.Single> Events::OnUpdateSFXVolume
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___OnUpdateSFXVolume_19;
	// System.Action`1<DataGeneral> Events::OnDataChanged
	Action_1_tCEEE0B18F1A86FC2F79B6B656CD5BC5978FE62E6* ___OnDataChanged_20;
	// System.Action Events::OnClearSavedData
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnClearSavedData_21;
	// System.Action Events::OnGameInitialized
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnGameInitialized_22;
	// System.Action`1<System.String> Events::OnNoSaveEntryFound
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnNoSaveEntryFound_23;
	// System.Action`1<System.String> Events::OnLevelLoadRequest
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnLevelLoadRequest_24;
	// System.Action Events::OnLevelReloadRequest
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnLevelReloadRequest_25;
	// System.Action`1<System.Boolean> Events::OnEnactPauseState
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnEnactPauseState_26;
	// System.Action`1<System.Int64> Events::OnLevelSpecificScoreChange
	Action_1_tBB5A52E9AEFBC4F0C8D94D39CAD16BCB6B8B5929* ___OnLevelSpecificScoreChange_27;
};

// GameCore
struct GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Data GameCore::data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ___data_4;
	// Events GameCore::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_5;
	// GameInputManager GameCore::inputManager
	GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* ___inputManager_6;
	// UIChallengeComplete GameCore::challengeComplete
	UIChallengeComplete_t76465A8B2D26B7889D8C55EFE33E856CC3E2D8A3* ___challengeComplete_7;
	// System.Boolean GameCore::isLevelTester
	bool ___isLevelTester_17;
	// UnityEngine.TextAsset GameCore::tutorialOne
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___tutorialOne_18;
	// UnityEngine.TextAsset GameCore::tutorialTwo
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___tutorialTwo_19;
	// UnityEngine.TextAsset GameCore::internalLevel
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___internalLevel_20;
	// System.Int32 GameCore::star2
	int32_t ___star2_21;
	// System.Int32 GameCore::star3
	int32_t ___star3_22;
	// System.Int64 GameCore::levelScore
	int64_t ___levelScore_23;
	// GameMode GameCore::internalMode
	int32_t ___internalMode_24;
	// GameState GameCore::internalState
	int32_t ___internalState_25;
	// SOChallenges GameCore::levels
	SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A* ___levels_26;
	// UnityEngine.AnimationCurve GameCore::movementCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___movementCurve_27;
	// System.Boolean GameCore::wasDownPreviously
	bool ___wasDownPreviously_28;
	// DataPoint GameCore::lastLineStart
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___lastLineStart_29;
	// DataPoint GameCore::lastLineEnd
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___lastLineEnd_30;
	// System.Boolean GameCore::hasInit
	bool ___hasInit_31;
	// System.Boolean GameCore::isPaused
	bool ___isPaused_32;
	// System.Collections.Generic.List`1<DataBubble> GameCore::bubbles
	List_1_t62E58927A0F169B5F81B5F83844E282886221832* ___bubbles_33;
	// System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>> GameCore::guideLines
	List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC* ___guideLines_34;
	// System.Int32 GameCore::linesDrawn
	int32_t ___linesDrawn_35;
	// Utils/WichmannRng GameCore::rand
	WichmannRng_t62A4AA026BACBB6159A0C8734154AF634990C37B* ___rand_36;
	// System.Boolean GameCore::internalStateCurrentHasInit
	bool ___internalStateCurrentHasInit_37;
};

// GameInputManager
struct GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Events GameInputManager::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_4;
	// UnityEngine.Camera GameInputManager::sceneCam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___sceneCam_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIChallengeList
struct UIChallengeList_t5A7EBD7BDB7F2D063ADA0F647CC3D3E2C74732BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Events UIChallengeList::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_4;
	// Data UIChallengeList::data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ___data_5;
	// UnityEngine.GameObject UIChallengeList::parent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parent_6;
	// UIChallengeEntry UIChallengeList::entryTemplate
	UIChallengeEntry_t53D3A56956CA470BC46E4488E7A0545160FD8149* ___entryTemplate_7;
	// TMPro.TextMeshProUGUI UIChallengeList::fraction
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___fraction_8;
	// TMPro.TextMeshProUGUI UIChallengeList::percentage
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___percentage_9;
	// GameCore UIChallengeList::core
	GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE* ___core_10;
	// System.Collections.Generic.List`1<UIChallengeEntry> UIChallengeList::entries
	List_1_tAF01013CCC1F3B503C9B11E0B15F54C1984B2504* ___entries_11;
	// SOChallenges UIChallengeList::list
	SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A* ___list_12;
};

// VisualBubbleManager
struct VisualBubbleManager_t2F7E9DE6EABA2036291586C5E09DF2AE6333BAD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Events VisualBubbleManager::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_4;
	// UnityEngine.GameObject VisualBubbleManager::bubbleStandard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bubbleStandard_5;
	// UnityEngine.GameObject VisualBubbleManager::bubbleLarge
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bubbleLarge_6;
	// UnityEngine.GameObject VisualBubbleManager::fallback
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fallback_7;
};

// VisualBubbleWandering
struct VisualBubbleWandering_t2D543FAE29C32FB4804124A2D70B6B1B6CFA7B9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VisualCore
struct VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Data VisualCore::data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ___data_4;
	// Events VisualCore::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_5;
	// GameCore VisualCore::core
	GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE* ___core_6;
	// GameInputManager VisualCore::inputManager
	GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* ___inputManager_7;
	// VisualLineManager VisualCore::lineManager
	VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* ___lineManager_8;
	// VisualBubbleManager VisualCore::bubbleManager
	VisualBubbleManager_t2F7E9DE6EABA2036291586C5E09DF2AE6333BAD5* ___bubbleManager_9;
	// VisualScoreTextFeedback VisualCore::visualTextFeedback
	VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* ___visualTextFeedback_10;
	// VisualParticleManager VisualCore::particleManager
	VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* ___particleManager_11;
	// UIChallengeList VisualCore::challengeList
	UIChallengeList_t5A7EBD7BDB7F2D063ADA0F647CC3D3E2C74732BA* ___challengeList_12;
	// UnityEngine.GameObject VisualCore::lineEndCap
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lineEndCap_13;
	// System.Single VisualCore::lineThickeningSpeedScalar
	float ___lineThickeningSpeedScalar_14;
	// UnityEngine.AnimationCurve VisualCore::curve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___curve_15;
	// UnityEngine.Color VisualCore::guideLineColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___guideLineColor_16;
	// VisualLine VisualCore::line
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* ___line_17;
	// System.Single VisualCore::lineVisualWidth
	float ___lineVisualWidth_18;
	// System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>> VisualCore::trackedBubbles
	List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* ___trackedBubbles_19;
	// System.Collections.Generic.List`1<VisualLine> VisualCore::trackedGuideLines
	List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* ___trackedGuideLines_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> VisualCore::trackedGuideLineCaps
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___trackedGuideLineCaps_21;
	// System.Collections.Generic.List`1<VisualLine> VisualCore::debugLines
	List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* ___debugLines_22;
};

// VisualLineManager
struct VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject VisualLineManager::template
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___template_4;
	// System.Collections.Generic.List`1<VisualLine> VisualLineManager::lines
	List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* ___lines_6;
};

// VisualObjectFadeInDirection
struct VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 VisualObjectFadeInDirection::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_4;
	// System.Single VisualObjectFadeInDirection::fadeTime
	float ___fadeTime_5;
	// System.Single VisualObjectFadeInDirection::delayBeforeReset
	float ___delayBeforeReset_6;
	// System.Single VisualObjectFadeInDirection::speed
	float ___speed_7;
	// System.Single VisualObjectFadeInDirection::timeSoFar
	float ___timeSoFar_8;
	// UnityEngine.Vector3 VisualObjectFadeInDirection::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_9;
};

// VisualParticleManager
struct VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Data VisualParticleManager::data
	Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* ___data_4;
	// Events VisualParticleManager::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_5;
	// UnityEngine.ParticleSystem VisualParticleManager::bubbleExplosionTemplate
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___bubbleExplosionTemplate_6;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> VisualParticleManager::spawnOnStart
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___spawnOnStart_7;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> VisualParticleManager::spawnedOnStart
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___spawnedOnStart_8;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> VisualParticleManager::bubbleExplosionParticles
	List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* ___bubbleExplosionParticles_9;
};

// VisualRemoveBubbleOnMenu
struct VisualRemoveBubbleOnMenu_t93C2EDDE8B084F60C9E2C445941F99E10B365268  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Events VisualRemoveBubbleOnMenu::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_4;
	// System.Single VisualRemoveBubbleOnMenu::timeout
	float ___timeout_5;
	// System.Boolean VisualRemoveBubbleOnMenu::isShrinking
	bool ___isShrinking_6;
	// System.Single VisualRemoveBubbleOnMenu::size
	float ___size_7;
};

// VisualRotateOnYAxis
struct VisualRotateOnYAxis_tC090CF80195FCCB6D4CC00747E92DB9571F76919  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single VisualRotateOnYAxis::rotateAmount
	float ___rotateAmount_4;
};

// VisualScoreTextFeedback
struct VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Events VisualScoreTextFeedback::events
	Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* ___events_4;
	// TMPro.TextMeshProUGUI VisualScoreTextFeedback::textScoreVisual
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textScoreVisual_5;
	// UnityEngine.Canvas VisualScoreTextFeedback::canvastarget
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvastarget_6;
	// UnityEngine.Color VisualScoreTextFeedback::scoreAddition
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___scoreAddition_7;
	// UnityEngine.Color VisualScoreTextFeedback::scoreAdditionBonus
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___scoreAdditionBonus_8;
	// System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> VisualScoreTextFeedback::createdText
	List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* ___createdText_9;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>
struct List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Tuple_2U5BU5D_t3B24D6074C3A4B5F1FEDBEE08315DE0327840474* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>

// System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>
struct List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Tuple_2U5BU5D_t1F879E8F16DBB12DF5688FF383088B92215E1D2B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>

// System.Collections.Generic.List`1<DataBubble>
struct List_1_t62E58927A0F169B5F81B5F83844E282886221832_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DataBubbleU5BU5D_tB54629853AB946EE97D5A8F1FD614ECC0B67B733* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DataBubble>

// System.Collections.Generic.List`1<DataPoint>
struct List_1_t96566392A1534B3355461EF8F723027D5F1FAE02_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DataPoint>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>

// System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>
struct List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>

// System.Collections.Generic.List`1<VisualLine>
struct List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<VisualLine>

// System.Tuple`2<DataBubble,UnityEngine.GameObject>

// System.Tuple`2<DataBubble,UnityEngine.GameObject>

// System.Tuple`2<System.Object,System.Object>

// System.Tuple`2<System.Object,System.Object>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// VisualLine

// VisualLine

// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataBubble,UnityEngine.GameObject>>

// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataBubble,UnityEngine.GameObject>>

// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataPoint,DataPoint>>

// System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataPoint,DataPoint>>

// System.Collections.Generic.List`1/Enumerator<DataBubble>

// System.Collections.Generic.List`1/Enumerator<DataBubble>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>

// System.Collections.Generic.List`1/Enumerator<TMPro.TextMeshProUGUI>

// System.Collections.Generic.List`1/Enumerator<TMPro.TextMeshProUGUI>

// System.Collections.Generic.List`1/Enumerator<VisualLine>

// System.Collections.Generic.List`1/Enumerator<VisualLine>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// DataEarnedScore

// DataEarnedScore

// DataGeneral
struct DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985_StaticFields
{
	// System.Char DataGeneral::keyValueSeparator
	Il2CppChar ___keyValueSeparator_0;
	// System.Char DataGeneral::valueSeparator
	Il2CppChar ___valueSeparator_1;
	// System.Char DataGeneral::contentSeparator
	Il2CppChar ___contentSeparator_2;
};

// DataGeneral

// System.Double

// System.Double

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

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Nullable`1<UnityEngine.Color>

// System.Nullable`1<UnityEngine.Color>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// DataPoint

// DataPoint

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Collections.Generic.List`1/Enumerator<DataPoint>

// System.Collections.Generic.List`1/Enumerator<DataPoint>

// System.Tuple`2<DataPoint,DataPoint>

// System.Tuple`2<DataPoint,DataPoint>

// UnityEngine.Component

// UnityEngine.Component

// DataBubble

// DataBubble

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Action`1<System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>>

// System.Action`1<System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>>

// System.Action`1<System.Collections.Generic.List`1<DataBubble>>

// System.Action`1<System.Collections.Generic.List`1<DataBubble>>

// System.Action`1<System.Boolean>

// System.Action`1<System.Boolean>

// System.Action`1<DataPoint>

// System.Action`1<DataPoint>

// System.Action`2<DataPoint,DataPoint>

// System.Action`2<DataPoint,DataPoint>

// System.Action`2<GameState,GameMode>

// System.Action`2<GameState,GameMode>

// System.Action`3<DataPoint,DataPoint,DataEarnedScore>

// System.Action`3<DataPoint,DataPoint,DataEarnedScore>

// System.Action

// System.Action

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// SOChallenges

// SOChallenges

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// Data

// Data

// Events

// Events

// GameCore
struct GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_StaticFields
{
	// System.Single GameCore::widthLeeway
	float ___widthLeeway_8;
	// System.Single GameCore::bubbleRadiusStandard
	float ___bubbleRadiusStandard_9;
	// System.Single GameCore::bubbleRadiusLarge
	float ___bubbleRadiusLarge_10;
	// System.Int32 GameCore::bonusThreshold
	int32_t ___bonusThreshold_11;
	// System.Int32 GameCore::pointsPerBubble
	int32_t ___pointsPerBubble_12;
	// System.Int32 GameCore::pointsPerBonusBubble
	int32_t ___pointsPerBonusBubble_13;
	// System.Int32 GameCore::maxBubblesOnScreen
	int32_t ___maxBubblesOnScreen_14;
	// System.String GameCore::compressionIndicator
	String_t* ___compressionIndicator_15;
	// System.String GameCore::mainMenu
	String_t* ___mainMenu_16;
};

// GameCore

// GameInputManager

// GameInputManager

// UIChallengeList

// UIChallengeList

// VisualBubbleManager

// VisualBubbleManager

// VisualBubbleWandering

// VisualBubbleWandering

// VisualCore

// VisualCore

// VisualLineManager

// VisualLineManager

// VisualObjectFadeInDirection

// VisualObjectFadeInDirection

// VisualParticleManager

// VisualParticleManager

// VisualRemoveBubbleOnMenu

// VisualRemoveBubbleOnMenu

// VisualRotateOnYAxis

// VisualRotateOnYAxis

// VisualScoreTextFeedback

// VisualScoreTextFeedback

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// DataPoint[]
struct DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E  : public RuntimeArray
{
	ALIGN_FIELD (8) DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 m_Items[1];

	inline DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 value)
	{
		m_Items[index] = value;
	}
};
// VisualLine[]
struct VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E  : public RuntimeArray
{
	ALIGN_FIELD (8) VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* m_Items[1];

	inline VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<DataPoint,DataPoint>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m2584953C0940A25839238847A56D1C3877968C22_gshared (Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`3<DataPoint,DataPoint,DataEarnedScore>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3__ctor_m760C04D6A9CB8BA275B52B81304BE4DBD2E00E76_gshared (Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<DataPoint>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m3CC2C05DABA76CDFA8A046C9695956F40D58F73E_gshared (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DataPoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D List_1_GetEnumerator_m5FD51B037041C0F28E375CA1D0D94E7B54F4176A_gshared (List_1_t96566392A1534B3355461EF8F723027D5F1FAE02* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<DataPoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m246D550248C544E03E121B3089C59CE58D1BAF4B_gshared (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<DataPoint>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_gshared_inline (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DataPoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m26E88257121A65AD829FBDA24AC628BF19A88814_gshared (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T1 System.Tuple`2<DataPoint,DataPoint>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_gshared_inline (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<DataPoint,DataPoint>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_gshared_inline (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared (Action_2_t43544BAAB4CC69E54228A3389CC3D57A805208A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`1<DataPoint>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDE6F36A414305FAFE168F64D7F6C755B9091AF7F_gshared_inline (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_obj, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::.ctor()
inline void List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115 (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VisualLine>::.ctor()
inline void List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Action`2<DataPoint,DataPoint>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m2584953C0940A25839238847A56D1C3877968C22 (Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m2584953C0940A25839238847A56D1C3877968C22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.Action`3<DataPoint,DataPoint,DataEarnedScore>::.ctor(System.Object,System.IntPtr)
inline void Action_3__ctor_m760C04D6A9CB8BA275B52B81304BE4DBD2E00E76 (Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_3__ctor_m760C04D6A9CB8BA275B52B81304BE4DBD2E00E76_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<DataBubble>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mE28417B460F8D61D9747A919623859ACCC98188D (Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m6E17E17EC23F3CE67453F61A5F015A22B2536A36 (Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<DataPoint>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3CC2C05DABA76CDFA8A046C9695956F40D58F73E (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m3CC2C05DABA76CDFA8A046C9695956F40D58F73E_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void VisualParticleManager::CreateBubbleExplosion(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_CreateBubbleExplosion_mFC791FDA5A82A60971DA85C2C9B4C32950FA1947 (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_location, const RuntimeMethod* method) ;
// VisualLine VisualLineManager::CreateLine(DataPoint,DataPoint,System.Nullable`1<UnityEngine.Color>,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___2_color, double ___3_thickness, int32_t ___4_sortOffset, const RuntimeMethod* method) ;
// System.Void VisualLine::SetStart(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_SetStart_m6B677B86A5B53DAA3304E2484DDC1DDDB45F6E77 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_newPos, const RuntimeMethod* method) ;
// System.Void VisualLine::SetEnd(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_SetEnd_mBC3F4C273C49BB06D325A83EFC286CB88064F996 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_newPos, const RuntimeMethod* method) ;
// System.Void VisualLine::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_Destroy_mB5F6E6775439AC26493DA2FC3DDC2CC51AA37F72 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, const RuntimeMethod* method) ;
// DataPoint GameInputManager::ConvertToScreenPoint(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 GameInputManager_ConvertToScreenPoint_mB4F03E5A65FC2CB924CB1FD00678CF35EDD13A37 (GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_worldPoint, const RuntimeMethod* method) ;
// System.Single DataPoint::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* __this, const RuntimeMethod* method) ;
// System.Single DataPoint::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09 (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* __this, const RuntimeMethod* method) ;
// System.Void DataPoint::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281 (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DataPoint>::GetEnumerator()
inline Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D List_1_GetEnumerator_m5FD51B037041C0F28E375CA1D0D94E7B54F4176A (List_1_t96566392A1534B3355461EF8F723027D5F1FAE02* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D (*) (List_1_t96566392A1534B3355461EF8F723027D5F1FAE02*, const RuntimeMethod*))List_1_GetEnumerator_m5FD51B037041C0F28E375CA1D0D94E7B54F4176A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DataPoint>::Dispose()
inline void Enumerator_Dispose_m246D550248C544E03E121B3089C59CE58D1BAF4B (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D*, const RuntimeMethod*))Enumerator_Dispose_m246D550248C544E03E121B3089C59CE58D1BAF4B_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DataPoint>::get_Current()
inline DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_inline (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D* __this, const RuntimeMethod* method)
{
	return ((  DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 (*) (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D*, const RuntimeMethod*))Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void VisualScoreTextFeedback::CreateText(DataPoint,System.String,TextType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualScoreTextFeedback_CreateText_m64EA16C3BE42D8A06C8C9B8E89C4B3A320ABB1DA (VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_position, String_t* ___1_value, int32_t ___2_textType, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DataPoint>::MoveNext()
inline bool Enumerator_MoveNext_m26E88257121A65AD829FBDA24AC628BF19A88814 (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D*, const RuntimeMethod*))Enumerator_MoveNext_m26E88257121A65AD829FBDA24AC628BF19A88814_gshared)(__this, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::GetEnumerator()
inline Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A (*) (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::Dispose()
inline void Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1 (Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::get_Current()
inline Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_inline (Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A* __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* (*) (Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<DataBubble,UnityEngine.GameObject>::get_Item2()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_inline (Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::MoveNext()
inline bool Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647 (Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::Clear()
inline void List_1_Clear_m324CB927194AB824D9DE6914946574A1DD9B4DAD_inline (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DataBubble>::GetEnumerator()
inline Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351 List_1_GetEnumerator_mBC56495C8B5D2960DD4A9B2EB0A67FA96C957E3E (List_1_t62E58927A0F169B5F81B5F83844E282886221832* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351 (*) (List_1_t62E58927A0F169B5F81B5F83844E282886221832*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DataBubble>::Dispose()
inline void Enumerator_Dispose_m7F9290008E210B41F5662411922D5DAD7F3815A7 (Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DataBubble>::get_Current()
inline DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* Enumerator_get_Current_m08EB1C808B9459CCE8B28995FE25B6D278C55E46_inline (Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351* __this, const RuntimeMethod* method)
{
	return ((  DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* (*) (Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.GameObject VisualBubbleManager::CreateBubble(DataBubble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* VisualBubbleManager_CreateBubble_m0ABF4809C9375CB51CDD84D0044EF37CCF3545FC (VisualBubbleManager_t2F7E9DE6EABA2036291586C5E09DF2AE6333BAD5* __this, DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* ___0_data, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<DataBubble,UnityEngine.GameObject>::.ctor(T1,T2)
inline void Tuple_2__ctor_m703A35C97032D51AEC03388E8DB83802F9F74B3B (Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* __this, DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* ___0_item1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4*, DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___0_item1, ___1_item2, method);
}
// System.Void System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::Add(T)
inline void List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_inline (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* __this, Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*, Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<DataBubble>::MoveNext()
inline bool Enumerator_MoveNext_m440D7E55DFFA1FCD4584FD182723A679FC82D032 (Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<VisualLine>::GetEnumerator()
inline Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369 List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369 (*) (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<VisualLine>::Dispose()
inline void Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F (Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<VisualLine>::get_Current()
inline VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_inline (Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369* __this, const RuntimeMethod* method)
{
	return ((  VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* (*) (Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<VisualLine>::MoveNext()
inline bool Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5 (Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<VisualLine>::Clear()
inline void List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_inline (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>::GetEnumerator()
inline Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D List_1_GetEnumerator_m285CD0581E23FE9B25DB8249B6D2D7E4F45C7D6A (List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D (*) (List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataPoint,DataPoint>>::Dispose()
inline void Enumerator_Dispose_m3DAD45DADB8AF2936D92422B6B477B4F7EBE7A6B (Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataPoint,DataPoint>>::get_Current()
inline Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* Enumerator_get_Current_mD3E81AD24651F3E88DCADF882D9218FFAA15A2E2_inline (Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D* __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* (*) (Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T1 System.Tuple`2<DataPoint,DataPoint>::get_Item1()
inline DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_inline (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* __this, const RuntimeMethod* method)
{
	return ((  DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 (*) (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A*, const RuntimeMethod*))Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<DataPoint,DataPoint>::get_Item2()
inline DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_inline (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* __this, const RuntimeMethod* method)
{
	return ((  DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 (*) (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A*, const RuntimeMethod*))Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<UnityEngine.Color>::.ctor(T)
inline void Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_gshared)(__this, ___0_value, method);
}
// System.Void System.Collections.Generic.List`1<VisualLine>::Add(T)
inline void List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* __this, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// UnityEngine.Vector3 DataPoint::op_Implicit(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<VisualObjectFadeInDirection>()
inline VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* GameObject_GetComponent_TisVisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C_m6FB4583B24E9BE9FA4CF1461309C798092FE635F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Tuple`2<DataPoint,DataPoint>>::MoveNext()
inline bool Enumerator_MoveNext_m3D9EE9B797DEEFC306E8CC231EA8A7C3939B591B (Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void VisualCore::DrawDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_DrawDebug_mCF65519DE27279DA1407895ADDB93847B9FB24C9 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void VisualLine::SetThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_SetThickness_m4274BB65253E36D05953B213CE47406DE7C49ABB (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, float ___0_thickness, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T1 System.Tuple`2<DataBubble,UnityEngine.GameObject>::get_Item1()
inline DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline (Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* __this, const RuntimeMethod* method)
{
	return ((  DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* (*) (Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// DataPoint DataBubble::GetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 DataBubble_GetPosition_m40868EDBA2DE815C788896C816B8C29DC7F77695 (DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::get_Count()
inline int32_t List_1_get_Count_mD361533C747EDA2E4B886212B847F9504A7F4012_inline (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Tuple`2<DataBubble,UnityEngine.GameObject>>::Remove(T)
inline bool List_1_Remove_mD031A8ADB87FB89A6E7CB92A0EEEF15C950F6543 (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* __this, Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*, Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// DataGeneral Data::GetDataGeneral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985 Data_GetDataGeneral_m5C3934064E0A0A00B204C3DC8B4CE1BFC82DE7A6 (Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* __this, const RuntimeMethod* method) ;
// DataPoint VisualLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, const RuntimeMethod* method) ;
// DataPoint VisualLine::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, const RuntimeMethod* method) ;
// DataPoint Utils::GetClosestPointOnLine(DataPoint,DataPoint,DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Utils_GetClosestPointOnLine_m459F042743C4DB756278EBE8B3C7926FB0FEFF1B (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___2_bubble, const RuntimeMethod* method) ;
// System.Single DataBubble::AdjustedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DataBubble_AdjustedRadius_mF03A32F5D59521BCCEAC535AEDB30B0D7E87F616 (DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* __this, const RuntimeMethod* method) ;
// System.Boolean Utils::IsLineTouchingCircle(DataPoint,DataPoint,DataPoint,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsLineTouchingCircle_m630B2F4C5A83AB366F635A10F13441838FF67116 (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___2_bubble, float ___3_triggerRadius, float ___4_bubbleRadius, bool ___5_cullOutsideT, const RuntimeMethod* method) ;
// System.Boolean Utils::IsInRadiusLineRange(DataPoint,DataPoint,DataPoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsInRadiusLineRange_m1ABE89DFABECFF731091D8417D7607A55AB7FA27 (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___2_bubble, float ___3_triggerRadius, const RuntimeMethod* method) ;
// System.Boolean DataPoint::IsRealNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataPoint_IsRealNumber_m4552F0F324D9CF235E7288B657FBE4578A2F0DAE (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) ;
// System.Void DataBubble::.ctor(DataPoint,DataPoint,System.Single,BubbleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataBubble__ctor_m74AFD1F61C2EC241293A8B52A6FAF5BD64D533F7 (DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_pos, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_target, float ___2_speed, int32_t ___3_type, const RuntimeMethod* method) ;
// DataPoint[] GameCore::DetermineSplits(DataBubble,DataPoint,DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E* GameCore_DetermineSplits_m47FCDA3BDE3C4DD76131BAAEE6F43BC62284958A (DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* ___0_bubble, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_lineStart, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___2_lineEnd, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// VisualLine[] VisualLineManager::CreatePlus(DataPoint,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* VisualLineManager_CreatePlus_mE4C329F5A97F8ED9D210ADC7303CFE1FDDCE7218 (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_pos, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, float ___2_size, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<VisualLine>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m6953F3B95AC7051CC7977085DBC864C8BAE0818C (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void DataPoint::.ctor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPoint__ctor_mA303E8A8C7EB01BA041F90BC3B4F44BB1EE68981 (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
// DataPoint DataPoint::op_Addition(DataPoint,DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 DataPoint_op_Addition_mFE99367BC6DD5C3448F857901ECEB51C05660588 (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_lhs, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_rhs, const RuntimeMethod* method) ;
// DataPoint GameInputManager::ScreenSizeWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 GameInputManager_ScreenSizeWorld_m5AF8C9B14A812962264509B25457DA8A3D57B673 (GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// SOChallenges GameCore::get_ChallengeLevels()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A* GameCore_get_ChallengeLevels_m73AD22779476D8E5DB178FD8735A473EF5E23D05_inline (GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE* __this, const RuntimeMethod* method) ;
// System.Void UIChallengeList::Initialize(SOChallenges)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIChallengeList_Initialize_mF55EA2565A5338D0A9A1747433EFF81902B8AF59 (UIChallengeList_t5A7EBD7BDB7F2D063ADA0F647CC3D3E2C74732BA* __this, SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A* ___0_challenges, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.LineRenderer::GetPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LineRenderer_GetPosition_m697105EEB72E687ECC0ECD9E66105F9BF2EF6C4F (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void DataPoint::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPoint__ctor_m534F4DD5F3FF066BDE15B3E9143BFB13238DBB27 (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
// System.Void VisualLineManager::StopTrackingLine(VisualLine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLineManager_StopTrackingLine_mFCBD439D7ED9A427A6D7712F0FADBB3787D4D67A (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* ___0_line, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_numCapVertices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_numCapVertices_m282860FE8AD17ABE5CC07C0DB44371C1CF668E84 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<UnityEngine.Color>::get_HasValue()
inline bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Color>::get_Value()
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637 (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11*, const RuntimeMethod*))Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_gshared)(__this, method);
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<VisualLine>::get_Count()
inline int32_t List_1_get_Count_mF1AB800A1F5DCF3D9CCF4500EC52C04E3A31ADCD_inline (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void VisualLine::.ctor(VisualLineManager,UnityEngine.LineRenderer,DataPoint,DataPoint,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine__ctor_m82F328971B38E827D5ADE75811CE97C54176A723 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* ___0_manager, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___1_renderer, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___2_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___3_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, float ___5_thickness, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<VisualLine>::Remove(T)
inline bool List_1_Remove_m6C74CCA9240400A10DF828C4AB074C1154D1CA7B (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* __this, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
inline void List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651 (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetEnumerator()
inline Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::Dispose()
inline void Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422 (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::get_Current()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_inline (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::MoveNext()
inline bool Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Clear()
inline void List_1_Clear_m536F099195DA83F77FC8BC80882B17220DE97606_inline (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Transform)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Add(T)
inline void List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_inline (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
inline int32_t List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_inline (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_mF1B0F10ED9EDCB5D971471DDEB0C55C9638FAE56 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mABBDE8841E905F62EFA84CA308BA4C2967500A6A (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void VisualParticleManager::HandleStartupSystems(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_HandleStartupSystems_m4E1E2153859222FF43D55904F03662D9F26147DA (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, bool ___0_isDoingSpawn, const RuntimeMethod* method) ;
// System.Void System.Action`2<GameState,GameMode>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m188F6CB09FFA2117D02036A177835102ED522B2F (Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mEBF3FAD6176B0ABD7207DA4D7239671D972C82E6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<DataPoint>::Invoke(T)
inline void Action_1_Invoke_mDE6F36A414305FAFE168F64D7F6C755B9091AF7F_inline (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A*, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367, const RuntimeMethod*))Action_1_Invoke_mDE6F36A414305FAFE168F64D7F6C755B9091AF7F_gshared_inline)(__this, ___0_obj, method);
}
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_axis, float ___1_angle, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::.ctor()
inline void List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7 (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<TMPro.TextMeshProUGUI>(T,UnityEngine.Transform)
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Object_Instantiate_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m168035BE450481E2656BD5DE5CBB4CB4D5942DC3 (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// UnityEngine.Transform TMPro.TMP_Text::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::Add(T)
inline void List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_inline (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::GetEnumerator()
inline Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A List_1_GetEnumerator_mC1B4EE6B440F395BC55510FD571F0C31B2A03FFE (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TMPro.TextMeshProUGUI>::Dispose()
inline void Enumerator_Dispose_mF0635EDF1E6422687698F58FA6B12AFCC8404F0E (Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<TMPro.TextMeshProUGUI>::get_Current()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Enumerator_get_Current_m23C9CCF2C730723E1D85E6C0646C146045FE191C_inline (Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TMPro.TextMeshProUGUI>::MoveNext()
inline bool Enumerator_MoveNext_mEE19E65ECF05A0F2CAB3A9F2A0B57914142598B4 (Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<TMPro.TextMeshProUGUI>::Remove(T)
inline bool List_1_Remove_m97732D99D2140AF62B1771030299384748A18718 (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* __this, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::HSVToRGB(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF (float ___0_H, float ___1_S, float ___2_V, bool ___3_hdr, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VisualBubbleWandering::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualBubbleWandering_Start_m09993EBE1F93DE27EDA76470878667038698E939 (VisualBubbleWandering_t2D543FAE29C32FB4804124A2D70B6B1B6CFA7B9C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VisualBubbleWandering::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualBubbleWandering_Update_m798F6BFD3E99379D20B159D955152F9A94A5B6D2 (VisualBubbleWandering_t2D543FAE29C32FB4804124A2D70B6B1B6CFA7B9C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void VisualBubbleWandering::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualBubbleWandering__ctor_mE535BE5E8D71108B7CC24714EA15EC07F246F05C (VisualBubbleWandering_t2D543FAE29C32FB4804124A2D70B6B1B6CFA7B9C* __this, const RuntimeMethod* method) 
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
// System.Void VisualCore::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_Awake_mF0FD087D7B9F0AA60604292DFC64BF4448F8E253 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// line = null;
		__this->___line_17 = (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_17), (void*)(VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*)NULL);
		// trackedBubbles = new List<Tuple<DataBubble, GameObject>>();
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_0 = (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*)il2cpp_codegen_object_new(List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD_il2cpp_TypeInfo_var);
		List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115(L_0, List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115_RuntimeMethod_var);
		__this->___trackedBubbles_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedBubbles_19), (void*)L_0);
		// trackedGuideLines = new List<VisualLine>();
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_1 = (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*)il2cpp_codegen_object_new(List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_il2cpp_TypeInfo_var);
		List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA(L_1, List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA_RuntimeMethod_var);
		__this->___trackedGuideLines_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedGuideLines_20), (void*)L_1);
		// trackedGuideLineCaps = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___trackedGuideLineCaps_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedGuideLineCaps_21), (void*)L_2);
		// }
		return;
	}
}
// System.Void VisualCore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_Start_m90AC8D5EB18E94592CB4D9C60ECD219BCE93D826 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualCore_OnBubbleDestroyed_mEB2FA80028D634E5A07E48F789833027683ADEF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualCore_OnBubblesChange_m5A99CBF018CFC06E27644EEA48ADB39952B65C5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualCore_OnGuideLinesChange_m0B165D0C73FF56A6BF03BB9E1B0377809120005F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualCore_OnLineCreated_m87EE4F76105E7073655B758F8F6BC7D8162BE686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualCore_OnLineDestroyed_m6250CC31B537593D84CFA00E350B3327AB7F37E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualCore_OnLineUpdate_mF377614AB75ECBF1486A9F921DC685A9A15EA246_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualCore_U3CStartU3Eb__19_0_m4F05768D99D9F622346EE86DCA3B0F8FAEE08BA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// events.OnLineCreated += OnLineCreated;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_0 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_1 = L_0;
		Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* L_2 = L_1->___OnLineCreated_4;
		Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* L_3 = (Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804*)il2cpp_codegen_object_new(Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var);
		Action_2__ctor_m2584953C0940A25839238847A56D1C3877968C22(L_3, __this, (intptr_t)((void*)VisualCore_OnLineCreated_m87EE4F76105E7073655B758F8F6BC7D8162BE686_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		L_1->___OnLineCreated_4 = ((Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804*)Castclass((RuntimeObject*)L_4, Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___OnLineCreated_4), (void*)((Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804*)Castclass((RuntimeObject*)L_4, Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var)));
		// events.OnLineUpdated += OnLineUpdate;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_5 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_6 = L_5;
		Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* L_7 = L_6->___OnLineUpdated_5;
		Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804* L_8 = (Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804*)il2cpp_codegen_object_new(Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var);
		Action_2__ctor_m2584953C0940A25839238847A56D1C3877968C22(L_8, __this, (intptr_t)((void*)VisualCore_OnLineUpdate_mF377614AB75ECBF1486A9F921DC685A9A15EA246_RuntimeMethod_var), NULL);
		Delegate_t* L_9;
		L_9 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_7, L_8, NULL);
		L_6->___OnLineUpdated_5 = ((Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804*)Castclass((RuntimeObject*)L_9, Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___OnLineUpdated_5), (void*)((Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804*)Castclass((RuntimeObject*)L_9, Action_2_t836CC1A6EF9DB19150D317C5BBE27C82CA04E804_il2cpp_TypeInfo_var)));
		// events.OnLineDestroyed += OnLineDestroyed;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_10 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_11 = L_10;
		Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF* L_12 = L_11->___OnLineDestroyed_6;
		Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF* L_13 = (Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF*)il2cpp_codegen_object_new(Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF_il2cpp_TypeInfo_var);
		Action_3__ctor_m760C04D6A9CB8BA275B52B81304BE4DBD2E00E76(L_13, __this, (intptr_t)((void*)VisualCore_OnLineDestroyed_m6250CC31B537593D84CFA00E350B3327AB7F37E3_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_12, L_13, NULL);
		L_11->___OnLineDestroyed_6 = ((Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF*)Castclass((RuntimeObject*)L_14, Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___OnLineDestroyed_6), (void*)((Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF*)Castclass((RuntimeObject*)L_14, Action_3_t1F33C2CBE550FB071CCA3AB875BD9EC3425BEBFF_il2cpp_TypeInfo_var)));
		// events.OnBubblesChange += OnBubblesChange;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_15 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_16 = L_15;
		Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1* L_17 = L_16->___OnBubblesChange_11;
		Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1* L_18 = (Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1*)il2cpp_codegen_object_new(Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1_il2cpp_TypeInfo_var);
		Action_1__ctor_mE28417B460F8D61D9747A919623859ACCC98188D(L_18, __this, (intptr_t)((void*)VisualCore_OnBubblesChange_m5A99CBF018CFC06E27644EEA48ADB39952B65C5A_RuntimeMethod_var), NULL);
		Delegate_t* L_19;
		L_19 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_17, L_18, NULL);
		L_16->___OnBubblesChange_11 = ((Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1*)Castclass((RuntimeObject*)L_19, Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___OnBubblesChange_11), (void*)((Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1*)Castclass((RuntimeObject*)L_19, Action_1_t54C77D1648D7C270EE4D0E97566C69FCAFC2B1C1_il2cpp_TypeInfo_var)));
		// events.OnGuideLinesChange += OnGuideLinesChange;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_20 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_21 = L_20;
		Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36* L_22 = L_21->___OnGuideLinesChange_12;
		Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36* L_23 = (Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36*)il2cpp_codegen_object_new(Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36_il2cpp_TypeInfo_var);
		Action_1__ctor_m6E17E17EC23F3CE67453F61A5F015A22B2536A36(L_23, __this, (intptr_t)((void*)VisualCore_OnGuideLinesChange_m0B165D0C73FF56A6BF03BB9E1B0377809120005F_RuntimeMethod_var), NULL);
		Delegate_t* L_24;
		L_24 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_22, L_23, NULL);
		L_21->___OnGuideLinesChange_12 = ((Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36*)Castclass((RuntimeObject*)L_24, Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___OnGuideLinesChange_12), (void*)((Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36*)Castclass((RuntimeObject*)L_24, Action_1_tD65CCC0F0F5BC5D146DC0CE09D405FC0F2C36F36_il2cpp_TypeInfo_var)));
		// events.OnBubbleDestroyed += OnBubbleDestroyed;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_25 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_26 = L_25;
		Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* L_27 = L_26->___OnBubbleDestroyed_13;
		Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* L_28 = (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A*)il2cpp_codegen_object_new(Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A_il2cpp_TypeInfo_var);
		Action_1__ctor_m3CC2C05DABA76CDFA8A046C9695956F40D58F73E(L_28, __this, (intptr_t)((void*)VisualCore_OnBubbleDestroyed_mEB2FA80028D634E5A07E48F789833027683ADEF0_RuntimeMethod_var), NULL);
		Delegate_t* L_29;
		L_29 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_27, L_28, NULL);
		L_26->___OnBubbleDestroyed_13 = ((Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A*)Castclass((RuntimeObject*)L_29, Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___OnBubbleDestroyed_13), (void*)((Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A*)Castclass((RuntimeObject*)L_29, Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A_il2cpp_TypeInfo_var)));
		// events.OnGameInitialized += () => {
		//     if (challengeList != null)
		//     {
		//         challengeList.Initialize(core.ChallengeLevels);
		//     }
		//     else
		//     {
		//         Debug.LogWarning("No challenge list was specified, and so no challenge list could be initialized!");
		//     }
		// };
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_30 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_31 = L_30;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_32 = L_31->___OnGameInitialized_22;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_33 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_33, __this, (intptr_t)((void*)VisualCore_U3CStartU3Eb__19_0_m4F05768D99D9F622346EE86DCA3B0F8FAEE08BA8_RuntimeMethod_var), NULL);
		Delegate_t* L_34;
		L_34 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_32, L_33, NULL);
		L_31->___OnGameInitialized_22 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_34, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___OnGameInitialized_22), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_34, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void VisualCore::OnBubbleDestroyed(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_OnBubbleDestroyed_mEB2FA80028D634E5A07E48F789833027683ADEF0 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_pos, const RuntimeMethod* method) 
{
	{
		// particleManager.CreateBubbleExplosion(pos);
		VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* L_0 = __this->___particleManager_11;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_1 = ___0_pos;
		VisualParticleManager_CreateBubbleExplosion_mFC791FDA5A82A60971DA85C2C9B4C32950FA1947(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VisualCore::OnLineCreated(DataPoint,DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_OnLineCreated_m87EE4F76105E7073655B758F8F6BC7D8162BE686 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, const RuntimeMethod* method) 
{
	Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// line = lineManager.CreateLine(start, end, null, 0, 100);
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_0 = __this->___lineManager_8;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_1 = ___0_start;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_2 = ___1_end;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11));
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_3 = V_0;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_4;
		L_4 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_0, L_1, L_2, L_3, (0.0), ((int32_t)100), NULL);
		__this->___line_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_17), (void*)L_4);
		// lineVisualWidth = 0;
		__this->___lineVisualWidth_18 = (0.0f);
		// }
		return;
	}
}
// System.Void VisualCore::OnLineUpdate(DataPoint,DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_OnLineUpdate_mF377614AB75ECBF1486A9F921DC685A9A15EA246 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, const RuntimeMethod* method) 
{
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B2_0 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B1_0 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B5_0 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B4_0 = NULL;
	{
		// line?.SetStart(start);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_0 = __this->___line_17;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_2 = ___0_start;
		VisualLine_SetStart_m6B677B86A5B53DAA3304E2484DDC1DDDB45F6E77(G_B2_0, L_2, NULL);
	}

IL_0012:
	{
		// line?.SetEnd(end);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_3 = __this->___line_17;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_5 = ___1_end;
		VisualLine_SetEnd_mBC3F4C273C49BB06D325A83EFC286CB88064F996(G_B5_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void VisualCore::OnLineDestroyed(DataPoint,DataPoint,DataEarnedScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_OnLineDestroyed_m6250CC31B537593D84CFA00E350B3327AB7F37E3 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, DataEarnedScore_tE28A1465D34CE4F1A121F14E227D7DDEDFE5925E ___2_points, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m246D550248C544E03E121B3089C59CE58D1BAF4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m26E88257121A65AD829FBDA24AC628BF19A88814_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5FD51B037041C0F28E375CA1D0D94E7B54F4176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31EFA689DF4CD97FAC115898A330885CA99BF2DE);
		s_Il2CppMethodInitialized = true;
	}
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D V_3;
	memset((&V_3), 0, sizeof(V_3));
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_4;
	memset((&V_4), 0, sizeof(V_4));
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_5;
	memset((&V_5), 0, sizeof(V_5));
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B2_0 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B1_0 = NULL;
	{
		// line?.Destroy();
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_0 = __this->___line_17;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		VisualLine_Destroy_mB5F6E6775439AC26493DA2FC3DDC2CC51AA37F72(G_B2_0, NULL);
	}

IL_0011:
	{
		// if (points.total > 0)
		DataEarnedScore_tE28A1465D34CE4F1A121F14E227D7DDEDFE5925E L_2 = ___2_points;
		int64_t L_3 = L_2.___total_2;
		if ((((int64_t)L_3) <= ((int64_t)((int64_t)0))))
		{
			goto IL_00f5;
		}
	}
	{
		// DataPoint s = inputManager.ConvertToScreenPoint(start);
		GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* L_4 = __this->___inputManager_7;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_5 = ___0_start;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_6;
		L_6 = GameInputManager_ConvertToScreenPoint_mB4F03E5A65FC2CB924CB1FD00678CF35EDD13A37(L_4, L_5, NULL);
		V_0 = L_6;
		// DataPoint e = inputManager.ConvertToScreenPoint(end);
		GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* L_7 = __this->___inputManager_7;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_8 = ___1_end;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_9;
		L_9 = GameInputManager_ConvertToScreenPoint_mB4F03E5A65FC2CB924CB1FD00678CF35EDD13A37(L_7, L_8, NULL);
		V_1 = L_9;
		// DataPoint worldPos = new DataPoint((s.X + e.X) / 2, (s.Y + e.Y) / 2);
		float L_10;
		L_10 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_0), NULL);
		float L_11;
		L_11 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_12;
		L_12 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_0), NULL);
		float L_13;
		L_13 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&V_2), ((float)(((float)il2cpp_codegen_add(L_10, L_11))/(2.0f))), ((float)(((float)il2cpp_codegen_add(L_12, L_13))/(2.0f))), NULL);
		// foreach (DataPoint point in points.locations)
		DataEarnedScore_tE28A1465D34CE4F1A121F14E227D7DDEDFE5925E L_14 = ___2_points;
		List_1_t96566392A1534B3355461EF8F723027D5F1FAE02* L_15 = L_14.___locations_3;
		Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D L_16;
		L_16 = List_1_GetEnumerator_m5FD51B037041C0F28E375CA1D0D94E7B54F4176A(L_15, List_1_GetEnumerator_m5FD51B037041C0F28E375CA1D0D94E7B54F4176A_RuntimeMethod_var);
		V_3 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00bc:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m246D550248C544E03E121B3089C59CE58D1BAF4B((&V_3), Enumerator_Dispose_m246D550248C544E03E121B3089C59CE58D1BAF4B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b1_1;
			}

IL_0077_1:
			{
				// foreach (DataPoint point in points.locations)
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_17;
				L_17 = Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_inline((&V_3), Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_RuntimeMethod_var);
				V_4 = L_17;
				// DataPoint loc = inputManager.ConvertToScreenPoint(point);
				GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* L_18 = __this->___inputManager_7;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_19 = V_4;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_20;
				L_20 = GameInputManager_ConvertToScreenPoint_mB4F03E5A65FC2CB924CB1FD00678CF35EDD13A37(L_18, L_19, NULL);
				V_5 = L_20;
				// visualTextFeedback.CreateText(loc, "+" + GameCore.pointsPerBubble, TextType.ScoreAddition);
				VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* L_21 = __this->___visualTextFeedback_10;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_22 = V_5;
				il2cpp_codegen_runtime_class_init_inline(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
				String_t* L_23;
				L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_StaticFields*)il2cpp_codegen_static_fields_for(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var))->___pointsPerBubble_12), NULL);
				String_t* L_24;
				L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_23, NULL);
				VisualScoreTextFeedback_CreateText_m64EA16C3BE42D8A06C8C9B8E89C4B3A320ABB1DA(L_21, L_22, L_24, 0, NULL);
			}

IL_00b1_1:
			{
				// foreach (DataPoint point in points.locations)
				bool L_25;
				L_25 = Enumerator_MoveNext_m26E88257121A65AD829FBDA24AC628BF19A88814((&V_3), Enumerator_MoveNext_m26E88257121A65AD829FBDA24AC628BF19A88814_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0077_1;
				}
			}
			{
				goto IL_00ca;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ca:
	{
		// if (points.bonus != 0)
		DataEarnedScore_tE28A1465D34CE4F1A121F14E227D7DDEDFE5925E L_26 = ___2_points;
		int64_t L_27 = L_26.___bonus_1;
		if (!L_27)
		{
			goto IL_00f5;
		}
	}
	{
		// visualTextFeedback.CreateText(worldPos, "Bonus! +" + points.bonus, TextType.ScoreAdditionBonus);
		VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* L_28 = __this->___visualTextFeedback_10;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_29 = V_2;
		int64_t* L_30 = (&(&___2_points)->___bonus_1);
		String_t* L_31;
		L_31 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B(L_30, NULL);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral31EFA689DF4CD97FAC115898A330885CA99BF2DE, L_31, NULL);
		VisualScoreTextFeedback_CreateText_m64EA16C3BE42D8A06C8C9B8E89C4B3A320ABB1DA(L_28, L_29, L_32, 1, NULL);
	}

IL_00f5:
	{
		// line = null;
		__this->___line_17 = (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_17), (void*)(VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*)NULL);
		// lineVisualWidth = 0;
		__this->___lineVisualWidth_18 = (0.0f);
		// }
		return;
	}
}
// System.Void VisualCore::OnBubblesChange(System.Collections.Generic.List`1<DataBubble>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_OnBubblesChange_m5A99CBF018CFC06E27644EEA48ADB39952B65C5A (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, List_1_t62E58927A0F169B5F81B5F83844E282886221832* ___0_bubbles, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7F9290008E210B41F5662411922D5DAD7F3815A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m440D7E55DFFA1FCD4584FD182723A679FC82D032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m08EB1C808B9459CCE8B28995FE25B6D278C55E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m324CB927194AB824D9DE6914946574A1DD9B4DAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBC56495C8B5D2960DD4A9B2EB0A67FA96C957E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_m703A35C97032D51AEC03388E8DB83802F9F74B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* V_2 = NULL;
	Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* V_3 = NULL;
	{
		// foreach (Tuple<DataBubble, GameObject> VisualBubbleTuple in trackedBubbles)
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_0 = __this->___trackedBubbles_19;
		Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A L_1;
		L_1 = List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF(L_0, List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1((&V_0), Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach (Tuple<DataBubble, GameObject> VisualBubbleTuple in trackedBubbles)
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_2;
				L_2 = Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_inline((&V_0), Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var);
				// GameObject.Destroy(VisualBubbleTuple.Item2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_inline(L_2, Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
			}

IL_001f_1:
			{
				// foreach (Tuple<DataBubble, GameObject> VisualBubbleTuple in trackedBubbles)
				bool L_4;
				L_4 = Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647((&V_0), Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// trackedBubbles.Clear();
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_5 = __this->___trackedBubbles_19;
		List_1_Clear_m324CB927194AB824D9DE6914946574A1DD9B4DAD_inline(L_5, List_1_Clear_m324CB927194AB824D9DE6914946574A1DD9B4DAD_RuntimeMethod_var);
		// foreach (DataBubble bubble in bubbles)
		List_1_t62E58927A0F169B5F81B5F83844E282886221832* L_6 = ___0_bubbles;
		Enumerator_t3A357EFD04B0034495DD1B32B8A60C78F304C351 L_7;
		L_7 = List_1_GetEnumerator_mBC56495C8B5D2960DD4A9B2EB0A67FA96C957E3E(L_6, List_1_GetEnumerator_mBC56495C8B5D2960DD4A9B2EB0A67FA96C957E3E_RuntimeMethod_var);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7F9290008E210B41F5662411922D5DAD7F3815A7((&V_1), Enumerator_Dispose_m7F9290008E210B41F5662411922D5DAD7F3815A7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_004c_1:
			{
				// foreach (DataBubble bubble in bubbles)
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_8;
				L_8 = Enumerator_get_Current_m08EB1C808B9459CCE8B28995FE25B6D278C55E46_inline((&V_1), Enumerator_get_Current_m08EB1C808B9459CCE8B28995FE25B6D278C55E46_RuntimeMethod_var);
				V_2 = L_8;
				// Tuple<DataBubble, GameObject> bundle =
				//     new Tuple<DataBubble, GameObject>(bubble, bubbleManager.CreateBubble(bubble));
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_9 = V_2;
				VisualBubbleManager_t2F7E9DE6EABA2036291586C5E09DF2AE6333BAD5* L_10 = __this->___bubbleManager_9;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_11 = V_2;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = VisualBubbleManager_CreateBubble_m0ABF4809C9375CB51CDD84D0044EF37CCF3545FC(L_10, L_11, NULL);
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_13 = (Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4*)il2cpp_codegen_object_new(Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4_il2cpp_TypeInfo_var);
				Tuple_2__ctor_m703A35C97032D51AEC03388E8DB83802F9F74B3B(L_13, L_9, L_12, Tuple_2__ctor_m703A35C97032D51AEC03388E8DB83802F9F74B3B_RuntimeMethod_var);
				V_3 = L_13;
				// trackedBubbles.Add(bundle);
				List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_14 = __this->___trackedBubbles_19;
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_15 = V_3;
				List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_inline(L_14, L_15, List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_RuntimeMethod_var);
			}

IL_0073_1:
			{
				// foreach (DataBubble bubble in bubbles)
				bool L_16;
				L_16 = Enumerator_MoveNext_m440D7E55DFFA1FCD4584FD182723A679FC82D032((&V_1), Enumerator_MoveNext_m440D7E55DFFA1FCD4584FD182723A679FC82D032_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// }
		return;
	}
}
// System.Void VisualCore::OnGuideLinesChange(System.Collections.Generic.List`1<System.Tuple`2<DataPoint,DataPoint>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_OnGuideLinesChange_m0B165D0C73FF56A6BF03BB9E1B0377809120005F (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC* ___0_lines, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3DAD45DADB8AF2936D92422B6B477B4F7EBE7A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3D9EE9B797DEEFC306E8CC231EA8A7C3939B591B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD3E81AD24651F3E88DCADF882D9218FFAA15A2E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C_m6FB4583B24E9BE9FA4CF1461309C798092FE635F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m285CD0581E23FE9B25DB8249B6D2D7E4F45C7D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* V_5 = NULL;
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// foreach (VisualLine line in trackedGuideLines)
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_0 = __this->___trackedGuideLines_20;
		Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369 L_1;
		L_1 = List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE(L_0, List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F((&V_0), Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (VisualLine line in trackedGuideLines)
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_2;
				L_2 = Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_inline((&V_0), Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_RuntimeMethod_var);
				// line.Destroy();
				VisualLine_Destroy_mB5F6E6775439AC26493DA2FC3DDC2CC51AA37F72(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (VisualLine line in trackedGuideLines)
				bool L_3;
				L_3 = Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5((&V_0), Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// trackedGuideLines.Clear();
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_4 = __this->___trackedGuideLines_20;
		List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_inline(L_4, List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_RuntimeMethod_var);
		// foreach (GameObject obj in trackedGuideLineCaps)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___trackedGuideLineCaps_21;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_6;
		L_6 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_5, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0058_1;
			}

IL_004c_1:
			{
				// foreach (GameObject obj in trackedGuideLineCaps)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(obj);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
			}

IL_0058_1:
			{
				// foreach (GameObject obj in trackedGuideLineCaps)
				bool L_8;
				L_8 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0071;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0071:
	{
		// trackedGuideLineCaps.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___trackedGuideLineCaps_21;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_9, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// foreach (Tuple<DataPoint, DataPoint> line in lines)
		List_1_tF038177B79BD832C7D3D98C8859EF31794160FDC* L_10 = ___0_lines;
		Enumerator_t955FB4DE5EB3C93501DF013964CE526729A0949D L_11;
		L_11 = List_1_GetEnumerator_m285CD0581E23FE9B25DB8249B6D2D7E4F45C7D6A(L_10, List_1_GetEnumerator_m285CD0581E23FE9B25DB8249B6D2D7E4F45C7D6A_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m3DAD45DADB8AF2936D92422B6B477B4F7EBE7A6B((&V_2), Enumerator_Dispose_m3DAD45DADB8AF2936D92422B6B477B4F7EBE7A6B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016e_1;
			}

IL_0088_1:
			{
				// foreach (Tuple<DataPoint, DataPoint> line in lines)
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_12;
				L_12 = Enumerator_get_Current_mD3E81AD24651F3E88DCADF882D9218FFAA15A2E2_inline((&V_2), Enumerator_get_Current_mD3E81AD24651F3E88DCADF882D9218FFAA15A2E2_RuntimeMethod_var);
				V_3 = L_12;
				// trackedGuideLines.Add(lineManager.CreateLine(line.Item1, line.Item2, guideLineColor, .075f));
				List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_13 = __this->___trackedGuideLines_20;
				VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_14 = __this->___lineManager_8;
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_15 = V_3;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_16;
				L_16 = Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_inline(L_15, Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_RuntimeMethod_var);
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_17 = V_3;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_18;
				L_18 = Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_inline(L_17, Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_RuntimeMethod_var);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = __this->___guideLineColor_16;
				Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_20;
				memset((&L_20), 0, sizeof(L_20));
				Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_20), L_19, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_21;
				L_21 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_14, L_16, L_18, L_20, (0.075000002980232239), 0, NULL);
				List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_13, L_21, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
				// GameObject endcap = Instantiate(lineEndCap, this.gameObject.transform);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___lineEndCap_13;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
				L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
				L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_22, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
				V_4 = L_25;
				// endcap.transform.position = line.Item1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_4;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
				L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_28 = V_3;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_29;
				L_29 = Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_inline(L_28, Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_RuntimeMethod_var);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
				L_30 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_29, NULL);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_30, NULL);
				// VisualObjectFadeInDirection vofid = endcap.GetComponent<VisualObjectFadeInDirection>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_4;
				VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* L_32;
				L_32 = GameObject_GetComponent_TisVisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C_m6FB4583B24E9BE9FA4CF1461309C798092FE635F(L_31, GameObject_GetComponent_TisVisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C_m6FB4583B24E9BE9FA4CF1461309C798092FE635F_RuntimeMethod_var);
				V_5 = L_32;
				// if(vofid != null)
				VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* L_33 = V_5;
				bool L_34;
				L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_34)
				{
					goto IL_0161_1;
				}
			}
			{
				// vofid.direction = (new Vector2(line.Item2.X - line.Item1.X, line.Item2.Y - line.Item1.Y)).normalized;
				VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* L_35 = V_5;
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_36 = V_3;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_37;
				L_37 = Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_inline(L_36, Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_RuntimeMethod_var);
				V_6 = L_37;
				float L_38;
				L_38 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_6), NULL);
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_39 = V_3;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_40;
				L_40 = Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_inline(L_39, Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_RuntimeMethod_var);
				V_6 = L_40;
				float L_41;
				L_41 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_6), NULL);
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_42 = V_3;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_43;
				L_43 = Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_inline(L_42, Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_RuntimeMethod_var);
				V_6 = L_43;
				float L_44;
				L_44 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_6), NULL);
				Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* L_45 = V_3;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_46;
				L_46 = Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_inline(L_45, Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_RuntimeMethod_var);
				V_6 = L_46;
				float L_47;
				L_47 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_6), NULL);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
				memset((&L_48), 0, sizeof(L_48));
				Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), ((float)il2cpp_codegen_subtract(L_38, L_41)), ((float)il2cpp_codegen_subtract(L_44, L_47)), /*hidden argument*/NULL);
				V_7 = L_48;
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
				L_49 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_7), NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
				L_50 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_49, NULL);
				L_35->___direction_4 = L_50;
			}

IL_0161_1:
			{
				// trackedGuideLineCaps.Add(endcap);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_51 = __this->___trackedGuideLineCaps_21;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_4;
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_51, L_52, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
			}

IL_016e_1:
			{
				// foreach (Tuple<DataPoint, DataPoint> line in lines)
				bool L_53;
				L_53 = Enumerator_MoveNext_m3D9EE9B797DEEFC306E8CC231EA8A7C3939B591B((&V_2), Enumerator_MoveNext_m3D9EE9B797DEEFC306E8CC231EA8A7C3939B591B_RuntimeMethod_var);
				if (L_53)
				{
					goto IL_0088_1;
				}
			}
			{
				goto IL_018a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_018a:
	{
		// }
		return;
	}
}
// System.Void VisualCore::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_Update_mA50A84F331AAE92F3BC8EC9DEC8E6533CDEAD4AE (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD031A8ADB87FB89A6E7CB92A0EEEF15C950F6543_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD361533C747EDA2E4B886212B847F9504A7F4012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED63977759DD065DC763CB3FFBFA94F309069C3A);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* V_4 = NULL;
	int32_t V_5 = 0;
	Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* V_6 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B3_0 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* G_B2_0 = NULL;
	{
		// DrawDebug();
		VisualCore_DrawDebug_mCF65519DE27279DA1407895ADDB93847B9FB24C9(__this, NULL);
		// if (line != null)
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_0 = __this->___line_17;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		// lineVisualWidth += Time.deltaTime * lineThickeningSpeedScalar;
		float L_1 = __this->___lineVisualWidth_18;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___lineThickeningSpeedScalar_14;
		__this->___lineVisualWidth_18 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// Mathf.Clamp(lineVisualWidth, 0, VisualLineManager.PLAYER_LINE_MAX_WIDTH);
		float L_4 = __this->___lineVisualWidth_18;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (0.209999993f), NULL);
		// float t = lineVisualWidth / VisualLineManager.PLAYER_LINE_MAX_WIDTH;
		float L_6 = __this->___lineVisualWidth_18;
		V_1 = ((float)(L_6/(0.209999993f)));
		// float adjusted = curve.Evaluate(t);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = __this->___curve_15;
		float L_8 = V_1;
		float L_9;
		L_9 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_7, L_8, NULL);
		V_2 = L_9;
		// line?.SetThickness(adjusted * VisualLineManager.PLAYER_LINE_MAX_WIDTH);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_10 = __this->___line_17;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_11 = L_10;
		G_B2_0 = L_11;
		if (L_11)
		{
			G_B3_0 = L_11;
			goto IL_0063;
		}
	}
	{
		goto IL_006f;
	}

IL_0063:
	{
		float L_12 = V_2;
		VisualLine_SetThickness_m4274BB65253E36D05953B213CE47406DE7C49ABB(G_B3_0, ((float)il2cpp_codegen_multiply(L_12, (0.209999993f))), NULL);
	}

IL_006f:
	{
		// List<Tuple<DataBubble, GameObject>> toDispose = new List<Tuple<DataBubble, GameObject>>();
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_13 = (List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD*)il2cpp_codegen_object_new(List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD_il2cpp_TypeInfo_var);
		List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115(L_13, List_1__ctor_m2DD9871F72896726C1F6E96F8D651818412B5115_RuntimeMethod_var);
		V_0 = L_13;
		// foreach (Tuple<DataBubble, GameObject> entry in trackedBubbles)
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_14 = __this->___trackedBubbles_19;
		Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A L_15;
		L_15 = List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF(L_14, List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1((&V_3), Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c7_1;
			}

IL_0083_1:
			{
				// foreach (Tuple<DataBubble, GameObject> entry in trackedBubbles)
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_16;
				L_16 = Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_inline((&V_3), Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var);
				V_4 = L_16;
				// if (entry.Item2 == null)
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_17 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
				L_18 = Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_inline(L_17, Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_19)
				{
					goto IL_00a5_1;
				}
			}
			{
				// toDispose.Add(entry);
				List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_20 = V_0;
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_21 = V_4;
				List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_inline(L_20, L_21, List_1_Add_mD4074ABFCB128C6252E45ED4F7CC808D73000041_RuntimeMethod_var);
				goto IL_00c7_1;
			}

IL_00a5_1:
			{
				// entry.Item2.transform.position = entry.Item1.GetPosition();
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_22 = V_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
				L_23 = Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_inline(L_22, Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
				L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_25 = V_4;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_26;
				L_26 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_25, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_27;
				L_27 = DataBubble_GetPosition_m40868EDBA2DE815C788896C816B8C29DC7F77695(L_26, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
				L_28 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_27, NULL);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_28, NULL);
			}

IL_00c7_1:
			{
				// foreach (Tuple<DataBubble, GameObject> entry in trackedBubbles)
				bool L_29;
				L_29 = Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647((&V_3), Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0083_1;
				}
			}
			{
				goto IL_00e0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e0:
	{
		// if(toDispose.Count > 0)
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_30 = V_0;
		int32_t L_31;
		L_31 = List_1_get_Count_mD361533C747EDA2E4B886212B847F9504A7F4012_inline(L_30, List_1_get_Count_mD361533C747EDA2E4B886212B847F9504A7F4012_RuntimeMethod_var);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_0140;
		}
	}
	{
		// int count = toDispose.Count;
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_32 = V_0;
		int32_t L_33;
		L_33 = List_1_get_Count_mD361533C747EDA2E4B886212B847F9504A7F4012_inline(L_32, List_1_get_Count_mD361533C747EDA2E4B886212B847F9504A7F4012_RuntimeMethod_var);
		V_5 = L_33;
		// foreach(Tuple<DataBubble, GameObject> entry in toDispose)
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_34 = V_0;
		Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A L_35;
		L_35 = List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF(L_34, List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var);
		V_3 = L_35;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1((&V_3), Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0111_1;
			}

IL_00fa_1:
			{
				// foreach(Tuple<DataBubble, GameObject> entry in toDispose)
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_36;
				L_36 = Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_inline((&V_3), Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var);
				V_6 = L_36;
				// trackedBubbles.Remove(entry);
				List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_37 = __this->___trackedBubbles_19;
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_38 = V_6;
				bool L_39;
				L_39 = List_1_Remove_mD031A8ADB87FB89A6E7CB92A0EEEF15C950F6543(L_37, L_38, List_1_Remove_mD031A8ADB87FB89A6E7CB92A0EEEF15C950F6543_RuntimeMethod_var);
			}

IL_0111_1:
			{
				// foreach(Tuple<DataBubble, GameObject> entry in toDispose)
				bool L_40;
				L_40 = Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647((&V_3), Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var);
				if (L_40)
				{
					goto IL_00fa_1;
				}
			}
			{
				goto IL_012a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012a:
	{
		// Debug.Log($"Update disposed of {count} entries in trackedBubbles");
		int32_t L_41 = V_5;
		int32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44;
		L_44 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralED63977759DD065DC763CB3FFBFA94F309069C3A, L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_44, NULL);
	}

IL_0140:
	{
		// }
		return;
	}
}
// System.Void VisualCore::DrawDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_DrawDebug_mCF65519DE27279DA1407895ADDB93847B9FB24C9 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m6953F3B95AC7051CC7977085DBC864C8BAE0818C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A V_9;
	memset((&V_9), 0, sizeof(V_9));
	Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* V_10 = NULL;
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	bool V_13 = false;
	bool V_14 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_15;
	memset((&V_15), 0, sizeof(V_15));
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* V_16 = NULL;
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_17;
	memset((&V_17), 0, sizeof(V_17));
	DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E* V_18 = NULL;
	int32_t V_19 = 0;
	DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 V_20;
	memset((&V_20), 0, sizeof(V_20));
	{
		// foreach (VisualLine obj in debugLines)
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_0 = __this->___debugLines_22;
		Enumerator_t666932390C25A27D08ECF5524B871CFD6ACA3369 L_1;
		L_1 = List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE(L_0, List_1_GetEnumerator_mFADFA96DCBA25A3C6D2553F0694B72996C2062EE_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F((&V_0), Enumerator_Dispose_m111AD93607B0DCC419B7EDEF4CDB2FC286A0CE2F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (VisualLine obj in debugLines)
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_2;
				L_2 = Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_inline((&V_0), Enumerator_get_Current_mD575DD8E392F8002190F887C02C8F77E1CFD5BF2_RuntimeMethod_var);
				// obj.Destroy();
				VisualLine_Destroy_mB5F6E6775439AC26493DA2FC3DDC2CC51AA37F72(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (VisualLine obj in debugLines)
				bool L_3;
				L_3 = Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5((&V_0), Enumerator_MoveNext_m21B59F2ED0250400F8D34B56B481EB8C1EFDA5A5_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// debugLines.Clear();
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_4 = __this->___debugLines_22;
		List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_inline(L_4, List_1_Clear_m92384F9C92C238DE41C0800784B0772CF9A88694_RuntimeMethod_var);
		// if (data.GetDataGeneral().showHelp)
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_5 = __this->___data_4;
		DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985 L_6;
		L_6 = Data_GetDataGeneral_m5C3934064E0A0A00B204C3DC8B4CE1BFC82DE7A6(L_5, NULL);
		bool L_7 = L_6.___showHelp_7;
		if (!L_7)
		{
			goto IL_04cb;
		}
	}
	{
		// if (line != null)
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_8 = __this->___line_17;
		if (!L_8)
		{
			goto IL_0387;
		}
	}
	{
		// float lineWidth = .04f;
		V_4 = (0.0399999991f);
		// foreach (Tuple<DataBubble, GameObject> bubbleItem in trackedBubbles)
		List_1_t5F6BA3EDB5BA3F5379ED684C05BA924FFD4267DD* L_9 = __this->___trackedBubbles_19;
		Enumerator_t73B4E85FE5AD6F648BD7D6F01C68DE6B93D7F17A L_10;
		L_10 = List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF(L_9, List_1_GetEnumerator_mE44B7565D82EAB8915E0F7C97A3C67CD75F043DF_RuntimeMethod_var);
		V_9 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_025c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1((&V_9), Enumerator_Dispose_m7C0A3F5E37B8FC09CC29EC49C012B015420ABDC1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_024e_1;
			}

IL_0077_1:
			{
				// foreach (Tuple<DataBubble, GameObject> bubbleItem in trackedBubbles)
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_11;
				L_11 = Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_inline((&V_9), Enumerator_get_Current_mDB47396B4207423B2BD0408203362002AB9787C0_RuntimeMethod_var);
				V_10 = L_11;
				// if (bubbleItem.Item2 != null)
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_12 = V_10;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_inline(L_12, Tuple_2_get_Item2_mB933C07ED8AAE0E63693A88D3F4614B639446322_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_14)
				{
					goto IL_01ab_1;
				}
			}
			{
				// DataPoint closestPoint = Utils.GetClosestPointOnLine(line.Start(), line.End(), bubbleItem.Item1.GetPosition());
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_15 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_16;
				L_16 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_15, NULL);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_17 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_18;
				L_18 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_17, NULL);
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_19 = V_10;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_20;
				L_20 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_19, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_21;
				L_21 = DataBubble_GetPosition_m40868EDBA2DE815C788896C816B8C29DC7F77695(L_20, NULL);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_22;
				L_22 = Utils_GetClosestPointOnLine_m459F042743C4DB756278EBE8B3C7926FB0FEFF1B(L_16, L_18, L_21, NULL);
				V_11 = L_22;
				// float triggerRadius = bubbleItem.Item1.AdjustedRadius(); // Eh?
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_23 = V_10;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_24;
				L_24 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_23, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				float L_25;
				L_25 = DataBubble_AdjustedRadius_mF03A32F5D59521BCCEAC535AEDB30B0D7E87F616(L_24, NULL);
				V_12 = L_25;
				// bool isHit = Utils.IsLineTouchingCircle(line.Start(), line.End(), bubbleItem.Item1.GetPosition(), triggerRadius, GameCore.bubbleRadiusStandard);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_26 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_27;
				L_27 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_26, NULL);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_28 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_29;
				L_29 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_28, NULL);
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_30 = V_10;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_31;
				L_31 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_30, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_32;
				L_32 = DataBubble_GetPosition_m40868EDBA2DE815C788896C816B8C29DC7F77695(L_31, NULL);
				float L_33 = V_12;
				il2cpp_codegen_runtime_class_init_inline(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
				float L_34 = ((GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_StaticFields*)il2cpp_codegen_static_fields_for(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var))->___bubbleRadiusStandard_9;
				bool L_35;
				L_35 = Utils_IsLineTouchingCircle_m630B2F4C5A83AB366F635A10F13441838FF67116(L_27, L_29, L_32, L_33, L_34, (bool)1, NULL);
				V_13 = L_35;
				// bool isIntermediate = Utils.IsInRadiusLineRange(line.Start(), line.End(), bubbleItem.Item1.GetPosition(), triggerRadius);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_36 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_37;
				L_37 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_36, NULL);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_38 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_39;
				L_39 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_38, NULL);
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_40 = V_10;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_41;
				L_41 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_40, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_42;
				L_42 = DataBubble_GetPosition_m40868EDBA2DE815C788896C816B8C29DC7F77695(L_41, NULL);
				float L_43 = V_12;
				bool L_44;
				L_44 = Utils_IsInRadiusLineRange_m1ABE89DFABECFF731091D8417D7607A55AB7FA27(L_37, L_39, L_42, L_43, NULL);
				V_14 = L_44;
				// if (closestPoint.IsRealNumber())
				bool L_45;
				L_45 = DataPoint_IsRealNumber_m4552F0F324D9CF235E7288B657FBE4578A2F0DAE((&V_11), NULL);
				if (!L_45)
				{
					goto IL_01ab_1;
				}
			}
			{
				// Color color = Color.HSVToRGB(1, .8f, .8f);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
				L_46 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline((1.0f), (0.800000012f), (0.800000012f), NULL);
				V_15 = L_46;
				// if (isIntermediate)
				bool L_47 = V_14;
				if (!L_47)
				{
					goto IL_015e_1;
				}
			}
			{
				// color = Color.HSVToRGB(.66f, .8f, .8f);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
				L_48 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline((0.660000026f), (0.800000012f), (0.800000012f), NULL);
				V_15 = L_48;
			}

IL_015e_1:
			{
				// if (isHit)
				bool L_49 = V_13;
				if (!L_49)
				{
					goto IL_0178_1;
				}
			}
			{
				// color = Color.HSVToRGB(.33f, .8f, .8f);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
				L_50 = Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline((0.330000013f), (0.800000012f), (0.800000012f), NULL);
				V_15 = L_50;
			}

IL_0178_1:
			{
				// VisualLine visual = lineManager.CreateLine(bubbleItem.Item1.GetPosition(), closestPoint, color, lineWidth);
				VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_51 = __this->___lineManager_8;
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_52 = V_10;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_53;
				L_53 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_52, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_54;
				L_54 = DataBubble_GetPosition_m40868EDBA2DE815C788896C816B8C29DC7F77695(L_53, NULL);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_55 = V_11;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = V_15;
				Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_57;
				memset((&L_57), 0, sizeof(L_57));
				Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_57), L_56, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
				float L_58 = V_4;
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_59;
				L_59 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_51, L_54, L_55, L_57, ((double)L_58), 0, NULL);
				V_16 = L_59;
				// debugLines.Add(visual);
				List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_60 = __this->___debugLines_22;
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_61 = V_16;
				List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_60, L_61, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
			}

IL_01ab_1:
			{
				// if (bubbleItem.Item1.AdjustedRadius() > (GameCore.bubbleRadiusStandard + VisualLineManager.PLAYER_LINE_MAX_WIDTH / 2 + GameCore.widthLeeway) + 0.001f)
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_62 = V_10;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_63;
				L_63 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_62, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				float L_64;
				L_64 = DataBubble_AdjustedRadius_mF03A32F5D59521BCCEAC535AEDB30B0D7E87F616(L_63, NULL);
				il2cpp_codegen_runtime_class_init_inline(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
				float L_65 = ((GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_StaticFields*)il2cpp_codegen_static_fields_for(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var))->___bubbleRadiusStandard_9;
				float L_66 = ((GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_StaticFields*)il2cpp_codegen_static_fields_for(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var))->___widthLeeway_8;
				if ((!(((float)L_64) > ((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_65, (0.104999997f))), L_66)), (0.00100000005f)))))))
				{
					goto IL_024e_1;
				}
			}
			{
				// DataPoint[] pos = GameCore.DetermineSplits(new DataBubble(bubbleItem.Item1.GetPosition(), new DataPoint(), speed: 0, BubbleType.Large), line.Start(), line.End());
				Tuple_2_t8E4FC8F75CC04ACEE02FEEFEDB21BF1E790E95F4* L_67 = V_10;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_68;
				L_68 = Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_inline(L_67, Tuple_2_get_Item1_mE9ED94E026858EA3C6A468F8FCF38357D16BE915_RuntimeMethod_var);
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_69;
				L_69 = DataBubble_GetPosition_m40868EDBA2DE815C788896C816B8C29DC7F77695(L_68, NULL);
				il2cpp_codegen_initobj((&V_17), sizeof(DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367));
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_70 = V_17;
				DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3* L_71 = (DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3*)il2cpp_codegen_object_new(DataBubble_t56EF1F85E598AE71B0BB547D20960171F01D88C3_il2cpp_TypeInfo_var);
				DataBubble__ctor_m74AFD1F61C2EC241293A8B52A6FAF5BD64D533F7(L_71, L_69, L_70, (0.0f), 1, NULL);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_72 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_73;
				L_73 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_72, NULL);
				VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_74 = __this->___line_17;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_75;
				L_75 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_74, NULL);
				il2cpp_codegen_runtime_class_init_inline(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
				DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E* L_76;
				L_76 = GameCore_DetermineSplits_m47FCDA3BDE3C4DD76131BAAEE6F43BC62284958A(L_71, L_73, L_75, NULL);
				// foreach (DataPoint point in pos)
				V_18 = L_76;
				V_19 = 0;
				goto IL_0246_1;
			}

IL_0213_1:
			{
				// foreach (DataPoint point in pos)
				DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E* L_77 = V_18;
				int32_t L_78 = V_19;
				int32_t L_79 = L_78;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_80 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
				V_20 = L_80;
				// debugLines.AddRange(lineManager.CreatePlus(point, Color.white));
				List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_81 = __this->___debugLines_22;
				VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_82 = __this->___lineManager_8;
				DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_83 = V_20;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
				L_84 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
				VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* L_85;
				L_85 = VisualLineManager_CreatePlus_mE4C329F5A97F8ED9D210ADC7303CFE1FDDCE7218(L_82, L_83, L_84, (0.200000003f), NULL);
				List_1_AddRange_m6953F3B95AC7051CC7977085DBC864C8BAE0818C(L_81, (RuntimeObject*)L_85, List_1_AddRange_m6953F3B95AC7051CC7977085DBC864C8BAE0818C_RuntimeMethod_var);
				int32_t L_86 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_86, 1));
			}

IL_0246_1:
			{
				// foreach (DataPoint point in pos)
				int32_t L_87 = V_19;
				DataPointU5BU5D_t524BFBC98C077BA5669C7F6D84E1DCDBA08B717E* L_88 = V_18;
				if ((((int32_t)L_87) < ((int32_t)((int32_t)(((RuntimeArray*)L_88)->max_length)))))
				{
					goto IL_0213_1;
				}
			}

IL_024e_1:
			{
				// foreach (Tuple<DataBubble, GameObject> bubbleItem in trackedBubbles)
				bool L_89;
				L_89 = Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647((&V_9), Enumerator_MoveNext_m7200306B8F7DD7F89795CE90548E7EA202555647_RuntimeMethod_var);
				if (L_89)
				{
					goto IL_0077_1;
				}
			}
			{
				goto IL_026a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_026a:
	{
		// Vector2 directionUnscaled = new Vector2(line.End().X - line.Start().X, line.End().Y - line.Start().Y);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_90 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_91;
		L_91 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_90, NULL);
		V_17 = L_91;
		float L_92;
		L_92 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_17), NULL);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_93 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_94;
		L_94 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_93, NULL);
		V_17 = L_94;
		float L_95;
		L_95 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_17), NULL);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_96 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_97;
		L_97 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_96, NULL);
		V_17 = L_97;
		float L_98;
		L_98 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_17), NULL);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_99 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_100;
		L_100 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_99, NULL);
		V_17 = L_100;
		float L_101;
		L_101 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_17), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_5), ((float)il2cpp_codegen_subtract(L_92, L_95)), ((float)il2cpp_codegen_subtract(L_98, L_101)), NULL);
		// Vector2 direction = directionUnscaled.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102;
		L_102 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_5), NULL);
		V_6 = L_102;
		// Color col = new Color(.3f, .3f, .3f, .03f);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_7), (0.300000012f), (0.300000012f), (0.300000012f), (0.0299999993f), NULL);
		// float length = 50f;
		V_8 = (50.0f);
		// debugLines.Add(lineManager.CreateLine(line.Start(), line.Start() + new DataPoint(-direction * length), col, lineWidth));
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_103 = __this->___debugLines_22;
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_104 = __this->___lineManager_8;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_105 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_106;
		L_106 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_105, NULL);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_107 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_108;
		L_108 = VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559(L_107, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110;
		L_110 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_109, NULL);
		float L_111 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112;
		L_112 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_110, L_111, NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_113;
		memset((&L_113), 0, sizeof(L_113));
		DataPoint__ctor_mA303E8A8C7EB01BA041F90BC3B4F44BB1EE68981((&L_113), L_112, /*hidden argument*/NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_114;
		L_114 = DataPoint_op_Addition_mFE99367BC6DD5C3448F857901ECEB51C05660588(L_108, L_113, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_115 = V_7;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_116;
		memset((&L_116), 0, sizeof(L_116));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_116), L_115, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		float L_117 = V_4;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_118;
		L_118 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_104, L_106, L_114, L_116, ((double)L_117), 0, NULL);
		List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_103, L_118, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		// debugLines.Add(lineManager.CreateLine(line.End(), line.End() + new DataPoint(direction * length), col, lineWidth));
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_119 = __this->___debugLines_22;
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_120 = __this->___lineManager_8;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_121 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_122;
		L_122 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_121, NULL);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_123 = __this->___line_17;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_124;
		L_124 = VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29(L_123, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125 = V_6;
		float L_126 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127;
		L_127 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_125, L_126, NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_128;
		memset((&L_128), 0, sizeof(L_128));
		DataPoint__ctor_mA303E8A8C7EB01BA041F90BC3B4F44BB1EE68981((&L_128), L_127, /*hidden argument*/NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_129;
		L_129 = DataPoint_op_Addition_mFE99367BC6DD5C3448F857901ECEB51C05660588(L_124, L_128, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_130 = V_7;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_131;
		memset((&L_131), 0, sizeof(L_131));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_131), L_130, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		float L_132 = V_4;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_133;
		L_133 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_120, L_122, L_129, L_131, ((double)L_132), 0, NULL);
		List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_119, L_133, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
	}

IL_0387:
	{
		// DataPoint screenSize = inputManager.ScreenSizeWorld();
		GameInputManager_tA610086ECD48016FC528C227CF020823B6AE8892* L_134 = __this->___inputManager_7;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_135;
		L_135 = GameInputManager_ScreenSizeWorld_m5AF8C9B14A812962264509B25457DA8A3D57B673(L_134, NULL);
		V_1 = L_135;
		// Color borderColor = new Color(1f, .7f, .8f);
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&V_2), (1.0f), (0.699999988f), (0.800000012f), NULL);
		// float borderThickness = 0.1f;
		V_3 = (0.100000001f);
		// debugLines.Add(lineManager.CreateLine(new DataPoint(-screenSize.X, screenSize.Y), new DataPoint(-screenSize.X, -screenSize.Y), borderColor, borderThickness)); // left
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_136 = __this->___debugLines_22;
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_137 = __this->___lineManager_8;
		float L_138;
		L_138 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_139;
		L_139 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_140;
		memset((&L_140), 0, sizeof(L_140));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_140), ((-L_138)), L_139, /*hidden argument*/NULL);
		float L_141;
		L_141 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_142;
		L_142 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_143;
		memset((&L_143), 0, sizeof(L_143));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_143), ((-L_141)), ((-L_142)), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_144 = V_2;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_145;
		memset((&L_145), 0, sizeof(L_145));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_145), L_144, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		float L_146 = V_3;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_147;
		L_147 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_137, L_140, L_143, L_145, ((double)L_146), 0, NULL);
		List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_136, L_147, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		// debugLines.Add(lineManager.CreateLine(new DataPoint(screenSize.X, screenSize.Y), new DataPoint(screenSize.X, -screenSize.Y), borderColor, borderThickness)); // right
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_148 = __this->___debugLines_22;
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_149 = __this->___lineManager_8;
		float L_150;
		L_150 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_151;
		L_151 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_152;
		memset((&L_152), 0, sizeof(L_152));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_152), L_150, L_151, /*hidden argument*/NULL);
		float L_153;
		L_153 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_154;
		L_154 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_155;
		memset((&L_155), 0, sizeof(L_155));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_155), L_153, ((-L_154)), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_156 = V_2;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_157;
		memset((&L_157), 0, sizeof(L_157));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_157), L_156, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		float L_158 = V_3;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_159;
		L_159 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_149, L_152, L_155, L_157, ((double)L_158), 0, NULL);
		List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_148, L_159, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		// debugLines.Add(lineManager.CreateLine(new DataPoint(-screenSize.X, screenSize.Y), new DataPoint(screenSize.X, screenSize.Y), borderColor, borderThickness)); // top
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_160 = __this->___debugLines_22;
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_161 = __this->___lineManager_8;
		float L_162;
		L_162 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_163;
		L_163 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_164;
		memset((&L_164), 0, sizeof(L_164));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_164), ((-L_162)), L_163, /*hidden argument*/NULL);
		float L_165;
		L_165 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_166;
		L_166 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_167;
		memset((&L_167), 0, sizeof(L_167));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_167), L_165, L_166, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_168 = V_2;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_169;
		memset((&L_169), 0, sizeof(L_169));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_169), L_168, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		float L_170 = V_3;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_171;
		L_171 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_161, L_164, L_167, L_169, ((double)L_170), 0, NULL);
		List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_160, L_171, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		// debugLines.Add(lineManager.CreateLine(new DataPoint(-screenSize.X, -screenSize.Y), new DataPoint(screenSize.X, -screenSize.Y), borderColor, borderThickness)); // bottom
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_172 = __this->___debugLines_22;
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_173 = __this->___lineManager_8;
		float L_174;
		L_174 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_175;
		L_175 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_176;
		memset((&L_176), 0, sizeof(L_176));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_176), ((-L_174)), ((-L_175)), /*hidden argument*/NULL);
		float L_177;
		L_177 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&V_1), NULL);
		float L_178;
		L_178 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&V_1), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_179;
		memset((&L_179), 0, sizeof(L_179));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_179), L_177, ((-L_178)), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_180 = V_2;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_181;
		memset((&L_181), 0, sizeof(L_181));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_181), L_180, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		float L_182 = V_3;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_183;
		L_183 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(L_173, L_176, L_179, L_181, ((double)L_182), 0, NULL);
		List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_172, L_183, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
	}

IL_04cb:
	{
		// }
		return;
	}
}
// System.Void VisualCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore__ctor_m0812465D84796B51327248254940680FD4154F01 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float lineThickeningSpeedScalar = 1;
		__this->___lineThickeningSpeedScalar_14 = (1.0f);
		// public Color guideLineColor = new Color(.4f, .4f, .6f, .1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.400000006f), (0.400000006f), (0.600000024f), (0.100000001f), /*hidden argument*/NULL);
		__this->___guideLineColor_16 = L_0;
		// private List<VisualLine> debugLines = new List<VisualLine>();
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_1 = (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*)il2cpp_codegen_object_new(List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_il2cpp_TypeInfo_var);
		List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA(L_1, List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA_RuntimeMethod_var);
		__this->___debugLines_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___debugLines_22), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void VisualCore::<Start>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualCore_U3CStartU3Eb__19_0_m4F05768D99D9F622346EE86DCA3B0F8FAEE08BA8 (VisualCore_t32B78C42CEB3BF6DDB3B566C527B9728362DCC21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054B718CD4BB60A8DF9348C3268DE382FA6EED37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (challengeList != null)
		UIChallengeList_t5A7EBD7BDB7F2D063ADA0F647CC3D3E2C74732BA* L_0 = __this->___challengeList_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// challengeList.Initialize(core.ChallengeLevels);
		UIChallengeList_t5A7EBD7BDB7F2D063ADA0F647CC3D3E2C74732BA* L_2 = __this->___challengeList_12;
		GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE* L_3 = __this->___core_6;
		SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A* L_4;
		L_4 = GameCore_get_ChallengeLevels_m73AD22779476D8E5DB178FD8735A473EF5E23D05_inline(L_3, NULL);
		UIChallengeList_Initialize_mF55EA2565A5338D0A9A1747433EFF81902B8AF59(L_2, L_4, NULL);
		return;
	}

IL_0025:
	{
		// Debug.LogWarning("No challenge list was specified, and so no challenge list could be initialized!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral054B718CD4BB60A8DF9348C3268DE382FA6EED37, NULL);
		// };
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
// System.Void VisualLine::.ctor(VisualLineManager,UnityEngine.LineRenderer,DataPoint,DataPoint,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine__ctor_m82F328971B38E827D5ADE75811CE97C54176A723 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* ___0_manager, LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___1_renderer, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___2_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___3_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_color, float ___5_thickness, const RuntimeMethod* method) 
{
	{
		// public VisualLine(VisualLineManager manager, LineRenderer renderer, DataPoint start, DataPoint end, Color color, float thickness)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.manager = manager;
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_0 = ___0_manager;
		__this->___manager_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_1), (void*)L_0);
		// this.renderer = renderer;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = ___1_renderer;
		__this->___renderer_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___renderer_0), (void*)L_1);
		// this.renderer.SetPosition(0, start);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___renderer_0;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_3 = ___2_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_3, NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_2, 0, L_4, NULL);
		// this.renderer.SetPosition(1, end);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5 = __this->___renderer_0;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_6 = ___3_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_6, NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_5, 1, L_7, NULL);
		// this.renderer.startColor = color;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_8 = __this->___renderer_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___4_color;
		LineRenderer_set_startColor_mF72FAB20C09372FC8F2CBFCBD837FA02A87FBA91(L_8, L_9, NULL);
		// this.renderer.endColor = color;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_10 = __this->___renderer_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___4_color;
		LineRenderer_set_endColor_m6AF26E0174434828BC6EF1BAC1FE188084819D9D(L_10, L_11, NULL);
		// SetThickness(thickness);
		float L_12 = ___5_thickness;
		VisualLine_SetThickness_m4274BB65253E36D05953B213CE47406DE7C49ABB(__this, L_12, NULL);
		// }
		return;
	}
}
// System.Void VisualLine::SetThickness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_SetThickness_m4274BB65253E36D05953B213CE47406DE7C49ABB (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, float ___0_thickness, const RuntimeMethod* method) 
{
	{
		// if (thickness <= minWidth)
		float L_0 = ___0_thickness;
		if ((!(((float)L_0) <= ((float)(0.00999999978f)))))
		{
			goto IL_000f;
		}
	}
	{
		// thickness = minWidth;
		___0_thickness = (0.00999999978f);
	}

IL_000f:
	{
		// this.renderer.startWidth = thickness;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___renderer_0;
		float L_2 = ___0_thickness;
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_1, L_2, NULL);
		// this.renderer.endWidth = thickness;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_3 = __this->___renderer_0;
		float L_4 = ___0_thickness;
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void VisualLine::SetStart(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_SetStart_m6B677B86A5B53DAA3304E2484DDC1DDDB45F6E77 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_newPos, const RuntimeMethod* method) 
{
	{
		// this.renderer.SetPosition(0, newPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___renderer_0;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_1 = ___0_newPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_1, NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 0, L_2, NULL);
		// }
		return;
	}
}
// System.Void VisualLine::SetEnd(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_SetEnd_mBC3F4C273C49BB06D325A83EFC286CB88064F996 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_newPos, const RuntimeMethod* method) 
{
	{
		// this.renderer.SetPosition(1, newPos);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___renderer_0;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_1 = ___0_newPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_1, NULL);
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_0, 1, L_2, NULL);
		// }
		return;
	}
}
// DataPoint VisualLine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 VisualLine_Start_mF9EBF4E85DD891FAE8A8A2E8E0BC68EAEABB1559 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, const RuntimeMethod* method) 
{
	{
		// return new DataPoint(this.renderer.GetPosition(0));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___renderer_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = LineRenderer_GetPosition_m697105EEB72E687ECC0ECD9E66105F9BF2EF6C4F(L_0, 0, NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_2;
		memset((&L_2), 0, sizeof(L_2));
		DataPoint__ctor_m534F4DD5F3FF066BDE15B3E9143BFB13238DBB27((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// DataPoint VisualLine::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 VisualLine_End_mEF73B29D8426D4DF9B9CEDF684135089668F8D29 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, const RuntimeMethod* method) 
{
	{
		// return new DataPoint(this.renderer.GetPosition(1));
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___renderer_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = LineRenderer_GetPosition_m697105EEB72E687ECC0ECD9E66105F9BF2EF6C4F(L_0, 1, NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_2;
		memset((&L_2), 0, sizeof(L_2));
		DataPoint__ctor_m534F4DD5F3FF066BDE15B3E9143BFB13238DBB27((&L_2), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void VisualLine::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLine_Destroy_mB5F6E6775439AC26493DA2FC3DDC2CC51AA37F72 (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// manager.StopTrackingLine(this);
		VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* L_0 = __this->___manager_1;
		VisualLineManager_StopTrackingLine_mFCBD439D7ED9A427A6D7712F0FADBB3787D4D67A(L_0, __this, NULL);
		// GameObject.Destroy(renderer.gameObject);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1 = __this->___renderer_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// manager = null;
		__this->___manager_1 = (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___manager_1), (void*)(VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0*)NULL);
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
// System.Void VisualLineManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLineManager_Start_mE4853AD6F9821BF8CD90012A081A77D180C24583 (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral130C99166C02D48144FC27422E95839DC28860FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD78A0EC2F6E508132695B3EC0CE3ECEF7A406B26);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_1 = NULL;
	{
		// lines = new List<VisualLine>();
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_0 = (List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A*)il2cpp_codegen_object_new(List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A_il2cpp_TypeInfo_var);
		List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA(L_0, List_1__ctor_m84C142BE0A0A2B87BE87D0FB4FEF78568E76B7DA_RuntimeMethod_var);
		__this->___lines_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lines_6), (void*)L_0);
		// if(template == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___template_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0089;
		}
	}
	{
		// template = new GameObject("default line template");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, _stringLiteral130C99166C02D48144FC27422E95839DC28860FE, NULL);
		__this->___template_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___template_4), (void*)L_3);
		// LineRenderer renderer = template.AddComponent<LineRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___template_4;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_5;
		L_5 = GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056(L_4, GameObject_AddComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mF8C0D953BCBFDD5A01A09ADB67EB04F0D677A056_RuntimeMethod_var);
		// Texture2D texture = new Texture2D(1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_6, 1, 1, NULL);
		V_0 = L_6;
		// texture.SetPixel(0, 0, Color.white);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		Texture2D_SetPixel_m2CCFC5F729135D59DC4A697C2605A3FC5C8574DB(L_7, 0, 0, L_8, NULL);
		// Material material = new Material(Shader.Find("UI/Unlit/Text"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_9;
		L_9 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteralD78A0EC2F6E508132695B3EC0CE3ECEF7A406B26, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_10, L_9, NULL);
		V_1 = L_10;
		// material.SetTexture("_MainTex", texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = V_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = V_0;
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_11, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_12, NULL);
		// renderer.material = material;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = L_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = V_1;
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_13, L_14, NULL);
		// renderer.startWidth = PLAYER_LINE_MAX_WIDTH;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15 = L_13;
		LineRenderer_set_startWidth_m3899722E198D636DB216CB61C980214707069F4A(L_15, (0.209999993f), NULL);
		// renderer.endWidth = PLAYER_LINE_MAX_WIDTH;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_16 = L_15;
		LineRenderer_set_endWidth_mC7260401655C8BE1CBDFB832009295C89613F81D(L_16, (0.209999993f), NULL);
		// renderer.numCapVertices = capVertices;
		LineRenderer_set_numCapVertices_m282860FE8AD17ABE5CC07C0DB44371C1CF668E84(L_16, ((int32_t)10), NULL);
	}

IL_0089:
	{
		// template.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___template_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// VisualLine VisualLineManager::CreateLine(DataPoint,DataPoint,System.Nullable`1<UnityEngine.Color>,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_start, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___1_end, Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 ___2_color, double ___3_thickness, int32_t ___4_sortOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1AB800A1F5DCF3D9CCF4500EC52C04E3A31ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* V_0 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* V_1 = NULL;
	{
		// GameObject line = Instantiate(template);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___template_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// line.name = "line";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_2, _stringLiteralA87D8447ADA4FCBB0C1453670109D4DDFF27315D, NULL);
		// line.transform.SetParent(this.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_4, L_5, NULL);
		// line.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_3;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// LineRenderer renderer = line.GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_7;
		L_7 = GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75(L_6, GameObject_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_mE703918F1B04E115CCE78A5FF891A12648B04D75_RuntimeMethod_var);
		V_0 = L_7;
		// if(color != null)
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_inline((&___2_color), Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		// renderer.material.SetColor("_EmissionColor", color.Value);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_9 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637((&___2_color), Nullable_1_get_Value_m3FC15B40E747AA6A9F2AB10A00C46ABE84393637_RuntimeMethod_var);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_11, NULL);
		// renderer.material.GetColor("_EmissionColor");
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_12 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_12, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_13, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, NULL);
	}

IL_0065:
	{
		// renderer.sortingOrder = lines.Count + 1 + sortOffset;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_15 = V_0;
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_16 = __this->___lines_6;
		int32_t L_17;
		L_17 = List_1_get_Count_mF1AB800A1F5DCF3D9CCF4500EC52C04E3A31ADCD_inline(L_16, List_1_get_Count_mF1AB800A1F5DCF3D9CCF4500EC52C04E3A31ADCD_RuntimeMethod_var);
		int32_t L_18 = ___4_sortOffset;
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_15, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_17, 1)), L_18)), NULL);
		// VisualLine visualLine = new VisualLine(this, renderer, start, end, renderer.material.GetColor("_EmissionColor"), (float)thickness);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_19 = V_0;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_20 = ___0_start;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_21 = ___1_end;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_22 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23;
		L_23 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_22, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_23, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, NULL);
		double L_25 = ___3_thickness;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_26 = (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*)il2cpp_codegen_object_new(VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80_il2cpp_TypeInfo_var);
		VisualLine__ctor_m82F328971B38E827D5ADE75811CE97C54176A723(L_26, __this, L_19, L_20, L_21, L_24, ((float)L_25), NULL);
		V_1 = L_26;
		// lines.Add(visualLine);
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_27 = __this->___lines_6;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_28 = V_1;
		List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_inline(L_27, L_28, List_1_Add_m17A1FEBF51F5F4976891FF12145A9B45ACBB9B9E_RuntimeMethod_var);
		// return visualLine;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_29 = V_1;
		return L_29;
	}
}
// VisualLine[] VisualLineManager::CreatePlus(DataPoint,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* VisualLineManager_CreatePlus_mE4C329F5A97F8ED9D210ADC7303CFE1FDDCE7218 (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_pos, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, float ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* V_0 = NULL;
	VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* V_1 = NULL;
	{
		// VisualLine vertical = CreateLine(new DataPoint(pos.X - size / 2, pos.Y), new DataPoint(pos.X + size / 2, pos.Y), color, width);
		float L_0;
		L_0 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&___0_pos), NULL);
		float L_1 = ___2_size;
		float L_2;
		L_2 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&___0_pos), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_3;
		memset((&L_3), 0, sizeof(L_3));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_3), ((float)il2cpp_codegen_subtract(L_0, ((float)(L_1/(2.0f))))), L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&___0_pos), NULL);
		float L_5 = ___2_size;
		float L_6;
		L_6 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&___0_pos), NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_7;
		memset((&L_7), 0, sizeof(L_7));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_7), ((float)il2cpp_codegen_add(L_4, ((float)(L_5/(2.0f))))), L_6, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___1_color;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_9), L_8, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_10;
		L_10 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(__this, L_3, L_7, L_9, (0.02500000037252903), 0, NULL);
		V_0 = L_10;
		// VisualLine horizontal = CreateLine(new DataPoint(pos.X, pos.Y - size / 2), new DataPoint(pos.X, pos.Y + size / 2), color, width);
		float L_11;
		L_11 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&___0_pos), NULL);
		float L_12;
		L_12 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&___0_pos), NULL);
		float L_13 = ___2_size;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_14;
		memset((&L_14), 0, sizeof(L_14));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_14), L_11, ((float)il2cpp_codegen_subtract(L_12, ((float)(L_13/(2.0f))))), /*hidden argument*/NULL);
		float L_15;
		L_15 = DataPoint_get_X_m424643F3F4809014CB3FCF5B476EBAC761856B2E((&___0_pos), NULL);
		float L_16;
		L_16 = DataPoint_get_Y_mF701DB5EC228DD702553A1D9A69C9593B209FB09((&___0_pos), NULL);
		float L_17 = ___2_size;
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_18;
		memset((&L_18), 0, sizeof(L_18));
		DataPoint__ctor_mC938541DC368E2D8C87C29D7A4C7A6D71A8AE281((&L_18), L_15, ((float)il2cpp_codegen_add(L_16, ((float)(L_17/(2.0f))))), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___1_color;
		Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3((&L_20), L_19, /*hidden argument*/Nullable_1__ctor_m1479132C827AFD1E484F6E6D749F74E90BB687D3_RuntimeMethod_var);
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_21;
		L_21 = VisualLineManager_CreateLine_m90E0D081C965D61BFC3AB1F9B3A4A92F16EDE55D(__this, L_14, L_18, L_20, (0.02500000037252903), 0, NULL);
		V_1 = L_21;
		// return new VisualLine[] { vertical, horizontal };
		VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* L_22 = (VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E*)(VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E*)SZArrayNew(VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E_il2cpp_TypeInfo_var, (uint32_t)2);
		VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* L_23 = L_22;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_24 = V_0;
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*)L_24);
		VisualLineU5BU5D_t65170F6EBD989769778CEB4A2FE14AD7EB7DD43E* L_25 = L_23;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_26 = V_1;
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80*)L_26);
		return L_25;
	}
}
// System.Void VisualLineManager::StopTrackingLine(VisualLine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLineManager_StopTrackingLine_mFCBD439D7ED9A427A6D7712F0FADBB3787D4D67A (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* ___0_line, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m6C74CCA9240400A10DF828C4AB074C1154D1CA7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lines.Remove(line);
		List_1_tD73F5CAEF779D916896F0F5662D15159BA7EEB8A* L_0 = __this->___lines_6;
		VisualLine_t6937D3D16D1BA67CDE9F96BC2B6CFA12D33ECD80* L_1 = ___0_line;
		bool L_2;
		L_2 = List_1_Remove_m6C74CCA9240400A10DF828C4AB074C1154D1CA7B(L_0, L_1, List_1_Remove_m6C74CCA9240400A10DF828C4AB074C1154D1CA7B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VisualLineManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualLineManager__ctor_mAC8C7F5266EA3B037EE8D2EE2F3C74B19227A471 (VisualLineManager_t22E7E2C187E14D93EBD729D6DFCE6B16F85285D0* __this, const RuntimeMethod* method) 
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
// System.Void VisualObjectFadeInDirection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualObjectFadeInDirection_Start_mF18DB39317302259DE22093E85EBC282106EFEAE (VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timeSoFar = fadeTime;
		float L_0 = __this->___fadeTime_5;
		__this->___timeSoFar_8 = L_0;
		// startPos = this.gameObject.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___startPos_9 = L_3;
		// SpriteRenderer renderer = this.GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		// Color color = renderer.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_5, NULL);
		V_0 = L_6;
		// color.a = 0;
		(&V_0)->___a_3 = (0.0f);
		// renderer.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = V_0;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void VisualObjectFadeInDirection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualObjectFadeInDirection_Update_m79CC9289FF82DA8DD5187442166711776E88D49C (VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (timeSoFar < fadeTime)
		float L_0 = __this->___timeSoFar_8;
		float L_1 = __this->___fadeTime_5;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_006e;
		}
	}
	{
		// this.transform.position += direction * Time.deltaTime * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___direction_4;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		float L_8 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_9, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_10, NULL);
		// SpriteRenderer renderer = this.GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11;
		L_11 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		// Color color = renderer.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = L_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_12, NULL);
		V_0 = L_13;
		// color.a = 1 - timeSoFar / fadeTime;
		float L_14 = __this->___timeSoFar_8;
		float L_15 = __this->___fadeTime_5;
		(&V_0)->___a_3 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_14/L_15))));
		// renderer.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_0;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_12, L_16, NULL);
		goto IL_00c3;
	}

IL_006e:
	{
		// else if (timeSoFar > delayBeforeReset + fadeTime)
		float L_17 = __this->___timeSoFar_8;
		float L_18 = __this->___delayBeforeReset_6;
		float L_19 = __this->___fadeTime_5;
		if ((!(((float)L_17) > ((float)((float)il2cpp_codegen_add(L_18, L_19))))))
		{
			goto IL_00c3;
		}
	}
	{
		// this.gameObject.transform.position = startPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___startPos_9;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_22, NULL);
		// SpriteRenderer renderer = this.GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23;
		L_23 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		// Color color = renderer.color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = L_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_24, NULL);
		V_1 = L_25;
		// color.a = 1;
		(&V_1)->___a_3 = (1.0f);
		// renderer.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = V_1;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_24, L_26, NULL);
		// timeSoFar = 0;
		__this->___timeSoFar_8 = (0.0f);
	}

IL_00c3:
	{
		// timeSoFar += Time.deltaTime;
		float L_27 = __this->___timeSoFar_8;
		float L_28;
		L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeSoFar_8 = ((float)il2cpp_codegen_add(L_27, L_28));
		// }
		return;
	}
}
// System.Void VisualObjectFadeInDirection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualObjectFadeInDirection__ctor_mACCEE980446BE692654A88EFD21B9CC84F75FD02 (VisualObjectFadeInDirection_tF3FFB7949EE465537F1C129F0503F039D512C99C* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 direction = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___direction_4 = L_0;
		// public float fadeTime = 1f;
		__this->___fadeTime_5 = (1.0f);
		// public float delayBeforeReset = .5f;
		__this->___delayBeforeReset_6 = (0.5f);
		// public float speed = 3;
		__this->___speed_7 = (3.0f);
		// private Vector3 startPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___startPos_9 = L_1;
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
// System.Void VisualParticleManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_Start_m288CA1F791D3666717EBB0FC71B671789976101B (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualParticleManager_U3CStartU3Eb__6_0_m04DA52189AFCBCB94030DAC8652F0B6B03D7257F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualParticleManager_U3CStartU3Eb__6_1_m95BC28356A88E658072853EFD4094604731FBC0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedOnStart = new List<ParticleSystem>();
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0 = (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*)il2cpp_codegen_object_new(List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var);
		List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651(L_0, List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var);
		__this->___spawnedOnStart_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedOnStart_8), (void*)L_0);
		// bubbleExplosionParticles = new List<ParticleSystem>();
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_1 = (List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D*)il2cpp_codegen_object_new(List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D_il2cpp_TypeInfo_var);
		List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651(L_1, List_1__ctor_m39B562589EB31E915F2D6EFE2A0F6DA287F65651_RuntimeMethod_var);
		__this->___bubbleExplosionParticles_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bubbleExplosionParticles_9), (void*)L_1);
		// if (events)
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_2 = __this->___events_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		// events.OnShowParticlesToggle += (isOn) => { HandleStartupSystems(isOn); };
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_4 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_5 = L_4;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = L_5->___OnShowParticlesToggle_15;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)il2cpp_codegen_object_new(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		Action_1__ctor_mA8C3AC97D1F076EA5D1D0C10CEE6BD3E94711501(L_7, __this, (intptr_t)((void*)VisualParticleManager_U3CStartU3Eb__6_0_m04DA52189AFCBCB94030DAC8652F0B6B03D7257F_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_6, L_7, NULL);
		L_5->___OnShowParticlesToggle_15 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_8, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___OnShowParticlesToggle_15), (void*)((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_8, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var)));
		// events.OnGameInitialized += () => { HandleStartupSystems(data.GetDataGeneral().showParticles); };
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_9 = __this->___events_5;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_10 = L_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = L_10->___OnGameInitialized_22;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, __this, (intptr_t)((void*)VisualParticleManager_U3CStartU3Eb__6_1_m95BC28356A88E658072853EFD4094604731FBC0A_RuntimeMethod_var), NULL);
		Delegate_t* L_13;
		L_13 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_11, L_12, NULL);
		L_10->___OnGameInitialized_22 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_13, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___OnGameInitialized_22), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_13, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void VisualParticleManager::HandleStartupSystems(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_HandleStartupSystems_m4E1E2153859222FF43D55904F03662D9F26147DA (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, bool ___0_isDoingSpawn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m536F099195DA83F77FC8BC80882B17220DE97606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F V_0;
	memset((&V_0), 0, sizeof(V_0));
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_1 = NULL;
	{
		// foreach (ParticleSystem sys in spawnedOnStart)
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0 = __this->___spawnedOnStart_8;
		Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F L_1;
		L_1 = List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C(L_0, List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422((&V_0), Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach (ParticleSystem sys in spawnedOnStart)
				ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2;
				L_2 = Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_inline((&V_0), Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_RuntimeMethod_var);
				// Destroy(sys.gameObject);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
			}

IL_001f_1:
			{
				// foreach (ParticleSystem sys in spawnedOnStart)
				bool L_4;
				L_4 = Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA((&V_0), Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// spawnedOnStart.Clear();
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_5 = __this->___spawnedOnStart_8;
		List_1_Clear_m536F099195DA83F77FC8BC80882B17220DE97606_inline(L_5, List_1_Clear_m536F099195DA83F77FC8BC80882B17220DE97606_RuntimeMethod_var);
		// if (isDoingSpawn)
		bool L_6 = ___0_isDoingSpawn;
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		// foreach (ParticleSystem sys in spawnOnStart)
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_7 = __this->___spawnOnStart_7;
		Enumerator_t53C9ABCF49214576DFC434E32E4CDBA95E06F46F L_8;
		L_8 = List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C(L_7, List_1_GetEnumerator_m19808ADC197B0B09F6EA267D908659788EFDBB5C_RuntimeMethod_var);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0083:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422((&V_0), Enumerator_Dispose_mEA141407B9C3872C2D88F3752A759F218F401422_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0078_1;
			}

IL_0054_1:
			{
				// foreach (ParticleSystem sys in spawnOnStart)
				ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9;
				L_9 = Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_inline((&V_0), Enumerator_get_Current_m2EE19BDB785EF06929DF6AD052451DF0C76A6818_RuntimeMethod_var);
				// ParticleSystem ps = Instantiate(sys, this.gameObject.transform);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
				L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12;
				L_12 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1(L_9, L_11, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1_RuntimeMethod_var);
				V_1 = L_12;
				// spawnedOnStart.Add(ps);
				List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_13 = __this->___spawnedOnStart_8;
				ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_14 = V_1;
				List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_inline(L_13, L_14, List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var);
			}

IL_0078_1:
			{
				// foreach (ParticleSystem sys in spawnOnStart)
				bool L_15;
				L_15 = Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA((&V_0), Enumerator_MoveNext_m11596AF3E5DFDE8232421AB369156A95E59816EA_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_0091;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void VisualParticleManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_Update_mDADA5960C332EB7AA00137DC08C3DB40EAF885D5 (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mABBDE8841E905F62EFA84CA308BA4C2967500A6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for(int i = bubbleExplosionParticles.Count - 1; i >= 0; --i)
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_0 = __this->___bubbleExplosionParticles_9;
		int32_t L_1;
		L_1 = List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_inline(L_0, List_1_get_Count_m71FB3A4C8F55F56A35BD064C16F88D2ED9488B01_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0049;
	}

IL_0010:
	{
		// if(!bubbleExplosionParticles[i].IsAlive())
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_2 = __this->___bubbleExplosionParticles_9;
		int32_t L_3 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4;
		L_4 = List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD(L_2, L_3, List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		bool L_5;
		L_5 = ParticleSystem_IsAlive_mF1B0F10ED9EDCB5D971471DDEB0C55C9638FAE56(L_4, NULL);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		// Destroy(bubbleExplosionParticles[i].gameObject);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_6 = __this->___bubbleExplosionParticles_9;
		int32_t L_7 = V_0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8;
		L_8 = List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD(L_6, L_7, List_1_get_Item_mB5CA6E80CC64D0096BB1EA369FF8A8B8BB509EDD_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_9, NULL);
		// bubbleExplosionParticles.RemoveAt(i);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_10 = __this->___bubbleExplosionParticles_9;
		int32_t L_11 = V_0;
		List_1_RemoveAt_mABBDE8841E905F62EFA84CA308BA4C2967500A6A(L_10, L_11, List_1_RemoveAt_mABBDE8841E905F62EFA84CA308BA4C2967500A6A_RuntimeMethod_var);
	}

IL_0045:
	{
		// for(int i = bubbleExplosionParticles.Count - 1; i >= 0; --i)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0049:
	{
		// for(int i = bubbleExplosionParticles.Count - 1; i >= 0; --i)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VisualParticleManager::CreateBubbleExplosion(DataPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_CreateBubbleExplosion_mFC791FDA5A82A60971DA85C2C9B4C32950FA1947 (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_location, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_0 = NULL;
	{
		// if (data.GetDataGeneral().showParticles)
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->___data_4;
		DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985 L_1;
		L_1 = Data_GetDataGeneral_m5C3934064E0A0A00B204C3DC8B4CE1BFC82DE7A6(L_0, NULL);
		bool L_2 = L_1.___showParticles_8;
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// ParticleSystem obj = Instantiate(bubbleExplosionTemplate, this.gameObject.transform);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = __this->___bubbleExplosionTemplate_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6;
		L_6 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1(L_3, L_5, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mAA70A04D6D991AB6FBE63C871AB5ECA7F74B99B1_RuntimeMethod_var);
		V_0 = L_6;
		// obj.transform.position = location;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_9 = ___0_location;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_9, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_10, NULL);
		// bubbleExplosionParticles.Add(obj);
		List_1_t5934636E608A709528BA5BBDEA6C2462B01D3B7D* L_11 = __this->___bubbleExplosionParticles_9;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = V_0;
		List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_inline(L_11, L_12, List_1_Add_m732C0B8B5388A5B81C39A2A8969D0C160692A070_RuntimeMethod_var);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void VisualParticleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager__ctor_mFC7542DFC7DB95B4CEE24E97CC4D64C70AFBA9CE (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void VisualParticleManager::<Start>b__6_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_U3CStartU3Eb__6_0_m04DA52189AFCBCB94030DAC8652F0B6B03D7257F (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, bool ___0_isOn, const RuntimeMethod* method) 
{
	{
		// events.OnShowParticlesToggle += (isOn) => { HandleStartupSystems(isOn); };
		bool L_0 = ___0_isOn;
		VisualParticleManager_HandleStartupSystems_m4E1E2153859222FF43D55904F03662D9F26147DA(__this, L_0, NULL);
		// events.OnShowParticlesToggle += (isOn) => { HandleStartupSystems(isOn); };
		return;
	}
}
// System.Void VisualParticleManager::<Start>b__6_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualParticleManager_U3CStartU3Eb__6_1_m95BC28356A88E658072853EFD4094604731FBC0A (VisualParticleManager_t74511E4C05D34A69BD7FCCB2EDD16F708EFE8685* __this, const RuntimeMethod* method) 
{
	{
		// events.OnGameInitialized += () => { HandleStartupSystems(data.GetDataGeneral().showParticles); };
		Data_tD68044ADE8612868F3B424B065920F50C65B5CCE* L_0 = __this->___data_4;
		DataGeneral_t14D48393B0F9E25F108D324EFFCB65047DEB8985 L_1;
		L_1 = Data_GetDataGeneral_m5C3934064E0A0A00B204C3DC8B4CE1BFC82DE7A6(L_0, NULL);
		bool L_2 = L_1.___showParticles_8;
		VisualParticleManager_HandleStartupSystems_m4E1E2153859222FF43D55904F03662D9F26147DA(__this, L_2, NULL);
		// events.OnGameInitialized += () => { HandleStartupSystems(data.GetDataGeneral().showParticles); };
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
// System.Void VisualRemoveBubbleOnMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualRemoveBubbleOnMenu_Start_m6FDC4B9016D12E40C773017E36FAE39767191466 (VisualRemoveBubbleOnMenu_t93C2EDDE8B084F60C9E2C445941F99E10B365268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualRemoveBubbleOnMenu_StartShrinkOut_mD4370E0B1850027CBEECF22BC2A0BDD26B8F52E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE227BECEC45BE9D9DE03632EDED18D82AD0B1AD4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isShrinking = false;
		__this->___isShrinking_6 = (bool)0;
		// if (events != null)
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_0 = __this->___events_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// events.OnGameStateChangeRequest += StartShrinkOut;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_2 = __this->___events_4;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_3 = L_2;
		Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D* L_4 = L_3->___OnGameStateChangeRequest_7;
		Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D* L_5 = (Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D*)il2cpp_codegen_object_new(Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var);
		Action_2__ctor_m188F6CB09FFA2117D02036A177835102ED522B2F(L_5, __this, (intptr_t)((void*)VisualRemoveBubbleOnMenu_StartShrinkOut_mD4370E0B1850027CBEECF22BC2A0BDD26B8F52E8_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		L_3->___OnGameStateChangeRequest_7 = ((Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D*)Castclass((RuntimeObject*)L_6, Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___OnGameStateChangeRequest_7), (void*)((Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D*)Castclass((RuntimeObject*)L_6, Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var)));
		goto IL_0054;
	}

IL_003e:
	{
		// name = $"[No Events] {name}";
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(__this, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE227BECEC45BE9D9DE03632EDED18D82AD0B1AD4, L_7, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, L_8, NULL);
	}

IL_0054:
	{
		// timeout = Random.Range(2f, 5f);
		float L_9;
		L_9 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((2.0f), (5.0f), NULL);
		__this->___timeout_5 = L_9;
		// size = GameCore.bubbleRadiusStandard * 2;
		il2cpp_codegen_runtime_class_init_inline(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var);
		float L_10 = ((GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_StaticFields*)il2cpp_codegen_static_fields_for(GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE_il2cpp_TypeInfo_var))->___bubbleRadiusStandard_9;
		__this->___size_7 = ((float)il2cpp_codegen_multiply(L_10, (2.0f)));
		// }
		return;
	}
}
// System.Void VisualRemoveBubbleOnMenu::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualRemoveBubbleOnMenu_OnDestroy_m747B8A92FAE25E70C2A85A6F18C016EBAFBD6187 (VisualRemoveBubbleOnMenu_t93C2EDDE8B084F60C9E2C445941F99E10B365268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualRemoveBubbleOnMenu_StartShrinkOut_mD4370E0B1850027CBEECF22BC2A0BDD26B8F52E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (events != null)
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_0 = __this->___events_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		// events.OnGameStateChangeRequest -= StartShrinkOut;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_2 = __this->___events_4;
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_3 = L_2;
		Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D* L_4 = L_3->___OnGameStateChangeRequest_7;
		Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D* L_5 = (Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D*)il2cpp_codegen_object_new(Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var);
		Action_2__ctor_m188F6CB09FFA2117D02036A177835102ED522B2F(L_5, __this, (intptr_t)((void*)VisualRemoveBubbleOnMenu_StartShrinkOut_mD4370E0B1850027CBEECF22BC2A0BDD26B8F52E8_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		L_3->___OnGameStateChangeRequest_7 = ((Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D*)Castclass((RuntimeObject*)L_6, Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___OnGameStateChangeRequest_7), (void*)((Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D*)Castclass((RuntimeObject*)L_6, Action_2_tA2A3DE53936F5FE69DA24555A82F5C0AEBC7577D_il2cpp_TypeInfo_var)));
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VisualRemoveBubbleOnMenu::StartShrinkOut(GameState,GameMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualRemoveBubbleOnMenu_StartShrinkOut_mD4370E0B1850027CBEECF22BC2A0BDD26B8F52E8 (VisualRemoveBubbleOnMenu_t93C2EDDE8B084F60C9E2C445941F99E10B365268* __this, int32_t ___0_state, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		// if(state == GameState.Startup || state == GameState.PickChallenge || state == GameState.Extras)
		int32_t L_0 = ___0_state;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___0_state;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_2 = ___0_state;
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0013;
		}
	}

IL_000b:
	{
		// isShrinking = true;
		__this->___isShrinking_6 = (bool)1;
		// return;
		return;
	}

IL_0013:
	{
		// return;
		return;
	}
}
// System.Void VisualRemoveBubbleOnMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualRemoveBubbleOnMenu_Update_m922AE7A49F5C736F911B03F5B96AEE442545E5E1 (VisualRemoveBubbleOnMenu_t93C2EDDE8B084F60C9E2C445941F99E10B365268* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* G_B6_0 = NULL;
	Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* G_B5_0 = NULL;
	{
		// if(isShrinking)
		bool L_0 = __this->___isShrinking_6;
		if (!L_0)
		{
			goto IL_00a4;
		}
	}
	{
		// size -= Time.deltaTime * timeout;
		float L_1 = __this->___size_7;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___timeout_5;
		__this->___size_7 = ((float)il2cpp_codegen_subtract(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// if (size > 0)
		float L_4 = __this->___size_7;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		// this.gameObject.transform.localScale = new Vector3(size, size, size);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		float L_7 = __this->___size_7;
		float L_8 = __this->___size_7;
		float L_9 = __this->___size_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_10, NULL);
		return;
	}

IL_0059:
	{
		// isShrinking = false;
		__this->___isShrinking_6 = (bool)0;
		// if (events != null)
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_11 = __this->___events_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0099;
		}
	}
	{
		// events.OnBubbleDestroyed?.Invoke(new DataPoint(gameObject.transform.position));
		Events_t7187FDDF89D0C9A7BB9FD5B7517B878D7733F82F* L_13 = __this->___events_4;
		Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* L_14 = L_13->___OnBubbleDestroyed_13;
		Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_007f;
		}
	}
	{
		goto IL_0099;
	}

IL_007f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_19;
		memset((&L_19), 0, sizeof(L_19));
		DataPoint__ctor_m534F4DD5F3FF066BDE15B3E9143BFB13238DBB27((&L_19), L_18, /*hidden argument*/NULL);
		Action_1_Invoke_mDE6F36A414305FAFE168F64D7F6C755B9091AF7F_inline(G_B6_0, L_19, NULL);
	}

IL_0099:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_20, NULL);
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void VisualRemoveBubbleOnMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualRemoveBubbleOnMenu__ctor_mB1270A99D9BFA897CCE70912C836266A686A3195 (VisualRemoveBubbleOnMenu_t93C2EDDE8B084F60C9E2C445941F99E10B365268* __this, const RuntimeMethod* method) 
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
// System.Void VisualRotateOnYAxis::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualRotateOnYAxis_Update_mE126108B8FC2E20439FD21768E5894D605877EBA (VisualRotateOnYAxis_tC090CF80195FCCB6D4CC00747E92DB9571F76919* __this, const RuntimeMethod* method) 
{
	{
		// this.transform.Rotate(new Vector3(0, 1, 0), rotateAmount * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		float L_2 = __this->___rotateAmount_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void VisualRotateOnYAxis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualRotateOnYAxis__ctor_mB0650B4A79B78DBDC42E02D69D046E7334EA2D34 (VisualRotateOnYAxis_tC090CF80195FCCB6D4CC00747E92DB9571F76919* __this, const RuntimeMethod* method) 
{
	{
		// public float rotateAmount = 3f;
		__this->___rotateAmount_4 = (3.0f);
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
// System.Void VisualScoreTextFeedback::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualScoreTextFeedback_Start_m4D55DA9A727CED71EDFDDC9FD7C48A663F5AAD01 (VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// createdText = new List<TMPro.TextMeshProUGUI>();
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_0 = (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*)il2cpp_codegen_object_new(List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var);
		List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7(L_0, List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var);
		__this->___createdText_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___createdText_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void VisualScoreTextFeedback::CreateText(DataPoint,System.String,TextType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualScoreTextFeedback_CreateText_m64EA16C3BE42D8A06C8C9B8E89C4B3A320ABB1DA (VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_position, String_t* ___1_value, int32_t ___2_textType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m168035BE450481E2656BD5DE5CBB4CB4D5942DC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_0 = NULL;
	{
		// TextMeshProUGUI visual = Instantiate(textScoreVisual, canvastarget.transform);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___textScoreVisual_5;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->___canvastarget_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3;
		L_3 = Object_Instantiate_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m168035BE450481E2656BD5DE5CBB4CB4D5942DC3(L_0, L_2, Object_Instantiate_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m168035BE450481E2656BD5DE5CBB4CB4D5942DC3_RuntimeMethod_var);
		V_0 = L_3;
		// visual.transform.position = position;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8(L_4, NULL);
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_6 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = DataPoint_op_Implicit_mC1AB9D97317B39F6C85F33DC48AC5994F21C8D9A(L_6, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// visual.text = value;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = V_0;
		String_t* L_9 = ___1_value;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_9);
		int32_t L_10 = ___2_textType;
		if (!L_10)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_11 = ___2_textType;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0052;
	}

IL_0038:
	{
		// visual.color = scoreAddition;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_12 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___scoreAddition_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// break;
		goto IL_0052;
	}

IL_0046:
	{
		// visual.color = scoreAdditionBonus;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = __this->___scoreAdditionBonus_8;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_15);
	}

IL_0052:
	{
		// createdText.Add(visual);
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_16 = __this->___createdText_9;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = V_0;
		List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_inline(L_16, L_17, List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VisualScoreTextFeedback::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualScoreTextFeedback_Update_mC2767BDF4836E1D6EDB1B73C819EDA13FCBA42A0 (VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF0635EDF1E6422687698F58FA6B12AFCC8404F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEE19E65ECF05A0F2CAB3A9F2A0B57914142598B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m23C9CCF2C730723E1D85E6C0646C146045FE191C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC1B4EE6B440F395BC55510FD571F0C31B2A03FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m97732D99D2140AF62B1771030299384748A18718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* V_0 = NULL;
	Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A V_1;
	memset((&V_1), 0, sizeof(V_1));
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_5 = NULL;
	{
		// List<TextMeshProUGUI> expired = new List<TextMeshProUGUI>();
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_0 = (List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08*)il2cpp_codegen_object_new(List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08_il2cpp_TypeInfo_var);
		List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7(L_0, List_1__ctor_m950D65E4817411FDEC1D5FD2D0877D3DC45009B7_RuntimeMethod_var);
		V_0 = L_0;
		// foreach(TextMeshProUGUI textVisual in createdText)
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_1 = __this->___createdText_9;
		Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A L_2;
		L_2 = List_1_GetEnumerator_mC1B4EE6B440F395BC55510FD571F0C31B2A03FFE(L_1, List_1_GetEnumerator_mC1B4EE6B440F395BC55510FD571F0C31B2A03FFE_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF0635EDF1E6422687698F58FA6B12AFCC8404F0E((&V_1), Enumerator_Dispose_mF0635EDF1E6422687698F58FA6B12AFCC8404F0E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00b2_1;
			}

IL_0017_1:
			{
				// foreach(TextMeshProUGUI textVisual in createdText)
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3;
				L_3 = Enumerator_get_Current_m23C9CCF2C730723E1D85E6C0646C146045FE191C_inline((&V_1), Enumerator_get_Current_m23C9CCF2C730723E1D85E6C0646C146045FE191C_RuntimeMethod_var);
				V_2 = L_3;
				// Vector3 pos = textVisual.transform.position;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = V_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
				L_5 = TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8(L_4, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
				L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
				V_3 = L_6;
				// textVisual.transform.position = new Vector3(pos.x, pos.y + 10f * Time.deltaTime, pos.z);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = V_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
				L_8 = TMP_Text_get_transform_m6BD41E08BFCFCE722DFCE4627626AD60CA99CCA8(L_7, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_3;
				float L_10 = L_9.___x_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_3;
				float L_12 = L_11.___y_3;
				float L_13;
				L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_3;
				float L_15 = L_14.___z_4;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
				memset((&L_16), 0, sizeof(L_16));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_10, ((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply((10.0f), L_13)))), L_15, /*hidden argument*/NULL);
				Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_16, NULL);
				// Color col = textVisual.color;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = V_2;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
				L_18 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_17);
				V_4 = L_18;
				// textVisual.color = new Color(col.r, col.g, col.b, col.a - .5f * Time.deltaTime);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_19 = V_2;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = V_4;
				float L_21 = L_20.___r_0;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_4;
				float L_23 = L_22.___g_1;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = V_4;
				float L_25 = L_24.___b_2;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = V_4;
				float L_27 = L_26.___a_3;
				float L_28;
				L_28 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
				memset((&L_29), 0, sizeof(L_29));
				Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_29), L_21, L_23, L_25, ((float)il2cpp_codegen_subtract(L_27, ((float)il2cpp_codegen_multiply((0.5f), L_28)))), /*hidden argument*/NULL);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_29);
				// if (textVisual.color.a < 0.01)
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = V_2;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
				L_31 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_30);
				float L_32 = L_31.___a_3;
				if ((!(((double)((double)L_32)) < ((double)(0.01)))))
				{
					goto IL_00b2_1;
				}
			}
			{
				// expired.Add(textVisual);
				List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_33 = V_0;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = V_2;
				List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_inline(L_33, L_34, List_1_Add_m22EC292BA9950FBC818E8774B907D64CD67C1680_RuntimeMethod_var);
			}

IL_00b2_1:
			{
				// foreach(TextMeshProUGUI textVisual in createdText)
				bool L_35;
				L_35 = Enumerator_MoveNext_mEE19E65ECF05A0F2CAB3A9F2A0B57914142598B4((&V_1), Enumerator_MoveNext_mEE19E65ECF05A0F2CAB3A9F2A0B57914142598B4_RuntimeMethod_var);
				if (L_35)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_00ce;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ce:
	{
		// foreach(TextMeshProUGUI old in expired)
		List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_36 = V_0;
		Enumerator_tE49887B9DD62A0A5FF58A47D7278F70704F7255A L_37;
		L_37 = List_1_GetEnumerator_mC1B4EE6B440F395BC55510FD571F0C31B2A03FFE(L_36, List_1_GetEnumerator_mC1B4EE6B440F395BC55510FD571F0C31B2A03FFE_RuntimeMethod_var);
		V_1 = L_37;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0105:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF0635EDF1E6422687698F58FA6B12AFCC8404F0E((&V_1), Enumerator_Dispose_mF0635EDF1E6422687698F58FA6B12AFCC8404F0E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00fa_1;
			}

IL_00d7_1:
			{
				// foreach(TextMeshProUGUI old in expired)
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_38;
				L_38 = Enumerator_get_Current_m23C9CCF2C730723E1D85E6C0646C146045FE191C_inline((&V_1), Enumerator_get_Current_m23C9CCF2C730723E1D85E6C0646C146045FE191C_RuntimeMethod_var);
				V_5 = L_38;
				// createdText.Remove(old);
				List_1_tA45AF46ADAFAFE4A5AB3C1F2504647F7CF98AD08* L_39 = __this->___createdText_9;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = V_5;
				bool L_41;
				L_41 = List_1_Remove_m97732D99D2140AF62B1771030299384748A18718(L_39, L_40, List_1_Remove_m97732D99D2140AF62B1771030299384748A18718_RuntimeMethod_var);
				// Destroy(old.gameObject);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_42 = V_5;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
				L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_43, NULL);
			}

IL_00fa_1:
			{
				// foreach(TextMeshProUGUI old in expired)
				bool L_44;
				L_44 = Enumerator_MoveNext_mEE19E65ECF05A0F2CAB3A9F2A0B57914142598B4((&V_1), Enumerator_MoveNext_mEE19E65ECF05A0F2CAB3A9F2A0B57914142598B4_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_00d7_1;
				}
			}
			{
				goto IL_0113;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void VisualScoreTextFeedback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualScoreTextFeedback__ctor_m084031991BD974258D5EA0183A24605D917751FA (VisualScoreTextFeedback_t8459963E50507282A1A091F2AE0A4882302E71C7* __this, const RuntimeMethod* method) 
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_HSVToRGB_m1E66966AAB74D56DB4D339B65E60E2AF435C8105_inline (float ___0_H, float ___1_S, float ___2_V, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_H;
		float L_1 = ___1_S;
		float L_2 = ___2_V;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_HSVToRGB_m8FA653F8C22366CB1AA90891822B889C59162AAF(L_0, L_1, L_2, (bool)1, NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_a;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A* GameCore_get_ChallengeLevels_m73AD22779476D8E5DB178FD8735A473EF5E23D05_inline (GameCore_tB3853EAB371610C21D9EAD6D5C0210AF23D3EDEE* __this, const RuntimeMethod* method) 
{
	{
		// return levels;
		SOChallenges_tD8B1FE39CF332A189EA979E7DD801B0DFA3AE25A* L_0 = __this->___levels_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Enumerator_get_Current_mCDCEFA7FB8584EC39660FF5780396B444BD1D499_gshared_inline (Enumerator_tAA15624A6F47075A68AEE71A07773FB61E2E594D* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_0 = (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
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
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Tuple_2_get_Item1_m699A08B8F943EEA9F68419671D746CEAFEC3273C_gshared_inline (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_0 = (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 Tuple_2_get_Item2_m431D291804E1BA5140045C1875564D1D99E91D08_gshared_inline (Tuple_2_t7967452217CE0364D3005934832D88EB08EEEE5A* __this, const RuntimeMethod* method) 
{
	{
		DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 L_0 = (DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mFAF0B4EEA878E596C80258FE3BDA57CEF40C8D7F_gshared_inline (Nullable_1_tEE83D90B507D40B6C58B5EEF5B9D44D377B44F11* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDE6F36A414305FAFE168F64D7F6C755B9091AF7F_gshared_inline (Action_1_t1FA9B49D3FA93FBDD50EE89196008DDE3E29FF4A* __this, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DataPoint_t755A90AB58EB5396E4C37C7186E222B3BD6CE367, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
