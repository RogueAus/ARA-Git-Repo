createDialog "DGAus_threatmenu";
disableSerialization;
_codeList = (findDisplay 9000) displayCtrl 9002;
_codeList lbAdd "Green";
_codeList lbSetData [(lbSize _codeList)-1,"Green"];

_codeList lbAdd "Yellow";
_codeList lbSetData [(lbSize _codeList)-1,"Yellow"];

_codeList lbAdd "Red";
_codeList lbSetData [(lbSize _codeList)-1,"Red"];

_codeList lbSetCurSel 0;

_currentThreatLevel = (findDisplay 9000) displayCtrl 9001;
_currentThreatLevel ctrlSetText threatLevel;