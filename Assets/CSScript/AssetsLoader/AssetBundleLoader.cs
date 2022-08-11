using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System;

namespace Game
{
	public class AssetBundleLoader
	{
		public virtual bool IsAbMode()
		{
			return true;
		}

		public void Init()
		{
		}

		public virtual AssetBundle LoadAssetBundle(string abName)
		{
			string fullPath = GFileUtils.GetInstance().FindAssetBundlePath(abName);
			return AssetBundle.LoadFromFile(fullPath);
		}

		public virtual AssetBundleCreateRequest LoadAssetBundleAsync(string abName)
		{
			string fullPath = GFileUtils.GetInstance().FindAssetBundlePath(abName);
			return AssetBundle.LoadFromFileAsync(fullPath);
		}

		public virtual UnityEngine.Object LoadAsset(string fileName, AssetBundle ab)
		{
			//注意:同一张图片,打成图集返回Sprite对象,否则返回Texture2D对象
			return ab.LoadAsset(fileName);
		}

		public virtual AssetBundleRequest LoadAssetAsync(string fileName, AssetBundle ab)
		{
			return ab.LoadAssetAsync(fileName);
		}

		public virtual void UnloadAssetBundle(AssetBundle ab, bool isIncludeAsset)
		{
			ab.Unload(isIncludeAsset);
		}
	}
}
