using System.IO;
using UnityEngine;
using UnityEngine.Audio;
using UnityEditor;
using XLua;

namespace Game
{
	public class EditorAssetsLoader : AssetBundleLoader
	{
		//编辑器支持两种模式, 直接加载和ab模式
		private bool m_isAbMode = false;
		
		public override bool IsAbMode()
		{
			return m_isAbMode;
		}

#if UNITY_EDITOR
		public override UnityEngine.Object LoadAsset(string fileName, AssetBundle ab)
		{	
			if(m_isAbMode == true)
			{
				return base.LoadAsset(fileName, ab);
			}

			return LoadAssetAtPath(fileName);
		}

		public UnityEngine.Object LoadAssetAtPath(string fileName)
		{
			if(File.Exists(fileName))
			{
				int index = fileName.LastIndexOf("/");
				if (index >= 0)
				{
					string iniFile = fileName.Substring(0, index+1) + "PackRule.ini";
					if(File.Exists(iniFile))
					{
						//模拟ab模式下,同一张图片,打成图集返回Sprite对象,否则返回Texture2D对象
						return AssetDatabase.LoadAssetAtPath(fileName, typeof(Sprite));
					}
				}
				
				return (Object)AssetDatabase.LoadAssetAtPath(fileName, typeof(Object));
			}
			
			string stack = new System.Diagnostics.StackTrace().ToString();
			Debug.LogError("asset not exist. ===> " + fileName + "\n" + stack);
			string[] array = fileName.Split('.');
			return LoadDefalutAssetBySuffix( array[array.Length - 1] );
		}

		public UnityEngine.Object LoadDefalutAssetBySuffix(string suffix)
		{
			if(suffix == "tga" || suffix == "png")
			{
				return Texture2D.whiteTexture;
			}

			return null;
		}	
#endif
	}
}
