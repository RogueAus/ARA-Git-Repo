private["_msg","_dMarker"];
if(playerSide isEqualTo west) exitWith {};
if(playerSide isEqualTo independent) exitWith {};
if(life_is_arrested) exitWith {}; 
life_lastKnownPos = param [0,[],[[]]];
waitUntil{!deadPlayer};
_msg = "This Player is breaking the New Life Rule!";
_dMarker = createMarkerLocal["My Death Location",life_lastKnownPos];
_dMarker setMarkerTypeLocal "hd_warning";
_dMarker setMarkerTextLocal "My Death Location - Stay Away!";
_dMarker setMarkerColorLocal "ColorWhite";
life_NLR = time + (10 * 60);
while{!deadPlayer && (life_NLR - time) >= 0} do
{
	if(player distance life_lastKnownPos < 500) then {
		//["You are close to the scene of your death - leave the area immediately.", false] spawn domsg;
		switch (true) do {
			case (player distance (getMarkerPos "rasman_spawn") < 500): {titleText ["You are close to the scene of your death - leave the area immediately.", "PLAIN", 2];};
			case (player distance (getMarkerPos "nagara_spawn") < 500): {titleText ["You are close to the scene of your death - leave the area immediately.", "PLAIN", 2];};
			case (player distance (getMarkerPos "ntkara_spawn") < 500) : {titleText ["You are close to the scene of your death - leave the area immediately.", "PLAIN", 2];};
			case (player distance (getMarkerPos "terrorist_spawn") < 500) : {titleText ["You are close to the scene of your death - leave the area immediately.", "PLAIN", 2];};
			case (player distance (getMarkerPos "Shukurkalay_spawn") < 500): {titleText ["You are close to the scene of your death - leave the area immediately.", "PLAIN", 2];};
			default {titleText ["You are close to the scene of your death - leave the area immediately.", "PLAIN", 2]; [_msg,name player,7,mapGridPosition player,player] remoteExecCall ["TON_fnc_clientMessage",0];};
		};
	};
	uiSleep 30;
	if(round(life_NLR - time) < 1) exitWith {};
};
life_lastKnownPos = [0,0,0];
deleteMarker _dMarker;