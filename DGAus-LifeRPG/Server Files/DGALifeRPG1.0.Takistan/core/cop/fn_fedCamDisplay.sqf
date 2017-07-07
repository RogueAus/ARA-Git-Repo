#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Turns on and displays a security cam like feed via PiP to the laptop display.
*/
_laptop = SEL(_this,0);
_mode = SEL(_this,3);

if(!isPiPEnabled) exitWith {hint localize "STR_Cop_EnablePiP";};
if(isNil "life_fed_scam") then {
	life_fed_scam = "camera" camCreate [0,0,0];
	life_fed_scam camSetFov 0.5;
	life_fed_scam camCommit 0;
	"rendertarget0" setPiPEffect [0];
	life_fed_scam cameraEffect ["INTERNAL", "BACK", "rendertarget0"];
	_laptop setObjectTexture [0,"#(argb,256,256,1)r2t(rendertarget0,1.0)"];
};

switch (_mode) do {
	case "side": { //Road
		life_fed_scam camSetPos [5574.252,8937.316,7.221];
		life_fed_scam camSetTarget [5608.829,8923.076,0.00146008];
		life_fed_scam camCommit 0;
	};
	
	case "vault": { //Vault
		life_fed_scam camSetPos [5651.654,8888.136,10.390];
		life_fed_scam camSetTarget [5655.68,8895.047,1.309];
		life_fed_scam camCommit 0;
	};
	
	case "front": { //West Entrance
		life_fed_scam camSetPos [5600.135,8883.519,8.946] ;
		life_fed_scam camSetTarget [5629.491,8890.564,0.00145817];
		life_fed_scam camCommit 0;
	};
	
	case "back": { //East Entrance
		life_fed_scam camSetPos [5707.987,8902.432,6.893];
		life_fed_scam camSetTarget [5680.51,8898.73,0.00146866];
		life_fed_scam camCommit 0;
	};
	
	case "off" :{
		life_fed_scam cameraEffect ["terminate", "back"];
		camDestroy life_fed_scam;
		_laptop setObjectTexture [0,""];
		life_fed_scam = nil;
	};
};
