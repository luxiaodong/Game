using XLua;
using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using Game;

public static class LuaExportConfig
{
    [CSharpCallLua]
    private static List<Type> list1 = new List<Type>()
    {
        typeof(UnityEngine.Events.UnityAction<UnityEngine.Vector2>),
    };

    [LuaCallCSharp]
    private static List<Type> list2 = new List<Type>()
    {
        //System
        // typeof(RuntimeType),

        //Game
        typeof(CAnimationEvent),
        typeof(CCustomUI),
        typeof(CDestroy),
        typeof(CNonRenderImage),
        typeof(CPhysics),
        typeof(CRender),
        typeof(CSceneLoad),
        typeof(CTouch),
        typeof(CUpdate),
        typeof(GDownload),
        typeof(GFileUtils),
        typeof(GHttp),
        typeof(GLuaBehaviour),
        typeof(GNativeBridge),
        typeof(GObjectPools),
        typeof(GResource),
        typeof(GScheduler),
        typeof(GXLuaManager),
        typeof(GZipUtils),
        typeof(Timer),

        //UnityEngine
        typeof(UnityEngine.Animation),
        typeof(UnityEngine.AnimationClip),
        typeof(UnityEngine.AnimationEvent),
        typeof(UnityEngine.Animator),
        typeof(UnityEngine.AnimatorClipInfo),
        typeof(UnityEngine.AnimatorStateInfo),
        typeof(UnityEngine.AnimatorTransitionInfo),
        typeof(UnityEngine.Application),
        typeof(UnityEngine.AssetBundle),
        typeof(UnityEngine.AssetBundleCreateRequest),
        typeof(UnityEngine.AssetBundleRequest),
        typeof(UnityEngine.AsyncOperation),
        typeof(UnityEngine.AudioListener),
        typeof(UnityEngine.AudioSource),
        typeof(UnityEngine.Camera),
        typeof(UnityEngine.CameraClearFlags),
        typeof(UnityEngine.Canvas),
        typeof(UnityEngine.CanvasRenderer),
        typeof(UnityEngine.Color),
        typeof(UnityEngine.Color32),
        typeof(UnityEngine.CombineInstance),
        typeof(UnityEngine.Component),
        typeof(UnityEngine.Debug),
        typeof(UnityEngine.DepthTextureMode),
        typeof(UnityEngine.Events.UnityEvent),
        typeof(UnityEngine.Events.UnityEventBase),
        typeof(UnityEngine.EventSystems.ExecuteEvents),
        typeof(UnityEngine.EventSystems.RaycastResult),
        typeof(UnityEngine.GameObject),
        typeof(UnityEngine.Graphics),
        typeof(UnityEngine.Input),
        typeof(UnityEngine.KeyCode),
        typeof(UnityEngine.Material),
        typeof(UnityEngine.MaterialPropertyBlock),
        typeof(UnityEngine.Mathf),
        typeof(UnityEngine.Matrix4x4),
        typeof(UnityEngine.Mesh),
        typeof(UnityEngine.MeshCollider),
        typeof(UnityEngine.MeshFilter),
        typeof(UnityEngine.MeshRenderer),
        typeof(UnityEngine.Object),
        typeof(UnityEngine.ParticleSystem),
        typeof(UnityEngine.PlayerPrefs),
        typeof(UnityEngine.PrimitiveType),
        typeof(UnityEngine.QualitySettings),
        typeof(UnityEngine.Quaternion),
        typeof(UnityEngine.Random),
        typeof(UnityEngine.Rect),
        typeof(UnityEngine.RectTransform),
        typeof(UnityEngine.RectTransformUtility),
        typeof(UnityEngine.Renderer),
        typeof(UnityEngine.Rendering.Universal.UniversalAdditionalCameraData),
        typeof(UnityEngine.Rendering.Universal.CameraRenderType),
        typeof(UnityEngine.RenderTexture),
        typeof(UnityEngine.RuntimeAnimatorController),
        typeof(UnityEngine.RuntimePlatform),
        typeof(UnityEngine.SceneManagement.SceneManager),
        typeof(UnityEngine.SceneManagement.LoadSceneMode),
        typeof(UnityEngine.Screen),
        typeof(UnityEngine.Shader),
        typeof(UnityEngine.SkinnedMeshRenderer),
        typeof(UnityEngine.Sprite),
        typeof(UnityEngine.SpriteRenderer),
        typeof(UnityEngine.SystemInfo),
        typeof(UnityEngine.TextAnchor),
        typeof(UnityEngine.TextMesh),
        typeof(UnityEngine.Texture),
        typeof(UnityEngine.Texture2D),
        // typeof(UnityEngine.TextureFormat),
        typeof(UnityEngine.TextureWrapMode),
        typeof(UnityEngine.Time),
        typeof(UnityEngine.Transform),
        typeof(UnityEngine.Vector2),
        typeof(UnityEngine.Vector3),
        typeof(UnityEngine.Vector4),
        //UnityEngine.UI
        typeof(UnityEngine.UI.Button),
        typeof(UnityEngine.UI.Button.ButtonClickedEvent),
        typeof(UnityEngine.UI.Dropdown),
        typeof(UnityEngine.UI.GraphicRaycaster),
        typeof(UnityEngine.UI.Image),
        typeof(UnityEngine.UI.InputField),
        typeof(UnityEngine.UI.InputField.OnChangeEvent),
        typeof(UnityEngine.UI.ScrollRect),
        typeof(UnityEngine.UI.ScrollRect.ScrollRectEvent),
        typeof(UnityEngine.UI.Text),
        typeof(UnityEngine.UI.VertexHelper),

        typeof(UnityEngine.Audio.AudioMixer),
        typeof(UnityEngine.Audio.AudioMixerGroup),

        //DoTween begin
        typeof(DG.Tweening.AutoPlay),
        typeof(DG.Tweening.AxisConstraint),
        typeof(DG.Tweening.Ease),
        typeof(DG.Tweening.LogBehaviour),
        typeof(DG.Tweening.LoopType),
        typeof(DG.Tweening.PathMode),
        typeof(DG.Tweening.PathType),
        typeof(DG.Tweening.RotateMode),
        typeof(DG.Tweening.ScrambleMode),
        typeof(DG.Tweening.TweenType),
        typeof(DG.Tweening.UpdateType),

        typeof(DG.Tweening.DOTween),
        typeof(DG.Tweening.DOVirtual),
        typeof(DG.Tweening.EaseFactory),
        typeof(DG.Tweening.Tweener),
        typeof(DG.Tweening.Tween),
        typeof(DG.Tweening.Sequence),
        typeof(DG.Tweening.TweenParams),
        typeof(DG.Tweening.Core.ABSSequentiable),
        
        typeof(DG.Tweening.Core.TweenerCore<Vector3, Vector3, DG.Tweening.Plugins.Options.VectorOptions>),
        typeof(DG.Tweening.TweenCallback),
        typeof(DG.Tweening.TweenExtensions),
        typeof(DG.Tweening.TweenSettingsExtensions),
        typeof(DG.Tweening.ShortcutExtensions),
        typeof(DG.Tweening.ShortcutExtensions46),

        //dotween pro 的功能
        typeof(DG.Tweening.DOTweenPath),
        typeof(DG.Tweening.DOTweenAnimation),
        typeof(DG.Tweening.DOTweenVisualManager),
        //DoTween end

        //GPUSKinning
        // typeof(GPUSkinningClip),
        // typeof(GPUSkinningPlayer),
        // typeof(GPUSkinningPlayerMono),

        //Spine
        // typeof(Spine.Unity.SkeletonAnimation),
        // typeof(Spine.AnimationState),
    };

