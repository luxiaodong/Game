package com.game;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.content.pm.PackageManager;
import android.provider.Settings;
import android.support.v4.content.ContextCompat;
import android.support.v4.app.ActivityCompat;

import org.json.JSONException;
import org.json.JSONObject;

//参考文档
//https://www.jianshu.com/p/e1ab1a179fbb

public class PermissionManager
{
    static public Activity activity;

    static private String m_name;
    static private String m_des;
    static private String m_data;
    static private boolean m_isGoSetting = true;
    static private int m_requestByLua = 1;
    static private int m_requestByJava = 2;
    static private int m_requestCode = 0;

    //查看权限字符串
    //android.Manifest.permission.READ_PHONE_STATE;

    //请求权限.
    static void requestPermission(JSONObject json)
    {
        try {
            m_name = json.getString("name");
            m_data = json.optString("data");
            m_des = json.optString("des");

            //设备小于6.0,安装时决定权限,用户无法取消.
            //向下兼融,不管应用是否大于23,必定有权限
            //否则就是开发没有在mainfest里添加.
            if( isSmallThanAndroid60() == true)
            {
                System.out.println("isSmallThanAndroid60 == true");
                GameDelegate.permission_request_success(m_name, m_data);
                return ;
            }

            //是否已经获得权限.
            //当targetSdk<23时,isOwnedPermission判断不一定准
            //根据mainfest判断,不结合系统里的设置
            if( isOwnedPermission(m_name) == true )
            {
                System.out.println("isOwnedPermission == true");
                GameDelegate.permission_request_success(m_name, m_data);
                return ;
            }

            //应用小于23,安装时获得权限,无法动态申请权限.用户可以在系统里取消权限
            //没有拥有权限,且无法申请,只能返回false
            if( isTargetSdkSmallThan23() == true)
            {
                System.out.println("isTargetSdkSmallThan23 == true");
                GameDelegate.permission_request_failed(m_name, m_data);
                return ;
            }
            else
            {
                //动态获取权限.
                if( isRejectedBeforeAndCanPopupAgain(m_name) == true )
                {
                    System.out.println("isRejectedBeforeAndCanPopupAgain == true");
                    new AlertDialog.Builder(activity)
                            .setTitle("提示")
                            .setMessage(m_des)
                            .setPositiveButton("OK", new DialogInterface.OnClickListener()
                            {
                                @Override
                                public void onClick(DialogInterface dialog, int which)
                                {
                                    m_isGoSetting = false;
                                    ActivityCompat.requestPermissions(activity, new String[]{m_name}, m_requestByLua);
                                }
                            }).show();
                }
                else
                {
                    System.out.println("isRejectedBeforeAndCanPopupAgain == false");
                    m_isGoSetting = true;
                    ActivityCompat.requestPermissions(activity, new String[]{m_name}, m_requestByLua);
                }
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
    }

    static public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
    {
        System.out.println("onRequestPermissionsResult code: " + requestCode);
        if( grantResults.length == 0 )
        {
            return ;
        }

        int rtn = grantResults[0];
        if(rtn == PackageManager.PERMISSION_GRANTED)
        {
            GameDelegate.permission_request_success(m_name, m_data);
        }
        else
        {
            if( isRejectedBeforeAndCanPopupAgain(m_name) == false )
            {
                if(m_isGoSetting == false)
                {
                    return ;
                }

                m_requestCode = requestCode; //多个请求时有问题
                AlertDialog.Builder builder = new AlertDialog.Builder(activity);
                builder.setTitle("提示");
                builder.setMessage(m_des);
                builder.setNegativeButton("取消", new DialogInterface.OnClickListener()
                {
                    @Override
                    public void onClick(DialogInterface dialog, int which)
                    {
                        if(m_requestByLua == m_requestCode)
                        {
                            GameDelegate.permission_request_failed(m_name, m_data);
                        }
                    }
                });

                builder.setPositiveButton("前往设置", new DialogInterface.OnClickListener()
                {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        Intent intent = new Intent(Settings.ACTION_APPLICATION_DETAILS_SETTINGS);
                        intent.setData(Uri.parse("package:" + activity.getPackageName())); // 根据包名打开对应的设置界面
                        activity.startActivity(intent);
                    }
                });
                builder.create().show();
            }
        }
    }

    static boolean isOwnedPermission(String name)
    {
        int rtn = ContextCompat.checkSelfPermission(activity, name);
        if(rtn == PackageManager.PERMISSION_GRANTED)
        {
            return true;
        }

        return false;
    }

    //是否之前被拒绝过,并且还可以弹框
    static boolean isRejectedBeforeAndCanPopupAgain(String name)
    {
        //第一次请求权限被拒绝后,到选择不再提醒, 这个区间访问返回true.
        if (ActivityCompat.shouldShowRequestPermissionRationale(activity, name))
        {
            return true;
        }

        //第一次请求,或者玩家勾选了不再提醒, 返回false
        return false;
    }

    //应用是否小于等于23
    static boolean isTargetSdkSmallThan23()
    {
        return activity.getApplicationInfo().targetSdkVersion < 23;
    }

    //手机是否小于android6.0
    static boolean isSmallThanAndroid60()
    {
        return Build.VERSION.SDK_INT < 23;
    }

    static void test()
    {
//        System.out.println("isBigThen23 : " + Build.VERSION.SDK_INT);
//        System.out.println("isBigThen23 : " + Build.VERSION.SDK);
//        System.out.println("isBigThen23 : " + Build.VERSION.RELEASE);
//        System.out.println("isBigThen23 : " + activity.getApplicationInfo().targetSdkVersion );
    }
}
