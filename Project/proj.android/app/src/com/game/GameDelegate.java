
package com.game;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.WindowManager;

import org.json.JSONException;
import org.json.JSONObject;

import java.util.HashMap;
import java.util.Map;

import unisdk.UniSdk;
import unisdk.UniSdkEnum;
import unisdk.UniSdkListener;

public class GameDelegate
{	
	//变量，一次性赋值
	static public Activity activity;
	static private String TAG = "GameDelegate";
	static private Boolean m_isLogoutFromLua = false;

	static private UniSdkListener m_listener = new UniSdkListener()
	{
		@Override
		public void callBack(int code, String msg) 
		{
			Log.i(TAG, "=========================");
			Log.i(TAG, "[callBack]: code:" + code);
			Log.i(TAG, msg);
			Log.i(TAG, "=========================");

			if(code == UniSdkEnum.INIT_SUCCESS)
			{
				GameDelegate.sdk_init_success();
			}
			else if(code == UniSdkEnum.INIT_FAILED)
			{
				GameDelegate.sdk_init_failed(msg);
			}
			else if(code == UniSdkEnum.LOGIN_SUCCESS)
			{
				GameDelegate.sdk_login_success(msg);
			}
			else if(code == UniSdkEnum.LOGIN_FAILED)
			{
				GameDelegate.sdk_login_failed(msg);
			}
			else if(code == UniSdkEnum.PAY_SUCCESS)
			{
				GameDelegate.sdk_pay_success(msg);
			}
			else if(code == UniSdkEnum.PAY_FAILED)
			{
				GameDelegate.sdk_pay_failed(msg);
			}
			else if(code == UniSdkEnum.LOGOUT_SUCCESS)
			{
				GameDelegate.sdk_logout_success();
			}
			else if(code == UniSdkEnum.LOGOUT_FAILED)
			{}
			else if(code == UniSdkEnum.ACCOUNTSWITCH_SUCCESS)
			{
				GameDelegate.sdk_accountSwitch_success(msg);
			}
			else if(code == UniSdkEnum.ACCOUNTSWITCH_FAILED)
			{}
			else if(code == UniSdkEnum.EXIT_CHANNEL_SUCCESS)
			{
				GameDelegate.sdk_back_success();
			}
			else if(code == UniSdkEnum.EXIT_GAME_SUCCESS)
			{
				GameDelegate.sdk_exit_success();
			}
		}
	};

//	static private SdkCrashListener m_crashListener = new SdkCrashListener()
//	{
//		@Override
//		public String getCrashCustomData()
//		{
//			System.out.println("SdkCrashListener ===== ===== ====== =====");
//			String str = Cocos2dxLuaEngine.nativeGetLuaTraceBack();
//			return str;
//		}
//	};

	static void sdk_init(String proxyAddress)
	{
		if(proxyAddress.isEmpty())
		{
			proxyAddress = GameConstant.proxyAddress;
		}

		UniSdk.getInstance().init(activity, GameConstant.appId, GameConstant.appKey, proxyAddress);
	}

	static void sdk_login()
	{
		UniSdk.getInstance().login();
	}

	static void sdk_logout()
	{
		UniSdk.getInstance().logout();
	}

	static void sdk_pay(JSONObject json)
	{
		try {
			String userId = json.getString("userId");
			String serverId = json.getString("serverId");
			String serverName = json.getString("serverName");
			String playerId = json.getString("playerId");
			String playerName = json.getString("playerName");
			String playerLv = json.getString("playerLv");
			String playerVip = json.getString("playerVip");
			String playerBalance = json.getString("playerBalance");
			String partyName = json.getString("partyName");
			String productId = json.getString("productId");
			String productName = json.getString("productName");
			String productDes = json.getString("productDes");
			String productPrice = json.getString("productPrice");
			String currency = json.getString("currency");
			String productCount = json.getString("productCount");
			String coinName = json.getString("coinName");
			String coinRate = json.getString("coinRate");
			String orderId = json.getString("orderId");
			String extraData = json.getString("extraData");

			Map<String, String> payInfo = new HashMap<String,String>();
			payInfo.put("payGetOrderAddresss", "http://proxytest3.hlw.aoshitang.com/root/unisdkGetOrder.action");
			payInfo.put("userId", userId);
			payInfo.put("serverId", serverId);
			payInfo.put("serverName", serverName);
			payInfo.put("playerId", playerId);
			payInfo.put("playerName", playerName);
			payInfo.put("playerLv", playerLv);
			payInfo.put("playerVip", playerVip);
			payInfo.put("playerBalance", playerBalance);
			payInfo.put("partyName", partyName);
			payInfo.put("productId", productId);
			payInfo.put("productName", productName);
			payInfo.put("productDes", productDes);
			payInfo.put("productPrice", productPrice);
			payInfo.put("currency", currency);
			payInfo.put("productCount", productCount);
			payInfo.put("coinName", coinName);
			payInfo.put("coinRate", coinRate);
			payInfo.put("orderId", orderId);
			payInfo.put("extraData", extraData);

			UniSdk.getInstance().pay(payInfo);
		}
		catch(Exception e){
			e.printStackTrace();
		}
	}

