# -*- coding: utf-8 -*-

import sys
import os
import time
import shutil
import hashlib
import platform

class Android(object):

	adbCmd ='/Users/luxiaodong/Library/Android/sdk/platform-tools/adb'
	launchActivity = "com.reign.LoadActivity"

	@staticmethod
	def Test():
		apkPath="/Users/luxiaodong/Project/Git/Game/Build/Apk/com.gamedo.hlx.mi.apk"
		packageName = "com.gamedo.hlx.mi"
		launchActivity = "com.reign.LoadActivity"
		outputFile="/Users/luxiaodong/Project/Git/Game/Build/Apk/com.gamedo.hlx.mi.log"
		Android.Running(apkPath, packageName, launchActivity, outputFile)

	@staticmethod
	def CompilerAndRun(mode = "Release"):
		# 只有符合目录结构的才可以调用这个函数.
		projectPath = os.path.join(os.environ["PROJECT_DIR"], "proj.android.dev")
		Android.Compiler(projectPath, mode)
		apkDir = os.path.join(projectPath, "app/build/outputs/apk/"+mode.lower())
		apkPath = ""
		packageName = ""

		if os.path.exists(apkDir):
			for file in os.listdir(apkDir):
				if file.endswith(".apk"):
					apkPath = os.path.join(apkDir, file)
					packageName = file.replace(".apk","")

		if apkPath == "":
			return 

		if mode == "Release":
			apkDir = os.path.join(os.environ["BUILD_DIR"], "Apk")
			cmd = "cp -f '%s' '%s'" % (apkPath, apkDir)
			os.system(cmd)

		Android.Running(apkPath, packageName, launchActivity)
	
	@staticmethod
	def Compiler(importPath, mode = "Release"):
		cmd = ("cd %s && ./gradlew assemble%s" % (importPath, mode))
		os.system(cmd)

	@staticmethod
	def Running(apkPath, packageName, launchActivity, outputFile = ""):
		Android.Install(apkPath, packageName)
		Android.Launch(packageName,launchActivity)
		Android.Logcat(packageName, outputFile)

	@staticmethod
	def Install(apkPath, packageName):
		os.system("%s uninstall %s" % (Android.adbCmd, packageName))
		os.system("%s install -r %s" % (Android.adbCmd, apkPath))

	@staticmethod
	def Launch(packageName, launchActivity):
		os.system("%s shell am start -n %s/%s" % (Android.adbCmd, packageName, launchActivity))

	@staticmethod
	def Logcat(packageName, outputFile):
		if len(outputFile)==0:
			os.system("%s logcat | grep $(%s shell ps | grep '%s' | awk '{print $2}')" % (Android.adbCmd, Android.adbCmd, packageName))
		else:
			os.system("%s logcat | grep $(%s shell ps | grep '%s' | awk '{print $2}') > '%s'" % (Android.adbCmd, Android.adbCmd, packageName, outputFile))
