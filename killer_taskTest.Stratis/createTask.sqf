_unit = _this select 0;
_markerPos = getMarkerPos "hangar";

[west, ["task1"], ["Go to the hangar", "Go To Hangar", "hangar"], _markerPos,1,2, true] call BIS_fnc_taskCreate;
_taskState = ["task1"] call BIS_fnc_taskState;

while {true} do {
    _pTaskCheck = _unit getVariable ["Task1Comp",nil];
    if (!isNil"_pTaskCheck") exitWith {hint "This is working"};
};

/*
if (_complete == true) then {
    _markerPos = getMarkerPos "Fuck_Rogue";
    [west, ["task2"], ["Go here to fuck Rogue", "Go fuck Rogue", "Fuck_Rogue"], _markerPos,1,1, true] call BIS_fnc_taskCreate;
};
*/