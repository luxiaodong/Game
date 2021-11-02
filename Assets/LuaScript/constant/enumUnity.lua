enum.unity = {}
enum.unity.quality = {}
enum.unity.quality.veryLow = 1
enum.unity.quality.low = 2
enum.unity.quality.medium = 3
enum.unity.quality.high = 4
enum.unity.quality.veryHigh = 5
enum.unity.quality.ultra = 6

enum.unity.vSync = {}
enum.unity.vSync.dont = 0
enum.unity.vSync.everyVBlank = 1		--60帧
enum.unity.vSync.everySecondVBlank = 2  --30帧

enum.unity.behaviour = {}
enum.unity.behaviour.onUpdate = "OnUpdate"
enum.unity.behaviour.onLateUdpate = "OnLateUpdate"
enum.unity.behaviour.onFixedUpdate = "OnFixedUpdate"

enum.unity.scene = {}
enum.unity.scene.ui = "SetupScene"
enum.unity.scene.test = "WorldScene"
enum.unity.scene.battle = "BattleScene"
enum.unity.scene.world = "WorldScene"

enum.unity.bodyparts = {}
enum.unity.bodyparts.head = "tou" --头
enum.unity.bodyparts.body = "shen" --身体
enum.unity.bodyparts.hand = "shou" --手
enum.unity.bodyparts.foot = "jiao" --脚

--三组标记出,谁,拿什么武器,做什么动作
enum.unity.avatar = {}
enum.unity.avatar.grunt = "Grunt"
enum.unity.avatar.human = "Human"

enum.unity.controller = {}
enum.unity.controller.none = "none"

enum.unity.animation = {}
enum.unity.animation.empty = "Empty"
enum.unity.animation.idle = "Idle"
enum.unity.animation.walk = "Walk"
enum.unity.animation.run = "Run"
enum.unity.animation.die = "Die"
enum.unity.animation.hit = "Hit"
enum.unity.animation.attack = "Attack"
-- enum.unity.animation.flying = "flying"
-- enum.unity.animation.idle = "idle"
-- enum.unity.animation.walk = "walk"
-- enum.unity.animation.attack = "attack"

--关键帧标记
enum.unity.keyframe = {}
enum.unity.keyframe.attackEffect = "attackEffect"
enum.unity.keyframe.hitEffect = "hitEffect"

enum.unity.animatorLayer = {}
enum.unity.animatorLayer.base = 0
enum.unity.animatorLayer.move = 1

enum.unity.layer = {}
enum.unity.layer.default = 0
enum.unity.layer.ui = 5

enum.unity.sortingLayer = {}
enum.unity.sortingLayer.default = 0

enum.unity.tags = {}
