/*
	File: fn_federalUpdate.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Uhhh, adds to it?
*/
private["_funds"];
while {true} do{	
	sleep (30 * 60);	
	_funds = fed_bank getVariable["safe",0];	
	_chance = random(random 200);	
	if (_chance < 69) then {		
		fed_bank setVariable["safe",_funds+(10 + (round(random 5))),true];		
		hint "A rather large goldbar deposit was made into the bank recently";		
		diag_log "A rather large goldbar deposit was made into the bank recently";	
	} 
	else {		
		fed_bank setVariable["safe",_funds+(2 + (round(random 2))),true];		
		systemChat "A goldbar deposit was made into the bank";		
		diag_log "A goldbar deposit was made into the bank";		
	};
};