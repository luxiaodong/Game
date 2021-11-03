#!/usr/bin/python
# -*- coding: UTF-8 -*-

import sys
import os
import time
import platform
import sys, getopt

scriptPath = os.path.dirname(os.path.realpath(__file__))

class ApkTool(object):

	unisdkPy = '/Users/luxiaodong/Project/Git/Androiod-Sdk/proj.unisdk.merge/Unisdk.py'

	@staticmethod
	def Test():
		# packages = ["com.gamedo.hlw.qihoo","com.caohua.atm.m4399"]
		# ApkTool.Unisdk("com.aoshitang.game.unity", packages)

		ApkTool.Unzip("/Users/luxiaodong/Project/Git/Game/Project/proj.unisdk/apk/com.aoshitang.game.unity.apk")

		# ApkTool.CreateChannelProject("/Users/luxiaodong/Project/Git/Game/Project/proj.android",["com.gamedo.hlw.qihoo"])
		# print("test ok")

	@staticmethod
	def Unzip(apkPath):
		cmd = 'python ' + ApkTool.unisdkPy
		configPath = os.path.join(scriptPath, "config")
		os.system(cmd+" -a "+apkPath+" -u"+" -c "+configPath)

	@staticmethod
	def CreateChannelProject(projectDir, channelNames):
		cmd = 'python ' + ApkTool.unisdkPy
		apkPath = os.path.join(scriptPath, "apk/com.aoshitang.game.unity.apk")
		configPath = os.path.join(scriptPath, "config")
		channelString = ','.join(channelNames)
		# print(cmd+" -p "+projectDir+" -c "+configPath+" -s "+channelString)
		os.system(cmd+" -a "+apkPath+" -p "+projectDir+" -c "+configPath+" -s "+channelString)

	@staticmethod
	def Unisdk(originalPackageName, channelNames):
		cmd = 'python ' + ApkTool.unisdkPy
		apkPath = os.path.join(scriptPath, "apk/"+originalPackageName+".apk")
		configPath = os.path.join(scriptPath, "config")
		channelString = ','.join(channelNames)
		# print(cmd+" -a "+apkPath+" -c "+configPath+" -s "+channelString)
		os.system(cmd+" -a "+apkPath+" -c "+configPath+" -s "+channelString)

def main(argv):
	ApkTool.Test()

if __name__ == "__main__":
   main(sys.argv[1:])
