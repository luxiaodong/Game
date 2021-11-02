
local GLayer = require("graphic.core.GLayer")
local MainMenuLayer = class("MainMenuLayer",GLayer)

--主菜单的按钮
function MainMenuLayer:ctor()
	GLayer.ctor(self)
end

function MainMenuLayer:init()
    GLayer.init(self)

    self._ui = {}
    local go = self:loadUiPrefab("Assets/Prefabs/UI/mainMenu.prefab")
    
    local tempGo = go.transform:Find("battle").gameObject
    self._ui.battle = {}
    self._ui.battle.gameObject = tempGo

    local tempGo = go.transform:Find("setting").gameObject
    self._ui.setting = {}
    self._ui.setting.gameObject = tempGo

    local tempGo = go.transform:Find("console").gameObject
    self._ui.console = {}
    self._ui.console.gameObject = tempGo

    local t = {
        self._ui.battle.gameObject,
        self._ui.setting.gameObject,
        self._ui.console.gameObject,
    }

    self:registerClicks(t)
end

function MainMenuLayer:handleClick(name)
    if name == "battle" then
        event.broadcast(event.ui.changeScene, {name=enum.ui.scene.battle, unitySceneName=enum.unity.scene.battle.main})
    elseif name == "setting" then
        event.broadcast(event.ui.changeScene, {name=enum.ui.scene.test})
    elseif name == "console" then
        event.broadcast(event.ui.popupLayer, {name=enum.ui.layer.consoleTab})
    end
end

-- function MainMenuLayer:handleEvent(e)
-- 	if e.name == event.ui.pushText then
-- 	end
-- end

return MainMenuLayer
