using System.IO;
using UnityEngine;
using XLua;

using System.Runtime.InteropServices;

namespace Game
{
	//lua,java,object-c交互桥梁
	public class GNativeBridge
	{
#if	UNITY_IOS		
		[DllImport("__Internal")]
    	static extern void receiveFromCSharp(string str);
#endif

		private static GNativeBridge _g_nativeBridge = null;

		public static GNativeBridge GetInstance()
		{
			if (_g_nativeBridge == null)
			{
				_g_nativeBridge = new GNativeBridge();
			}

			return _g_nativeBridge;
		}

		private LuaFunction m_luaFunction = null;

		// lua与native通信交互
		public void RegisterLuaFunction(LuaFunction func)
		{
			m_luaFunction = func;
		}

		// lua调用的接口
		public void SendToNative(string str)
		{
			Debug.Log("[GNativeBridge][sendToNative]:" + str);
#if	UNITY_IOS
			receiveFromCSharp(str);
#endif

#if UNITY_ANDROID
			AndroidJavaClass jc = new AndroidJavaClass("com.game.NativeBridge");
			jc.CallStatic("receiveFromCSharp", str);
#endif
		}

		//java调用的接口
		public void SendToLua(string str)
		{
			Debug.Log("[GNativeBridge][sendToLua]:" + str);
			if(null != m_luaFunction)
			{
				m_luaFunction.Call(str);
			}
		}

		public bool IsFileExist(string fileName)
		{
#if UNITY_ANDROID
			AndroidJavaClass jc = new AndroidJavaClass("com.game.NativeBridge");
			return jc.CallStatic<bool>("isFileExist", fileName);
#else
			return false;
#endif
		}

		public byte[] ReadAllBytes(string fileName)
		{
#if UNITY_ANDROID
			AndroidJavaClass jc = new AndroidJavaClass("com.game.NativeBridge");
			return jc.CallStatic<byte[]>("readAllBytes", fileName);
#else
			return null;
#endif
		}

		public bool IsSupport64Bit()
		{
#if UNITY_ANDROID
			AndroidJavaClass jc = new AndroidJavaClass("com.game.NativeBridge");
			return jc.CallStatic<bool>("isSupport64Bit");
#else
			return true;
#endif
		}

	}
}
