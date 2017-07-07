_curLvl = threatLevel;

while {true} do {
	waitUntil {threatLevel != _curLvl};
	_finalMsg = format["<t size='1.5' color='#ff0000'>ALERT</t><br />UN has changed the threat level to: %1<br />Reason:<br />%2",threatLevel,threatReason];
	_finalMsg = parseText _finalMsg;
	hint _finalMsg;
	_curLvl = threatLevel;
};