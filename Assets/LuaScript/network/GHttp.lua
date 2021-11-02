local GHttp = class("GHttp")

function GHttp:ctor()
end

--t
--t.callback
--t.url     如果用ip请求,需要设置host
--t.host    如果url里直接用域名,不要设置host
--t.isPost  默认false, GET方法
--t.data    默认nil, POST方法指定的数据,字符串
--t.timeout 连接超时,非传输超时, 默认3秒
--t.notGZip 默认false
--t.header  默认false, (key,value)形式的table
function GHttp:init(t)
    self._t = t
end

function GHttp:setHeader(key, value)
    self._t.header = self._t.header or {}
    self._t.header[key] = value
end

function GHttp:start()
    local http = CS.Game.GHttp()

    if self._t.isPost then
        http:Create(self._t.url, "POST", self._t.data or "")
    else
        http:Create(self._t.url)
    end

    if self._t.host then
        self:setHeader("Host", self._t.host)
    end

    if not self._t.notGZip then
        self:setHeader("Accept-Encoding", "gzip")
    end

    if self._t.timeout then
        http:SetConnectTimeout(self._t.timeout)
    end

    for k,v in pairs(self._t.header or {}) do
        http:SetHeader(k,v)
    end

    http:Send( handler(self, self.response) )
end

function GHttp:response(code, msg)
    if code == 200 then
        if self._t.callback and not network._giveupHttpCallback then
            self._t.callback(code, msg)
        end
    else
        -- 如果之前是ip加host, 用域名再请求一次
        if self._t.host then
            local list = string.split(self._t.url, "/")
            self._t.url = string.gsub(self._t.url, list[3], self._t.host)
            self._t.host = nil
            self:start()
        else
            if self._t.callback and not network._giveupHttpCallback then
                self._t.callback(code, msg)
            end
        end
    end
end

--------------以下是封装的快捷方法------------------
function GHttp:get(url, callback, host)
    self._t = {}
    self._t.url = url
    self._t.host = host
    self._t.callback = callback
    self:start()
end

function GHttp:post(url, callback, host, data)
    self._t = {}
    self._t.url = url
    self._t.host = host
    self._t.callback = callback
    self._t.isPost = true
    self._t.data = data
    self:start()
end

-- function GHttp:downloadFileByHttp(url, host, callback, headInfo, saveTarget)   
--     local function _callback(event)
--         if event.status == self.status.success then
--             local content = saveTarget
--             local request = event.request
--             if not saveTarget then 
--                 content = request:getResponseString()
--             else
--                 request:saveResponseData(saveTarget)
--             end

--             if callback then 
--                 callback(200, content)
--             end
--         else
--             callback(0,"")
--         end
--     end

--     self:_createWithUrlIpv6(url, host, 0, _callback, headInfo)
-- end

return GHttp
