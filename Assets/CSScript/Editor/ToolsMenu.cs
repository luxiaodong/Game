using System;
using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System.Text;
using System.Diagnostics;
using UnityEngine.SceneManagement;
using UnityEditor.SceneManagement;

public class ToolsMenu
{
    static private string m_gameName = "GameName";
    static private string m_setupScene = "Assets/Scenes/SetupScene.unity";
    static private string m_exportPrefix = "Build/Export";

    //================ Run Game ===========================

    [MenuItem("Tools/Run Game")]
    static void RunGame()
    {
#if UNITY_STANDALONE_WIN
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Standalone, BuildTarget.StandaloneWindows);
#else
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Standalone, BuildTarget.StandaloneOSX);
#endif        
        EditorSceneManager.OpenScene(m_setupScene, OpenSceneMode.Single);
        EditorApplication.ExecuteMenuItem("Edit/Play");
    }

    //================ Run Game ===========================
    //================ AssetsBundle =======================

    [MenuItem("Tools/AssetsBundle/Build Win Assets")]
    static void BuildAssetsWin()
    {
        AssetsBundleBuilder.BuildAssetBundleAndScene(BuildTarget.StandaloneWindows);
    }

    [MenuItem("Tools/AssetsBundle/Build Mac Assets")]
    static void BuildAssetsMac()
    {
        AssetsBundleBuilder.BuildAssetBundleAndScene(BuildTarget.StandaloneOSX);
    }

    [MenuItem("Tools/AssetsBundle/Build Ios Assets")]
    static void BuildAssetsIos()
    {
        AssetsBundleBuilder.BuildAssetBundleAndScene(BuildTarget.iOS);
    }

    [MenuItem("Tools/AssetsBundle/Build Android Assets")]
    static void BuildAssetsAndroid()
    {
        AssetsBundleBuilder.BuildAssetBundleAndScene(BuildTarget.Android);
    }

    //================ AssetsBundle =======================
    //================ Packing ============================
    [MenuItem("Tools/Packing/Lua Res")]
    static void PackingLuaRes()
    {
        PackingCore(false, 0);
    }

    [MenuItem("Tools/Packing/Lua Res Md5")]
    static void PackingLuaResMd5()
    {
        PackingCore(true, 0);
    }

    [MenuItem("Tools/Packing/Luajit(64) Res Md5")]
    static void PackingLuajit64ResMd5()
    {
        PackingCore(true, 1);
    }

    [MenuItem("Tools/Packing/Luajit(64 32) Res Md5")]
    static void PackingLuajit6432ResMd5()
    {
        PackingCore(true, 2);
    }

    static void PackingCore(bool isMd5, int luacode)
    {
        string pandoraPath = Path.Combine(Application.dataPath, "../Project/Pandora.py");
        var process = new Process();
        process.StartInfo.FileName = "/usr/local/bin/python";
        if (isMd5){
            process.StartInfo.Arguments = $"{pandoraPath} -r -c -j {luacode.ToString()}";}
        else{
            process.StartInfo.Arguments = $"{pandoraPath} -r -j {luacode.ToString()}";}

        process.StartInfo.UseShellExecute = false;
        process.StartInfo.RedirectStandardInput = true;
        process.StartInfo.RedirectStandardOutput = true;
        process.StartInfo.RedirectStandardError = true;
        process.StartInfo.CreateNoWindow = true;
        process.Start();

        string message = process.StandardOutput.ReadToEnd();
        string[] lines = message.Split(new string[] { Environment.NewLine }, StringSplitOptions.None);

        UnityEngine.Debug.Log("Pandora.py: " + process.StartInfo.Arguments);
        foreach(var single in lines)
        {
            UnityEngine.Debug.Log("\t" + single);
        }

        string errorMsg = process.StandardError.ReadToEnd();
        if (errorMsg.Length > 0)
        {
            UnityEngine.Debug.LogError(errorMsg);
        }
    }

    //================ Packing ==============================
    
    //================ Native Project =======================

    [MenuItem("Tools/Export Project/Ios/Debug")]
    static void ExportIosDebug()
    {
        ExportIos(true);
    }

    [MenuItem("Tools/Export Project/Ios/Release")]
    static void ExportIosRelease()
    {
        ExportIos(false);
    }

    [MenuItem("Tools/Export Project/Android/Debug")]
    static void ExportAndroidDebug()
    {
        ExportAndroid(true);
    }

    [MenuItem("Tools/Export Project/Android/Release")]
    static void ExportAndroidRelease()
    {
        ExportAndroid(false);
    }

    static void ExportIos(bool isDebug)
    {
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.iOS, BuildTarget.iOS);
        BuildOptions options = BuildOptions.StrictMode;
        if (isDebug) 
        {
            options = BuildOptions.Development | BuildOptions.ConnectWithProfiler;
        }

        string[] scenes = {m_setupScene};
        BuildPipeline.BuildPlayer(scenes, Path.Combine(m_exportPrefix, "Ios"), BuildTarget.iOS, options);
    }

    static void ExportAndroid(bool isDebug)
    {
        EditorUserBuildSettings.SwitchActiveBuildTarget(BuildTargetGroup.Android, BuildTarget.Android);
        BuildOptions options = BuildOptions.StrictMode;
        if (isDebug) 
        {
            options = BuildOptions.Development | BuildOptions.ConnectWithProfiler;
        }
        string[] scenes = {m_setupScene};
        BuildPipeline.BuildPlayer(scenes, Path.Combine(m_exportPrefix, "Android"), BuildTarget.Android, options);
    }

    //================ Native Project ======================
    //================ Merge Project =======================
    
    [MenuItem("Tools/Merge Project/Ios/Native")]
    static void MergeIosNative()
    {
        MergeCore("ios", true);
    }

    [MenuItem("Tools/Merge Project/Ios/All")]
    static void MergeIosAll()
    {
        MergeCore("ios", false);
    }

    [MenuItem("Tools/Merge Project/Android")]
    static void MergeAndroid()
    {
        MergeCore("android", false);
    }

    static void MergeCore(string platform, bool isNative)
    {
        string pandoraPath = Path.Combine(Application.dataPath, "../Project/Pandora.py");
        var process = new Process();
        process.StartInfo.FileName = "/usr/local/bin/python";

        if (isNative){
            process.StartInfo.Arguments = $"{pandoraPath} -m -n -p {platform}";}
        else{
            process.StartInfo.Arguments = $"{pandoraPath} -m -p {platform}";}

        process.StartInfo.UseShellExecute = false;
        process.StartInfo.RedirectStandardInput = true;
        process.StartInfo.RedirectStandardOutput = true;
        process.StartInfo.RedirectStandardError = true;
        process.StartInfo.CreateNoWindow = true;
        process.Start();

        string message = process.StandardOutput.ReadToEnd();
        string[] lines = message.Split(new string[] { Environment.NewLine }, StringSplitOptions.None);

        UnityEngine.Debug.Log("Pandora.py: " + process.StartInfo.Arguments);
        foreach(var single in lines)
        {
            UnityEngine.Debug.Log("\t" + single);
        }

        string errorMsg = process.StandardError.ReadToEnd();
        if (errorMsg.Length > 0)
        {
            UnityEngine.Debug.LogError(errorMsg);
        }
    }

    //================ Merge Project =======================
    //================ Localizations =======================

    [MenuItem("Tools/Localizations/En")]
    static void GenerateLanguageEn()
    {
        Localizations.GenerateLanguage("en");
    }

    //================ Localizations =======================
    //================ Test =======================

    [MenuItem("Tools/Test/Matrix")]
    static void Test_Matrix()
    {
        Vector3 vt = new Vector3(0,0,3);
        Vector3 vs = new Vector3(1,2,3);
        Quaternion q = Quaternion.LookRotation(new Vector3(1,0,0));
        Matrix4x4 mt = Matrix4x4.Translate(vt);
        Matrix4x4 mr = Matrix4x4.Rotate(q);
        Matrix4x4 ms = Matrix4x4.Scale(vs);

        UnityEngine.Debug.Log(mt.ToString());
        UnityEngine.Debug.Log(mt.m23);
        UnityEngine.Debug.Log(mt.GetColumn(3));
        UnityEngine.Debug.Log(mt.GetRow(3));

        // Matrix4x4 mat4 = mt*mr*ms;
        // mat4.SetTRS(vt,q,vs);
        // UnityEngine.Debug.Log(mat4.ToString());
    }

    [MenuItem("Tools/Test/Quaternion")]
    static void Test_Quaternion()
    {
        // Quaternion q = Quaternion.AngleAxis(45, new Vector3(0,1,0));
        // Debug.Log("q is:"+q.x+","+q.y+","+q.z+","+q.w);
        // Matrix4x4 mr = Matrix4x4.Rotate(q);

        // // ---打印----
        // Matrix4x4 mat4 = mr;
        // //Matrix4x4 mat4 = mt*mr*ms;
        // //mat4.SetTRS(wp,q,vs);

        // Vector4 row1 = mat4.GetRow(0);
        // Vector4 row2 = mat4.GetRow(1);
        // Vector4 row3 = mat4.GetRow(2);
        // Vector4 row4 = mat4.GetRow(3);
        // Debug.Log(row1);
        // Debug.Log(row2);
        // Debug.Log(row3);
        // Debug.Log(row4);

        // Debug.Log("Start");
        // Vector3 wp = this.transform.position;
        // Debug.Log("luxiaodong world position:" + wp.x + "," + wp.y + "," + wp.z);

        // Vector3 lp = this.transform.localPosition;
        // Debug.Log("luxiaodong local position:" + lp.x + "," + lp.y + "," + lp.z);

        // Vector3 vp = new Vector3(0,0,3);
        // Vector3 vs = new Vector3(1,1,2);
        
        // //Quaternion q = Quaternion.FromToRotation(Vector3.right, Vector3.forward);
        // //Debug.Log("cross is :"+Vector3.Cross(Vector3.right, Vector3.forward));
        // //Quaternion q = Quaternion.identity;
        // Quaternion q = Quaternion.LookRotation(new Vector3(1,0,0));

        // Debug.Log("q is:"+q.x+","+q.y+","+q.z+","+q.w);

        // Matrix4x4 mt = Matrix4x4.Translate(wp);
        // Matrix4x4 mr = Matrix4x4.Rotate(q);
        // Matrix4x4 ms = Matrix4x4.Scale(vs);

        // Matrix4x4 mat4 = mr;
        // //Matrix4x4 mat4 = mt*mr*ms;
        // //mat4.SetTRS(wp,q,vs);

        // Vector4 row1 = mat4.GetRow(0);
        // Vector4 row2 = mat4.GetRow(1);
        // Vector4 row3 = mat4.GetRow(2);
        // Vector4 row4 = mat4.GetRow(3);

        // Debug.Log(row1);
        // Debug.Log(row2);
        // Debug.Log(row3);
        // Debug.Log(row4);
    }

    //================ Test =======================
}
