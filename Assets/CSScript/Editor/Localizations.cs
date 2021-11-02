using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEditor.SceneManagement;

public class Localizations
{
	//遍历文件夹下的文件
	public static string[] dir_list = {"Prefabs"};
    public static string[] file_list = {".prefab"};

	static List<string> m_fileList = new List<string>(); //所有文件
	static string m_languageKey = "";

	static public void GenerateLanguage(string languageKey)
	{
		m_languageKey = languageKey;
		CopyLanguageFile();
		RebuildDependencies();
	}

	static void CopyLanguageFile()
	{
		//统计出需要生成目标语言的文件. 然后Copy过去.
		m_fileList.Clear();
		//TraverseFiles("Assets");
		//m_fileList.Add("Assets/Prefabs/test.prefab");
		//需要生成的prefab
		for (int i = 0; i < m_fileList.Count; i++)
        {
			string srcFile = m_fileList[i];
			string dstFile = ConvertToLanguageFilePath(srcFile);
			if(!File.Exists(dstFile))
			{
				File.Copy(srcFile, dstFile);
			}
		}

		AssetDatabase.Refresh();
	}

	static void RebuildDependencies()
	{
		Debug.Log("===================fileList===================");
        Debug.Log(m_fileList.Count);
		for (int i = 0; i < m_fileList.Count; i++)
		{
			Debug.Log("prefab name:->" + m_fileList[i]);
			GameObject prefab = AssetDatabase.LoadAssetAtPath(m_fileList[i], typeof(GameObject)) as GameObject;
			GameObject go = Object.Instantiate(prefab);

			Component[] images = go.GetComponentsInChildren(typeof(Image), true);
			foreach (Image single in images)
			{
				string srcFile = AssetDatabase.GetAssetPath(single.mainTexture);
				string dstFile = ConvertToLanguageFilePath(srcFile);
				if (File.Exists(dstFile))
				{
					Debug.Log("    Image:" +srcFile+" -> "+dstFile);
					single.sprite = (Sprite)AssetDatabase.LoadAssetAtPath(dstFile, typeof(Sprite));
				}
			}

			//其他的,比如材质.
			PrefabUtility.SaveAsPrefabAsset(go, m_fileList[i]);
			Object.DestroyImmediate(go);
		}

		AssetDatabase.SaveAssets();
	}

	//该文件是否在语言版本里存在
	static string ConvertToLanguageFilePath(string file)
	{
		return file.Replace("Assets/", "Assets/Localizations/"+m_languageKey.ToUpper()+"/");
	}

	static void TraverseFiles(string dir)
    {
        string[] list = Directory.GetFiles(dir);
        foreach(var single in list)
        {
            if( IsVaildFile(single) )
            {
                m_fileList.Add(single);
            }
        }

        string[] dirs = Directory.GetDirectories(dir);
        foreach(var single in dirs)
        {
            if( IsVaildDirectory(single) )
            {
                TraverseFiles(single);
            }
        }
    }

	static bool IsVaildDirectory(string dir)
    {
        foreach(var single in dir_list)
        {
            if(dir.StartsWith("Assets/"+single))
            {
                return true;
            }
        }

        return false;
    }

    static bool IsVaildFile(string file)
    {
        foreach(var single in file_list)
        {
            if(file.EndsWith(single))
            {
                return true;
            }
        }

        return false;
    }
}
