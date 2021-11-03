package com.game;

import android.bluetooth.BluetoothAdapter;
import android.content.Context;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.app.Activity;
import android.app.ActivityManager;
import android.content.pm.ConfigurationInfo;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.UnsupportedEncodingException;
import java.lang.reflect.Method;
import java.util.UUID;

import android.provider.Settings;
import android.telephony.TelephonyManager;
import android.util.DisplayMetrics;


// 信息参考文档.
// http://blog.csdn.net/github_25928675/article/details/50561889
// https://www.jianshu.com/p/178786f833b6

public class DeviceInfo
{
    static public Activity activity;
    static private String m_astId = "";
    static private String m_deviceId = "";
    static private String m_openglVersion = "";
    static private String m_memorySize = "";
    static private String m_resolution = "";

    public static String getAstId(){

        if(m_astId.isEmpty() == false)
        {
            return m_astId;
        }

        m_astId = UserDefault.getString(activity, "ast_astId");

        if(m_astId.isEmpty() == false)
        {
            return m_astId;
        }

        m_astId = UUID.randomUUID().toString();
        UserDefault.setString(activity, "ast_astId", m_astId);
        return m_astId;
    }

    static public String getDeviceId()
    {
        if(m_deviceId.isEmpty() == false)
        {
            return m_deviceId;
        }

        m_deviceId = UserDefault.getString(activity, "ast_deviceId");

        if(m_deviceId.isEmpty() == false)
        {
            return m_deviceId;
        }

        if(m_deviceId.isEmpty() == true)
        {
            String str = getImei();
            if(str.isEmpty() == false)
            {
                m_deviceId = "IMEI-"+str;
            }
        }

        if(m_deviceId.isEmpty() == true)
        {
            String str = getMacAddress();
            if(str.isEmpty() == false)
            {
                m_deviceId = "MAC-"+str;
            }
        }

        if(m_deviceId.isEmpty() == true)
        {
            String str = getBlueTooth();
            if(str.isEmpty() == false)
            {
                m_deviceId = "BLTH-"+str;
            }
        }

        if(m_deviceId.isEmpty() == true)
        {
            String str = hardwareSerialNumber();
            if(str.isEmpty() == false)
            {
                if(str.toLowerCase().equals("9774d56d682e549c") == false)
                {
                    m_deviceId = "HDSN-" + str + "-AID-" + getAndroidId();
                }
            }
        }

        if(m_deviceId.isEmpty() == true)
        {
            String str = getAndroidId();
            if(str.isEmpty() == false)
            {
                m_deviceId = "AID-"+str;
            }
        }

        if(m_deviceId.isEmpty() == false)
        {
            UserDefault.setString(activity, "ast_deviceId", m_deviceId);
        }

        return m_deviceId;
    }

    static public String getManufacturer()
    {
        return Build.MANUFACTURER;
    }

    static public String getDeviceModel()
    {
        return Build.MODEL;
    }

    static public String getOsVersion()
    {
        return Build.VERSION.RELEASE;
    }

    static public String hardwareSerialNumber()
    {
        return android.os.Build.SERIAL;
    }



    static public String getOpenGLVersion()
    {
        if(m_openglVersion.isEmpty() == false)
        {
            return m_openglVersion;
        }

        ActivityManager activityManager =(ActivityManager)activity.getSystemService(activity.ACTIVITY_SERVICE);
        ConfigurationInfo configInfo = activityManager.getDeviceConfigurationInfo();
        m_openglVersion = configInfo.getGlEsVersion();
        return m_openglVersion;
    }

    static public String getMemSize()
    {
        if(m_memorySize.isEmpty() == false)
        {
            return m_memorySize;
        }

        String path = "/proc/meminfo";
        String firstLine = null;
        int totalRam = 0 ;
        try{
            FileReader fileReader = new FileReader(path);
            BufferedReader br = new BufferedReader(fileReader, 8192);
            firstLine = br.readLine().split("\\s+")[1];
            br.close();
        }catch (Exception e){
            System.out.println("getMemSize error");
        }
        if(firstLine != null){
            totalRam = (int)Math.ceil((new Float(Float.valueOf(firstLine) / (1024 * 1024)).doubleValue()));
        }

        m_memorySize = String.format("%dG",totalRam);
        return m_memorySize;
    }

