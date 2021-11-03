
package com.game;
import android.app.Activity;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.os.Debug;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Window;

import com.unity3d.player.UnityPlayer;

public class GameActivity extends Activity
{
	protected UnityPlayer mUnityPlayer; // don't change the name of this variable; referenced from native code

	@Override
	protected void onCreate(Bundle savedInstanceState)
	{
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		super.onCreate(savedInstanceState);

		mUnityPlayer = new UnityPlayer(this);
		setContentView(mUnityPlayer);
		mUnityPlayer.requestFocus();

		FileUtils.init( getAssets() );
		NativeBridge.activity = this;
		GameDelegate.activity = this;
		DeviceInfo.activity = this;
		Network.activity = this;
		PermissionManager.activity = this;
		DeviceInfo.buildInfo();
		GameDelegate.onCreate(savedInstanceState);
	}
	
	@Override
	protected void onStart()
	{
		super.onStart();
		GameDelegate.onStart();
//		mUnityPlayer.start();
	}
	
	@Override	
	protected void onResume()
	{
		super.onResume();
		GameDelegate.onResume();
		mUnityPlayer.resume();
	}
	
	@Override
	protected void onPause()
	{
		mUnityPlayer.pause();
		GameDelegate.onPause();
		super.onPause();
	}
	
	@Override
	protected void onStop()
	{
//		mUnityPlayer.stop();
		GameDelegate.onStop();
		super.onStop();
	}
	
	@Override
	protected void onDestroy()
	{
		mUnityPlayer.destroy();
		GameDelegate.onDestroy();
		super.onDestroy();
	}

	@Override
	protected void onRestart()
	{
		GameDelegate.onDestroy();
		super.onRestart();
	}
	
	@Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        GameDelegate.onActivityResult(requestCode, resultCode, data);
    }

	@Override
	public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
	{
		super.onRequestPermissionsResult(requestCode, permissions, grantResults);
		GameDelegate.onRequestPermissionsResult(requestCode, permissions, grantResults);
	}

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        GameDelegate.onNewIntent(intent);
    }
	
	@Override
    public void onWindowFocusChanged(boolean hasFocus) {  
        super.onWindowFocusChanged(hasFocus);  
        GameDelegate.onWindowFocusChanged(hasFocus);
		mUnityPlayer.windowFocusChanged(hasFocus);
    }
	
	@Override
	public void onLowMemory()
	{
		super.onLowMemory();
		mUnityPlayer.lowMemory();
		GameDelegate.onLowMemory();
	}

	@Override
	public void onTrimMemory(int level)
	{
		super.onTrimMemory(level);
		if (level == TRIM_MEMORY_RUNNING_CRITICAL)
		{
			mUnityPlayer.lowMemory();
		}
	}

	// This ensures the layout will be correct.
	@Override public void onConfigurationChanged(Configuration newConfig)
	{
		super.onConfigurationChanged(newConfig);
		mUnityPlayer.configurationChanged(newConfig);
	}

	// For some reason the multiple keyevent type is not supported by the ndk.
	// Force event injection by overriding dispatchKeyEvent().
	@Override public boolean dispatchKeyEvent(KeyEvent event)
	{
		if (event.getAction() == KeyEvent.ACTION_MULTIPLE)
			return mUnityPlayer.injectEvent(event);
		return super.dispatchKeyEvent(event);
	}

	// Pass any events not handled by (unfocused) views straight to UnityPlayer
	@Override public boolean onKeyUp(int keyCode, KeyEvent event)     { return mUnityPlayer.injectEvent(event); }
	@Override public boolean onKeyDown(int keyCode, KeyEvent event)   { return mUnityPlayer.injectEvent(event); }
	@Override public boolean onTouchEvent(MotionEvent event)          { return mUnityPlayer.injectEvent(event); }
	/*API12*/ public boolean onGenericMotionEvent(MotionEvent event)  { return mUnityPlayer.injectEvent(event); }
}

