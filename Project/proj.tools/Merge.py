# -*- coding: utf-8 -*-

import os
import sys
import time
import shutil
import hashlib
import platform

class Merge(object):

	@staticmethod
	def Project(platform, isNative):
		if platform == "android":
			Merge.AndroidStudio()
		else:
			Merge.XCode(isNative)

	@staticmethod
	def AndroidStudio():
		releasePath = os.path.join(os.environ["BUILD_DIR"], "Release")
		exportPath = os.path.join(os.environ["BUILD_DIR"], "Export/Android")
		importPath = os.path.join(os.environ["PROJECT_DIR"], "proj.android")

		Merge.JarAndJniLibs(exportPath, importPath)
		Merge.Asset(releasePath, importPath)

	# 需要在unity->build setting->Export Project 打勾
	@staticmethod
	def JarAndJniLibs(exportPath, importPath):
		if os.path.exists(exportPath):
			# srcFile = os.path.join(exportPath, "libs/unity-classes.jar")
			srcFile = os.path.join(exportPath, "unityLibrary/libs/unity-classes.jar")
			dstFile = os.path.join(importPath, "app/libs/unity-classes.jar")
			Merge.SaveCopyFile(srcFile, dstFile)

			# srcPath = os.path.join(exportPath, "src/main/jniLibs")
			srcPath = os.path.join(exportPath, "unityLibrary/src/main/jniLibs")
			dstPath = os.path.join(exportPath, "unityLibrary/src/main/libs")
			Merge.SaveCopyDirectory(srcPath, dstPath)

			# dirList = ["assets","libs/armeabi","libs/armeabi-v7a","libs/arm64-v8a","libs/x86"]
			dirList = ["assets","libs/armeabi-v7a","libs/arm64-v8a"]
			for dirName in dirList:
				srcPath = os.path.join(exportPath, "unityLibrary/src/main/" + dirName)
				dstPath = os.path.join(importPath, "app/" + dirName)
				Merge.SaveCopyDirectory(srcPath, dstPath)

	@staticmethod
	def Asset(releasePath, importPath):
		if os.path.exists(releasePath):
			resList = ["AssetsBundles","LuaScript","LuaJit","LuaJit32"]
			for dirName in resList:
				srcPath = os.path.join(releasePath, dirName)
				dstPath = os.path.join(importPath, "app/assets/" + dirName)
				Merge.SaveCopyDirectory(srcPath, dstPath)

	@staticmethod
	def XCode(isNative):
		exportPath = os.path.join(os.environ["BUILD_DIR"], "Export/Ios")
		importPath = os.path.join(os.environ["PROJECT_DIR"], "proj.ios")

		if isNative:
			Merge.NativeCpp(exportPath, importPath)
		else:
			Merge.ClassesAndData(exportPath, importPath)

	@staticmethod
	def ClassesAndData(exportPath, importPath):
		if os.path.exists(exportPath):
			srcPath = os.path.join(exportPath, "Classes")
			dstPath = os.path.join(importPath, "unity/Classes")
			Merge.SaveCopyDirectory(srcPath, dstPath)

			srcPath = os.path.join(exportPath, "Data")
			dstPath = os.path.join(importPath, "unity/Data")
			Merge.SaveCopyDirectory(srcPath, dstPath)

			srcPath = os.path.join(exportPath, "Libraries")
			dstPath = os.path.join(importPath, "unity/Libraries")
			Merge.SaveCopyDirectory(srcPath, dstPath)

			srcFile = os.path.join(exportPath, "MapFileParser")
			dstFile = os.path.join(importPath, "MapFileParser")
			Merge.SaveCopyFile(srcFile, dstFile)

			srcFile = os.path.join(exportPath, "MapFileParser.sh")
			dstFile = os.path.join(importPath, "MapFileParser.sh")
			Merge.SaveCopyFile(srcFile, dstFile)

			srcFile = os.path.join(exportPath, "process_symbols.sh")
			dstFile = os.path.join(importPath, "process_symbols.sh")
			Merge.SaveCopyFile(srcFile, dstFile)

	@staticmethod
	def NativeCpp(exportPath, importPath):
		if os.path.exists(exportPath):
			exportNativePath = os.path.join(exportPath, "Classes/Native")
			importNativePath = os.path.join(importPath, "unity/Classes/Native")

			srcFileList = os.listdir(exportNativePath)
			dstFileList = os.listdir(importNativePath)

			addList = list(set(srcFileList).difference(set(dstFileList)))
			interList = list(set(srcFileList).intersection(set(dstFileList)))
			delList = list(set(dstFileList).difference(set(srcFileList)))
			diffList = []

			for single in interList:
				srcFile = os.path.join(exportNativePath, single)
				dstFile = os.path.join(importNativePath, single)

				if Merge.Md5File(srcFile) != Merge.Md5File(dstFile):
					diffList.append(single)

			print("=====different file=====")
			print(diffList)
			print("=====append file=====")
			print(addList)
			print("=====delete file=====")
			print(delList)

			copyList = list(set(addList).union(set(diffList)))
			for single in copyList:
				srcFile = os.path.join(exportNativePath, single)
				dstFile = os.path.join(importNativePath, single)
				Merge.SaveCopyFile(srcFile, dstFile)

			for single in delList:
				dstFile = os.path.join(importNativePath, single)
				os.remove(dstFile)

	@staticmethod
	def SaveCopyFile(srcPath, dstPath):
		if os.path.exists(dstPath):
			os.remove(dstPath)
		if os.path.exists(srcPath):
			shutil.copy(srcPath, dstPath)

	@staticmethod
	def SaveCopyDirectory(srcPath, dstPath):
		if os.path.exists(dstPath):
			shutil.rmtree(dstPath)
		if os.path.exists(srcPath):
			shutil.copytree(srcPath, dstPath)

	@staticmethod
	def Md5File(path):
		with open(path, "rb") as file:
			m = hashlib.md5()
			m.update(file.read())
			return m.hexdigest()

