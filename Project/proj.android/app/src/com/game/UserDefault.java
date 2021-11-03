package com.game;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;

import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Properties;

import static android.R.attr.path;

public class UserDefault
{
    public static void setString(Activity activity, String key, String value)
    {
        SharedPreferences sharedPreferences = activity.getSharedPreferences("ast_storage", Context.MODE_PRIVATE);
        SharedPreferences.Editor editor = sharedPreferences.edit();
        editor.putString(key, value);
        editor.apply();

        //if exist sdcard, set again.
        if(PermissionManager.isOwnedPermission("android.permission.WRITE_EXTERNAL_STORAGE") == false)
        {
            return ;
        }

        if (SDCardHelper.isSDCardMounted() == false)
        {
            return ;
        }

        String fileName = getStorageFile();
        try
        {
            File file = new File(fileName);
            if (file.exists() == false) {
                if (file.getParentFile().exists() == false) {
                    file.getParentFile().mkdirs();
                }

                file.createNewFile();
            }

            FileInputStream fis = new FileInputStream(fileName);
            byte[] fileBytes = getFileBytes(fis);

            Properties properties = new Properties();
            properties.load(new ByteArrayInputStream(fileBytes));
            properties.setProperty(key, value);

            // 重新存储到文件
            ByteArrayOutputStream bos = new ByteArrayOutputStream();
            properties.store(bos, "");
            bos.flush();

            FileOutputStream fos = new FileOutputStream(fileName);
            fos.write(bos.toByteArray());
            fos.flush();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public static String getString(Activity activity, String key)
    {
        return getString(activity,key,"");
    }

    public static String getString(Activity activity, String key, String defaultValue)
    {
        SharedPreferences sharedPreferences = activity.getSharedPreferences("ast_storage", Context.MODE_PRIVATE);
        String value = sharedPreferences.getString(key, "");
        if(value.isEmpty() == false)
        {
            return value;
        }

        //if exist sdcard, try get again
        if(PermissionManager.isOwnedPermission("android.permission.WRITE_EXTERNAL_STORAGE") == false)
        {
            return defaultValue;
        }

        if (SDCardHelper.isSDCardMounted() == false)
        {
            return defaultValue;
        }

        String fileName = getStorageFile();
        File file = new File(fileName);
        if(file.exists() == false)
        {
            return defaultValue;
        }

        try
        {
            Properties properties = new Properties();
            FileInputStream fis = new FileInputStream(fileName);
            byte[] fileBytes = getFileBytes(fis);
            properties.load(new ByteArrayInputStream(fileBytes));
            value = properties.getProperty(key, defaultValue);

            if(value.equals(defaultValue) == false)
            {
                SharedPreferences.Editor editor = sharedPreferences.edit();
                editor.putString(key, value);
                editor.apply();
                return value;
            }

        } catch (IOException e) {
            e.printStackTrace();
        }

        return value;
    }


    private static String getStorageFile()
    {
        return SDCardHelper.getSDCardBaseDir() + File.separator + "com.game" + File.separator + "storage.txt";
    }

    private static byte[] getFileBytes(FileInputStream fis)
    {
        try {
            byte[] buff = new byte[1024];
            int len = -1;
            ByteArrayOutputStream bos = new ByteArrayOutputStream();
            while ((len = fis.read(buff)) != -1) {
                bos.write(buff, 0, len);
            }
            return bos.toByteArray();
        } catch (IOException e) {

        }
        return null;
    }
}

