/*
New Life Rule Timer
Released to AltisLifeRPG.com
-----Repentz-----
*/
private["_uiDisp","_time","_timer"];
if(playerSide isEqualTo west) exitWith {};
if(playerSide isEqualTo independent) exitWith {};
if(life_is_arrested) exitWith {}; 
disableSerialization;
waitUntil{!deadPlayer};
7 cutRsc ["life_nlrtimer","PLAIN"];
_uiDisp = uiNamespace getVariable "life_nlrtimer";
_timer = _uiDisp displayCtrl 38301;
life_nlrtimer_running = true;
while {true} do {
      if(isNull _uiDisp) then {
            7 cutRsc ["life_nlrtimer","PLAIN"];
            _uiDisp = uiNamespace getVariable "life_nlrtimer";
            _timer = _uiDisp displayCtrl 38301;
      };
      if(round(life_NLR - time) < 1) exitWith {};
      if(life_nlrtimer_stop) exitWith {life_nlrtimer_stop = false;};
      _timer ctrlSetText format["NLR: %1",[(life_NLR - time),"MM:SS"] call BIS_fnc_secondsToString];
      sleep 0.1;
};
life_nlrtimer_running = false;
7 cutText["","PLAIN"];