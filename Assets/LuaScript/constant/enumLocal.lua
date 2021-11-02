enum.platform = {}
enum.platform.android = "android"
enum.platform.ios = "ios"
enum.platform.macos = "macos"
enum.platform.windows = "win"

enum.system = {}
enum.system.network = {}
enum.system.network.changed = "network.changed"
enum.system.permission = {}
enum.system.permission.request = "permission.request"

enum.sdk = {}
enum.sdk.result = {}
enum.sdk.result.success = "1"
enum.sdk.result.failure = "0"
enum.sdk.action = {}
enum.sdk.action.init = "sdk.init"
enum.sdk.action.login = "sdk.login"
enum.sdk.action.pay = "sdk.pay"
enum.sdk.action.logout = "sdk.logout" --注:没有回调
enum.sdk.action.switch = "sdk.switch" --切换账号
enum.sdk.action.submit = "sdk.submit"
enum.sdk.action.test = "sdk.test"

enum.sdk.submitPoint = {}
enum.sdk.submitPoint.enterGame = 1
enum.sdk.submitPoint.createPlayer = 2
enum.sdk.submitPoint.playerLevelUp = 3
enum.sdk.submitPoint.exit = 4

enum.tcpConnectState = {}
enum.tcpConnectState.fail = 0			--直接连接失败
enum.tcpConnectState.success = 1		--连接成功
enum.tcpConnectState.disconnect = 2 	--连接断开
enum.tcpConnectState.timeout = 3		--连接超时

enum.backgroundDownload = {}
enum.backgroundDownload.init = "download.init"
enum.backgroundDownload.start = "download.start"
enum.backgroundDownload.pause = "download.pause"
enum.backgroundDownload.cancel = "download.cancel"
enum.backgroundDownload.delete = "download.delete"
enum.backgroundDownload.update = "download.update"
enum.backgroundDownload.result = "download.result"