    static public String getResolution()
    {
        if(m_resolution.isEmpty() == false)
        {
            return m_resolution;
        }

        DisplayMetrics dm = new DisplayMetrics();
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.JELLY_BEAN_MR1) {
            activity.getWindowManager().getDefaultDisplay().getRealMetrics(dm);
        } else {
            activity.getWindowManager().getDefaultDisplay().getMetrics(dm);
        }

        m_resolution = String.format("%d,%d",dm.widthPixels,dm.heightPixels);
        return m_resolution;
    }

    static public String getMacAddress()
    {
        WifiManager wm = (WifiManager) activity.getApplicationContext().getSystemService(Context.WIFI_SERVICE);
        String str = wm.getConnectionInfo().getMacAddress();
        return str;
    }

    static public String getBlueTooth()
    {
        BluetoothAdapter m_BluetoothAdapter = BluetoothAdapter.getDefaultAdapter();
        String str = m_BluetoothAdapter.getAddress();
        return str;
    }

    static public String getImei()
    {
        if( PermissionManager.isOwnedPermission("android.permission.READ_PHONE_STATE"))
        {
            TelephonyManager tm = (TelephonyManager) activity.getSystemService(activity.TELEPHONY_SERVICE);
            String str = tm.getDeviceId();
            return str;
        }

        return "";
    }

    static public String getAndroidId()
    {
        String str = Settings.Secure.getString(activity.getContentResolver(), Settings.Secure.ANDROID_ID);
        if(str.equals("9774d56d682e549c"))
        {
            str = UUID.randomUUID().toString();
        }
        else
        {
            str = UUID.nameUUIDFromBytes(str.getBytes()).toString();
        }

        return str;
    }

    static boolean is64Bit()
    {
        if(Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) //6.0以上
        {
            return android.os.Process.is64Bit();
        }
        else if(Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP) //5.0以上
        {
            try {
                ClassLoader classLoader = activity.getApplicationContext().getClassLoader();
                Class<?> cls = ClassLoader.class;
                Method method = cls.getDeclaredMethod("findLibrary", String.class);
                Object object = method.invoke(classLoader, "art");
                if (object != null) {
                    return ((String)object).contains("lib64");
                }
            } catch (Exception e)
            {
                String CPU_ABI = Build.CPU_ABI;
                if (CPU_ABI != null && CPU_ABI.contains("arm64"))
                {
                    return true;
                }

                return false;
            }
        }

        return false;
    }

    static public void buildInfo()
    {
        System.out.println("============build hardware===========");
        String str = "";
        str += "主板:" +Build.BOARD + "\n";
        str += "系统启动程序版本:" +Build.BOOTLOADER + "\n";
        str += "系统定制商:" +Build.BRAND + "\n";
        str += "cpu指令集:" +Build.CPU_ABI + "\n";
        str += "cpu指令集2:" +Build.CPU_ABI2 + "\n";
        str += "显示屏参数:" +Build.DISPLAY + "\n";
        str += "硬件制造商:" +Build.MANUFACTURER + "\n";
        str += "无线电固件版本:" +Build.getRadioVersion() + "\n";
        str += "硬件识别码:" +Build.FINGERPRINT + "\n";
        str += "硬件名称:" +Build.HARDWARE + "\n";
        str += "HOST:" +Build.HOST + "\n";
        str += "修订版本列表: " +Build.ID + "\n";
        str += "手机型号: " +Build.MODEL + "\n";
        str += "硬件序列号:" +Build.SERIAL + "\n";
        str += "手机制造商:" +Build.PRODUCT + "\n";
        str += "描述Build的标签:" +Build.TAGS + "\n";
        str += "编译时间:" +Build.TIME + "\n";
        str += "builder类型:" +Build.TYPE + "\n";
        str += "USER:" +Build.USER + "\n";
        str += "当前开发代号:" +Build.VERSION.CODENAME + "\n";
        str += "源码控制版本号:" +Build.VERSION.INCREMENTAL + "\n";
        str += "版本号:" +Build.VERSION.SDK_INT + "\n";
        str += "版本字符串:" +Build.VERSION.RELEASE + "\n";
        System.out.println(str);
        System.out.println("============build hardware===========");
    }

    static public void test()
    {
        System.out.println("-------DeviceInfo.test-------");
        System.out.println("IMEI:" + getImei());
        System.out.println("MAC:" + getMacAddress());
        System.out.println("HDSN:" + hardwareSerialNumber());
        System.out.println("AID:" + getAndroidId());
        System.out.println("BT:" + getBlueTooth());
    }
}
