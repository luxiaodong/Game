using System;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Xml.Serialization;

public class AssetsBundleBuilder
{
    static string[] m_dirPrefix = 
    {
        "Animations",
        "Fonts", 
        "Localizations", 
        "Materials", 
        "Models", 
        "Prefabs", 
        "Sandbox", //沙盒资源是测试用的
        "Shaders",
        "Audios", 
        "Textures",
        //"Thirdparty" //第三方的即使走AB包,内部也没有加载入口.
    };

    static string[] m_fileSuffix = 
    {
        ".anim",".controller", ".overrideController",".mask", //mask是用于动画遮罩,IK
        ".fontsettings",".ttf",
        ".mat", ".renderTexture",
        ".fbx",".prefab",".obj",
        ".asset",
        ".shader",
        ".mixer",".mp3",".ogg",
        ".png", ".tga", ".jpg", ".cubemap",
        // ".bytes",
        // ".asmdef",//第三方需要的
        ".ini", //PackRule.ini 打包配置文件
        ".psd", ".tga",
    };

    // 不要放setupScene,已由项目导出
    static string[] m_exportScenes = {"BattleScene","TestScene"};

    //第三方插件的黑名单
    //static string[] m_dir3rdBlack = 
    //{
    //    "GPUSkinning","Spine","UltimateGameTools",
    //};
    
    //第三方插件需要用到的后缀
    //static string[] m_file3rdSuffix = 
    //{
    //    ".otf",".psd",
    //};

    static string[] m_packRuleKeys = 
    {
        "SpritePacker", //图集打包
        "Directory", //目录
    };

    static string m_outputDir = "Build/AssetsBundles";
    static List<string> m_fileList = new List<string>(); //所有遍历出来的文件
    static Dictionary<int, List<int> > m_depMap; //文件和依赖的文件
    static Dictionary<int, List<int> > m_refMap; //文件和被引用文件,相当于反依赖
    static List<AssetBundleBuild> m_abBuildList; //用于unity,ab包的列表
    static List<int> m_abList = new List<int>(); //用于lua,从文件查找ab包
    static Dictionary<int, List<int> > m_abDepMap; //用于lua,从ab包查找依赖的ab包

    static Dictionary<string, string> m_sceneMap; //场景列表,从场景短名字到ab包的映射
    static Dictionary<string, List<string> > m_languageMap; //需要本地化的文件列表 <语种,资源文件列表>
    static bool m_isWholeScene = true; //是否将场景单独打包, 默认true
    static bool m_isExistError = false; //整个过程是否出现错误

    //配置打包特殊规则的配置,比如,图集打包,第三方合并成一个ab包
    static string m_packRuleFile = "PackRule.ini";
    static List<int> m_packRuleFileList = new List<int>(); //哪些是打包配置文件
    static Dictionary<int, int> m_packRuleMap; //根据文件配置的规则,指定文件用属于哪个ab包

    // TO DO, 添加引用检查, 防止A语言引用B语言的资源
    // 第三方需要的编辑器资源,不应该导入进去,如果进去,全局打开,不释放?
    // ShaderVariantCollection需要与shader进同一个AB包.

    static public void BuildTest()
    {
        Debug.Log("Build test");
        string file = "Assets/Settings/UniversalRenderPipelineAsset_Renderer.asset";
        string[] list = AssetDatabase.GetDependencies(file, false);
        Debug.Log(list.Length);
        foreach(var single in list)
        {
            Debug.Log(single);
        }
    }

    static public void BuildAssetBundleAndScene(BuildTarget target)
    {
Debug.Log( "************************************************************");
Debug.Log( "[AssetsBundleBuilder] Build Start:" + DateTime.Now.ToString());
        if(m_isWholeScene == false)
        {
            List<string> temp = new List<string>(m_dirPrefix);
            temp.Add("Scenes");
            m_dirPrefix = temp.ToArray();

            temp = new List<string>(m_fileSuffix);
            temp.Add(".unity");
            m_fileSuffix = temp.ToArray();
        }

        Directory.CreateDirectory(m_outputDir);
        
        if(BuildAssetBundle(target) == false)
        {
            Debug.LogError("Build AssetBundles Stoped, Please Fix Warning.");
            return ;
        }
        
        BuildScene(target);
        //记录哪些文件有多语言版本
        CreateLanguageMap();
        //生成lua文件
        CreateLuaFile();

        Debug.Log( "[AssetsBundleBuilder] Build End:" + DateTime.Now.ToString());
        if(CheckAndStatistics())
        {
            Debug.Log( "[AssetsBundleBuilder] Build Successfully.");
        }
    }

