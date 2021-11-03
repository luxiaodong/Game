package com.game;

import android.app.Application;

import unisdk.UniSdk;

public class GameApplication extends Application {
    @Override
    public void onCreate()
    {
        super.onCreate();
        UniSdk.getInstance().initApplication(this);
    }
}