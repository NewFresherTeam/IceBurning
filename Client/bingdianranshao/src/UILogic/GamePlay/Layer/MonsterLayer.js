/**
 * Created by jiachen on 2016/4/2.
 */


var ScheduleTime =1.0/60;
var TestTime = 2;

var monsterLayer;
var MonsterLayer = cc.Layer.extend({

    ctor : function(){
        this._super();

        this.schedule(this.updateEvent,ScheduleTime);//计时器
        //this.schedule(this.monsterTest,TestTime);//计时器

        monsterLayer = this;
    },


    addMainCitySprite : function(){
        var myMainCityPosition;
        var enemyMainCityPosition;
        if(GC.IS_HOST){
            myMainCityPosition = cc.p(200,GC.h_2);
            enemyMainCityPosition = cc.p(GC.w*2 - 200,GC.h_2);
            /*this.addMainCitySprite(config,cc.p(200,GC.h_2),true);
            this.addMainCitySprite(config,cc.p(GC.w*2 - 200,GC.h_2),false);*/
        }
        else{
            myMainCityPosition = cc.p(GC.w*2 - 200,GC.h_2);
            enemyMainCityPosition = cc.p(200,GC.h_2);

        }
        monsterManager.addMonsterSprite(101,myMainCityPosition,true);
        monsterManager.addMonsterSprite(101,enemyMainCityPosition,false);
        //this.monsterTest();

    },
    updateEvent : function(){
        monsterManager.updateMonsterData();
    },

    monsterTest : function(){
        var points;
        if(GC.IS_HOST){
            points = [cc.p(50 * TMXTileMapsize,3 * TMXTileMapsize),cc.p(50*TMXTileMapsize,10*TMXTileMapsize), cc.p(50*TMXTileMapsize,17*TMXTileMapsize)];
        }
        else{
            points = [cc.p(6 * TMXTileMapsize,3 * TMXTileMapsize),cc.p(10*TMXTileMapsize,10*TMXTileMapsize), cc.p(6*TMXTileMapsize,17*TMXTileMapsize)];
        }
        var config = MonsterConfig.yuangujuren;
        var num = Math.round(Math.random()*3)%3;
        var point = points[num];
        monsterManager.addMonsterSprite(2,point,false);

     },

    //技能效果
    skillAnimate :function(skillConfig,myMonster,elemyMonster){
        var rangedAttackSprite = new RangedAttackSprite(skillConfig,myMonster.getPosition(),elemyMonster);
        rangedAttackSprite.startAnimate();
        this.addChild(rangedAttackSprite,0);
    },
    //技能特效
    rangedAttackEffect : function(config, position){
        var rangedAttackEffect = new RangedAttackEffectSprite(config);
        rangedAttackEffect.setPosition(position);
        rangedAttackEffect.startAnimate();
        this.addChild(rangedAttackEffect);
    },

    addMonsterSprite : function(sprite) {
        this.addChild(sprite);
    }
});