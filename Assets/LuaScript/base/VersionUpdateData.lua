--
-- Created by IntelliJ IDEA.
-- User: zhouwj
-- Date: 14-12-23
-- Time: 下午20:37
-- To change this template use File | Settings | File Templates.
--

local VersionUpdateData = {}

VersionUpdateData.file = {}
VersionUpdateData.file.version = "version"

-- 状态值
VersionUpdateData.state = {}
-- 空闲
VersionUpdateData.state.start = 0
-- 开始                  
VersionUpdateData.state.downloading = 1
--下载zip
VersionUpdateData.state.download_zip = 2
--下载zip结束
VersionUpdateData.state.download_zip_over = 3
-- 完成一个版本更新
VersionUpdateData.state.finishOne = 4
-- 解压缩
VersionUpdateData.state.unzip = 5
-- 异常
VersionUpdateData.state.exception = 6
-- 退出
VersionUpdateData.state.exit = 7

-- 下载速度控制，n秒没有收到数据包则重新尝试
VersionUpdateData.limitime = 30

return VersionUpdateData

