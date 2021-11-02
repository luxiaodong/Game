using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;
using System.Text;
 
// https://zhuanlan.zhihu.com/p/164879658?utm_source=qq&utm_medium=social&utm_oi=910587312751153152&utm_content=first

public class  CustomAssetImporter : AssetPostprocessor 
{
    void OnPostprocessModel(GameObject go)
    {
        ModelImporter modelImporter = assetImporter as ModelImporter;
        modelImporter.optimizeMesh = true;
        modelImporter.meshCompression = ModelImporterMeshCompression.High;

        if( modelImporter.isReadable )
        {
            LogWarning("[CustomAssetImporter] Read/Write enabled. " + assetPath);
        }

        if( modelImporter.generateSecondaryUV )
        {
            LogWarning("[CustomAssetImporter] lightmapping UV enabled. " + assetPath);
        }

        if( modelImporter.addCollider )
        {
            LogWarning("[CustomAssetImporter] collider mesh enabled. " + assetPath);
        }

        if ( modelImporter.importBlendShapes )
        {
            LogWarning("[CustomAssetImporter] blend shapes enabled. " + assetPath);
        }   
    }

    void OnPreprocessAnimation()
    {
        ModelImporter modelImporter = assetImporter as ModelImporter;
        modelImporter.optimizeGameObjects = true;
        modelImporter.animationCompression = ModelImporterAnimationCompression.Optimal;
    }

	void OnPostprocessTexture(Texture2D texture) 
	{
        // 设置图集和平台材质
        SetSpritePackingTag();
		SetPlatformTexture();

        TextureImporter textureImporter  = assetImporter as TextureImporter;
        if( textureImporter.isReadable )
        {
            LogWarning("[CustomAssetImporter] Read/Write enabled. " + assetPath);
        }

        if ( textureImporter.mipmapEnabled )
        {
            LogWarning("[CustomAssetImporter] mipmap enabled. " + assetPath);
        }

        if ( textureImporter.anisoLevel > 1 )
        {
            LogWarning("[CustomAssetImporter] anisoLevel bigger than 1" + assetPath);
        }
	}

    // --辅助函数--
	void SetSpritePackingTag()
	{
		bool isUITexture = assetPath.Contains("Assets/Textures");
		if(isUITexture)
		{
            //检查目录下的 PackRule.ini 文件, 如果有, 提取里面的字符串 设置成tag
            TextureImporter textureImporter  = assetImporter as TextureImporter;
			string path = Path.GetDirectoryName(assetPath);
			string name = "PackRule.ini";
			string fullName = Path.Combine(path, name);
			if( File.Exists(fullName) )
			{
				string[] lines = File.ReadAllLines(fullName, Encoding.UTF8);
				string ruleKey = lines[0];
                if(ruleKey == "SpritePacker")
                {
                    string tagName = lines[1];
                    textureImporter.spritePackingTag = tagName;
                }
			}

            textureImporter.mipmapEnabled = false;
            textureImporter.anisoLevel = 1;
            if(textureImporter.textureType != TextureImporterType.NormalMap)
            {
                textureImporter.textureType = TextureImporterType.Sprite;
            }
		}
	}

	void SetPlatformTexture()
	{
		TextureImporter textureImporter  = assetImporter as TextureImporter;
        bool haveAlpha = textureImporter.DoesSourceTextureHaveAlpha();
        TextureImporterFormat iosFormat = haveAlpha ? TextureImporterFormat.ASTC_RGBA_6x6 : TextureImporterFormat.ASTC_RGB_6x6;
        TextureImporterFormat andFormat = haveAlpha ? TextureImporterFormat.ETC2_RGBA8 : TextureImporterFormat.ETC_RGB4;
        TextureImporterFormat macFormat = haveAlpha ? TextureImporterFormat.RGBA32 : TextureImporterFormat.RGB24;

        // 2019, ASTC_RGBA_6x6 与 ASTC_RGB_6x6 合并成 ASTC_6x6
        iosFormat = TextureImporterFormat.ASTC_6x6;
        //奇怪,部分法线贴图不支持RGB24.
        if(textureImporter.textureType == TextureImporterType.NormalMap)
        {
            macFormat = haveAlpha ? TextureImporterFormat.RGBA32 : TextureImporterFormat.DXT5Crunched;
        }

        bool isUITexture = assetPath.Contains("Assets/Textures");
        int maxSize = isUITexture ? 2048 : 256;
        TextureImporterPlatformSettings iosSetting = new TextureImporterPlatformSettings
        {
            name = "iPhone",
            overridden = true,
            maxTextureSize = maxSize,
            format = iosFormat,
            resizeAlgorithm = TextureResizeAlgorithm.Mitchell,
        };

        TextureImporterPlatformSettings androidSetting = new TextureImporterPlatformSettings
        {
            name = "Android",
            overridden = true,
            maxTextureSize = maxSize,
            format = andFormat,
            resizeAlgorithm = TextureResizeAlgorithm.Mitchell,
        };

        TextureImporterPlatformSettings standaloneSetting = new TextureImporterPlatformSettings
        {
            name = "Standalone",
            overridden = true,
            maxTextureSize = maxSize,
            format = macFormat,
            resizeAlgorithm = TextureResizeAlgorithm.Mitchell,
        };

        textureImporter.SetPlatformTextureSettings(iosSetting);
        textureImporter.SetPlatformTextureSettings(androidSetting);
        // textureImporter.SetPlatformTextureSettings(standaloneSetting);
	}
}
