#include "..\script_macros.hpp"
/*
	File: fn_notifyAdmins.sqf
	Author: Jack "Badger" Meyer
	
	Description:
	Messages admins about a scripted event
*/
if(isServer && !hasInterface) exitWith {}; //NO SERVER DO NOT EXECUTE IT!
if(FETCH_CONST(life_adminlevel) < 1) exitWith {};
_type = _this select 0;

switch (_type) do {
    case 0: { _pName = _this select 1; hint parseText format["<t align='center'><t color='#FF0000'><t size='3'>ANTI-VDM</t></t><br/>VDMER CAUGHT</t><br/><br/>Name: %1",_pName]; }; //Anti VDM message
	case 1: { _pName = _this select 1; hint parseText format["<t align='center'><t color='#FF0000'><t size='3'>NLR WATCH</t></t><br/>NLR BREAK CAUGHT</t><br/><br/>Name: %1",_pName]; }; //NLR Breaker message
    default { hint parseText format["Admin message error!<br />Message value:%1<br />Vars:%2",_this select 0, _this select 1] };
};