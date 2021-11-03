# -*- coding: utf-8 -*-

import sys
import os
import copy
import time
import shutil

class Diff(object):
    def __init__(self):
        self._buildPath = os.environ["BUILD_DIR"]
        self._oldVersion = "1.0.0.0"
        self._newVersion = "1.0.0.1"
        self._oldFileMd5List = []
        self._newFileMd5List = []
        self._newFileList = []

    def Process(self):
        if not self.ReadOldRes():
            return False

        if not self.ReadNewRes():
            return False

        self.GenDiff()
        return True

    def ReadOldRes(self):
        dirPath = os.path.join(self._buildPath, self._oldVersion)
        if not os.path.exists(dirPath):
            return False

        resPath = os.path.join(dirPath, "res.lua")
        if not os.path.exists(resPath):
            return False

        self._oldFileMd5List = self.GetFileMd5List(resPath)
        return True

    def ReadNewRes(self):
        dirPath = os.path.join(self._buildPath, self._newVersion)
        if not os.path.exists(dirPath):
            return False

        resPath = os.path.join(dirPath, "res.lua")
        if not os.path.exists(resPath):
            return False

        self._newFileMd5List = self.GetFileMd5List(resPath)
        self._newFileList = self.GetFileList(resPath)
        return True

    def GetFileList(self,file):
        cmd = "cat " + file + " | awk -F '\"' '{print $2}' "
        return os.popen(cmd).read().split()

    def GetFileMd5List(self,file):
        cmd = "cat " + file + " | awk -F '\"' '{print $6}' "
        return os.popen(cmd).read().split()

    def GenDiff(self):
        A=copy.copy(self._oldFileMd5List)
        B=copy.copy(self._newFileMd5List)
        diffMd5FileList = list(set(B)-set(A))

        dstPath = os.path.join(self._buildPath, "diff")
        if os.path.exists(dstPath):
            os.system("rm -rf %s" % (dstPath))
        os.system("mkdir -p %s" % (dstPath))

        srcPath = os.path.join(self._buildPath, self._newVersion)
        for single in diffMd5FileList:
            index = self._newFileMd5List.index(single)
            file = self._newFileList[index]
            srcFile = os.path.join(srcPath, file)
            dstFile = os.path.join(dstPath, file)
            os.system("cp "+srcFile+" "+dstFile)
