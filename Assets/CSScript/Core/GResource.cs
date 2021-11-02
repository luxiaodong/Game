using UnityEngine;
using UnityEditor;
using System;

namespace Game
{
	public class GResource 
	{
		private static GResource _g_resource = null;

		public static GResource GetInstance()
		{
			if (_g_resource == null)
			{
				_g_resource = new GResource();
				_g_resource.Init();
			}

			return _g_resource;
		}

		private AssetBundleLoader m_assetsLoader;

		public void Init()
		{
#if UNITY_EDITOR
			m_assetsLoader = new EditorAssetsLoader();
#else
			m_assetsLoader = new AssetBundleLoader();
#endif
			m_assetsLoader.Init();
		}

		public bool IsAbMode()
		{
			return m_assetsLoader.IsAbMode();
		}

		public bool IsEditorMode()
		{
#if UNITY_EDITOR
			return true;
#else
			return false;
#endif
		}

		public UnityEngine.Object LoadAsset(string fileName, AssetBundle ab)
		{
			return m_assetsLoader.LoadAsset(fileName, ab);
		}

		public virtual AssetBundleRequest LoadAssetAsync(string fileName, AssetBundle ab)
		{
			return m_assetsLoader.LoadAssetAsync(fileName, ab);
		}

		public void UnloadAsset(UnityEngine.Object asset)
		{
			Resources.UnloadAsset(asset);
		}

		public AssetBundle LoadAssetBundle(string abName)
		{
			return m_assetsLoader.LoadAssetBundle(abName);
		}

		public AssetBundleCreateRequest LoadAssetBundleAsync(string abName)
		{
			return m_assetsLoader.LoadAssetBundleAsync(abName);
		}

		public void UnloadAssetBundle(AssetBundle ab, bool isIncludeAsset)
		{
			m_assetsLoader.UnloadAssetBundle(ab, isIncludeAsset);
		}

		//使用这个api时,说明已经无法记录哪些资源被引用了
		//当ab包对asset引用时,掉这个接口是无法释放的
		public void UnloadUnusedAssets()
		{
			Resources.UnloadUnusedAssets();
		}

		// ==========系统内嵌资源=============
		public UnityEngine.Object LoadBuiltinResource(string fileName)
		{
			// return (UnityEngine.Object)Resources.GetBuiltinResource(typeof(UnityEngine.Object), fileName);
			return LoadBuiltinFont(fileName);
		}

		//"Arial.ttf"
		public Font LoadBuiltinFont(string fileName)
		{
			return (Font)Resources.GetBuiltinResource(typeof(Font), fileName);
		}

		//"Default-Diffuse.mat"
		public Material LoadBuiltinMaterial(string fileName)
		{
			return (Material)Resources.GetBuiltinResource(typeof(Material), fileName);
		}
	}
}