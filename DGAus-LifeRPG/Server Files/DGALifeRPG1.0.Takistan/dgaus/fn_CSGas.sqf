/*
	File name: fn_CSGas.sqf
	Author: Jack "Badger" Meyer
	Description: Checks for white smoke around player and adds tear gas effect.
*/

While{true} do {
"dynamicBlur" ppEffectEnable true; // enables ppeffect
"dynamicBlur" ppEffectAdjust [0]; // enables normal vision
"dynamicBlur" ppEffectCommit 15; // time it takes to normal
resetCamShake; // resets the shake
20 fadeSound 1;     //fades the sound back to normal


waituntil{
((nearestObject [getpos player, "CSGas"]) distance player < 20)
and
(getpos (nearestObject [getpos player, "CSGas"]) select 2 < 0.5)
};

 if !((goggles player) in ["Mask_M50","Mask_M40_OD","Mask_M40"]) then 
    {
	"dynamicBlur" ppEffectEnable true; // enables ppeffect
	"dynamicBlur" ppEffectAdjust [20]; // intensity of blur
	"dynamicBlur" ppEffectCommit 3; // time till vision is fully blurred
	enableCamShake true;     // enables camera shake
	addCamShake [10, 45, 10];    // sets shakevalues
	player setFatigue 1; // sets the fatigue to 100%
	5 fadeSound 0.1;     // fades the sound to 10% in 5 seconds
    };


sleep 5;

};
