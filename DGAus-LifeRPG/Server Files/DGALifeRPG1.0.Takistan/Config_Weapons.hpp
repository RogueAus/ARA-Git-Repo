/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Abdul's Firearms Store";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "CUP_hgun_PB6P9", "", 7200, 1250 }, //PB6P9
			{ "CUP_hgun_Makarov", "", 7500, 1275 }, // Makarov
			{ "CUP_hgun_TaurusTracker455", "", 8000, 2250 }, //Taurus Tracker 45
            { "CUP_hgun_TaurusTracker455_gold", "", 9000, 2250 }, // Taurus Tracker 45 Gold
            { "CUP_hgun_Glock17", "", 9250, 1350 }, //Glock17
            { "CUP_hgun_Colt1911", "", 10000, 1150 }, //Colt 1911
			{ "CUP_hgun_MicroUzi", "", 20000, 15000 } // Micro Uzi
        };
        mags[] = {
            { "CUP_17Rnd_9x19_glock17", "", 25 },
            { "CUP_7Rnd_45ACP_1911", "", 50 },
            { "CUP_6Rnd_45ACP_M", "", 45 },
            { "30Rnd_9x21_Mag", "", 75 },
			{ "CUP_30Rnd_9x19_UZI", "", 350 },
            { "CUP_8Rnd_9x18_Makarov_M", "", 75 }
        };
    };

    class rebel {
        name = "Ahmed's Terrorist Market";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_Pistol_heavy_01_F", "", 3000, 1500 }, // 4-Five
			{ "CUP_hgun_Compact", "", 3250, 1500 }, // CZ-75 Compact
			{ "CUP_hgun_Glock17", "", 4000, 2250 }, // G-17
			{ "CUP_hgun_TaurusTracker455", "", 5000, 3000 }, // Taurus Tracker Model 455
			{ "CUP_hgun_TaurusTracker455_gold", "", 15000, 12500 }, // Taurus Tracker Model 455
			{ "CUP_hgun_SA61", "", 10000, 7500 }, // Sa-61
			{ "CUP_hgun_MicroUzi", "", 12000, 8500 }, // Micro Uzi
			{ "CUP_smg_bizon", "", 12500, 9000 }, // Bizon
			{ "CUP_arifle_AKM", "", 45000, 35000 }, // AKM
			{ "CUP_arifle_AK107", "", 55000, 35000 }, // AK-107
			{ "CUP_arifle_AK47", "", 62500, 50000 }, // AK-47	
			{ "CUP_arifle_AK74M", "", 65000, 55000 }, // AK-47m
			{ "CUP_arifle_AKS_Gold", "", 90000, 80000 }, // AKS(GOLD)
			{ "CUP_arifle_Sa58RIS1", "", 67500, 52500 }, // Sa-58R
			{ "CUP_arifle_Sa58P_des", "", 70000, 64000 }, // Sa-58P
			{ "CUP_arifle_G36C", "", 52500, 42500 }, // G36C
			{ "CUP_arifle_G36A", "", 54500, 45000 }, // G36A
			{ "CUP_arifle_XM8_Railed", "", 60000, 48500 }, // XM8 Railed
			{ "CUP_arifle_CZ805_B", "", 62500, 50000 }, // CZ-805
			{ "CUP_arifle_RPK74_45", "", 112500, 85000 }, // RPK-74
			{ "CUP_srifle_LeeEnfield_rail", "", 40000, 30000 }, // Lee Enfield
			{ "CUP_srifle_M14", "", 75000, 52500 }, // M14
			{ "CUP_srifle_CZ550_rail", "", 90000, 60000 }, // CZ-550
			{ "CUP_srifle_CZ750", "", 120000, 70000 }, // CZ-750
			{ "CUP_optic_Kobra", "", 1500, 1000 }, // Kobra Sight
			{ "optic_Holosight", "", 1500, 1000 }, // Holosight
			{ "CUP_optic_CompM4", "", 2200, 2000 }, // Comp M4 Sight
			{ "CUP_optic_ZDDot", "", 2400, 2000 }, // ZD Dot
			{ "CUP_optic_Elcan", "", 4000, 3500 }, // Elcan
			{ "CUP_optic_ElcanM145", "", 4000, 3500 }, // Elcan M145
			{ "CUP_optic_ELCAN_SpecterDR", "", 5500, 5000 }, // Elcan SpecterDR
			{ "CUP_optic_RCO_desert", "", 6500, 6000 }, // RCO Desert
			{ "optic_Arco", "", 8500, 8000 }, // ARCO
			{ "CUP_optic_PSO_1", "", 11500, 11000 }, // PSO 1
			{ "CUP_optic_PSO_3", "", 12000, 11500 }, // PSO 3
			{ "CUP_optic_SB_11_4x20_PM", "", 15000, 14500 }, // 
			{ "CUP_optic_LeupoldMk4", "", 17500, 16000 }, // Leupold Mk4
			{ "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "", 19000, 17500 }, // Leupold Mk4 Desert
			{ "CUP_optic_LeupoldMk4_MRT_tan", "", 19000, 17500 }, // Leupold Mk4 Tan
			{ "CUP_optic_LeupoldM3LR", "", 25000, 22500 }, // Leupold Mk4 MR/T
			{ "CUP_optic_Leupold_VX3", "", 25000, 22500 }, // Leupold Vx3
			{ "bipod_01_F_blk", "", 5000, 2500 } // Bipod
		};
        mags[] = {
			{ "11Rnd_45ACP_Mag", "", 200 },
			{ "CUP_10Rnd_9x19_Compact", "", 200 },
			{ "CUP_17Rnd_9x19_glock17", "", 200 },
			{ "CUP_6Rnd_45ACP_M", "", 200 },
			{ "CUP_20Rnd_B_765x17_Ball_M", "", 200 },
			{ "CUP_30Rnd_9x19_UZI", "", 350 },
			{ "CUP_30Rnd_545x39_AK_M", "", 650 },
			{ "CUP_30Rnd_762x39_AK47_M", "", 650 },
			{ "CUP_64Rnd_9x19_Bizon_M", "", 650 },
			{ "CUP_5x_22_LR_17_HMR_M", "", 800 },
			{ "CUP_20Rnd_762x51_CZ805B", "", 800 },
			{ "CUP_30Rnd_556x45_G36", "", 800 },
			{ "CUP_10x_303_M", "", 800 },
			{ "CUP_10Rnd_762x51_CZ750_Tracer", "", 800 },
			{ "CUP_20Rnd_762x51_DMR", "", 800 },
			{ "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 1000 },
			{ "CUP_30Rnd_Sa58_M_TracerG", "", 800 },
			{ "CUP_10Rnd_9x39_SP5_VSS_M", "", 800 }
        };
    };
	
	class blk_mrkt {
        name = "Blackmarket";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "CUP_arifle_M16A2", "", 75000, 45000 }, // M16A2
			{ "CUP_arifle_M4A1_black", "", 80000, 60000 }, // M4A1
			{ "CUP_arifle_M4A1_desert", "", 90000, 75000 }, // M4A1 Desert
			{ "CUP_arifle_FNFAL_railed", "", 120000, 20000 }, // FN FAL
			{ "arifle_AK12_F", "", 150000, 110000 }, // AK-12
			{ "CUP_lmg_Pecheneg", "", 450000, 380000 }, // PKP Pecheneg
			{ "CUP_lmg_M60E4", "", 550000, 500000 }, // M60E4
			{ "CUP_lmg_Mk48_des", "", 620000, 550000 }, // Mk 48
			{ "CUP_srifle_L129A1_HG", "", 625000, 580000 }, // L129A1 HG
			{ "CUP_srifle_M110", "", 650000, 600000}, // M110
            { "CUP_srifle_ksvk", "", 700000, 650000 }, // KSVK
            { "CUP_glaunch_M79", "", 580000, 550000 }, // M-79 Grenade Launcher
            { "CUP_glaunch_Mk13", "", 600000, 580000 }, // Mk-13 Grenade Launcher
			{ "CUP_launch_RPG18", "", 650000, 600000 }, // RPG-18
			{ "CUP_launch_RPG7V", "", 750000, 700000 }, // RPG-7v
            { "CUP_launch_Igla", "", 1200000, 1000000 }, // Igla Launcher
			{ "V_HarnessOGL_brn", "Suicide Vest", 1100000, 750000 }, // Suicide Vest
			{ "SatchelCharge_Remote_Mag", "", 500000, 250000 }, // Satchel Charge
			{ "CUP_optic_Kobra", "", 1250, 1000 }, // Kobra Sight
			{ "CUP_optic_MRad", "", 1250, 1000 }, // Meopta Rabid Aquisition Dot
			{ "CUP_optic_Eotech533", "", 1500, 1000 }, // Eotech Holo
		    { "optic_Holosight", "", 1500, 1000 }, // Holosight
			{ "optic_Aco", "", 1500, 1000 }, // ACO Red
		    { "CUP_optic_CompM4", "", 2200, 2000 }, // Comp M4 Sight
		    { "CUP_optic_ZDDot", "", 2400, 2000 }, // Meopta ZD Dot
		    { "CUP_optic_Elcan", "", 4000, 3500 }, // Elcan
		    { "CUP_optic_ElcanM145", "", 4000, 3500 }, // Elcan M145
		    { "CUP_optic_ELCAN_SpecterDR", "", 5500, 5000 }, // Elcan SpecterDR
		    { "CUP_optic_RCO_desert", "", 6500, 6000 }, // RCO Desert
		    { "optic_Arco", "", 8500, 8000 }, // ARCO
		    { "CUP_optic_PSO_1", "", 11500, 11000 }, // PSO 1
		    { "CUP_optic_PSO_3", "", 12000, 11500 }, // PSO 3
		    { "CUP_optic_SB_11_4x20_PM", "", 15000, 14500 }, // 
		    { "CUP_optic_LeupoldMk4", "", 17500, 16000 }, // Leupold Mk4
		    { "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "", 19000, 17500 }, // Leupold Mk4 Desert
		    { "CUP_optic_LeupoldMk4_MRT_tan", "", 19000, 17500 }, // Leupold Mk4 Tan
		    { "CUP_optic_LeupoldM3LR", "", 25000, 22500 }, // Leupold Mk4 MR/T
		    { "CUP_optic_Leupold_VX3", "", 25000, 22500 }, // Leupold Vx3
            { "optic_AMS", "", 30000, 25000 }, // AMS Black
            { "optic_AMS_snd", "", 35000, 30000}, // AMS Sand
            { "optic_LRPS", "", 45000, 40000 }, // LRPS
			{ "CUP_optic_NSPU", "", 45000, 40000 }, // NSPU Scope
			{ "CUP_optic_PGO7V2", "", 45000, 40000 }, // PGO 7V2
			{ "bipod_01_F_blk", "", 5000, 2500 } // Bipod
		};
        mags[] = {
			{ "30Rnd_762x39_Mag_F", "", 750, -1 },
			{ "CUP_20Rnd_762x51_FNFAL_M", "", 750, -1 },
			{ "CUP_30Rnd_556x45_Stanag", "", 500, -1 },
            { "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "", 1500, -1 },
			{ "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "", 1500, -1 },
            { "CUP_20Rnd_762x51_B_M110", "", 2000, -1 },
			{ "CUP_20Rnd_762x51_L129_M", "", 1500, -1 },
			{ "CUP_1Rnd_HE_M203", "", 10000, -1 },
			{ "CUP_5Rnd_127x108_KSVK_M", "", 2500, -1},		
            { "1Rnd_HE_Grenade_shell", "", 10000, -1 },	
			{ "CUP_RPG18_M", "", 15000, -1 },			
            { "CUP_PG7V_M", "", 20000, -1 },			
            { "CUP_Igla_M", "", 25000, -1 }					
		};
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 7500, 5000 }, // 4-Five
			{ "CUP_hgun_Compact", "", 8000, 5000 }, // CZ-75 Compact
			{ "CUP_hgun_Glock17", "", 9500, 5500 }, // G-17
			{ "CUP_hgun_TaurusTracker455", "", 12500, 6500 }, // Taurus Tracker Model 455
			{ "CUP_hgun_TaurusTracker455_gold", "", 20000, 12500 }, // Taurus Tracker Model 455
			{ "CUP_hgun_SA61", "", 17500, 13500 }, // Sa-61
			{ "CUP_hgun_MicroUzi", "", 20000, 16500 }, // Micro Uzi
			{ "CUP_smg_bizon", "", 25000, 15000 }, // Bizon
			{ "CUP_arifle_AKM", "", 75000, 55000 } // AKM
        };
        mags[] = {
			{ "11Rnd_45ACP_Mag", "", 200 },
			{ "CUP_10Rnd_9x19_Compact", "", 200 },
			{ "CUP_17Rnd_9x19_glock17", "", 200 },
			{ "CUP_6Rnd_45ACP_M", "", 200 },
			{ "CUP_10x_303_M", "", 800 },
			{ "CUP_20Rnd_B_765x17_Ball_M", "", 200 },
			{ "CUP_30Rnd_9x19_UZI", "", 350 },
			{ "CUP_64Rnd_9x19_Bizon_M", "", 650 },
			{ "CUP_30Rnd_762x39_AK47_M", "", 650 }
        };
    };

    //Basic Shops
    class genstore {
        name = "General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
			{ "FirstAidKit", "", 250, 65 },
            { "ToolKit", "", 1500, 75 },
			{ "Binocular", "", 1050, -1 },
            { "NVGoggles", "", 2500, 980 },
            { "Chemlight_red", "", 500, -1 },
            { "Chemlight_yellow", "", 500, 50 },
            { "Chemlight_green", "", 500, 50 },
            { "Chemlight_blue", "", 500, 50 },
			{ "tf_fadak", "Fadak Radio(LR)", 5000, 5000 }
        };
        mags[] = {};
    };

    class f_station_store {
        name = "Fuel Station Store";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 500, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
			{ "FirstAidKit", "", 250, 65 },
            { "ToolKit", "", 1500, 75 },
			{ "Binocular", "", 1050, -1 },
            { "NVGoggles", "", 2500, 980 },
            { "Chemlight_red", "", 500, -1 },
            { "Chemlight_yellow", "", 500, 50 },
            { "Chemlight_green", "", 500, 50 },
            { "Chemlight_blue", "", 500, 50 },
			{ "tf_fadak", "Fadak Radio(LR)", 5000, 500 }
        };
        mags[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Cop Basic";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 5000, -1 },
            { "hgun_P07_snds_F", "Stun Pistol", 1000, -1 },
			{ "muzzle_snds_L", "", 250, -1 },
            { "ItemGPS", "", 500, -1 },
			{ "FirstAidKit", "", 250, -1 },
            { "ToolKit", "", 1500, -1 },
			{ "Binocular", "", 1050, -1 },
            { "NVGoggles", "", 2500, -1 },
			{ "TRYK_Headset_NV", "Headset (NV)", 3000, -1 },
			{ "tf_anprc152", "AN/PRC-152 Radio(LR)", 5000, -1 },
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 45 }
        };
    };
	//TSF Stores//DGAus Custom
	class tsf_private {
		name = "TSF Private Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 1, "You must be a TSF Private!" };
		items[] = {	
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 } // MP5A5	
		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 }
		};
	};
	
	class tsf_corporal {
		name = "TSF Corporal Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 2, "You must be a TSF Corporal!" };
		items[] = {
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 }, // MP5A5
			{ "CUP_arifle_M16A4_Base", "", 11000, 9000 }, // M16A4
			{ "optic_MRCO", "", 4000, 3500 }, // MRCO
			{ "optic_DMS", "", 6500, 6000 }, // DMS
			{ "CUP_muzzle_snds_M16", "", 20000, 15000 } // M16 Suppressor
		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 }
		};
	};
	
	class tsf_sergeant {
		name = "TSF Sergeant Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 3, "You must be a TSF Sergeant!" };
		items[] = {
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 }, // MP5A5
			{ "CUP_arifle_M16A4_Base", "", 11000, 9000 }, // M16A4
			{ "CUP_arifle_M4A1_black", "", 11000, 9000 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 10000 }, // SPAR-16
			{ "CUP_launch_M136", "", 25000, 22500 }, // M136 Launcher
			{ "CUP_optic_HoloBlack", "", 1500, 1000 }, // Holosight Black
			{ "optic_MRCO", "", 4000, 3500 }, // MRCO
			{ "optic_DMS", "", 6500, 6000 }, // DMS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "",  20000, 15000 }, // 5.56 Suppressor
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke

		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_M136_M", "", 1500 }
		};
	};
	
	class tsf_2lie {
		name = "TSF 2nd Lieutenant Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 4, "You must be a TSF 2nd Lieutenant!" };
		items[] = {
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 }, // MP5A5
			{ "CUP_arifle_M16A4_Base", "", 11000, 9000 }, // M16A4
			{ "CUP_arifle_M4A1_black", "", 11000, 9000 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 10000 }, // SPAR-16
			{ "arifle_SPAR_03_blk_F", "", 13500, 10000 }, // SPAR-17
			{ "CUP_arifle_Mk20", "", 12500, 10000 }, // Mk 17
			{ "CUP_launch_M136", "", 25000, 22500 }, // M136 Launcher
			{ "CUP_optic_HoloBlack", "", 1500, 1000 }, // Holosight Black
			{ "optic_MRCO", "", 4000, 3500 }, // MRCO
			{ "CUP_optic_ACOG", "", 6500, 6000 }, // ACOG
			{ "CUP_optic_RCO", "", 8000, 7000 }, // RCo
			{ "optic_DMS", "", 6500, 6000 }, // DMS
			{ "optic_AMS", "", 8000, 7000 }, // AMS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "",  20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_B", "", 25000, 20000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 25000, 20000 }, // Mk 17
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
		
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_M136_M", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 350 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 300 }
		};
	};
	
	class tsf_1lie {
		name = "TSF 1st Lieutenant Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 5, "You must be a TSF 1st Lieutenant!" };
		items[] = {
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 }, // MP5A5
			{ "CUP_arifle_M16A4_Base", "", 11000, 9000 }, // M16A4
			{ "CUP_arifle_M4A1_black", "", 11000, 9000 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 10000 }, // SPAR-16
			{ "arifle_SPAR_03_blk_F", "", 13500, 10000 }, // SPAR-17
			{ "CUP_arifle_Mk20", "", 12500, 10000 }, // Mk 17
			{ "CUP_launch_M136", "", 25000, 22500 }, // M136 Launcher
			{ "CUP_optic_HoloBlack", "", 1500, 1000 }, // Holosight Black
			{ "optic_MRCO", "", 4000, 3500 }, // MRCO
			{ "optic_ERCO_snd_F", "", 5000, 4000 }, // ERCO
			{ "optic_DMS", "", 6500, 6000 }, // DMS
			{ "optic_AMS", "", 8000, 7000 }, // AMS
		    { "CUP_optic_ACOG", "", 6500, 6000 }, // ACOG
			{ "CUP_optic_RCO", "", 8000, 7000 }, // RCo
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "",  20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_B", "", 25000, 20000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 25000, 20000 }, // Mk 17
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_M136_M", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 350 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 300 }
		};
	};
	
	class tsf_captain {
		name = "TSF Captain Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 6, "You must be a TSF Captain!" };
		items[] = {
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 }, // MP5A5
			{ "CUP_arifle_M16A4_Base", "", 11000, 9000 }, // M16A4
			{ "CUP_arifle_M4A1_black", "", 11000, 9000 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 10000 }, // SPAR-16
			{ "arifle_SPAR_03_blk_F", "", 13500, 10000 }, // SPAR-17
			{ "CUP_arifle_Mk20", "", 12500, 10000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16000 }, // Mk 18
			{ "CUP_launch_M136", "", 25000, 22500 }, // M136 Launcher
			{ "CUP_launch_Mk153Mod0", "", 40000, 35000 }, // SMAW
			{ "CUP_launch_FIM92Stinger", "", 50000, 45000 }, // Stinger
			{ "CUP_optic_HoloBlack", "", 1500, 1000 }, // Holosight Black
			{ "optic_MRCO", "", 4000, 3500 }, // MRCO
			{ "optic_ERCO_snd_F", "", 5000, 4000 }, // ERCO
			{ "optic_DMS", "", 6500, 6000 }, // DMS
			{ "optic_AMS", "", 8000, 7000 }, // AMS
			{ "optic_LRPS", "", 20000, 10000 }, // LRPS
			{ "CUP_optic_ACOG", "", 6500, 6000 }, // ACOG
			{ "CUP_optic_RCO", "", 8000, 7000 }, // RCo
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "",  20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_B", "", 25000, 20000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 25000, 20000 }, // Mk 17
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_M136_M", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 350 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 300 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "CUP_SMAW_HEDP_M", "", 2500 }
		};
	};
	
	class tsf_depch {
		name = "TSF Deputy Chief Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 7, "You must be a TSF Deputy Chief!" };
		items[] = {
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 }, // MP5A5
			{ "CUP_arifle_M16A4_Base", "", 11000, 9000 }, // M16A4
			{ "CUP_arifle_M4A1_black", "", 11000, 9000 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 10000 }, // SPAR-16
			{ "arifle_SPAR_03_blk_F", "", 13500, 10000 }, // SPAR-17
			{ "CUP_arifle_Mk20", "", 12500, 10000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16000 }, // Mk 18
			{ "srifle_DMR_03_F", "", 20000, 19000 }, // Mk 1 EMR
			{ "CUP_launch_M136", "", 25000, 22500 }, // M136 Launcher
			{ "CUP_launch_Mk153Mod0", "", 40000, 35000 }, // SMAW
			{ "CUP_launch_FIM92Stinger", "", 50000, 45000 }, // Stinger
			{ "CUP_optic_HoloBlack", "", 1500, 1000 }, // Holosight Black
			{ "optic_MRCO", "", 4000, 3500 }, // MRCO
			{ "optic_ERCO_snd_F", "", 5000, 4000 }, // ERCO
			{ "optic_DMS", "", 6500, 6000 }, // DMS
			{ "optic_AMS", "", 8000, 7000 }, // AMS
			{ "CUP_optic_ACOG", "", 6500, 6000 }, // ACOG
			{ "CUP_optic_RCO", "", 8000, 7000 }, // RCo
			{ "optic_LRPS", "", 20000, 10000 }, // LRPS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "",  20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_B", "", 25000, 20000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 25000, 20000 }, // Mk 17
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
            { "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_M136_M", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 350 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 300 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "CUP_SMAW_HEDP_M", "", 2500 }
		};
	};
	
	class tsf_chief {
		name = "TSF Chief Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 8, "You must be the TSF Chief!" };
		items[] = {
			{ "CUP_hgun_M9", "", 1000, 500 }, // M9
			{ "CUP_smg_MP5A5", "", 4500, 3000 }, // MP5A5
			{ "CUP_arifle_M16A4_Base", "", 11000, 9000 }, // M16A4
			{ "CUP_arifle_M4A1_black", "", 11000, 9000 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 10000 }, // SPAR-16
			{ "arifle_SPAR_03_blk_F", "", 13500, 10000 }, // SPAR-17
			{ "CUP_arifle_Mk20", "", 12500, 10000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16000 }, // Mk 18
			{ "srifle_DMR_03_F", "", 20000, 19000 }, // Mk 1 EMR
			{ "CUP_srifle_LeeEnfield", "", 15000, 10000 }, // Lee Enfield
			{ "CUP_launch_M136", "", 25000, 22500 }, // M136 Launcher
			{ "CUP_launch_Mk153Mod0", "", 40000, 35000 }, // SMAW
			{ "CUP_launch_FIM92Stinger", "", 50000, 45000 }, // Stinger
			{ "CUP_optic_HoloBlack", "", 1500, 1000 }, // Holosight Black
			{ "optic_MRCO", "", 4000, 3500 }, // MRCO
			{ "optic_ERCO_snd_F", "", 5000, 4000 }, // ERCO
			{ "optic_DMS", "", 6500, 6000 }, // DMS
			{ "CUP_optic_ACOG", "", 6500, 6000 }, // ACOG
			{ "CUP_optic_RCO", "", 8000, 7000 }, // RCo
			{ "optic_AMS", "", 8000, 7000 }, // AMS
			{ "optic_LRPS", "", 20000, 10000 }, // LRPS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "",  20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_B", "", 25000, 20000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 25000, 20000 }, // Mk 17
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_10x_303_M", "", 300 },
			{ "CUP_30Rnd_9x19_MP5", "", 150 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "CUP_M136_M", "", 1500 },
			{ "20Rnd_762x51_Mag", "", 350 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 300 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "CUP_SMAW_HEDP_M", "", 2500 }
		};
	};
	//UN Stores
	class un_private {
		name = "UN Private Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 9, "You must be a UN Private!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", 5000, 3000 }, // UN TRG-20
			{ "CUP_optic_HoloBlack", 750, 600 } // Holosight Black
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", 150 },
			{ "30Rnd_556x45_Stanag", 200 } 
		};
	};
	
	class un_corporal {
		name = "UN Corporal Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 10, "You must be a UN Corporal!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 }
		};
	};
	
	class un_sergeant {
		name = "UN Sergeant Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 11, "You must be a UN Sergeant!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 }
		};
	};

	class un_msergeant {
		name = "UN Master Sergeant Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 12, "You must be a UN Master Sergeant!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "arifle_MXM_Black_F", "", 15000, 12500 }, // MXM
			{ "CUP_hgun_BallisticShield_Armed", "", 20000, 17500 }, // Riot Shield
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_H", "", 25000, 20000 }, // 6.5 Suppressor
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 },
			{ "CUP_15Rnd_9x19_M9", "", 200 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "30Rnd_65x39_caseless_mag", "", 450 }
		};
	};

	class un_2lie {
		name = "UN 2nd Lieutenant Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 13, "You must be a UN 2nd Lieutenant!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "arifle_MXM_Black_F", "", 15000, 12500 }, // MXM
			{ "CUP_arifle_Mk17_STD", "", 22000, 20000 }, // Mk 17
			{ "CUP_srifle_L129A1", "", 25000, 23000 }, // L129A1
			{ "CUP_hgun_BallisticShield_Armed", "", 20000, 17500 }, // Riot Shield
			{ "CUP_launch_FIM92Stinger", "", 50000, 40000 }, // Stinger
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "optic_KHS_blk", "", 4500, 4000 }, // Kahlia Black
			{ "optic_AMS_snd", "", 5500, 5000 }, // AMS Sand
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_H", "", 25000, 20000 }, // 6.5 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 30000, 25000 }, // Mk 17 Suppressor
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 },
			{ "CUP_15Rnd_9x19_M9", "", 200 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 900 }	
		};
	};
	
	class un_1lie {
		name = "UN 1st Lieutenant Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 14, "You must be a UN 1st Lieutenant!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "arifle_MXM_Black_F", "", 15000, 12500 }, // MXM
			{ "CUP_arifle_Mk17_STD", "", 22000, 20000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16500 }, // Mk 18
			{ "arifle_MX_SW_F", "", 22000, 20000 }, // MXSW
			{ "CUP_srifle_L129A1", "", 25000, 23000 }, // L129A1
			{ "CUP_hgun_BallisticShield_Armed", "", 20000, 17500 }, // Riot Shield
			{ "CUP_launch_FIM92Stinger", "", 50000, 40000 }, // Stinger
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "optic_KHS_blk", "", 4500, 4000 }, // Kahlia Black
			{ "optic_AMS_snd", "", 5500, 5000 }, // AMS Sand
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_H", "", 25000, 20000 }, // 6.5 Suppressor
			{ "muzzle_snds_B", "", 30000, 25000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 30000, 25000 }, // Mk 17 Suppressor
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 },
			{ "CUP_15Rnd_9x19_M9", "", 200 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 900 },
			{ "100Rnd_65x39_caseless_mag", "", 1200 },
			{ "20Rnd_762x51_Mag", "", 750 }
		};
	};
	
	class un_captain {
		name = "UN Captain Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 15, "You must be a UN Captain!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "arifle_MXM_Black_F", "", 15000, 12500 }, // MXM
			{ "CUP_arifle_Mk17_STD", "", 22000, 20000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16500 }, // Mk 18
			{ "arifle_MX_SW_F", "", 22000, 20000 }, // MXSW
			{ "CUP_srifle_L129A1", "", 25000, 23000 }, // L129A1
			{ "CUP_hgun_BallisticShield_Armed", "", 20000, 17500 }, // Riot Shield
			{ "CUP_launch_FIM92Stinger", "", 50000, 40000 }, // Stinger
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "optic_KHS_blk", "", 4500, 4000 }, // Kahlia Black
			{ "optic_AMS_snd", "", 5500, 5000 }, // AMS Sand
			{ "optic_LRPS", "", 7500, 6000 }, // LRPS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_H", "", 25000, 20000 }, // 6.5 Suppressor
			{ "muzzle_snds_B", "", 30000, 25000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 30000, 25000 }, // Mk 17 Suppressor
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 },
			{ "CUP_15Rnd_9x19_M9", "", 200 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 900 },
			{ "100Rnd_65x39_caseless_mag", "", 1200 },
			{ "20Rnd_762x51_Mag", "", 750 },
		};
	};
	class un_major {
		name = "UN Major Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 16, "You must be a UN Major!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "arifle_MXM_Black_F", "", 15000, 12500 }, // MXM
			{ "CUP_arifle_Mk17_STD", "", 22000, 20000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16500 }, // Mk 18
			{ "arifle_MX_SW_F", "", 22000, 20000 }, // MXSW
			{ "CUP_srifle_L129A1", "", 25000, 23000 }, // L129A1
			{ "CUP_srifle_M110", "", 23500, 22000 }, // M110
			{ "CUP_hgun_BallisticShield_Armed", "", 20000, 17500 }, // Riot Shield
			{ "CUP_launch_FIM92Stinger", "", 50000, 40000 }, // Stinger
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "optic_KHS_blk", "", 4500, 4000 }, // Kahlia Black
			{ "optic_AMS_snd", "", 5500, 5000 }, // AMS Sand
			{ "optic_LRPS", "", 7500, 6000 }, // LRPS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_H", "", 25000, 20000 }, // 6.5 Suppressor
			{ "muzzle_snds_B", "", 30000, 25000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 30000, 25000 }, // Mk 17 Suppressor
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 },
			{ "CUP_15Rnd_9x19_M9", "", 200 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 900 },
			{ "100Rnd_65x39_caseless_mag", "", 1200 },
			{ "20Rnd_762x51_Mag", "", 750 },
			{ "CUP_20Rnd_762x51_B_M110", "", 1000 }
		};
	};
	
	class un_colonel {
		name = "UN Colonel Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 17, "You must be a UN Colonel!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "arifle_MXM_Black_F", "", 15000, 12500 }, // MXM
			{ "CUP_arifle_Mk17_STD", "", 22000, 20000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16500 }, // Mk 18
			{ "arifle_MX_SW_F", "", 22000, 20000 }, // MXSW
			{ "CUP_srifle_L129A1", "", 25000, 23000 }, // L129A1
			{ "CUP_srifle_M110", "", 23500, 22000 }, // M110
			{ "CUP_lmg_Mk48_des", "", 40000, 35000 }, // Mk 48
			{ "CUP_hgun_BallisticShield_Armed", "", 20000, 17500 }, // Riot Shield
			{ "CUP_launch_FIM92Stinger", "", 50000, 40000 }, // Stinger
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "optic_KHS_blk", "", 4500, 4000 }, // Kahlia Black
			{ "optic_AMS_snd", "", 5500, 5000 }, // AMS Sand
			{ "optic_LRPS", "", 7500, 6000 }, // LRPS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_H", "", 25000, 20000 }, // 6.5 Suppressor
			{ "muzzle_snds_B", "", 30000, 25000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 30000, 25000 }, // Mk 17 Suppressor
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 },
			{ "CUP_15Rnd_9x19_M9", "", 200 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 900 },
			{ "100Rnd_65x39_caseless_mag", "", 1200 },
			{ "20Rnd_762x51_Mag", "", 750 },
			{ "CUP_20Rnd_762x51_B_M110", "", 1000 },
			{ "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "", 2000 }
		};
	};
	
	class un_general {
		name = "UN General's Shop";
		side = "cop";
		license = "";
        level[] = { "life_coplevel", "EQUAL", 18, "You must be the UN General!" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 1500, 1000 }, // G-17
			{ "UN_arifle_TRG20_F", "", 5000, 3000 }, // UN TRG-20
			{ "CUP_arifle_M16A4_Base", "", 7500, 6000 }, // M16A4
			{ "CUP_arifle_M4A1", "", 11000, 7500 }, // M4A1
			{ "arifle_SPAR_01_blk_F", "", 13500, 11000 }, // SPAR-16
			{ "arifle_MXM_Black_F", "", 15000, 12500 }, // MXM
			{ "CUP_arifle_Mk17_STD", "", 22000, 20000 }, // Mk 17
			{ "srifle_EBR_F", "", 18000, 16500 }, // Mk 18
			{ "arifle_MX_SW_F", "", 22000, 20000 }, // MXSW
			{ "CUP_srifle_L129A1", "", 25000, 23000 }, // L129A1
			{ "CUP_srifle_M110", "", 23500, 22000 }, // M110
			{ "CUP_lmg_Mk48_des", "", 40000, 35000 }, // Mk 48
			{ "CUP_hgun_BallisticShield_Armed", "", 20000, 17500 }, // Riot Shield
			{ "CUP_launch_FIM92Stinger", "", 50000, 40000 }, // Stinger
			{ "CUP_launch_M136", "", 25000, 20000 }, //M136 Launcher
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "optic_KHS_blk", "", 4500, 4000 }, // Kahlia Black
			{ "optic_AMS_snd", "", 5500, 5000 }, // AMS Sand
			{ "optic_LRPS", "", 7500, 6000 }, // LRPS
			{ "CUP_muzzle_snds_M16", "", 15000, 10000 }, // M16 Suppressor
			{ "muzzle_snds_M", "", 20000, 15000 }, // 5.56 Suppressor
			{ "muzzle_snds_H", "", 25000, 20000 }, // 6.5 Suppressor
			{ "muzzle_snds_B", "", 30000, 25000 }, // 7.62 Suppressor
			{ "CUP_muzzle_snds_SCAR_H", "", 30000, 25000 }, // Mk 17 Suppressor
			{ "bipod_01_F_blk", "", 5000, 2500 }, // Bipod
			{ "HandGrenade_Stone", "Flashbang", 5000, 2500 }, // Flashbang
			{ "CSGas", "", 7500, 5000 }, // CS Gas
			{ "SmokeShell", "", 0, 0}, // White Smoke
			{ "SmokeShellRed", "", 0, 0}, // Red Smoke
			{ "SmokeShellGreen", "", 0, 0}, // Green Smoke
			{ "SmokeShellYellow", "", 0, 0}, // Yellow Smoke
			{ "SmokeShellPurple", "", 0, 0}, // Purple Smoke
			{ "SmokeShellBlue", "", 0, 0}, // Blue Smoke
			{ "SmokeShellOrange", "", 0, 0} // Orange Smoke
		};
		mags[] = {
			{ "CUP_17Rnd_9x19_glock17", "", 150 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_30Rnd_556x45_Stanag", "", 250 },
			{ "30Rnd_556x45_Stanag", "", 200 },
			{ "CUP_M136_M", "", 1500 },
			{ "CUP_15Rnd_9x19_M9", "", 200 },
			{ "CUP_Stinger_M", "", 2500 },
			{ "30Rnd_65x39_caseless_mag", "", 450 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 900 },
			{ "100Rnd_65x39_caseless_mag", "", 1200 },
			{ "20Rnd_762x51_Mag", "", 750 },
			{ "CUP_20Rnd_762x51_B_M110", "", 1000 },
			{ "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "", 2000 }
		};
	};
	
	class un_sniper {
		name = "UN Sniper Team Shop";
		side = "cop";
		license = "un_sniper";
        level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_arifle_Mk16_STD", "", 11000, 6500 }, //  Mk16 Standard
			{ "arifle_MXM_F", "", 15000, 8500 }, // MXM
			{ "arifle_SPAR_03_snd_F", "", 17500, 11500 }, // SPAR-17
			{ "srifle_EBR_F", "", 17500, 11500 }, // Mk-18
			{ "CUP_srifle_M110", "", 20000, 15000 }, // M-110
			{ "CUP_srifle_M107_Base", "", 25000, 20000 }, // M-107
			{ "srifle_GM6_F", "", 30000, 25000 }, // GM6 Lynx
			{ "CUP_srifle_AS50", "", 40000, 35000 }, // AS-50
			{ "CUP_optic_HoloBlack", "", 750, 600 }, // Holosight Black
			{ "optic_MRCO", "", 1200, 1000 }, // MRCO
			{ "optic_Hamr", "", 2500, 2100 }, // RCO
			{ "optic_SOS", "", 3000, 2750 }, // MOS
			{ "optic_DMS", "", 4000, 3500 }, // DMS
			{ "optic_KHS_blk", "", 4500, 4000 }, // Kahlia Black
			{ "optic_AMS_snd", "", 5500, 5000 }, // AMS Sand
			{ "optic_LRPS", "", 7500, 6000 }, // LRPS
			{ "optic_NVS", "", 9000, 5000 }, // NVS
			{ "CUP_Vector21Nite", "", 500, 250 }, // Vector 21 Nite Rangefinder
			{ "Rangefinder", "", 500, 250 }, // Rangefinder
			{ "CUP_LRTV", "", 500, 250 }, // LRTV Rangefinder
			{ "SmokeShell", "", 500, 250 }, // White Smoke
			{ "SmokeShellRed", "", 500, 250 }, // Red Smoke
			{ "SmokeShellGreen", "", 500, 250 }, // Green Smoke
			{ "SmokeShellYellow", "", 500, 250 }, // Yellow Smoke
			{ "SmokeShellPurple", "", 500, 250 }, // Purple Smoke
			{ "SmokeShellBlue", "", 500, 250 }, // Blue Smoke
			{ "SmokeShellOrange", "", 500, 250 } // Orange Smoke
			
		};
		mags[] = {
			{ "CUP_30Rnd_556x45_Stanag", "", 500 },
			{ "30Rnd_65x39_caseless_mag", "", 650 },
			{ "20Rnd_762x51_Mag", "", 750 },
			{ "CUP_20Rnd_762x51_B_M110", "", 1000 },
			{ "CUP_10Rnd_127x99_M107", "", 1250 },
			{ "5Rnd_127x108_Mag", "", 1500 },
			{ "CUP_5Rnd_127x99_as50_M", "", 1750 }
		};
	};
	
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 250, 75 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 500, 450 },
			{ "Binocular", "", 1050, -1 },
            { "NVGoggles", "", 2500, 980 },
			{ "tf_anprc152", "AN/PRC-152 Radio(LR)", 5000, 50 }
        };
        mags[] = {};
    };
};