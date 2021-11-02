enum.server = {}

enum.server.response = {}				--网络包的状态
enum.server.response.fail = 0
enum.server.response.success = 1
enum.server.response.exception = 2
enum.server.response.push = 3
enum.server.response.disconnect = 4  	--服务器主动断开
enum.server.response.localLoop = 101  	--本地回路,前端自己发的

enum.server.task = {}
enum.server.task.state = {}
enum.server.task.state.init = 0 --初始化
enum.server.task.state.begin = 1	--开始
enum.server.task.state.completed = 3 --完成
enum.server.task.state.finish = 4 --完成并领奖

enum.server.task.type = {}
enum.server.task.type.main = 1 --主线任务
enum.server.task.type.branch = 2 --支线任务

--活动
enum.server.activity = {}
enum.server.activity.gold = 1 --金币活动

enum.server.res = {}
enum.server.res.copper              = 1     --银币
enum.server.res.food                = 2     --粮食
enum.server.res.exp                 = 3     --经验
enum.server.res.gold                = 23    --金币