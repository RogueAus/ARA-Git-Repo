#include "..\..\script_macros.hpp"
/*
    File: fn_seizePlayerAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the seize process..
    Based off Tonic's fn_searchAction.sqf
*/
private ["_allowCopStripCop","_allowCopStripMedic","_allowCopStripCiv","_allowCivStripCop","_allowCivStripMedic","_allowCivStripCiv","_allowMedicStripCop","_allowMedicStripMedic","_allowMedicStripCiv","_stripContinue","_stripExitRsn"];
// Config Section
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

// !!!!!!!CODE BELOW THIS LINE!!!!!!!
params [
    ["_unit",objNull,[objNull]]
];
if (isNull _unit) exitWith {};

_stripContinue = false;
_stripExitRsn = "An unknown error occured!";

switch (side player) do {
    case (west): {
        switch (side _unit) do {
          case (west): {
            if (!_allowCopStripCop) then {
              _stripExitRsn = "Police may not strip Police!";
            } else {_stripContinue = true;};
          };
          case (independent): {
            if (!_allowCopStripMedic) then {
              _stripExitRsn = "Police may not strip EMS!";
            } else {_stripContinue = true;};
          };
          case (civilian): {
            if (!_allowCopStripCiv) then {
              _stripExitRsn = "Police may not strip Civilians!";
            } else {_stripContinue = true;};
          };
        };
    };
    case (independent): {
      switch (side _unit) do {
        case (west): {
          if (!_allowMedicStripCop) then {
            _stripExitRsn = "EMS may not strip Police!";
          } else {_stripContinue = true;};
        };
        case (independent): {
          if (!_allowMedicStripMedic) then {
            _stripExitRsn = "EMS may not strip EMS!";
          } else {_stripContinue = true;};
        };
        case (civilian): {
          if (!_allowMedicStripCiv) then {
            _stripExitRsn = "EMS may not strip Civilians!";
          } else {_stripContinue = true;};
        };
      };
    };
    case (civilian): {
      switch (side _unit) do {
        case (west): {
          if (!_allowCivStripCop) then {
            _stripExitRsn = "Civilians may not strip Police!";
          } else {_stripContinue = true;};
        };
        case (independent): {
          if (!_allowCivStripMedic) then {
            _stripExitRsn = "Civilians may not strip EMS!";
          } else {_stripContinue = true;};
        };
        case (civilian): {
          if (!_allowCivStripCiv) then {
            _stripExitRsn = "Civilians may not strip Civilians!";
          } else {_stripContinue = true;};
        };
      };
    };
};

if(!_stripContinue) exitWith {hint _stripExitRsn;}; //Check if there was an error and exit if so

if (player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint localize "STR_NOTF_CannotSeizePerson"};
[player] remoteExec ["life_fnc_stripClient",_unit];
life_action_inUse = false;