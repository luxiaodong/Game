using System.Collections.Generic;
using System.IO;
using UnityEngine;
using System.Security.Cryptography;
using System.Text;

namespace Game
{
	public class GFileUtils
	{
		private static GFileUtils _g_fileUtils = null;

		public static GFileUtils GetInstance()
		{
			if (_g_fileUtils == null)
			{
				_g_fileUtils = new GFileUtils();
				_g_fileUtils.Init();
			}

			return _g_fileUtils;
		}

		private List<string> m_luaSearchPaths = new List<string>();
		private List<string> m_abSearchPaths = new List<string>();
		
		private int m_luaCode = 0; //0.源码, 1.64位luajit, 2.32位luajit
		private bool m_isUseMd5 = true; //改成根据资源的目录判断

		public void Init()
		{
#if	UNITY_IOS || UNITY_ANDROID
			string testFile = Application.streamingAssetsPath+"/LuaScript/main.lua";
			if(IsFileExist(testFile))
			{
				m_isUseMd5 = false;
			}

			if(m_isUseMd5)
			{
				m_luaCode = 1;
#if UNITY_ANDROID
				if( GNativeBridge.GetInstance().IsSupport64Bit() == false) //如果不支持64位
				{
					m_luaCode = 2;
				}
#endif
				AddLuaSearchPath(Application.streamingAssetsPath+"/"+LuaPrefix());
			}
			else
			{
				AddLuaSearchPath(Application.streamingAssetsPath);
			}

			AddAbSearchPath(Application.streamingAssetsPath + "/AssetsBundles/");
#elif UNITY_EDITOR
			//编辑器不走luajit, 不走md5, 只有ab模式
			m_isUseMd5 = false;

			if(GResource.GetInstance().IsAbMode())
			{
				//走ab包,代码和ab包放在Release下,不用原来的是考虑到测试动更重新生成会覆盖原来的.
				// AddLuaSearchPath(Application.dataPath + "/../Build/Release/");
				// AddAbSearchPath(Application.dataPath + "/../Build/Release/AssetsBundles/");

				AddLuaSearchPath(Application.dataPath);
				AddAbSearchPath(Application.dataPath + "/../Build/AssetsBundles/");
			}
			else
			{
				AddLuaSearchPath(Application.dataPath);
			}
#endif
			Debug.Log("lua code is " + m_luaCode);
		}

		public int LuaCode()
		{
			return m_luaCode;
		}

		//给动更用,同时添加两个目录
		public void AddSearchPath(string path)
		{
			AddLuaSearchPath(path);
			AddAbSearchPath(path);
		}

		private void AddLuaSearchPath(string path)
		{
			int index = m_luaSearchPaths.IndexOf(path);
			if (index > 0) return ;
			m_luaSearchPaths.Insert(0, path);
		}

		private void AddAbSearchPath(string path)
		{
			int index = m_abSearchPaths.IndexOf(path);
			if (index > 0) return ;
			m_abSearchPaths.Insert(0, path);
		}

		//此api只能在编辑器运行下掉用
		public bool IsFileExistInEditor(string fileName)
		{
#if UNITY_EDITOR
			string fullPath = Path.Combine(Application.dataPath+"/../", fileName);
			if(IsFileExist(fullPath))
			{
				return true;
			}
#endif
			return false;
		}

		public bool IsExistLuaFile(string fileName)
		{
			fileName = LuaPrefix() + fileName;
			string fullPath = FullPathForFileName(m_luaSearchPaths, fileName);
			if (string.IsNullOrEmpty(fullPath))
			{
				return false;
			}

			return true;
		}

		public string FullPathForFileName(List<string> list, string fileName)
		{
			if (string.IsNullOrEmpty(fileName)) return "";

			if (m_isUseMd5 == true)
			{
				fileName = Md5String(fileName);
			}

			foreach (var search in list)
			{
				string fullPath = Path.Combine(search, fileName);
				if(IsFileExist(fullPath))
				{
					return fullPath;
				}
			}

			return "";
		}

		private string LuaPrefix()
		{
			if(m_luaCode == 0)
			{
				return "LuaScript/";
			}
			else if(m_luaCode == 1)
			{
				return "LuaJit/";
			}
			else if(m_luaCode == 2)
			{
				return "LuaJit32/";
			}

			return "";
		}