    static bool BuildAssetBundle(BuildTarget target)
    {
        //遍历文件
        m_fileList.Clear();
        m_packRuleFileList.Clear();
        TraverseFiles("Assets");
        //根据打包规则,指定文件从属的ab包.
        CreatePackRuleMap();
        if(m_isExistError) {return false;}
        //根据unity的函数,创建依赖关系.
        CreateDependentMap();
        if(m_isExistError) {return false;}
        //根据依赖,创建反依赖关系,相当于引用.
        CreateReferenceMap();
        //核心函数,重新计算依赖,生成lua用的ab包依赖数据.
        CreateABList();
        //检查ab包是否存在循环依赖.
        CheckABDependentLoop();
        if(m_isExistError) {return false;}
        //生成unity用的打包数据,放最后.
        CreateABBuildList();
        Debug.Log( "[AssetsBundleBuilder] Build AB:" + DateTime.Now.ToString());
        //可以不同的包用不同的参数
        AssetBundleManifest manifest = BuildPipeline.BuildAssetBundles(m_outputDir, m_abBuildList.ToArray(), BuildAssetBundleOptions.ChunkBasedCompression | BuildAssetBundleOptions.DeterministicAssetBundle | BuildAssetBundleOptions.DisableWriteTypeTree | BuildAssetBundleOptions.DisableLoadAssetByFileName | BuildAssetBundleOptions.DisableLoadAssetByFileNameWithExtension | BuildAssetBundleOptions.StrictMode, target);
        if(manifest.GetAllAssetBundles().Length == 0)
        {
            return false;
        }
        return true;
    }

    static void BuildScene(BuildTarget target)
    {
        if(m_isWholeScene)
        {
            Debug.Log( "[AssetsBundleBuilder] Build Scene:" + DateTime.Now.ToString());
            m_sceneMap = new Dictionary<string, string>();
            string prefix = "assets/scenes";
            string outPath = Application.dataPath+"/../"+m_outputDir+"/" + prefix;

            if (Directory.Exists(outPath) == false)
            {
                Directory.CreateDirectory(outPath);
            }

            foreach (var single in m_exportScenes)
            {
                string[] names = {"Assets/Scenes/"+single+".unity"};
                BuildPipeline.BuildPlayer(names, outPath+"/"+single.ToLower()+".unity.ab", target, BuildOptions.BuildAdditionalStreamedScenes | BuildOptions.StrictMode);
                m_sceneMap.Add(single, prefix+"/"+single.ToLower()+".unity.ab");
            }
        }
    }

    static bool CheckAndStatistics()
    {
        Debug.Log("====================== [AssetsBundleBuilder] Statistics ======================");
        int useCount = 0;
        List<bool> flag = new List<bool>();
        for (int i = 0; i < m_fileList.Count; i++)
        {
            flag.Add(false);
        }

        for (int i = 0; i < m_abBuildList.Count; i++)
        {
            AssetBundleBuild build = m_abBuildList[i];
            useCount = useCount + build.assetNames.Length;

            // if (build.assetBundleName == "assets/thirdparty/stompyrobot/packrule.ini.ab")
            if(true)
            {
                Debug.Log("assetBundleName " + build.assetBundleName + ", Count :" + build.assetNames.Length);
                foreach(var single in build.assetNames)
                {
                    Debug.Log("    "+single);

                    int index = FindFileIndex(single);
                    if(index == -1)
                    {
                        Debug.Log("Error. can't find file: " + single);
                        return false;
                    }

                    flag[index] = true;
                }
            }
        }

        Debug.Log("----------------------------------------------");
        Debug.Log("遍历到文件数目:" + m_fileList.Count);
        Debug.Log("参与AB包的数目:" + useCount);
        Debug.Log("生成AB包的数目:" + m_abBuildList.Count);
        if (useCount < m_fileList.Count)
        {
            Debug.Log("未参与的文件如下: " + (m_fileList.Count - useCount));
            for (int i = 0; i < flag.Count; i++)
            {
                if(flag[i] == false)
                {
                    Debug.Log("    "+m_fileList[i]);
                }
            }
        }

        return true;
    }

