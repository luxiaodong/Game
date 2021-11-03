package com.game;

import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.util.Log;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

public final class FileUtils
{
    private FileUtils() {};

    // 资源管理器
    private static AssetManager assetManager;

    public static final void init(AssetManager assetManager)
    {
        FileUtils.assetManager = assetManager;
    }

//    public static final String getFileText(String path) {
//        byte[] bytes = getFileContent(path);
//        if (null == bytes) {
//            return null;
//        }
//        return new String(bytes);
//    }

    public static final boolean isFileExists(String path)
    {
        try
        {
            if (path.startsWith("jar:file:///")) {
                // 从Assets中获取
                path = path.substring(path.indexOf("assets") + 7);
                InputStream inputStream = assetManager.open(path);
                inputStream.close();
                return true;
            } else {
                File f = new File(path);
                return f.exists();
            }
        } catch (IOException e) {
            //ignore
        }
        return false;
    }

    public static final byte[] readAllBytes(String path)
    {
        InputStream inputStream = null;
        try
        {
            if (path.startsWith("jar:file:///"))
            {
                // 从Assets中获取
                path = path.substring(path.indexOf("assets") + 7);
                inputStream = assetManager.open(path);
            }
            else
            {
                File f = new File(path);
                if (f.exists())
                {
                    inputStream = new FileInputStream(path);
                }
            }

            if(inputStream == null)
            {
                return null;
            }

            ByteArrayOutputStream bos = new ByteArrayOutputStream();
            byte[] buff = new byte[2048];
            int len = -1;
            while ((len = inputStream.read(buff)) != -1) {
                bos.write(buff, 0, len);
            }
            return bos.toByteArray();
        }
        catch (IOException e)
        {
            Log.e("FileUtils", "readAllBytes error:", e);
            Log.i("FileUtils", path);
        }
        finally
        {
            if (null != inputStream)
            {
                try {
                    inputStream.close();
                } catch (IOException e)
                {
                    // Ignore
                }
            }
        }
        return null;
    }
}