	static void sdk_exit()
	{
		if( UniSdk.getInstance().hasExitDialog() )
		{
			UniSdk.getInstance().exit();
		}
		else
		{
			click_back_default_exit_dialog();
		}
	}

	static void sdk_submit(JSONObject json)
	{
		try {
    		//--1为进入游戏，2为创建角色，3为角色升级，4为退出
    		String point = json.getString("point");
			String userId = json.getString("userId");
			String serverId = json.getString("serverId");
			String serverName = json.getString("serverName");
			String playerId = json.getString("playerId");
			String playerName = json.getString("playerName");
			String playerLv = json.getString("playerLv");
			String playerVip = json.getString("playerVip");
			String playerBalance = json.getString("playerBalance");
			String partyName = json.getString("partyName");
			String createTime = json.getString("createTime");
			String levelUpTime = json.getString("levelUpTime");

			Map<String, String> info = new HashMap<String,String>();
			info.put("dataType", point);
			info.put("userId", userId);
			info.put("serverId", serverId);
			info.put("serverName", serverName);
			info.put("playerId", playerId);
			info.put("playerName", playerName);
			info.put("playerLv", playerLv);
			info.put("playerVip", playerVip);
			info.put("playerBalance", playerBalance);
			info.put("partyName", partyName);
			info.put("createTime", createTime);
			info.put("levelUpTime", levelUpTime);
			UniSdk.getInstance().submit(info);
		}
		catch(Exception e){
			e.printStackTrace();
		}
	}

	//activity函数----------------------------------------------------
	static void onCreate(Bundle savedInstanceState)
	{
		Log.i(TAG, "onCreate");
		Log.i(TAG, "the ip is:" + Network.localIpAddress());
		
		activity.setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_SENSOR_LANDSCAPE);
		if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
			activity.getWindow().addFlags(WindowManager.LayoutParams.FLAG_TRANSLUCENT_NAVIGATION);
		}

		UniSdk.getInstance().setListener(m_listener);
	//	UniSdkCrash.getInstance().setListener(m_crashListener);
	}
	
	static void onStart()
	{
		Log.i(TAG, "onStart");
		UniSdk.getInstance().onStart();
	}
	
	static void onResume()
	{
		Log.i(TAG, "onResume");
		UniSdk.getInstance().onResume();
	}
	
	static void onPause()
	{
		Log.i(TAG, "onPause");
		UniSdk.getInstance().onPause();
	}
	
	static void onStop()
	{
		Log.i(TAG, "onStop");
		UniSdk.getInstance().onStart();
	}
	
	static void onDestroy()
	{
		Log.i(TAG, "onDestroy");
		UniSdk.getInstance().onDestroy();
	}

	static void onRestart()
	{
		Log.i(TAG, "onRestart");
		UniSdk.getInstance().onRestart();
	}
	
	static void onActivityResult(int requestCode, int resultCode, Intent data)
	{	
		Log.i(TAG, "onActivityResult");
		UniSdk.getInstance().onActivityResult(requestCode, resultCode, data);
	}

	static void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
	{
		Log.i(TAG, "onRequestPermissionsResult");
		PermissionManager.onRequestPermissionsResult(requestCode, permissions, grantResults);
	}

	static void onNewIntent(Intent intent)
	{
		Log.i(TAG, "onNewIntent");
		UniSdk.getInstance().onNewIntent(intent);
	}
	
	static void onWindowFocusChanged(boolean hasFocus)
	{
		Log.i(TAG, "onWindowFocusChanged");
		if(hasFocus == true)
		{
			hide_navigation_bar();
		}
	}
	
	static void onLowMemory()
	{
		Log.i(TAG, "onLowMemory");
	}
	
	//lua掉用sdk函数-----------------------------------
