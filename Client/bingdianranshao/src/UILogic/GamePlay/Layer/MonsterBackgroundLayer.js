/**
 * Created by jiachen on 2016/3/29.
 */
//弃用
//管理所有的怪物
var ScheduleTime =1.0/10
var monsterManager;

var MonsterBackgroundLayer = cc.Layer.extend({
    myMonsterArray : null,
    enemyMonsterArray : null,
    m_clipperNode : null,
    walkingPathConfig : null,
    fightingPathConfig : null,
    buildingPositionConfig : null,
    buildingPositionMark : null, //标记是否被放塔
    buildingTickLayer : null,
    ctor : function(){
        this._super();
        this.myMonsterArray = []; //创建一个数组
        this.enemyMonsterArray = [];
        this.buildingPositionMark = [];
        this.fightingPathConfig = FightingPathConfig;
        this.init();
        monsterManager = this;

        this.schedule(this.updateEvent,ScheduleTime);//计时器
    },

    init :function(){
        if(GC.IS_HOST){
            this.walkingPathConfig = HostPathConfig;
            this.buildingPositionConfig = HostBuilddingPosition;
        }
        else {
            this.walkingPathConfig = AwayPathConfig;
            this.buildingPositionConfig = AwayBuilddingPosition;
        }
        for(var i = 0; i<this.buildingPositionConfig.length;i++){
            this.buildingPositionMark.push(false);
        }
        config = MonsterConfig.maincity;
        var mainCitySprite =  new MonsterSprite(config,true);
        mainCitySprite.setPosition(150,GC.h_2);
        this.addChild(mainCitySprite);
        this.myMonsterArray.push(mainCitySprite);
    },
    addMyMonsterSprite : function(config,point){
        var offset = gamePlayLayer.scrollView.getInnerContainer().getPosition(); //计算当前scrollview的偏移
        point.x -= offset.x;
        if(config.attribute.id < 100){//怪物
            if(this.isInPath(this.walkingPathConfig,point)){
                var mosterSprite = new MonsterSprite(config,true);
                mosterSprite.setPosition(point);
                this.addChild(mosterSprite);
                this.myMonsterArray.push(mosterSprite);
            }
        }
        else { //建筑物
            var ret =this.isInBuildingPosition(this.buildingPositionConfig,point);
            if(ret == -1 || this.buildingPositionMark[ret]){
                return;
            }
            else{
                this.buildingPositionMark[ret] = true;
                var mosterSprite = new MonsterSprite(config,true);
                mosterSprite.setPosition(point);
                this.addChild(mosterSprite);
                this.myMonsterArray.push(mosterSprite);
            }
        }
    },


    isInRect : function(config,point){
        var origin = config.origin;
        var destination = config.destination;
        var rect = cc.rect(origin.x * TMXTileMapsize, origin.y * TMXTileMapsize,(destination.x - origin.x) *TMXTileMapsize,(destination.y - origin.y) * TMXTileMapsize);
        return cc.rectContainsPoint(rect, point);
    },
    isInUpPath : function (pathConfig,point){
        for(var i = 0; i<pathConfig.UpPath.length ;i++){
            var element = pathConfig.UpPath[i];
            if(this.isInRect(element,point)){
                return true;
            }
        }
        return false;
    },
    isInStraightPath : function(pathConfig,point){
        for(var i =0 ;i < pathConfig.StraightPath.length;i++){
            var element = pathConfig.StraightPath[i];
            if(this.isInRect(element,point)){
                return true;
            }
        }
        return false;
    },
    isInDownPath : function(pathConfig,point){
        for(var i =0 ;i < pathConfig.DownPath.length;i++){
            var element = pathConfig.DownPath[i];
            if(this.isInRect(element,point)){
                return true;
            }
        }
        return false;
    },

    isInPath : function(pathConfig,point){
        if((this.isInUpPath(pathConfig,point)) || (this.isInStraightPath(pathConfig,point)) || (this.isInDownPath(pathConfig,point))){
            return true;
        }
        else{
            return false;
        }
    },

    isInBuildingPosition : function(buildingConfig,point){
        for(var i = 0; i < buildingConfig.length; i++){
            var element = buildingConfig[i];
            if(this.isInRect(element,point)){
                return i;
            }
        }
        return -1;
    },


    /*test : function(config, point){
        for(var i = 0; i < 10; i++){
            var randownum = Math.floor(Math.random() * 10000+1);
            var mosterSprite = new MonsterSprite(config,false);
            mosterSprite.setPosition(cc.p(randownum %(GC.w) + GC.w,randownum%640));
            //mosterSprite.setPosition(new cc.Point(200,200));
            this.addChild(mosterSprite);
            mosterSprite.walkingAnimate(mosterSprite);
            this.enemyMonsterArray.push(mosterSprite);
        }
        for(var i =0; i< 10; i++){
            var randownum = Math.floor(Math.random() * 10000+1);
            var mosterSprite = new MonsterSprite(config,true);
            mosterSprite.setPosition(cc.p(randownum %(GC.w),randownum%640));
            //mosterSprite.setPosition(new cc.Point(250,250));
            this.addChild(mosterSprite);
            mosterSprite.walkingAnimate();
            this.myMonsterArray.push(mosterSprite);
        }

    },*/

    updateEvent : function(){
        this.updateMonsterArray()
        this.monsterWalking();
    },

    updateMonsterArray :function(){
        //删除已经死亡的怪物
        for(var  i = 0; i < this.myMonsterArray.length; i++){
            var monster = this.myMonsterArray[i];
            if(monster.m_activity == false){
                this.myMonsterArray.splice(i,1);
            }
        }
        for(var  i = 0; i < this.enemyMonsterArray.length;i ++){
            var monster = this.enemyMonsterArray[i];
            if(this.enemyMonsterArray[i].m_activity == false){
                this.enemyMonsterArray.splice(i,1);
            }
        }
    },

    monsterWalking :function(){
        for(var i = 0;i < this.myMonsterArray.length; i++){
            var  myMonster = this.myMonsterArray[i];
            this.walk(myMonster,this.enemyMonsterArray);
        }
        for(var i = 0;i < this.enemyMonsterArray.length; i++){
            var  myMonster = this.enemyMonsterArray[i];
            this.walk(myMonster,this.myMonsterArray);
        }

    },

    walk : function(monster, enemyMonsterArray){
        if(monster.m_HP <= 0){
            monster.monsterAction(MonsterState.Death);
            return;
        }

        var sighRadius = monster.m_sightRadius;
        var attackRadius = monster.m_attackRadius;
        var monsterPoint = monster.getPosition();

        var destinationMonster = null;
        var minDistance  = sighRadius * sighRadius; //视野范围内

        for(var i = 0; i < enemyMonsterArray.length; i++){ //寻找最近的敌人
            var enemyMonster = enemyMonsterArray[i];
            if(enemyMonsterArray.m_HP <= 0){ //血量为0
                continue
            }

            var enemyPoint = enemyMonster.getPosition();
            var distance = this.getPointDistance(monsterPoint,enemyPoint);
            if (distance < minDistance){
                minDistance = distance  ;
                destinationMonster = enemyMonster;
            }
        }

        var destinationX;
        var destinationY;
        var destinationPoint;
        var state;
        if (destinationMonster == null){ //视野内没有任何敌人 向前走
            monster.setDirect();
            if(monster.m_isMyMonster){
                state = MonsterState.WalkingRight;
            }
            else{
                state = MonsterState.WalkingLeft;
            }
            if(this.isInUpPath(this.fightingPathConfig,monsterPoint)){
                destinationX = monsterPoint.x;
                destinationY = monsterPoint.y + monster.m_walkSpeed * ScheduleTime * monster.m_direct;
                destinationPoint = cc.p(destinationX,destinationY);
                if(!this.isInPath(this.fightingPathConfig,destinationPoint)){
                    destinationX = monsterPoint.x + monster.m_walkSpeed * ScheduleTime * monster.m_direct;
                    destinationY = monsterPoint.y;
                    destinationPoint = cc.p(destinationX,destinationY);
                }
            }
            else if(this.isInDownPath(this.fightingPathConfig,monsterPoint)){
                destinationX = monsterPoint.x;
                destinationY = monsterPoint.y - monster.m_walkSpeed * ScheduleTime * monster.m_direct;
                destinationPoint = cc.p(destinationX,destinationY);
                if(!this.isInPath(this.fightingPathConfig,destinationPoint)){
                    destinationX = monsterPoint.x + monster.m_walkSpeed * ScheduleTime * monster.m_direct;
                    destinationY = monsterPoint.y;
                    destinationPoint = cc.p(destinationX,destinationY);
                }
            }
            else {
                destinationX = monsterPoint.x + monster.m_walkSpeed * ScheduleTime * monster.m_direct;
                destinationY = monsterPoint.y;
                destinationPoint = cc.p(destinationX,destinationY);
                if(!this.isInPath(this.fightingPathConfig,destinationPoint)){
                    if(monster.y < GC.h_2){
                        destinationX = monsterPoint.x ;
                        destinationY = monsterPoint.y + monster.m_walkSpeed * ScheduleTime * monster.m_direct;
                        destinationPoint = cc.p(destinationX,destinationY);
                    }
                    else {
                        destinationX = monsterPoint.x;
                        destinationY = monsterPoint.y - monster.m_walkSpeed * ScheduleTime * monster.m_direct;
                        destinationPoint = cc.p(destinationX,destinationY);
                    }
                }
            }
            monster.setPosition(destinationPoint);
        }
        else{
            var enemyPoint = destinationMonster.getPosition();
            if(minDistance <= (attackRadius * attackRadius)){ //攻击范围
                if(monsterPoint.x < enemyPoint.x){
                    state = MonsterState.AttackRight;
                }
                else{
                    state = MonsterState.AttackLeft;
                }
            }
            else{
                var dx = monsterPoint.x - enemyPoint.x;
                var dy = monsterPoint.y - enemyPoint.y;
                if(dx ==0){
                    if(dy > 0) //正下方
                    {
                    }
                    else{//正上方
                    }
                }
                else{
                    var d = monster.m_walkSpeed * ScheduleTime;
                    var ratio = dy / dx;
                    var x = Math.sqrt((d * d * 1.0) / (ratio * ratio +1));
                    var y = Math.sqrt((d * d - x * x));
                    if(dx < 0){
                        state = MonsterState.WalkingRight;
                        destinationX = monsterPoint.x + x;
                    }
                    else{
                        destinationX = monsterPoint.x - x;
                        state = MonsterState.WalkingLeft
                    }
                    if(dy < 0){
                        destinationY  =monsterPoint.y + y;
                    }
                    else{
                        destinationY  =monsterPoint.y - y;
                    }
                    destinationPoint = cc.p(destinationX,destinationY);
                    monster.setPosition(destinationPoint);
                }
            }
        }
        monster.monsterAction(state,destinationMonster);
    },

    getPointDistance : function (p1, p2) {
        return (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);
    },

    //拖动怪物的效果
    addClipperNode :function(){
        //设置模板
        var stencil = cc.Node.create();
        for(var i = 0; i<this.walkingPathConfig.UpPath.length ;i++){
            var element = this.walkingPathConfig.UpPath[i];
            var rectangular = this.getRectangular(cc.p(element.origin.x * TMXTileMapsize,element.origin.y * TMXTileMapsize),cc.p(element.destination.x * TMXTileMapsize,element.destination.y*TMXTileMapsize));
            stencil.addChild(rectangular);
        }
        for(var i =0 ;i < this.walkingPathConfig.StraightPath.length;i++){
            var element = this.walkingPathConfig.StraightPath[i];
            var rectangular = this.getRectangular(cc.p(element.origin.x * TMXTileMapsize,element.origin.y * TMXTileMapsize),cc.p(element.destination.x * TMXTileMapsize,element.destination.y*TMXTileMapsize));
            stencil.addChild(rectangular);
        }
        for(var i =0 ;i < this.walkingPathConfig.DownPath.length;i++){
            var element = this.walkingPathConfig.DownPath[i];
            var rectangular = this.getRectangular(cc.p(element.origin.x * TMXTileMapsize,element.origin.y * TMXTileMapsize),cc.p(element.destination.x * TMXTileMapsize,element.destination.y*TMXTileMapsize));
            stencil.addChild(rectangular);
        }
        //设置
        this.m_clipperNode = cc.ClippingNode.create(stencil);
        this.m_clipperNode.setInverted(true);//底板可见
        this.m_clipperNode.setAlphaThreshold(1.0);
        //设置灰色的底板
        var baLayer = cc.LayerColor.create(cc.color(0,0,0,150));
        baLayer.setScaleX(4);
        this.m_clipperNode.addChild(baLayer);
        this.addChild(this.m_clipperNode);
    },
    removeClipperNode : function(){
        this.m_clipperNode.removeFromParent();
        this.m_clipperNode = null;
    },

    //拖动建筑物效果
    addBuildingTick : function(){
        this.buildingTickLayer = new BuildingTicklayer();
        this.addChild(this.buildingTickLayer,LAYER_PRIORITY_TOUCH-1);
        for(var i = 0; i< this.buildingPositionConfig.length;i++){
            var element = this.buildingPositionConfig[i];
            if(this.buildingPositionMark[i] == false){//还没放塔
                var position = cc.p((element.origin.x+1) * TMXTileMapsize,(element.origin.y+1)*TMXTileMapsize);
                this.buildingTickLayer.addTickSprite(position);
            }
        }
    },
    removeBuildingTick : function(){
        this.buildingTickLayer.removeFromParent();
        this.buildingTickLayer = null;
    },

    //画一个矩形
    getRectangular : function(origin, destination){
        var rectangular = new cc.DrawNode();
        var origin = cc.p(origin);
        var destination = cc.p(destination);
        var color = cc.color(0,0,0);
        rectangular.drawRect(origin,destination,color);
        return rectangular;
    }

});
