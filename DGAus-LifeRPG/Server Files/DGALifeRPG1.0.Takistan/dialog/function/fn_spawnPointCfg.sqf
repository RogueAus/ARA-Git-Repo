/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["un_hq_spawn","UN HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["tsf_hq_spawn","TSF HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case civilian:
	{
		_return = [
			["rasman_spawn","Rasman","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["nagara_spawn","Nagara","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["ntkara_spawn","North Karachinar","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
		
		if(license_civ_rebel && playerSide == civilian) then {
			_return = [
				
				["Shukurkalay_spawn","Shukurkalay","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["terrorist_spawn","Terrorist Area","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["tms_hq_spawn","TMS HQ","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
};

_return;