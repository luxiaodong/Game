--枚举值,上层逻辑应该做到,枚举值从字符串变到数字时,不影响逻辑
--TODO, 修改layerChart的依赖关系

enum = {}
require("constant.enumUnity")
require("constant.enumLocal")
require("constant.enumServer")
enum.ui = {}
require("constant.enumLayer")
require("constant.enumBattle")

--弹出框类型
enum.ui.popup = {}
enum.ui.popup.type = {}
enum.ui.popup.type.queueHead = 1	--添加到序列头部
enum.ui.popup.type.queueTail = 2	--添加到序列尾部
enum.ui.popup.type.overlap = 3		--直接显示,覆盖掉
enum.ui.popup.type.exclusive = 4	--直接显示,删掉之前的

--过场动画
enum.ui.transition = {}
enum.ui.transition.loading = 0 --走进度条
enum.ui.transition.circle = 1 --圆

--对话框类型
enum.ui.messagebox = {}
enum.ui.messagebox.type = {}
enum.ui.messagebox.type.question = 1
enum.ui.messagebox.type.info = 2

enum.camera = {}
enum.camera.ui = "uiCamera"
enum.camera.scene = "sceneCamera"

enum.audio = {}
enum.audio.group = {}
enum.audio.group.master = 1
enum.audio.group.background = 2
enum.audio.group.effect = 3

enum.chat = {}
enum.chat.system = 1 --系统
enum.chat.private = 2 --私聊
enum.chat.nation = 3 --国家
enum.chat.world = 4 --全服

enum.voice = {}
enum.voice.state = {}
enum.voice.state.success = 0
enum.voice.state.long = 1
enum.voice.state.short = 2

enum.network = {}