    static void PrintTest()
    {
        Debug.Log("=============m_fileList===================");
        Debug.Log(m_fileList.Count);
        for (int i = 0; i < m_fileList.Count; i++)
        {
            Debug.Log("" + i + ":" + m_fileList[i]);
        }

        Debug.Log("=============depMap===================");
        Debug.Log(m_depMap.Keys.Count);
        foreach (KeyValuePair<int, List<int>> item in m_depMap)
        {
            Debug.Log(item.Key + ":" + m_fileList[item.Key]);
            foreach (int index in item.Value)
            {
                Debug.Log("    " + index + ":" + m_fileList[index]);
            }
        }

        Debug.Log("=============PackRuleMap===================");
        Debug.Log(m_packRuleMap.Keys.Count);
        foreach (KeyValuePair<int, int> item in m_packRuleMap)
        {
            Debug.Log(m_fileList[item.Key]);
            Debug.Log("    "+m_fileList[item.Value]);
        }

        Debug.Log("--------------m_refMap------------------");
        Debug.Log(m_refMap.Keys.Count);
        foreach (KeyValuePair<int, List<int>> item in m_refMap)
        {
            if(item.Value.Count > 0)
            {
                Debug.Log(item.Key + ":" + m_fileList[item.Key]);
                foreach (int index in item.Value)
                {
                    Debug.Log("    " + index + ":" + m_fileList[index]);
                }
            }
        }

        Debug.Log("--------------abList------------------");
        Debug.Log(m_abList.Count);
        for (int i = 0; i < m_fileList.Count; i++)
        {
            int abIndex = m_abList[i];
            if( i == abIndex)
            {}
            else
            {
                Debug.Log("" + m_fileList[i] + ":" + m_fileList[abIndex]);
            }
        }

        Debug.Log("--------------m_abDepMap------------------");
        Debug.Log(m_abDepMap.Keys.Count);
        foreach (KeyValuePair<int, List<int>> item in m_abDepMap)
        {
            if(item.Value.Count > 0)
            {
                Debug.Log(AbNameFromFile(item.Key));
                foreach (int index in item.Value)
                {
                    Debug.Log("    " + AbNameFromFile(index));
                }
            }
        }
    }

    static void CreateABBuildList()
    {
        Dictionary<string, List<string> > buildMap = new Dictionary<string, List<string> >();
        for (int i = 0; i < m_fileList.Count; i++)
        {   
            string fileName = m_fileList[i];
            if (fileName.Contains(m_packRuleFile))
            {
                continue;
            }

            string abName = AbNameFromFile(m_abList[i]);

            if( buildMap.ContainsKey(abName) )
            {
                List<string> names = buildMap[abName];
                names.Add(fileName);
            }
            else
            {
                List<string> names =  new List<string>();
                names.Add(fileName);
                buildMap.Add(abName, names);
            }
        }

        m_abBuildList = new List<AssetBundleBuild>();
        foreach (KeyValuePair<string, List<string>> item in buildMap)
        {
            AssetBundleBuild build = new AssetBundleBuild();
            build.assetBundleName = item.Key;
            build.assetNames = item.Value.ToArray();
            m_abBuildList.Add(build);
        }
    }

    static string AbNameFromFile(int i)
    {
        string str = m_fileList[i].ToLower() + ".ab";
        return str;
    }

    static void CreateABList()
    {
        m_abList.Clear();
        for (int i = 0; i < m_fileList.Count; i++)
        {
            //优先处理自定义规则的
            if( m_packRuleMap.ContainsKey(i) )
            {
                int abIndex = m_packRuleMap[i];
                m_abList.Add(abIndex);
            }
            else
            {
                int abIndex = CalculateDependent(i);
                m_abList.Add(abIndex);
            }
        }

        m_abDepMap = new Dictionary<int, List<int> >();
        foreach (KeyValuePair<int, List<int>> item in m_depMap) //遍历文件依赖表
        {
            int abKeyIndex = m_abList[item.Key];            
            List<int> indexs;
            bool isNew = false;
            if (m_abDepMap.ContainsKey(abKeyIndex) )
            {
                indexs = m_abDepMap[abKeyIndex];
            }
            else
            {
                indexs = new List<int>();
                isNew = true;
            }

            if(item.Value.Count > 0)
            {
                foreach (int i in item.Value)
                {
                    int abValueIndex = m_abList[i];
                    if( abKeyIndex == abValueIndex) //包含自身的去掉.
                    {}
                    else
                    {
                        bool isAddAlready = false;
                        foreach (int j in indexs) //已经加过的不加
                        {
                            if (abValueIndex == j)
                            {
                                isAddAlready = true;
                                break;
                            }
                        }

                        if(isAddAlready == false)
                        {
                            indexs.Add(abValueIndex);
                        }
                    }
                }
                
                if( isNew && indexs.Count > 0 )
                {
                    m_abDepMap.Add(abKeyIndex, indexs);
                }
            }
        }
    }

