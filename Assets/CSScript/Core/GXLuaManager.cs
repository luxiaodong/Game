using System.IO;
using UnityEngine;
using XLua;
using System.Text;

namespace Game
{
	public class GXLuaManager
	{
		private static GXLuaManager _g_xLuaManager = null;
		private LuaEnv m_luaEnv = null;

		public static GXLuaManager GetInstance()
		{
			if (_g_xLuaManager == null)
			{
				_g_xLuaManager = new GXLuaManager();
			}

			return _g_xLuaManager;
		}

		public void Init()
		{
			Debug.Log("enter XLuaManager Init");
			m_luaEnv = new LuaEnv();
			m_luaEnv.AddLoader(CustomLoader);
			m_luaEnv.AddBuildin("rapidjson", XLua.LuaDLL.Lua.LoadRapidJson);
			DoString( string.Format("require('{0}')", "main") );

			Timer.Register(1.0f, () => {
				m_luaEnv.Tick();
			}, null, true);
		}

		public void Restart()
		{
			Timer.Register(0.5f, () => {
				m_luaEnv.Dispose();
				Init();
			});
		}

		// lua文件加载函数
		// require("a.b.c") --> require("a/b/c.lua")
		public static byte[] CustomLoader(ref string fileName)
		{
			fileName = fileName.Replace(".", "/") + ".lua";
			return GFileUtils.GetInstance().LoadLuaFile(fileName);
		}

		public void DoString(string str)
		{
			m_luaEnv.DoString(str);
		}
	}
}
