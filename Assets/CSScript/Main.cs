using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using XLua;
using System;
using Game;
using DG.Tweening;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Main : MonoBehaviour 
{
	void Start()
	{
		SRDebug.Init();
		CheckEnvironment();
		GXLuaManager.GetInstance().Init();
		// EditorApplication.playmodeStateChanged += ChangedPlaymodeState;
		Test();
	}

	void Update()
	{
		GLuaBehaviour.GetInstance().OnUpdate();
	}

	void FixedUpdate()
	{
		GLuaBehaviour.GetInstance().OnFixedUpdate();
	}

	void LateUpdate()
	{
		GLuaBehaviour.GetInstance().OnLateUpdate();
	}

	//ios,android,入口函数.
	void ReceiveFromNative(string str)
	{
		GNativeBridge.GetInstance().SendToLua(str);
	}

	void Test()
	{
		// Debug.Log("=====Matrix======");
		// Debug.Log(transform.localToWorldMatrix);
		// Debug.Log(transform.right.ToString("f3"));
		// Debug.Log(transform.up.ToString("f3"));
		// Debug.Log(transform.forward.ToString("f3"));

		// Debug.Log("=====Row======");
		// Debug.Log(transform.localToWorldMatrix.GetRow(0).ToString("f3"));
		// Debug.Log(transform.localToWorldMatrix.GetRow(1).ToString("f3"));
		// Debug.Log(transform.localToWorldMatrix.GetRow(2).ToString("f3"));

		// Debug.Log("=====Column======");
		// Debug.Log(transform.localToWorldMatrix.GetColumn(0).ToString("f3"));
		// Debug.Log(transform.localToWorldMatrix.GetColumn(1).ToString("f3"));
		// Debug.Log(transform.localToWorldMatrix.GetColumn(2).ToString("f3"));
		// Debug.Log("矩阵的列向量归一化后是朝向的基向量, A*(xyz1)");

		// Debug.Log(Application.persistentDataPath);
		// Debug.Log(Application.dataPath);
		// UnityEngine.Object[] list = AssetDatabase.LoadAllAssetsAtPath("Assets/Sandbox/unity_builtin_extra");
		// Debug.Log(list.Length);
		// foreach(UnityEngine.Object o in list)
		// {
		// 	Debug.Log(o);
		// }
	}

	void ChangedPlaymodeState()
	{
#if UNITY_EDITOR		
		Debug.Log("=============");
		Debug.Log("isPaused "+EditorApplication.isPaused);
		Debug.Log("isPlaying "+EditorApplication.isPlaying);
		Debug.Log("isPlayingOrWillChangePlaymode "+EditorApplication.isPlayingOrWillChangePlaymode);
#endif		
	}

	void CheckEnvironment()
	{
		Debug.Log("Unity Environment");
#if	UNITY_IOS
	Debug.Log("    UNITY_IOS enabled");
#elif UNITY_ANDROID
	Debug.Log("    UNITY_ANDROID enabled");
#elif UNITY_STANDALONE
	Debug.Log("    UNITY_STANDALONE enabled");
#endif

#if UNITY_EDITOR
	Debug.Log("    UNITY_EDITOR enabled");
#endif
	}
}
