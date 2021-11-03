# -*- coding: utf-8 -*-

import sys
import os

UNITY_PATH = "/Applications/Unity/Hub/Editor/2019.4.18f1c1/Unity.app/Contents/MacOS/Unity"

class Unity(object):
	# @staticmethod
	# def SwitchPlatorm()

	# @staticmethod
	# def GeneratorWrapCode():
	# 	Unity.ExecuteScript("CSObjectWrapEditor.Generator", "ClearAll")
	# 	Unity.ExecuteScript("CSObjectWrapEditor.Generator", "GenAll")

	# @staticmethod
	# def ExportProject(platform):
	# 	Unity.ExecuteScript("SwitchScene", "Export" + platform.capitalize() + "Release")

	@staticmethod
	def BuildAssetBundle(platform):
		Unity.ExecuteScript("AssetsBundleBuilder", "BuildAssets" + platform.capitalize(), "BuildAssetBundle")

	@staticmethod
	def ExecuteScript(className, funcName, logName):
		logFile = os.environ["BUILD_DIR"] + "/Log/" + logName + ".log";
		args1 = UNITY_PATH
		args2 = "-quit -batchmode"
		args3 = "-logFile " + logFile
		args4 = "-projectPath " + os.environ["GAME_DIR"]
		args5 = "-nographics"
		args6 = "-executeMethod " + className+"."+funcName
		cmd = "'%s' %s %s %s %s %s" % (args1, args2, args3, args4, args5, args6)
		os.system("echo "+cmd+" >> "+logFile+" 2>&1")
		os.system(cmd + " >> "+logFile+" 2>&1")

	# 	os.system(cmd)
	# 	Log.AppendFile(tmpFile)

	# @staticmethod
	# 	def AppendFile(file):
	# 		sys.stdin = open(file,"r")
	# 		sys.stdout = open(os.environ["LOG_FILE"],"a")
	# 		sys.stdout.write(sys.stdin.read())

	# @staticmethod
	# def Cmd(cmd):
	# 	if os.environ.has_key("LOG_FILE"):
			

