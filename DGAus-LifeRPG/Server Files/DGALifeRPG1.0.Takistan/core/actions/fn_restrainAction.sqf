#include "..\..\script_macros.hpp"
/*
	File: fn_restrainAction.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Retrains the target.
*/

if(life_inv_zipties == 0 && life_inv_handcuffs == 0) exitWith {hint "You don't have any zipties or handcuffs!"};

private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if((player distance _unit > 3)) exitWith {};
if((_unit GVAR "restrained")) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
//Broadcast!
if(life_inv_handcuffs == 0) then {
	[false,"zipties",1] call life_fnc_handleinv;
	_unit SVAR["isZiptied",true,true];
} else {
	[false,"handcuffs",1] call life_fnc_handleinv;
	_unit SVAR["isHandcuffed",true,true];
};

_unit SVAR["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];
[0,"STR_NOTF_Restrained",true,[_unit GVAR["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
