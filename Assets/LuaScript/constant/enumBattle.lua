
enum.battle = {}

enum.battle.side = {}
enum.battle.side.red 	= 1
enum.battle.side.blue 	= 2

enum.battle.entity = {}
enum.battle.entity.building = 1
enum.battle.entity.spell = 2
enum.battle.entity.troop = 3

enum.battle.card = {}
enum.battle.card.none 	        = 0 --不是卡创建的
enum.battle.card.skeletons		= 1 --1费,3个骷髅兵
enum.battle.card.skeletonArmy 	= 2 --3费,15个骷髅兵
enum.battle.card.graveyard		= 3 --5费,15个骷髅兵,墓园
enum.battle.card.fireBall 		= 4 --火球
enum.battle.card.cannon			= 5 --加农跑

enum.battle.building = {}
enum.battle.building.kingTower	= 101 --国王塔
enum.battle.building.minorTower = 102 --公主塔
enum.battle.building.cannon 	= 103 --加农跑
enum.battle.spell = {}
enum.battle.spell.mirror 		= 201 --镜像
enum.battle.spell.fireBall 		= 202 --火球
enum.battle.troop = {}
enum.battle.troop.skeleton 		= 301 --骷髅兵

enum.battle.sdf = {}
enum.battle.sdf.circle 			= 1
enum.battle.sdf.box 			= 2
enum.battle.sdf.roundBox 		= 3

enum.battle.moveType = {}
enum.battle.moveType.none       = 0 --不能移动
enum.battle.moveType.hole 		= 1
enum.battle.moveType.land 		= 2
enum.battle.moveType.air 		= 3

enum.battle.attackType = {}
enum.battle.attackType.none 	= 0 --不能打
enum.battle.attackType.building = 1 --只打建筑
enum.battle.attackType.land 	= 2 --只能打地面
enum.battle.attackType.both 	= 3 --都能打,包括空中

enum.battle.buffer = {}
enum.battle.buffer.stun 		= 1 --眩晕,冰冻,不再响应任何操作
enum.battle.buffer.root 		= 2 --缠绕,无法移动,但可以攻击
enum.battle.buffer.slience 		= 3 --沉默,无法释放技能
enum.battle.buffer.invincible 	= 4	--无敌,不受伤害和影响效果
enum.battle.buffer.invisible 	= 5 --隐身,不被他人可见
enum.battle.buffer.crazy 		= 6 --狂暴,加速

enum.battle.find = {}
enum.battle.find.nearest = 1
enum.battle.find.farthest = 2





