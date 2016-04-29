/**
 * Created by yuquanacgong on 2016/4/9.
 */
var messageNameToID ={

};

var NetIdentify = {
   "MSG_ON_LOGIN" : 1,
   "MSG_ON_REGIST" : 2,
   "MSG_ON_PULL_ROOMS" : 3,
   "MSG_ON_CREATE_ROOM" : 4,
   "MSG_ON_JOIN_ROOM" : 5,
   "MSG_FIGHT_READY" : 6,
   "MSG_FRAME_SYNC" : 7,
   "MSG_BACK_ROOM"  : 8
};

var NetRequest = {
   "MSG_ON_LOGIN" : GameJoy.JS_CSLoginRequest,
   "MSG_ON_REGIST" : null,
   "MSG_ON_PULL_ROOMS" : GameJoy.JS_CSPullRoomsRequest,
   "MSG_ON_CREATE_ROOM" : GameJoy.JS_CSCreateRoomRequest,
   "MSG_ON_JOIN_ROOM" : GameJoy.JS_CSJoinRoomRequest,
   "MSG_FIGHT_READY" : GameJoy.JS_CSFightReadyRequest,
   "MSG_BACK_ROOM_LIST" : GameJoy.JS_CSBackRoomListRequest
};

var NetResponse = {

}


var NetConfig ={
   "1":GameJoy.JS_CSLoginResponse.Instance,
   "3":GameJoy.JS_CSPullRoomsResponse.Instance,
   "6":GameJoy.JS_CSFightReadyResponse.Instance
};

