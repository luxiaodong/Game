#!/usr/bin/python
# -*- coding: UTF-8 -*-

import sys
import os
import time
import platform
import sys, getopt

# 这几个路径全项目脚本通用
os.environ["PROJECT_DIR"] = os.path.dirname(os.path.realpath(__file__))
os.environ["GAME_DIR"] = os.path.realpath(os.path.join(os.environ["PROJECT_DIR"], "../"))
os.environ["BUILD_DIR"] = os.path.join(os.environ["GAME_DIR"], "Build")
os.environ["ASSETS_DIR"] = os.path.join(os.environ["GAME_DIR"], "Assets")

sys.path.append(os.path.join(os.environ["PROJECT_DIR"], "proj.packaging/src"))
sys.path.append(os.path.join(os.environ["PROJECT_DIR"], "proj.tools"))

from Pack import Pack
from Merge import Merge
from Android import Android

def main(argv):
	platform = ""
	gameName = ""
	luaCode = 0
	isUseMd5 = False
	isRelease = False
	isMerge = False
	isNative = False
	isAndroid = False
	isTest = False
	try:
		opts, args = getopt.getopt(argv,"hatmncg:p:j:",["merge="])
	except getopt.GetoptError:
		print '''illegal option. Pandora.py -h for help'''
		sys.exit(2)
	for opt, arg in opts:
		if opt == '-h':
			print '''
example:	
	Pandora.py -r -g gameName -p platform(ios/android/win/mac) -c -j 1
	Pandora.py -m -p platform(ios/android/win/mac)
	Pandora.py -a -t

detail:
	-a android platform compiler and running
	-t for test after -a
	-p set the platform, ios or android
	-m merge ios or android project
	-n only merge native cpp file on ios
	-r pcaking resources, lua and assetbundle
	-g set the game name
	-c convert file path to md5
	-j set luajit encode, 0(source), 1(64bit), 2(both 64&32) '''
			sys.exit()
		elif opt in ("-p"):
		 	platform = arg
		elif opt in ("-g"):
			gameName = arg
		elif opt in ("-j"):
			luaCode = int(arg)
		elif opt in ("-c"):
			isUseMd5 = True
		elif opt in ("-r"):
			isRelease = True
		elif opt in ("-m"):
		 	isMerge = True
		elif opt in ("-n"):
		 	isNative = True
		elif opt in ("-a"):
		 	isAndroid = True
		elif opt in ("-t"):
		 	isTest = True

	if isAndroid:
		if isTest:
			Android.Test()
		else:
			Android.CompilerAndRun()
		return 

	if isMerge:
		if platform == "":
			print("please set platform for ios or android")
			return

		if platform == "ios" or platform == "android":
			Merge.Project(platform, isNative)
			print("merge succeeful")
			return 

		return 

	if isRelease:
		if platform == "" or gameName == "":
			if Pack().PackingLuaAndRes(isUseMd5, luaCode):
				print("packing succeeful")
		else:
			if Pack().ReleaseComplete(isUseMd5, luaCode, platform, gameName):
				print("packing succeeful")

if __name__ == "__main__":
   main(sys.argv[1:])
