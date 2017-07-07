#include "..\..\script_macros.hpp"
/*
	File: fn_adminGodMode.sqf
	Author: Tobias 'Xetoxyc' Sittenauer
 
	Description: Enables God mode for Admin
*/

if(FETCH_CONST(life_adminlevel) < 4) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

[] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
};
 
if(life_god) then {
	life_god = false;
	player allowDamage true;
	
	player removeAllEventHandlers "handleDamage";
	player addEventHandler ["handleDamage", {_this call life_fnc_handleDamage;}];
	removeHeadGear player;
	removeUniform player;
	removeVest player;
	removeGoggles player;
	player addGoggles life_admin_goggles;
	player addHeadGear life_admin_headgear;
	player forceAddUniform life_admin_outfit;
	{player addItemToUniform _x} foreach life_admin_outfit_items;
	player addVest life_admin_vest;
	{player addItemToVest _x} foreach life_admin_vest_items;
	[] call life_fnc_playerSkins;
	titleText ["God mode disabled","PLAIN"]; titleFadeOut 2;
} else {
	life_god = true;
	player allowDamage false;
	
	player removeAllEventHandlers "handleDamage";
	player addEventHandler ["handleDamage", {false}];
	player allowDamage false;
	life_admin_outfit = uniform player;
	life_admin_outfit_items = uniformItems player;
	life_admin_vest = vest player;
	life_admin_vest_items = vestItems player;
	life_admin_headgear = headGear player;
	life_admin_goggles = goggles player;
	removeHeadGear player;
	removeUniform player;
	removeVest player;
	removeGoggles player;
	if(!("ItemMap" in (assignedItems player))) then { player addItem "ItemMap"; };
	player addGoggles "NVGoggles_OPFOR";
	player addHeadGear "H_CrewHelmetHeli_B";
	player forceAddUniform "U_O_Protagonist_VR";
	titleText ["God mode enabled","PLAIN"]; titleFadeOut 2;
};