    // 深度遍历检测是否有循环
    static void CheckABDependentLoop()
    {
        List<int> flagList = new List<int>();
        for (int i = 0; i < m_abList.Count; i++)
        {
            flagList.Add(0); //0.未遍历,1.已遍历
        }

        // foreach (KeyValuePair<int, List<int>> item in m_abDepMap)
        // {
        //     int abIndex = m_abList[item.Key];
        //     string abName = AbNameFromFile(abIndex);
        //     if(abName.Contains("Thirdparty") )
        //     {}
        //     else
        //     {
        //         str += "    [\"" + abName + "\"] = {";
        //         foreach (int index in item.Value)
        //         {
        //             abIndex = m_abList[index];
        //             str += "\"" + AbNameFromFile(abIndex) + "\", ";
        //         }

        //         str += "},\n";
        //     }
        // }

        // m_isExistError = true;
    }

    //计算一个文件依赖的最终归属哪个ab包.
    static int CalculateDependent(int index)
    {
        string fileName = m_fileList[index];
        if(fileName.EndsWith(".unity") || fileName.EndsWith(".prefab") ) //unity要单独做成一个,不能与其他的合并.
        {
            return index;
        }

        if( m_refMap.ContainsKey(index) ) //有文件被引用.
        {
            List<int> indexs = m_refMap[index];
            if(indexs.Count > 0)
            {
                if(indexs.Count == 1) //只依赖一个文件时,递归向上.
                {
                    string dependentFileName = m_fileList[indexs[0]];
                    if(dependentFileName.EndsWith(".unity")) //.unity文件不允许和其他资源一起
                    {
                        return index;
                    }

                    return CalculateDependent(indexs[0]);
                }
                else
                {
                    return index;
                }
            }
        }

        return index;
    }

    static void CreateDependentMap()
    {
        m_depMap = new Dictionary<int, List<int> >();
        for (int i = 0; i < m_fileList.Count; i++)
        {
            string file = m_fileList[i];
            if (file.Contains(m_packRuleFile))
            {
                continue;
            }

            //unity给出的所有依赖文件
            string[] list = AssetDatabase.GetDependencies(file, false);
            if(list.Length > 0)
            {
                List<int> indexs = new List<int>();
                foreach(var single in list)
                {
                    int index = FindFileIndex(single);
                    if(index == -1)
                    {
                        if (single.StartsWith("Packages/"))
                        {
                            // 包里的资源不进AssetBundle
                            // 导出工程项目时全部导出,运行时一次性全部加载
                        }
                        else if (single.StartsWith("Assets/Thirdparty/"))
                        {
                            if (single.Contains("Resources"))
                            {
                                // 导出工程项目时全部导出,运行时一次性全部加载
                            }
                            else
                            {
                                Debug.LogWarning("not find thirdparty dependent :" + single + " in " + file);
                                m_isExistError = true;
                            }
                        }
                        else
                        {
                            if (single.EndsWith(".cs"))
                            {
                                // 运行的代码不应该依赖编辑器下的cs
                                if (single.Contains("Editor")) //|| single.Contains("Resources")
                                {
                                    Debug.LogWarning("dependent cs file in editor. " + single + " in " + file);
                                    m_isExistError = true;
                                }
                            }
                            else
                            {
                                Debug.LogWarning("not find dependent :" + single + " in " + file);
                                m_isExistError = true;
                            }
                        }
                    }
                    else
                    {
                        indexs.Add(index);
                    }
                }

                if(indexs.Count > 0)
                {
                    m_depMap.Add(i, indexs);
                }
            }
        }
    }

    static void CreateReferenceMap()
    {
        m_refMap = new Dictionary<int, List<int> >();
        foreach (KeyValuePair<int, List<int> > kv in m_depMap)
        {
            foreach (var index in kv.Value)
            {
                if( m_refMap.ContainsKey(index) )
                {
                    List<int> indexs = m_refMap[index];
                    indexs.Add(kv.Key);
                }
                else
                {
                    List<int> indexs = new List<int>();
                    indexs.Add(kv.Key);
                    m_refMap.Add(index, indexs);
                }
            }
        }
    }

