#include "..\..\script_macros.hpp"
/*	
	Author: Demigod		
	Description:	Purge Server Event setup. Sends a faction announcement, plays a sound file from an object	
	and toggles a variable.
*/
private["_msg"];
if(((FETCH_CONST(life_coplevel) >= 4) && (FETCH_CONST(life_coplevel) <= 8)) || (FETCH_CONST(life_coplevel) < 12)) exitWith {closeDialog 0;
	hint "You need to be a UN 2nd Lieutenant or higher to use this function.";
};
if(life_alarm) exitWith {closeDialog 0; 
	hint "An Alarm has already been activated! Please wait the full 7.5 minutes or deactivate it before trying again!";
};
_msg = "Rasman is under Terrorist Attack! All Civilians are to leave the area, all active personnel are to report to UN HQ! If you are found in the area with a weapon out, you will be shot on sight!";

life_alarmCooldown = 30;
publicVariable "life_alarmCooldown";

if(isNil "life_alarmTimer" || {(time - life_alarmTimer) > life_alarmCooldown}) then {
	life_alarm = true;
	publicVariable "life_alarm";
	[_msg,name player,6] remoteExec ["TON_fnc_clientMessage",0];
	[Tower1, "rasAlarm",5000] remoteExec ["life_fnc_playSound",0];
	[Tower2, "rasAlarm",5000] remoteExec ["life_fnc_playSound",0];
	[Tower4, "rasAlarm",5000] remoteExec ["life_fnc_playSound",0];
	[Tower5, "rasAlarm",5000] remoteExec ["life_fnc_playSound",0];
	life_alarmTimer = time;
	publicVariable "life_alarmTimer";
	sleep 120;
	sleep 120;
	sleep 120;
	sleep 90;
	life_alarm = false;
	publicVariable "life_alarm";
} else {
	hint format["You must wait %1 seconds to set off the alarm!",[(life_alarmCooldown - (time - life_alarmTimer))] call life_fnc_numberText];
};