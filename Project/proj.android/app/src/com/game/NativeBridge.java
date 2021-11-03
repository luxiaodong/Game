
package com.game;
import org.json.JSONException;
import org.json.JSONObject;

import android.app.Activity;
import android.util.Log;

import com.unity3d.player.UnityPlayer;

public class NativeBridge
{
	static public Activity activity;
	
	static public void sendToCSharp(JSONObject json)
	{
		String str = json.toString();
		Log.i("NativeBridge","sendToCSharp:" + str);
		UnityPlayer.UnitySendMessage("GameObject", "ReceiveFromNative", str);
	}

	static public void receiveFromCSharp(String str)
	{
		Log.i("NativeBridge","receiveFromCSharp:" + str);

		try {
			final JSONObject json = new JSONObject(str);
			final String action = json.get("action").toString();

			activity.runOnUiThread(new Runnable() {
				@Override
				public void run()
				{
					GameDelegate.handle_action(action, json);
				}
			});
		} catch (JSONException e) {
			e.printStackTrace();
		}
	}

	static boolean isFileExist(String fileName)
	{
		return FileUtils.isFileExists(fileName);
	}

	static byte[] readAllBytes(String fileName)
	{
		return FileUtils.readAllBytes(fileName);
	}

	static boolean isSupport64Bit()
	{
		return DeviceInfo.is64Bit();
	}
}
