/*
  Author: Jack "Cade Smithy" Meyer
  File: fn_stripGear.sqf
  For: DGAus
  Desc: A file that removes everything from the player and places it on the ground.
*/
// Config Section
// Cop config
_allowCopStripCop = false; // Allow cops to strip cops
_allowCopStripMedic = false; // Allow cops to strip medics
_allowCopStripCiv = true; // Allow cops to strip civs

// Civ config
_allowCivStripCop = true; // Allow civs to stip cops
_allowCivStripMedic = false; // Allow civs to strip medics
_allowCivStripCiv = true; // Allow civs to strip civs

// Medic config
_allowMedicStripCop = false; // Allow medics to strip cops
_allowMedicStripMedic = false; // Allow medics to strip medics
_allowMedicStripCiv = false; // Allow medics to strip civs

// Admin config
_admins = [""]; // Put admin uids here, they can strip anyone. -------- THIS IS DISABLED
_adminStripWhilleUnRest = true; // Can admins strip people while they arn't restrained? ------- THIS IS DISABLED

// General config
_onlyStripWhileRestrained = true; // Only be able to strip people while they're restrained? --------- THIS IS DISABLED AND IMPLIMENTED BY DEFAULT

// !!!!!!! DO NOT EDIT ANYTHING BELOW THIS LINE !!!!!!!

private ["_gear","_unit","_stripper"];
_gear = [""];
_items = nil;
_unit = cursorTarget;
_stripper = player;
_stripContinue = false;
_stripExitRsn = "An unknown error occured!";

switch (side _stripper) do {
    case (west): {
        switch (side _unit) do {
          case (west): {
            if (!_allowCopStripCop) then {
              _stripExitRsn = "Police may not strip police!";
            } else {_stripContinue = true;};
          };
          case (independent): {
            if (!_allowCopStripMedic) then {
              _stripExitRsn = "Police may not strip EMS!";
            } else {_stripContinue = true;};
          };
          case (civilian): {
            if (!_allowCopStripCiv) then {
              _stripExitRsn = "Police may not strip civilianss!";
            } else {_stripContinue = true;};
          };
        };
    };
    case (independent): {
      switch (side _unit) do {
        case (west): {
          if (!_allowMedicStripCop) then {
            _stripExitRsn = "EMS may not strip police!";
          } else {_stripContinue = true;};
        };
        case (independent): {
          if (!_allowMedicStripMedic) then {
            _stripExitRsn = "EMS may not strip EMS!";
          } else {_stripContinue = true;};
        };
        case (civilian): {
          if (!_allowMedicStripCiv) then {
            _stripExitRsn = "EMS may not strip civilians!";
          } else {_stripContinue = true;};
        };
      };
    };
    case (civilian): {
      switch (side _unit) do {
        case (west): {
          if (!_allowCivStripCop) then {
            _stripExitRsn = "Civilians may not strip police!";
          } else {_stripContinue = true;};
        };
        case (independent): {
          if (!_allowCivStripMedic) then {
            _stripExitRsn = "Civilians may not strip EMS!";
          } else {_stripContinue = true;};
        };
        case (civilian): {
          if (!_allowCivStripCiv) then {
            _stripExitRsn = "Civilians may not strip civilians!";
          } else {_stripContinue = true;};
        };
      };
    };
};

if(_unit == _stripper) then {_stripExitRsn = "You may not strip yourself!"; _stripContinue = false};// Make sure they arn't strippn them selves somehow :/
if(_stripper distance _unit > 3) then{_stripExitRsn = "You are too far from this person to strip them!"; _stripContinue = false};// Make sure there not more than 3m away.
if(!_stripContinue) exitWith {hint _stripExitRsn;}; //Check if there was an error and exit if so

//The big boy section
_holder = createVehicle [ "GroundWeaponHolder", getPosATL player, [], 0, "CAN_COLLIDE" ];

_holder setPos getPos _unit;

// Now for the complex part. :(
if !(primaryWeapon _unit == "") then {
  _gear = primaryWeaponItems _unit;
  {
      _holder addItemCargoGlobal [_x, 1];
  } forEach _gear;
  _holder addWeaponCargoGlobal [primaryWeapon _unit, 1];
  _unit removeWeaponGlobal primaryWeapon _unit;
};

if !(handgunWeapon _unit == "") then {
  _gear = handgunItems _unit;
  {
      _holder addItemCargoGlobal [_x, 1];
  } forEach _gear;
  _holder addWeaponCargoGlobal [handgunWeapon _unit, 1];
  _unit removeWeaponGlobal handgunWeapon _unit;
};

_gear = items _unit;
{
    _holder addItemCargoGlobal [_x, 1];
    _unit removeItem _x;
} forEach _gear;

_gear = magazines _unit;
{
    _holder addItemCargoGlobal [_x, 1];
    _unit removeItem _x;
} forEach _gear;

_holder addItemCargoGlobal [headgear _unit,1];
removeHeadgear _unit;

_holder addBackpackCargoGlobal [backpack _unit,1];
removeBackpackGlobal _unit;

_holder addItemCargoGlobal [vest _unit,1];
removeVest _unit;

_holder addItemCargoGlobal [uniform _unit,1];
removeUniform _unit;

call life_fnc_saveGear;