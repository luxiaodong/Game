local language = {
    ["left_bracket"] = "(",
    ["right_bracket"] = ")",
    ["percent"] = "%s/%s",
    ["max"] = "Max",
    ["lv"] = "Lv. %s",
    ["exp"] = "经验",
    ["none"] = "无",
    ["plus"] = "+%s",

    ["layer_gm"] = "GM",
    ["layer_chat"] = "聊天",
    ["layer_gift"] = "礼包",

    ["login_my_role"] = "我的角色",
    ["login_my_server"] = "我的服务器",
    ["login_server_area"] = "服务器%s-%s服",
    ["login_last_loginTime"] = "上次登陆时间:%s",

    ["selectServer_level"] = "等级: %s",
    ["selectServer_time"] = "上次登录: %s",
    ["selectServer_vip"] = "VIP: %s",

    ["login_register_ok"] = "注册成功",
    ["login_sdk_failed"] = "登录账号失败",
    ["loginFailed_downloadServerList"] = "下载开服列表失败",
    ["loginFailed_serverListFormat"] = "服务器列表配置错误",
    ["loginFailed_serverListEmpty"] = "服务器列表为空",
    ["loginFailed_serverStatue4"] = "服务器维护中",
    ["loginFailed_proxyFailed"] = "登录验证失败",

    ["network_connect_failed"] = "无法连接到服务器",
    ["network_reconnecting"] = "断线重连中...",
    ["network_reconnecting_ok"] = "断线重连成功",
    ["network_reconnecting_fail"] = "重连失败,点击返回登录",
    ["network_require_loading"] = "努力加载中...",
    ["network_require_failed"] = "网络请求失败",
    ["network_connect_disable"] = "通信超时,或者账号在其他地方登录",
    ["network_protocol_exception"] = "接口请求异常:%s",

    --动更需要的文本.
    ["versionUpdate_1"] = "网络连接失败！\n请检查网络后，点击重试！",
    ["versionUpdate_2"] = "检查资源更新失败，错误码 :%s\n 点击重试！",
    ["versionUpdate_3"] = "错误",
    ["versionUpdate_4"] = "有新版本可以使用，为了更好的游戏体验，建议您更新版本！",
    ["versionUpdate_5"] = "提示",
    ["versionUpdate_6"] = "资源更新进度[%s/%s]",
    ["versionUpdate_7"] = "正在验证资源版本,请保持网络畅通！",
    ["versionUpdate_8"] = "正在下载资源更新列表[%s/%s]",
    ["versionUpdate_9"] = "正在计算资源更新文件大小",
    ["versionUpdate_10"] = "正在下载资源更新包 %s%% (%s)",
    ["versionUpdate_11"] = "正在校验资源版本",
    ["versionUpdate_12"] = "准备下载资源更新",
    ["versionUpdate_13"] = "正在加载资源",
}

function language.formatNumber(value, func)
    func = func or math.floor

    local digit = string.len(math.floor(value))
    if digit > 9 then
        return string.format("%0.0f%s", func(value/100000000), "亿")
    elseif digit > 8 then
        local str = string.format("%0.2f%s", value/100000000, "亿")
        str = string.gsub(str, "%.00", "")
        str = string.gsub(str, "0亿", "亿")
        return str
    elseif digit > 5 then
        return string.format("%0.0f%s", func(value/10000), "万")
    elseif digit > 4 then
        local str = string.format("%0.2f%s", value/10000, "万")
        str = string.gsub(str, "%.00", "")
        str = string.gsub(str, "0万", "万")
        return str
    end

    return math.floor(value)
end

return language