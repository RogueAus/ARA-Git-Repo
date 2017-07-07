StartProgress = false;
/*
tfar_Settings by Rogue
contains all the variables that are important for tfar
*/
 
//https://github.com/michail-nikolaev/task-force-arma-3-radio/wiki/API:-Variables
compile preprocessFileLineNumbers "\task_force_radio\functions\common.sqf";
 
// for serious mode of TFAR on our TS: 
tf_radio_channel_name  =  "TakiLifeRadio" ; 
tf_radio_channel_password  =  "654321" ;

//Radio Codes
tf_west_radio_code = "_bluefor";
tf_east_radio_code = "_opfor";
tf_guer_radio_code = "_bluefor";
 
//TFAR Standard Settings
tf_no_auto_long_range_radio = true;
tf_give_personal_radio_to_regular_soldier = false;
TF_give_microdagr_to_soldier = false;
tf_terrain_interception_coefficient = 1.0;
 
//Standardradios
TF_defaultWestPersonalRadio = "tf_anprc152";
TF_defaultEastPersonalRadio = "tf_fadak";
TF_defaultGuerPersonalRadio = "tf_anprc152";
TF_defaultWestRiflemanRadio = "tf_anprc152";
TF_defaultEastRiflemanRadio = "tf_fadak";
TF_defaultGuerRiflemanRadio = "tf_anprc152";
 
//Frequency
//Blufor
tf_freq_west = [0,7,["33.1","33.2","33.3","33.4","33.5","33.6","33.7","33.8","33.9","34","34.1","34.2","34.3"],0,"_bluefor",-1,0];
tf_freq_west_lr = [0,7,["32","32.5","33","33.5","34","34.5","35","35.4","36","36.5","37","37.5","38"],0,"_bluefor",-1,0];

 
// This is necessary in order to pass on all of the clients 
if  ( IsServer )  then  { 
publicVariable "tf_radio_channel_name" ; 
publicVariable "tf_radio_channel_password" ; 
publicVariable "tf_west_radio_code" ; 
publicVariable "tf_east_radio_code" ; 
publicVariable "tf_guer_radio_code" ; 
publicVariable "tf_no_auto_long_range_radio" ; 
publicVariable "tf_give_personal_radio_to_regular_soldier" ;
publicVariable "TF_give_microdagr_to_soldier" ; 
publicVariable "tf_same_sw_frequencies_for_side" ; 
publicVariable "tf_same_lr_frequencies_for_side" ; 
publicVariable "tf_terrain_interception_coefficient" ; 
publicVariable "TF_defaultWestPersonalRadio" ; 
publicVariable "TF_defaultEastPersonalRadio" ; 
publicVariable "TF_defaultGuerPersonalRadio" ; 
publicVariable "TF_defaultWestRiflemanRadio" ; 
publicVariable "TF_defaultEastRiflemanRadio" ; 
publicVariable "TF_defaultGuerRiflemanRadio" ; 
publicVariable "tf_freq_west" ; 
publicVariable "tf_freq_west_lr" ; 
publicVariable "tf_freq_name" ; 
} ;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "dgaus\fn_statusBar.sqf";
[] execVM "outlw_magRepack\MagRepack_init_sv.sqf"; //Mag Repack
[] execVM "dgaus\fn_repCleanup.sqf";

StartProgress = true;