    [BlackList]
    public static List<List<string>> BlackList = new List<List<string>>()  
    {
        //https://docs.microsoft.com/en-us/dotnet/csharp/language-reference/builtin-types/floating-point-numeric-types
        new List<string>(){"UnityEngine.UI.Text", "OnRebuildRequested"},
        new List<string>(){"UnityEngine.Input", "IsJoystickPreconfigured", "System.String"},
        new List<string>(){"UnityEngine.QualitySettings", "streamingMipmapsRenderersPerFrame"},
        new List<string>(){"UnityEngine.Texture", "imageContentsHash"},

        new List<string>(){"UnityEngine.MeshRenderer", "receiveGI"},
        new List<string>(){"UnityEngine.MeshRenderer", "scaleInLightmap"},
        new List<string>(){"UnityEngine.MeshRenderer", "stitchLightmapSeams"},
        new List<string>(){"UnityEngine.MeshRenderer", "subMeshStartIndex"},
#if	UNITY_IOS
        new List<string>(){"UnityEngine.TextureFormat", "DXT1Crunched"},
        new List<string>(){"UnityEngine.TextureFormat", "DXT5Crunched"},
        new List<string>(){"UnityEngine.TextureFormat", "ETC_RGB4Crunched"},
        new List<string>(){"UnityEngine.TextureFormat", "ETC2_RGBA8Crunched"},
#endif
        //GPUSkinning
        new List<string>(){"GPUSkinningPlayerMono", "DeletePlayer"},
        new List<string>(){"GPUSkinningPlayerMono", "Update_Editor", "System.Single"},
        new List<string>(){"GPUSkinningPlayerMono", "OnValidate"},
        new List<string>(){"GPUSkinningPlayer", "Update_Editor", "System.Single"},
    };
}