//	static String setToLua(String name, JSONObject json)
//	{
//		if(name.equals("sdk.args"))
//		{
//			try {
//				json.put("action", "sdk.args.success");
//				json.put("channelId", "and_dev");
//				json.put("isSdkLogin", true);
//				json.put("xgToken", m_xgPushToken);
//				json.put("deviceUuid", DeviceInfo.getDeviceId());
//				json.put("astId", DeviceInfo.getAstId());
//				return json.toString();
//			} catch (JSONException e) {
//				e.printStackTrace();
//			}
//		}
//
//		else if(name.equals("device.info"))
//		{
//			try {
//				SDK.args(json);
//				json.put("manufacturer", DeviceInfo.getManufacturer());
//				json.put("deviceModel", DeviceInfo.getDeviceModel());
//				json.put("osVersion", DeviceInfo.getOsVersion());
//				json.put("openglVersion", DeviceInfo.getOpenGLVersion());
//				json.put("memSize", DeviceInfo.getMemSize());
//				json.put("resolution", DeviceInfo.getResolution());
//				return json.toString();
//			} catch (JSONException e) {
//				e.printStackTrace();
//			}
//		}
//
//		return "{}";
//	}

	static void handle_action(String name, JSONObject json)
	{
		if(name.equals("sdk.init"))
		{
			String proxyAddress = json.optString("proxyAddress","");
			GameDelegate.sdk_init(proxyAddress);
		}
		else if(name.equals("sdk.login"))
		{
			GameDelegate.sdk_login();
		}
		else if(name.equals("sdk.pay"))
		{
			GameDelegate.sdk_pay(json);
		}
		else if(name.equals("sdk.logout"))
		{
			m_isLogoutFromLua = true;
			GameDelegate.sdk_logout();
		}
		else if(name.equals("sdk.back"))
		{
			GameDelegate.sdk_exit();
		}
		else if(name.equals("bugly.log"))
		{
			//GameDelegate.buglyLog(json);
		}
		else if(name.equals("game.restart"))
		{
			GameDelegate.restart();
		}
		else if(name.equals("sdk.submit"))
		{
			GameDelegate.sdk_submit(json);
		}
		else if(name.equals("sdk.submit.createPlayer"))
		{
			//SDK.submitCreatePlayer(json);
		}
		else if(name.equals("sdk.submit.enterGame"))
		{
			//SDK.submitEnterGame(json);
		}
		else if(name.equals("sdk.submit.playerLevelUp"))
		{
			//SDK.submitPlayerLevelUp(json);
		}
		else if(name.equals("permission.request"))
		{
			PermissionManager.requestPermission(json);
		}
		else if(name.equals("sdk.test"))
		{
			GameDelegate.test();
		}
		else
		{
			Log.i(TAG,"unhandle action, name is:" + name);
		}
	}

	//sdk掉用lua函数-----------------------------------
	static void sdk_init_success()
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "sdk.init");
			json.put("result", "1");
			json.put("channelId", UniSdk.getInstance().getChannelId());
			json.put("yx", GameConstant.yx);
			json.put("isSdkLogin", true);