    static void CreateLanguageMap()
    {
        m_languageMap = new Dictionary<string, List<string> >();

        for (int i = 0; i < m_fileList.Count; i++)
        {
            string fileName = m_fileList[i];
            if( fileName.Contains("Localizations") )
            {
                int index = fileName.IndexOf("Localizations");
                string key = fileName.Substring(index+14, 2);

                if( m_languageMap.ContainsKey(key) )
                {
                    List<string> values = m_languageMap[key];
                    values.Add( fileName.Replace("/Localizations/"+key, "") );
                }
                else
                {
                    List<string> values = new List<string>();
                    values.Add( fileName.Replace("/Localizations/"+key, "") );
                    m_languageMap.Add(key, values);
                }
            }
        }
    }

    // static bool IsThirdparty(string fileName)
    // {
    //     return fileName.Contains("Assets/Thirdparty/");
    // }

    // static bool IsUITexture(string fileName)
    // {
    //     return fileName.Contains("Assets/Textures/");
    // }

    //遍历目录下的所有文件
    static void TraverseFiles(string dir)
    {
        string[] list = Directory.GetFiles(dir);
        foreach(var single in list)
        {
            if( IsVaildFile(single) )
            {
                if(single.EndsWith(m_packRuleFile))
                {
                    m_packRuleFileList.Add(m_fileList.Count);
                }
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

    static void CreatePackRuleMap()
    {
        m_packRuleMap = new Dictionary<int, int>();
        for (int i = 0; i < m_packRuleFileList.Count; i++)
        {
            int ruleFileindex = m_packRuleFileList[i];
            string fileName = m_fileList[ruleFileindex];
            string[] lines = File.ReadAllLines(fileName, Encoding.UTF8);
            string ruleKey = lines[0];
            if (ruleKey == "SpritePacker")
            {
                SearchFileByPackRule(fileName, ruleFileindex, false);
            }
            else if(ruleKey == "Directory")
            {
                string tag = lines[1];
                if(tag == "Recursion")
                {
                    SearchFileByPackRule(fileName, ruleFileindex, true);
                }
                else if(tag == "Current")
                {
                    SearchFileByPackRule(fileName, ruleFileindex, false);
                }
            }
        }
        // Debug.LogWarning("OK");
    }

    static void SearchFileByPackRule(string ruleFile, int ruleFileindex, bool isRecursion)
    {
        string dirPreffix = ruleFile.Replace(m_packRuleFile,"");
        for (int i = 0; i < m_fileList.Count; i++)
        {
            string fileName = m_fileList[i];
            if(fileName.StartsWith(dirPreffix))
            {
                if(isRecursion)
                {
                    m_packRuleMap.Add(i, ruleFileindex);
                }
                else
                {
                    if(Regex.Matches(fileName, "/").Count == Regex.Matches(dirPreffix, "/").Count)
                    {
                        m_packRuleMap.Add(i, ruleFileindex);
                    }
                }
            }
        }
    }

    // static void CreateSpritePackerList()
    // {
    //     m_spRefMap = new Dictionary<int, int>();
    //     for (int i = 0; i < m_fileList.Count; i++)
    //     {
    //         string fileName = m_fileList[i];
    //         if( IsUITexture(fileName) )
    //         {
    //             string path = Path.GetDirectoryName(fileName);
    //             string spFile = Path.Combine(path, m_spName);

    //             int index = FindFileIndex(spFile);
    //             if(index > 0 && index != i)
    //             {
    //                 m_spRefMap.Add(i, index);
    //             }
    //         }
    //     }
    // }

    // static void CreateThirdPartyPackerList()
    // {
    //     m_3rdRefMap = new Dictionary<int, int>();
    //     for (int i = 0; i < m_fileList.Count; i++)
    //     {
    //         string fileName = m_fileList[i];
    //         if (IsThirdparty(fileName))
    //         {
    //             string[] strList = fileName.Split('/');
    //             // string rdFile = String.format("Assets/Thirdparty/%s/%s", strList[2], m_3rdName);
    //             string rdFile = "Assets/Thirdparty/" + strList[2] + "/" + m_3rdName;
    //             int index = FindFileIndex(rdFile);
    //             if(index > 0 && index != i)
    //             {
    //                 m_3rdRefMap.Add(i, index);
    //             }
    //         }
    //     }
    // }

    static int FindFileIndex(string name)
    {
        for (int i = 0; i < m_fileList.Count; i++)
        {
            string file = m_fileList[i];
            if(file == name)
            {
                return i;
            }
        }

        return -1;
    }

    static bool IsVaildDirectory(string dir)
    {
        //这两个目录不参与打包
        if(dir.Contains("Editor") || dir.Contains("Resources"))
        {
            return false;
        }

        foreach(var single in m_dirPrefix)
        {
            if(dir.StartsWith("Assets/"+single))
            {
                //第三方黑名单里的文件夹不进去
                //if(single == "Thirdparty")
                //{
                //    foreach(var temp in m_dir3rdBlack)
                //    {
                //        if(dir.StartsWith("Assets/Thirdparty/"+temp))
                //        {
                //            return false;
                //        }
                //    }
                //}

                return true;
            }
        }

        return false;
    }

    static bool IsVaildFile(string file)
    {
        foreach(var single in m_fileSuffix)
        {
            if(file.ToLower().EndsWith(single.ToLower()))
            {
                return true;
            }
        }

        //如果是插件里的,再遍历一次
        //if(file.Contains("Assets/Thirdparty/"))
        //{
        //    foreach(var single in m_file3rdSuffix)
        //    {
        //        if(file.ToLower().EndsWith(single.ToLower()))
        //        {
        //            return true;
        //        }
        //    }
        //}

        return false;
    }

    static void CreateLuaFile()
    {
        string path = "Build/assetBundle.lua";
        FileStream fs = new FileStream(path, FileMode.Create);
        StreamWriter sw = new StreamWriter(fs);

        string str = "";
        str += "local assetBundle = {}\n";
        str += "assetBundle.map = {\n";

        if(m_isWholeScene)
        {
            foreach (var item in m_sceneMap)
            {
                str += "    [\"" + item.Key + "\"] = \""+ item.Value +"\",\n";
            }
        }

        for (int i = 0; i < m_fileList.Count; i++)
        {
            int abIndex = m_abList[i];
            if( i == abIndex)
            {
                if(m_isWholeScene == false)
                {
                    //场景用短名字,保证跟lua的枚举对应.
                    string fileName = m_fileList[i];
                    if(fileName.EndsWith(".unity"))
                    {
                        string[] temp1 = fileName.Split(new char[2]{'/','\\'});
                        string lastString = temp1[ temp1.Length-1 ];
                        string[] temp2 = lastString.Split(new char[1]{'.'});
                        fileName = temp2[0];
                        str += "    [\"" + fileName + "\"] = \""+ AbNameFromFile(abIndex) +"\",\n";
                    }
                }
            }
            else
            {
                string fileName = m_fileList[i];
                if(fileName.Contains("Thirdparty"))
                {
                    //就算加进去,第三方的资源,我不会主动调用.
                    //第三方调用,也不知道ab包在哪里.
                }
                else
                {
                    str += "    [\"" + fileName + "\"] = \""+ AbNameFromFile(abIndex) +"\",\n";
                }
            }
        }

        str += "}\n";
        str += "assetBundle.dep = {\n";
        
        foreach (KeyValuePair<int, List<int>> item in m_abDepMap)
        {
            int abIndex = m_abList[item.Key];
            string abName = AbNameFromFile(abIndex);
            if(abName.Contains("Thirdparty") )
            {}
            else
            {
                str += "    [\"" + abName + "\"] = {";
                foreach (int index in item.Value)
                {
                    abIndex = m_abList[index];
                    str += "\"" + AbNameFromFile(abIndex) + "\", ";
                }

                str += "},\n";
            }
        }

        str += "}\n";

        foreach (KeyValuePair<string, List<string>> item in m_languageMap)
        {
            str += "assetBundle.language_" + item.Key.ToLower() + " = {\n";
            foreach(string single in item.Value)
            {
                //  ["assets/prefabs/test1.prefab"] = 1,
                str += "    [\"" + single + "\"] = 1,\n";
            }
            str += "}\n";
        }

        str += "return assetBundle\n";

        sw.Write(str);
        sw.Flush();
        sw.Close();
        fs.Close();

        // //移动lua文件到Assert/LuaScript
        // string srcPath = "Build/assetBundle.lua";
        // string dstPath = "Build/../Assets/LuaScript/assetBundle.lua";

        // if(File.Exists(srcPath))
        // {
        //     if(File.Exists(dstPath))
        //     {
        //         File.Delete(dstPath);
        //     }
        //     File.Copy(srcPath, dstPath);
        // }
    }   
}
