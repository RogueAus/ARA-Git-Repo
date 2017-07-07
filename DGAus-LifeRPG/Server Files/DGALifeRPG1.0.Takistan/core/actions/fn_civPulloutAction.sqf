#include "..\..\script_macros.hpp"
/*
	File: fn_pulloutAction.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Pulls players out of a car if it's stopped.
*/
private["_crew"];
_crew = crew cursorTarget;

{
	_x setVariable ["transporting",false,true]; _x SVAR ["Escorting",false,true];
	[_x] remoteExecCall ["life_fnc_civPulloutVeh",_x];
} forEach _crew;