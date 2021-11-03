package com.game;

import android.app.Activity;
import android.net.ConnectivityManager;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.telephony.TelephonyManager;
import android.net.NetworkInfo;
import java.net.NetworkInterface;
import java.util.Enumeration;
import java.net.InetAddress;
import java.net.SocketException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.net.URLConnection;
import java.net.URL;
import android.content.BroadcastReceiver;
import android.content.Intent;
import android.content.Context;

import static android.content.Context.WIFI_SERVICE;

//参考文档
//https://www.jianshu.com/p/ca3d87a4cdf3

public class Network extends BroadcastReceiver
{
    static public Activity activity;
    static public String m_ip = "";

    @Override
    public void onReceive(Context context, Intent intent)
    {
        System.out.println("network state changed.");
        GameDelegate.network_changed( GetNetworkType(), localIpAddress() );
    }

    public static String localIpAddress()
    {
        try {
            for (Enumeration<NetworkInterface> enNetI = NetworkInterface.getNetworkInterfaces(); enNetI.hasMoreElements();)
            {
                NetworkInterface netI = enNetI.nextElement();

// lo,tunl0,sit0,p2p0,wlan0.
// sit0,lo,dummy0,rmnet_data0
//System.out.println("ipAddress is net : " + netI.getDisplayName());
                //if (netI.getDisplayName().equals("wlan0") || netI.getDisplayName().equals("eth0")) {
                    for (Enumeration<InetAddress> enumIpAddr = netI.getInetAddresses(); enumIpAddr.hasMoreElements(); ) {
                        InetAddress inetAddress = enumIpAddr.nextElement();

                        System.out.println("ipAddress is " + inetAddress.getHostAddress());

                        if( inetAddress.isSiteLocalAddress() )
                        {
                            return inetAddress.getHostAddress();
                        }
                    }
                //}
            }
        } catch (SocketException e) {
            e.printStackTrace();
        }

        return "";
    }

    //不是立即获得，创建了线程.
    public static String globalIpAddress()
    {
        Thread t = new Thread(new Runnable(){
            public void run(){
                try {
                    URL ipify = new URL("http://api.ipify.org");
                    URLConnection conn = ipify.openConnection();
                    BufferedReader in = new BufferedReader(new InputStreamReader(conn.getInputStream()));
                    m_ip = in.readLine();
//System.out.println("realy ipAddress is:" + m_ip);
                    in.close();
                }
                catch (IOException e)
                {
                    e.printStackTrace();
                }
            }
        });
        t.start();

        return m_ip;
    }

    public static String GetNetworkType()
    {
        String str = "";
        ConnectivityManager cm = (ConnectivityManager) activity.getSystemService(activity.CONNECTIVITY_SERVICE);
        NetworkInfo networkInfo = cm.getActiveNetworkInfo();
        if(networkInfo == null)
        {
            return str;
        }

        if (networkInfo.getType() == ConnectivityManager.TYPE_WIFI)
        {
            str = "wifi";
        }
        else if (networkInfo.getType() == ConnectivityManager.TYPE_MOBILE)
        {
            str = networkInfo.getSubtypeName();
            int networkType = networkInfo.getSubtype();

            switch (networkType) {
                case TelephonyManager.NETWORK_TYPE_GPRS:
                case TelephonyManager.NETWORK_TYPE_EDGE:
                case TelephonyManager.NETWORK_TYPE_CDMA:
                case TelephonyManager.NETWORK_TYPE_1xRTT:
                case TelephonyManager.NETWORK_TYPE_IDEN: //api<8 : replace by 11
                case TelephonyManager.NETWORK_TYPE_GSM:
                    str = "2G";
                    break;
                case TelephonyManager.NETWORK_TYPE_UMTS:
                case TelephonyManager.NETWORK_TYPE_EVDO_0:
                case TelephonyManager.NETWORK_TYPE_EVDO_A:
                case TelephonyManager.NETWORK_TYPE_HSDPA:
                case TelephonyManager.NETWORK_TYPE_HSUPA:
                case TelephonyManager.NETWORK_TYPE_HSPA:
                case TelephonyManager.NETWORK_TYPE_EVDO_B: //api<9 : replace by 14
                case TelephonyManager.NETWORK_TYPE_EHRPD:  //api<11 : replace by 12
                case TelephonyManager.NETWORK_TYPE_HSPAP:  //api<13 : replace by 15
                case TelephonyManager.NETWORK_TYPE_TD_SCDMA:
                    str = "3G";
                    break;
                case TelephonyManager.NETWORK_TYPE_LTE:    //api<11 : replace by 13c
                    str = "4G";
                    break;
                default:
                    if (str.equalsIgnoreCase("TD-SCDMA") ||
                        str.equalsIgnoreCase("WCDMA") ||
                        str.equalsIgnoreCase("CDMA2000"))
                    {
                        str = "3G";
                    }
            }
        }

        return str;
    }

    //wifi下可以掉用该接口
    static public String getSSID()
    {
        WifiManager wifiManager = (WifiManager) activity.getApplicationContext().getSystemService(WIFI_SERVICE);
        WifiInfo wifiInfo = wifiManager.getConnectionInfo();
        return wifiInfo.getSSID();
    }
}