//			json.put("xgToken", m_xgPushToken);
			json.put("deviceUuid", "DeviceInfo.getDeviceId");
			json.put("astId", "DeviceInfo.getAstId");
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	static void sdk_init_failed(String msg)
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "sdk.init");
			json.put("result", "0");
			json.put("msg", msg);
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}
	
	static void sdk_login_success(String token)
	{
		JSONObject json = new JSONObject();
		try 
		{
			json.put("action", "sdk.login");
			json.put("result", "1");
			json.put("token", token);
			json.put("yxLoginUrl", String.format("unisdkLogin.action?token=%s&yxSource=%s&platform=ANDROID", token, GameConstant.yx));
			NativeBridge.sendToCSharp(json);
			m_isLogoutFromLua = false;
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}
	
	static void sdk_login_failed(String msg)
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "sdk.login");
			json.put("result", "0");
			json.put("msg", msg);
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}
	
	static void sdk_pay_success(String msg)
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "sdk.pay");
			json.put("result", "1");
			json.put("orderId", msg);
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}
	
	static void sdk_pay_failed(String msg)
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "sdk.pay");
			json.put("result", "0");
			json.put("msg", msg);
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}
	
	static void sdk_logout_success()
	{
		if(m_isLogoutFromLua == false)
		{
			JSONObject json =new JSONObject();
			try {
				json.put("action", "sdk.logout");
				json.put("result", "1");
				NativeBridge.sendToCSharp(json);
			} catch (JSONException e) {
				e.printStackTrace();
			}
		}
	}

	static void sdk_accountSwitch_success(String token)
	{
		JSONObject json = new JSONObject();
		try 
		{
			json.put("action", "sdk.switch");
			json.put("result", "1");
			json.put("token", token);
			json.put("yxLoginUrl", String.format("unisdkLogin.action?token=%s&yxSource=%s&platform=ANDROID", token, GameConstant.yx));
			NativeBridge.sendToCSharp(json);
			m_isLogoutFromLua = false;
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	static void sdk_back_success()
	{}

	static void sdk_exit_success()
	{
		activity.finish();
		System.exit(0);
	}

	//网络变化
	static void network_changed(String networkType, String localIp)
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "network.changed");
			json.put("result", "1");
			json.put("networkType", networkType); //当前网络类型.
			json.put("localIp", localIp);
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	//获取权限返回
	static void permission_request_success(String name, String userData)
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "permission.request");
			json.put("result", "1");
			json.put("name", name);
			json.put("data", userData);
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	static void permission_request_failed(String name, String userData)
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "permission.request");
			json.put("result", "0");
			json.put("name", name);
			json.put("data", userData);
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	//辅助函数----------------------------
	//默认返回对话框
	static public void click_back_default_exit_dialog()
	{
		activity.runOnUiThread(new Runnable() {
			@Override
			public void run() 
			{
				Log.i(TAG,"sdk back");
				new  AlertDialog.Builder(activity)   
        		.setTitle("提示" )  
        		.setMessage("你确定退出游戏吗？")  
        		.setPositiveButton("确定", new DialogInterface.OnClickListener() 
        		{  
                    public void onClick(DialogInterface dialog, int which) 
                    {
                    	activity.finish();
                    	System.exit(0);
                    }  
                 })
        		.setNegativeButton("取消" , null)  
        		.show(); 
			}
		});
	}
	
	//隐藏功能键盘
	static public void hide_navigation_bar()
	{
        final View decorView = activity.getWindow().getDecorView();  
        final int flags = View.SYSTEM_UI_FLAG_LAYOUT_STABLE  
                | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION  
                | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN  
                | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION  
                | View.SYSTEM_UI_FLAG_FULLSCREEN  
                | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY;  
        decorView.setSystemUiVisibility(flags);
        decorView.setOnSystemUiVisibilityChangeListener(new View.OnSystemUiVisibilityChangeListener() {  
            @Override  
            public void onSystemUiVisibilityChange(int visibility) {  
                if ((visibility & View.SYSTEM_UI_FLAG_FULLSCREEN) == 0) {  
                    decorView.setSystemUiVisibility(flags);  
                }  
            }  
        });  
	}

	static public void openUrl(final String url)
	{
		Intent i = new Intent(Intent.ACTION_VIEW);
		i.setData(Uri.parse(url));
		activity.startActivity(i);
	}
	
	static public void restart()
	{
		Intent intent = activity.getPackageManager().getLaunchIntentForPackage(activity.getPackageName());
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
        activity.startActivity(intent);
	}

	//日志上传
	static public void buglyLog(JSONObject json)
	{
		try {
			String level = json.getString("level");
			String tag = json.getString("tag");
			String msg = json.getString("msg");

			if(level.equals("e"))
			{
				//BuglyLog.e(tag, msg);
			}
			else if(level.equals("w"))
			{
				//BuglyLog.w(tag, msg);
			}
			else if(level.equals("i"))
			{
				//BuglyLog.i(tag, msg);
			}
			else if(level.equals("d"))
			{
				//BuglyLog.d(tag, msg);
			}
			else
			{
				//BuglyLog.v(tag, msg);
			}

		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	//测试代码
	static public void test()
	{
		JSONObject json = new JSONObject();
		try {
			json.put("action", "sdk.test");
			json.put("result", "1");
			json.put("msg", "test");
			NativeBridge.sendToCSharp(json);
		} catch (JSONException e) {
			e.printStackTrace();
		}
//		CrashReport.testNativeCrash();
//		CrashReport.testJavaCrash();
//		CrashReport.testANRCrash();
	}

	//震动秒数
//	static public void vibrate(int seconds)
//	{
//		seconds = (seconds < 0) ? 0 : seconds;
//		Vibrator vib = (Vibrator) activity.getSystemService(Service.VIBRATOR_SERVICE);
//		vib.vibrate(seconds * 1000);
//	}
	
}