		public byte[] LoadLuaFile(string fileName)
		{
			fileName = LuaPrefix() + fileName;
			string fullPath = FullPathForFileName(m_luaSearchPaths, fileName);
			if (string.IsNullOrEmpty(fullPath))
			{
				Debug.Log(string.Format("loadLuaFile failed! fileName = {0}", fileName));
				return null;
			}

			return ReadAllBytes(fullPath);
		}

		public string FindAssetBundlePath(string fileName)
		{
			string fullPath = FullPathForFileName(m_abSearchPaths, fileName);
			if (string.IsNullOrEmpty(fullPath))
			{
				Debug.Log(string.Format("loadAssetBundle failed! fileName = {0}", fileName));
				return null;
			}
			return fullPath;
		}
		
		public string GetWritablePath()
		{
			return Application.persistentDataPath;
		}
		
		public string GetTempCachePath()
		{
			return Application.temporaryCachePath;
		}

		public byte[] ReadAllBytes(string fullPath)
		{
#if UNITY_ANDROID
			return GNativeBridge.GetInstance().ReadAllBytes(fullPath);
#else
			return File.ReadAllBytes(fullPath);
#endif
		}

		public bool IsFileExist(string fullPath)
		{
#if UNITY_ANDROID
			return GNativeBridge.GetInstance().IsFileExist(fullPath);
#else
			return File.Exists(fullPath);
#endif		
		}

		public bool IsDirExist(string fullPath)
		{
			return Directory.Exists(fullPath);
		}

		public bool CreateDir(string fullPath)
		{
			Directory.CreateDirectory(fullPath);
			return true;
		}

		public bool RemoveDir(string fullPath)
		{
			Directory.Delete(fullPath, true);
			return true;
		}

		public bool CopyDir(string srcPath, string dstPath)
		{
			try
			{
				// 检查目标目录是否以目录分割字符结束如果不是则添加之
				if (dstPath[dstPath.Length - 1] != Path.DirectorySeparatorChar)
				{
					dstPath += Path.DirectorySeparatorChar;
				}

				// 判断目标目录是否存在如果不存在则新建之
				if (!Directory.Exists(dstPath))
				{
					Directory.CreateDirectory(dstPath);
				}
				
				// 得到源目录的文件列表，该里面是包含文件以及目录路径的一个数组
				// 如果你指向copy目标文件下面的文件而不包含目录请使用下面的方法
				// string[] fileList = Directory.GetFiles(srcPath);
				string[] fileList = Directory.GetFileSystemEntries(srcPath);
				// 遍历所有的文件和目录
				foreach (string file in fileList)
				{
					// 先当作目录处理如果存在这个目录就递归Copy该目录下面的文件
					if (Directory.Exists(file))
					{
						CopyDir(file, dstPath + Path.GetFileName(file));
					}
					else
					{
						CopyFile(file, dstPath + Path.GetFileName(file));
					}
				}
			}
			catch
			{
				return false;
			}

			return true;
		}

		public bool CopyFile(string srcPath, string dstPath)
		{
			File.Copy(srcPath, dstPath, true);
			return true;
		}

		public bool RemoveFile(string fullPath)
		{
			if (IsFileExist(fullPath))
			{
				File.Delete(fullPath);
			}
			
			return true;
		}

		public string Md5String(string fileName)
		{
			MD5 md5 = System.Security.Cryptography.MD5.Create();
    		byte[] inputBytes = System.Text.Encoding.ASCII.GetBytes(fileName);
    		byte[] hash = md5.ComputeHash(inputBytes);
			StringBuilder sb = new StringBuilder();
    		for (int i = 0; i < hash.Length; i++)
    		{
        		sb.Append(hash[i].ToString("x2"));
    		}
    		return sb.ToString();
		}

		public string Md5File(string fullPath)
		{
			try
            {
                FileStream file = new FileStream(fullPath, System.IO.FileMode.Open);
                MD5 md5 = new MD5CryptoServiceProvider();
                byte[] retVal = md5.ComputeHash(file);
                file.Close();
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < retVal.Length; i++)
                {
                    sb.Append(retVal[i].ToString("x2"));
                }
                return sb.ToString();
            }
            catch //(Exception ex)
            {
                //throw new Exception("GetMD5HashFromFile() fail,error:" + ex.Message);
            }

			return "";
		}
	}
}
