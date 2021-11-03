# -*- coding: utf-8 -*-

import sys
import os
import time
import shutil
import hashlib
import platform
import zipfile
from Unity import Unity

class Pack(object):
	def __init__(self):

		self._exportPath = os.path.join(os.environ["BUILD_DIR"], "Export")
		self._packOutPath = os.path.join(os.environ["BUILD_DIR"], "Release")
		self._abSrcPath   = os.path.join(os.environ["BUILD_DIR"], "AssetsBundles")
		self._packCmdPath = os.path.join(os.environ["PROJECT_DIR"], "proj.packing/cmd")
		self._luaSrcPath  = os.path.join(os.environ["ASSETS_DIR"], "LuaScript")

		#输出的目录
		self._abDstPath  = os.path.join(self._packOutPath, "AssetsBundles")
		self._manifestPath = os.path.join(self._packOutPath, "Manifest")
		self._luaDstPath = os.path.join(self._packOutPath, "LuaScript")
		self._luajitPath = os.path.join(self._packOutPath, "LuaJit")
		self._luajit32Path = os.path.join(self._packOutPath, "LuaJit32")

		self._assetFileHash = {} #记录ab包的hash,用于优化打包平台
		self._md5Map = {} # md5->源文件路径,映射

		self._isUseMd5 = False
		self._versionNum = ""
		self._luaCode = 0 #0.源码, 1.64位luajit, 2.同时支持64/32位luajit
		self._target = "" # ios, android, win, mac

	def ReleaseComplete(self, isUseMd5, luaCode, platform, gameName):
		# 没有检查环境
		if not self.CheckVersion():
			print("check version error.")
			return False

		# 注意, 打ab包会生成 assetBundle.lua
		if not self.BuildAssetBundle(platform):
			print("build asset bundle error.")
			return False

		# md5 和 luajit处理
		if not self.PackingLuaAndRes(isUseMd5, luaCode):
			print(" packing lua and res error.")
			return False

		# 制作压缩包
		packageId = gameName + "_" + platform + "_" + self._versionNum + "_" + time.strftime("%Y%m%d_%H%M%S", time.localtime(time.time()))
		staticName =  packageId + "_static.zip"
		dynamicName = packageId + "_dynamic.zip"
		self.GenerateZipPackage(staticName, dynamicName)

		# self.UploadToFtp(staticFullPath, gameName+"/"+staticName)
		# self.UploadToFtp(dynamicFullPath, gameName+"/"+dynamicName)
		return True

	def PackingLuaAndRes(self, isUseMd5, luaCode):
		self._luaCode = luaCode

		if os.path.exists(self._packOutPath):
			shutil.rmtree(self._packOutPath, True)

		# 放到LuaScript目录去参与打包
		srcFile = os.path.join(os.environ["BUILD_DIR"], "assetBundle.lua")
		dstFile = os.path.join(self._luaSrcPath, "assetBundle.lua")
		shutil.copyfile(srcFile, dstFile)

		if not isUseMd5:
			self.CopyDirAfterFilterBySuffix(self._luaSrcPath, self._luaDstPath, ".lua")
			self.CopyDirAfterFilterBySuffix(self._abSrcPath, self._abDstPath, ".ab")
			os.remove(dstFile)
			return True

		self.CopyDirAfterFilterBySuffix(self._abSrcPath, self._manifestPath, ".manifest")
		self.ConvertAssetBundleToMd5()
		self.ConvertLuaToMd5()
		self.CreateMd5Map()
		os.remove(dstFile)
		return True

	# 不能单独调用.
	def GenerateZipPackage(self, staticName, dynamicName):
		# copy version.lua
		srcFile = os.path.join(self._luaSrcPath, "version.lua")
		dstFile = os.path.join(self._packOutPath, "version.lua")
		shutil.copyfile(srcFile, dstFile)

		# 打静态包
		staticFullPath = os.path.join(os.environ["BUILD_DIR"], staticName)
		self.ZipStaticPackage(staticFullPath)

		# 打动态包
		os.remove(dstFile)
		os.remove(os.path.join(self._packOutPath, "md5.txt"))
		shutil.rmtree(self._manifestPath, True)

		dynamicFullPath = os.path.join(os.environ["BUILD_DIR"], dynamicName)
		self.ZipDynamicPackage(dynamicFullPath)
		return True

	def BuildAssetBundle(self, platform):
		if not os.path.exists(os.environ["BUILD_DIR"]):
			os.makedirs(os.environ["BUILD_DIR"])

		if os.path.exists(self._abSrcPath):
			shutil.rmtree(self._abSrcPath, True)

		testFile = os.path.join(os.environ["BUILD_DIR"], "assetBundle.lua")
		if os.path.exists(testFile):
			os.remove(testFile)

		Unity.BuildAssetBundle(platform)

		if os.path.exists(testFile):
			return True

		return False

	def ConvertAssetBundleToMd5(self):
		lists = self.FilterFileInDirBySuffix(self._abSrcPath, ".ab")
		os.makedirs(self._abDstPath)
		for single in lists:
			srcFile = os.path.join(self._abSrcPath, single)
			dstFile = os.path.join(self._abDstPath, self.Md5String(single))
			self.SaveAssetsBundleHash(srcFile, dstFile)
			shutil.copyfile(srcFile, dstFile)

	def ConvertLuaToMd5(self):
		if self._luaCode == 0:
			os.makedirs(self._luaDstPath)

		if self._luaCode == 1:
			os.makedirs(self._luajitPath)

		if self._luaCode == 2:
			os.makedirs(self._luajitPath)
			os.makedirs(self._luajit32Path)

		lists = self.FilterFileInDirBySuffix(self._luaSrcPath, ".lua")
		for single in lists:
			srcFile = os.path.join(self._luaSrcPath, single)
			self.HandleLuaFile(srcFile)

	def CreateMd5Map(self):
		mapFile = os.path.join(self._packOutPath, "md5.txt")
		with open(mapFile,'w') as f:
			for key in self._md5Map:
				f.write("%s %s\n" % (key, self._md5Map[key]))

	def UploadToFtp(self, filePath, remotePath):
		ftp = FTP()
		ftp.connect("10.8.22.238", 65521)
		ftp.login('mobileapp','WEQWt5GEOKjU9mDFeM6O')
		f = open(filePath, 'rb')
		ftp.storbinary("STOR " + remotePath, f, 4096)
		ftp.set_debugLevel(0)
		f.close()
		ftp.quit()

	def ZipStaticPackage(self, staticFullPath):
		with zipfile.ZipFile(staticFullPath,'w') as target:
			for root, dirs, files in os.walk(self._packOutPath):
				for name in files:
					srcFile = os.path.join(root, name)
					dstFile = srcFile.replace(self._packOutPath+"/", "")
					target.write(srcFile, dstFile)

	def ZipDynamicPackage(self, dynamicFullPath):
		with zipfile.ZipFile(dynamicFullPath,'w') as target:
			resStr = "data_res_info = {"
			for root, dirs, files in os.walk(self._packOutPath):
				files = [f for f in files if not f[0] == '.']
				for name in files:
					srcFile = os.path.join(root, name)
					dstFile = self._versionNum+"/"+name
					target.write(srcFile, dstFile)
					md5Value = self.Md5File(srcFile)
					hashValue = md5Value
					if srcFile in self._assetFileHash:
						hashValue = self._assetFileHash[srcFile]
					single = "\n[\"%s\"] = {md5=\"%s\", hash=\"%s\", size=%s}," % (name, md5Value, hashValue, os.path.getsize(srcFile))
					resStr = resStr + single
			resStr = resStr + "}"
			#添加version.lua, res.lua
			versionFile = os.path.join(self._luaSrcPath, "version.lua")
			target.write(versionFile, self._versionNum+"/version.lua")
			target.write(versionFile, "appstore/version.lua")
			target.write(versionFile, "jailbreak64/version.lua")
			resLua = os.path.join(self._packOutPath, "res.lua")
			with open(resLua,'w') as f:
				f.write(resStr)
			target.write(resLua, self._versionNum+"/res.lua")
			os.remove(resLua)
	
	# -----------------以下为辅助函数------------------
	def FilterFileInDirBySuffix(self, dir, suffix):
		lists = []
		for root, dirs, files in os.walk(dir):
			for name in files:
				single = os.path.join(root, name)
				if self.FileSuffix(single) == suffix:
					lists.append(single.replace(dir+"/",""))
		return lists

	def CopyDirAfterFilterBySuffix(self, srcDir, dstDir, suffix):
		lists = self.FilterFileInDirBySuffix(srcDir, suffix)
		for single in lists:
			srcFile = os.path.join(srcDir, single)
			dstFile = os.path.join(dstDir, single)
			tempDir = os.path.dirname(os.path.realpath(dstFile))
			if not os.path.exists(tempDir):
				os.makedirs(tempDir)
			shutil.copyfile(srcFile, dstFile)

	def HandleLuaFile(self, srcFile):
		if self._luaCode == 0:
			self.HandleLuaScript(srcFile)

		if self._luaCode == 1:
			self.HandleLuaJit64(srcFile)

		if self._luaCode == 2:
			self.HandleLuaJit64(srcFile)
			self.HandleLuaJit32(srcFile)

	def HandleLuaScript(self, srcFile):
		temp = srcFile.replace(self._luaSrcPath, "LuaScript")
		dstFile = os.path.join(self._luaDstPath, self.Md5String(temp))
		shutil.copyfile(srcFile, dstFile)

	def HandleLuaJit64(self, srcFile):
		temp = srcFile.replace(self._luaSrcPath, "LuaJit")
		dstFile = os.path.join(self._luajitPath, self.Md5String(temp))
		cmdPath = self.LuajitCmdPath(True)
		os.chdir(os.path.dirname(cmdPath))
		cmd = cmdPath + " -b " + srcFile + " " + dstFile
		os.system(cmd)

	def HandleLuaJit32(self, srcFile):
		temp = srcFile.replace(self._luaSrcPath, "LuaJit32")
		dstFile = os.path.join(self._luajit32Path, self.Md5String(temp))
		cmdPath = self.LuajitCmdPath(False)
		os.chdir(os.path.dirname(cmdPath))
		cmd = cmdPath + " -b " + srcFile + " " + dstFile
		os.system(cmd)

	def LuajitCmdPath(self, isX64):
		cmd = os.path.join(self._packCmdPath, "luajit-2.1.0.b3")
		if isX64:
			cmd = os.path.join(self._packCmdPath, "luajit-2.1.0.b3-x64")

		osName = platform.system()
		if(osName == 'Windows'):
			cmd = os.path.join(cmd, "luajit.exe")
		elif(osName == 'Darwin'):
			cmd = os.path.join(cmd, "luajit")

		return cmd

	def SaveAssetsBundleHash(self, srcFile, dstFile):
		manifestFile = srcFile + ".manifest"
		if os.path.isfile(manifestFile):
			with open(manifestFile, "rb") as file:
				existAssetFileHash = False
				for line in file:
					if existAssetFileHash:
						if(line.rstrip().find("Hash:") != -1):
							self._assetFileHash[dstFile] = line.rstrip().split()[-1]
							return
					else:
						if(line.rstrip().find("AssetFileHash:") != -1):
							existAssetFileHash = True

	def CheckVersion(self):
		versionFile = os.path.join(self._luaSrcPath, "version.lua")
		versionNum = ""
		with open(versionFile, "r") as fp:
			for line in fp:
				if line[0:16] == "sys_version.game":
					versionNum = line.split('"')[1]
		if versionNum == "":
			return False

		self._versionNum = versionNum
		return True

	# def SelectLuaCode(self):
	# 	if self._isUseMd5:
	# 		if os.environ["PLATFROM_TARGET"] == "ios":
	# 			return 1
	# 		if os.environ["PLATFROM_TARGET"] == "android":
	# 			return 2
	# 	return 0

	def FileSuffix(self, fileName):
		arr = os.path.splitext(fileName)
		return arr[len(arr) - 1]

	def Md5String(self, str):
		m = hashlib.md5()
		m.update(str.encode('utf-8'))
		md5 = m.hexdigest()
		self._md5Map[md5] = str
		return md5

	def Md5File(self, path):
		with open(path, "rb") as file:
			m = hashlib.md5()
			m.update(file.read())
			return m.hexdigest()
