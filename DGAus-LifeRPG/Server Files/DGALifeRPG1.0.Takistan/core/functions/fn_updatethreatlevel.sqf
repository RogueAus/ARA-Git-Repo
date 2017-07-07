_codeList = (findDisplay 9000) displayCtrl 9002;
_newThreatLevel = _codeList lbData (lbCurSel _codeList);

threatLevel = _newThreatLevel;
publicVariable "threatLevel";

_reason = (findDisplay 9000) displayCtrl 9003;
_reason = ctrlText _reason;

threatReason = _reason;
publicVariable "threatReason";

closeDialog 0;