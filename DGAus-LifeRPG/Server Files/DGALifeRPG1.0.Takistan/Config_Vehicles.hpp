class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
			{ "B_Quadbike_01_F", 2500, { "driver" }, { "", "", -1 } },
			{ "CUP_C_Skoda_White_CIV", 5000, { "driver" }, { "", "", -1 } },
			{ "RDS_Gaz24_Civ_01", 5250, { "driver" }, { "", "", -1 } },
			{ "RDS_Lada_Civ_01", 5500, { "driver" }, { "", "", -1 } },
			{ "RDS_Golf4_Civ_01", 6500, { "driver" }, { "", "", -1 } },
			{ "RDS_S1203_Civ_01", 8000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_Datsun", 12500, { "driver" }, { "", "", -1 } },
			{ "CUP_C_LR_Transport_CTK", 17000, { "driver" }, { "", "", -1 } },
			{ "ivory_gti", 15500, { "driver" }, { "", "", -1 } },
			{ "ivory_evox", 19000, { "driver" }, { "", "", -1 } },
			{ "ivory_suburban", 21500, { "driver" }, { "", "", -1 } },
			{ "ivory_e36", 25000, { "driver" }, { "", "", -1 } }, 
			{ "ivory_190e", 32500, { "driver" }, { "", "", -1 } },
			{ "ivory_gt500", 40000, { "driver" }, { "", "", -1 } },
			{ "GeK_TLC100", 55000, { "driver" }, { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 15000 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 15000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
			{ "C_Offroad_01_F", 10000, { "" }, { "", "", -1 } },
			{ "I_Truck_02_medical_F", 25000, { "" }, { "life_mediclevel", "SCALAR", 1 } },
			{ "O_Truck_03_medical_F", 45000, { "" }, { "life_mediclevel", "SCALAR", 2 } },
			{ "B_Truck_01_medical_F", 60000, { "" }, { "life_mediclevel", "SCALAR", 3 } },
			{ "CUP_B_M1133_MEV_Desert", 100000, { "" }, { "life_mediclevel", "SCALAR", 5 } },
			{ "RDS_S1203_Civ_02", 10000, { "" }, { "", "", -1 } },
			{ "CUP_B_LR_Ambulance_GB_D", 20000, { "" }, { "life_mediclevel", "SCALAR", 1 } },
			{ "CUP_B_HMMWV_Ambulance_ACR", 20000, { "" }, { "life_mediclevel", "SCALAR", 1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, { "mAir" }, { "life_mediclevel", "SCALAR", 1 } },
			{ "O_Heli_Light_02_unarmed_F", 75000, { "mAir" }, { "life_mediclevel", "SCALAR", 2 } },
			{ "CUP_B_UH1Y_MEV_USMC", 100000, { "mAir" }, { "life_mediclevel", "SCALAR", 5 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 75000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 150000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 220000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_transport_F", 300000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_covered_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "B_Truck_01_transport_F", 550000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 750000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 900000, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
			{ "CUP_B_UAZ_Unarmed_CDF", 15350, { "" }, { "", "", -1 } },
			{ "O_MRAP_02_F", 250000, { "" }, { "", "", -1 } },
			{ "CUP_O_Datsun_PK_Random", 300000, { "" }, { "", "", -1 } },
			{ "CUP_O_UAZ_MG_RU", 350000, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", 500000, { "rebel" }, { "", "", -1 } },
			{ "B_Heli_Light_01_F", 200000, { "" }, { "", "", -1 } },
			{ "CUP_B_SA330_Puma_HC2_BAF", 550000, { "" }, { "", "", -1 } },
			{ "CUP_O_UH1H_slick_TKA", 1200000, { "" }, { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", 5000, { "" }, { "", "", -1 } },
            { "C_SUV_01_F", 20000, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 30000, { "" }, { "life_coplevel", "SCALAR", 1 } },
            { "B_MRAP_01_F", 30000, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "B_MRAP_01_hmg_F", 750000, { "" }, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
			{ "C_Heli_Light_01_civil_F", 170000, { "pilot" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 200000, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 450000, { "pilot" }, { "", "", -1 } },
			{ "O_Heli_Transport_04_F", 600000, { "pilot" }, { "", "", -1 } },
			{ "I_Heli_Transport_02_F", 1100000, { "pilot" }, { "", "", -1 } },
			{ "CUP_C_Mi17_Civilian_RU", 1500000, { "pilot" }, { "", "", -1 } },
			{ "C_Plane_Civil_01_F", 140000, { "pilot" }, { "", "", -1 } },
			{ "CUP_C_AN2_AEROSCHROT_TK_CIV", 550000, { "pilot" }, { "", "", -1 } },
			{ "CUP_C_C47_CIV", 650000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 75000, { "cAir" }, { "", "", -1 } },
            { "B_Heli_Transport_01_F", 200000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 3000, { "cg" }, { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", 20000, { "cg" }, { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", 75000, { "cg" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", 100000, { "cg" }, { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 5000, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 22000, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 150000, { "boat" }, { "", "", -1 } }
        };
    };
	
	//DGAus Custom Vehicle Shops
	class reb_blk {
        side = "civ";
        vehicles[] = {
			{ "CUP_I_BTR40_MG_TKG", 400000, { "rebel" }, { "", "", -1 } },
			{ "CUP_B_LR_Special_M2_GB_D", 450000, { "rebel" }, { "", "", -1 } },
			{ "CUP_O_GAZ_Vodnik_PK_RU", 550000, { "rebel" }, { "", "", -1 } },
			{ "CUP_B_RG31_M2_OD_USMC", 750000, { "rebel" }, { "", "", -1 } },	
			{ "CUP_O_Ural_ZU23_RU", 1000000, { "rebel" }, { "", "", -1 } },
			{ "CUP_O_GAZ_Vodnik_BPPU_RU", 1100000, { "rebel" }, { "", "", -1 } },
			{ "CUP_O_BMP2_TKA", 1200000, { "rebel" }, { "", "", -1 } },
			{ "CUP_I_T34_NAPA", 1550000, { "rebel" }, { "", "", -1 } },
			{ "CUP_O_T55_TK", 1600000, { "rebel" }, { "", "", -1 } },
			{ "CUP_B_T72_CDF", 1750000, { "rebel" }, { "", "", -1 } },
			{ "CUP_O_T90_RU", 2000000, { "rebel" }, { "", "", -1 } },
			{ "CUP_B_ZSU23_CDF", 2100000, { "rebel" }, { "", "", -1 } }
		};
    };
	
	class un_car {
        side = "cop";
        vehicles[] = {
			{ "sab_UN_Offroad", 2500, { "" }, { "life_coplevel", "SCALAR", 9 } },
            { "sab_UN_SUV", 5000, { "" }, { "life_coplevel", "SCALAR", 10 } },
			{ "DGA_UN_TLC", 6500, { "" }, { "life_coplevel", "SCALAR", 10 } },
            { "sab_UN_Hunter", 7500, { "" }, { "life_coplevel", "SCALAR", 11 } }, //example of how to make each vehicle for level
            { "sab_UN_Truck_Rep", 9000, { "" }, { "life_coplevel", "SCALAR", 11 } },
			{ "sab_UN_Truck_C", 10000, { "" }, { "life_coplevel", "SCALAR", 11 } },
			{ "CUP_B_HMMWV_M2_GPK_USA", 12500, { "" }, { "life_coplevel", "SCALAR", 12 } },
			{ "sab_UN_Panther", 25000, { "" }, { "life_coplevel", "SCALAR", 13 } },
			{ "Cup_I_m113_UN", 32500, { "" }, { "life_coplevel", "SCALAR", 13 } },
			{ "sab_UN_APC", 50000, { "" }, { "life_coplevel", "SCALAR", 14 } },
			{ "sab_UN_CRV", 55000, { "" }, { "life_coplevel", "SCALAR", 14 } },
			{ "sab_UN_Kuma", 65000, { "" }, { "life_coplevel", "SCALAR", 15 } }
			
        };
    };
	
	class tsf_car {
        side = "cop";
        vehicles[] = {
            { "DG_TSF_Offroad", 2500, { "" }, { "", "", -1 } },
            { "DG_TSF_SUV", 5000, { "" }, { "life_coplevel", "SCALAR", 2 } },
			{ "DGA_TSF_TLC", 6500, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "DG_TSF_HUNTER", 7500, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "DG_TSF_ARMED_OFFROAD", 12500, { "" }, { "life_coplevel", "SCALAR", 6 } }
        };
    };
	
	class un_air {
        side = "cop";
        vehicles[] = {
			{ "sab_UN_bird", 15000, { "airc1" }, { "", "", -1 } },
            { "sab_UN_Heli", 25000, { "airc1" }, { "", "", -1 } },
			{ "sab_UN_Large_Heli", 50000, { "airc2" }, { "", "", -1 } },
            { "sab_UN_pawnee", 65000, { "airc2" }, { "", "", -1 } },
            { "CUP_I_Mi17_UN", 75000, { "airc2" }, { "", "", -1 } },
			{ "CUP_B_UH1Y_GUNSHIP_USMC", 100000, { "airc2" }, { "", "", -1 } }
        };
    };
	
	class tsf_air {
        side = "cop";
        vehicles[] = {
            { "DG_TSF_bird", 15000, { "airc1" }, { "", "", -1 } },
			{ "CUP_O_UH1H_slick_TKA", 30000, { "airc1" }, { "", "", -1 } }
        };
    };
	//Kiesta Dealership - Sports
	class civ_car_s {
        side = "civ";
        vehicles[] = {
		{ "Mrshounka_yamaha_p", 50000, { "driver" }, { "", "", -1 } },
		{ "Mrshounka_ducati_p", 65000, { "driver" }, { "", "", -1 } },
		{ "ivory_rs4", 80000, { "driver" }, { "", "", -1 } },
		{ "ivory_elise", 95000, { "driver" }, { "", "", -1 } },
		{ "ivory_m3", 120000, { "driver" }, { "", "", -1 } },
		{ "ivory_isf", 150000, { "driver" }, { "", "", -1 } },
		{ "ivory_wrx", 175000, { "driver" }, { "", "", -1 } },
		{ "ivory_r34", 190000, { "driver" }, { "", "", -1 } },
		{ "AM_2015C_White", 175000, { "driver" }, { "", "", -1 } },
		{ "ivory_supra", 220000, { "driver" }, { "", "", -1 } },
		{ "ivory_supra_topsecret", 245000, { "driver" }, { "", "", -1 } }
        };
    };
	//Kiesta Dealership - Exotics
	class civ_car_e {
        side = "civ";
        vehicles[] = {
		{ "ivory_c", 400000, { "driver" }, { "", "", -1 } },
		{ "ivory_lfa", 470000, { "driver" }, { "", "", -1 } },
		{ "ivory_mp4", 580000, { "driver" }, { "", "", -1 } },
		{ "ivory_f1", 650000, { "driver" }, { "", "", -1 } },
		{ "ivory_veyron", 770000, { "driver" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    	INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 3000, 0 };
        garageSell[] = { 0, 0, 10000, 0 };
        insurance = 2500;
        chopShop = 22500;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 6500, 0 };
        garageSell[] = { 0, 0, 25000, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
        garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
        garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 325;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 450;
        storageFee[] = { 95000, 0, 0, 0 };
        garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 225000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = {
			{ "TSF", "cop", {
                "max_police_mod\Data\police_car_co.paa",
				"max_police_mod\Data\police_car_co.paa"
            } }
		};
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
        garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 11000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
        garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 850;
        storageFee[] = { 35000, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 175000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 500;
        storageFee[] = { 25650, 0, 0, 0 };
        garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 127500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = { };
    };

    class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
			{ "TMS", "med", {
				"textures\tms_offroad.jpg",
				"textures\tms_offroad.jpg"
			} },
            { "TSF", "cop", {
                "max_police_mod\Data\police_car_co.paa",
				"max_police_mod\Data\police_car_co.paa"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        inusrance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 15000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 15;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1250;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
        garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 50000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
        garageSell[] = { 49800, 3500, 0, 0 };
        insurance = 6500;
        chopShop = 37500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 425;
        storageFee[] = { 25000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 4750;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 22500;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
        garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 150;
        storageFee[] = { 12500, 12500, 0, 0 };
        garageSell[] = { 200000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 175000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 350;
        storageFee[] = { 25000, 25000, 0, 0 };
        garageSell[] = { 850000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 750000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
	};
		
	class C_Heli_Light_01_civil_F {
		vItemSpace = 45;
		storageFee[] = { 5000, 5000, 0, 0 };
		garageSell[] = { 40000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 35000;
		textures[] = {};
    };
	
	class O_Heli_Transport_04_F {
		vItemSpace = 125;
		storageFee[] = { 12500, 12500, 0, 0 };
		garageSell[] = { 180000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 125000;
		textures[] = {};
	};
	
	class C_Plane_Civil_01_F {
		vItemSpace = 120;
		storageFee[] = { 3500, 3500, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 115000;
		textures[] = {};
	};
	
	class CUP_C_AN2_AEROSCHROT_TK_CIV {
		vItemSpace = 350;
		storageFee[] = { 15000, 15000, 0, 0 };
		garageSell[] = { 250000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 215000;
		textures[] = {};
	};
	
	class CUP_C_C47_CIV {
		vItemSpace = 750;
		storageFee[] = { 15000, 15000, 0, 0 };
		garageSell[] = { 350000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 300000;
		textures[] = {};
	};
		
    class B_SDV_01_F {
        vItemSpace = 50;
        storageFee[] = { 37500, 10000, 0, 0 };
        garageSell[] = { 75000, 50000, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = {};
    };
	
	//DGAus Mod Configs
	/* LEAVE THIS ONE HERE AS AN EXAMPLE
	class B_Truck_01_box_F {  //Vehicle Class ID
        vItemSpace = PRICE;  //Virtual Item Storage Space
        storageFee[] = { CIV, COP, EMS, OPF }; //Storage Retrieval Fee
        garageSell[] = { CIV, COP, EMS, OPF }; //Garage Sell Price
        insurance = PRICE; //Insurance Cost
        chopShop = PRICE; //Chop Shop Sell Price
        textures[] = { //Textures (For vehicles with multiple textures/paint jobs)
			{ "Colour Name(Black, White, Red)", "side(cop, civ, med)", {
                "\path\to\image\file.paa"
            } }
		}; 
    };
	*          !!!!SET THESE TO 0 IF NOT IN THAT SHOP!!!!
	*    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
	*/
	//CONFIGS START BELOW
	//Terrorist Ground Vehicles
	class O_T_LSV_02_unarmed_F {
		vItemSpace = 35;
		storageFee[] = { 1200, 1200, 0, 0 };
		garageSell[] = { 100000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 90000;
		textures[] = {};
    };
	
	class CUP_O_Datsun_PK_Random {
		vItemSpace = 25;
		storageFee[] = { 25000, 25000, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 27500;
		textures[] = {};
	};
	
	class CUP_B_UAZ_Unarmed_CDF {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 0, 0 };
		garageSell[] = { 5000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 7500;
		textures[] = {};
	};
	
	class CUP_O_UAZ_MG_RU {
		vItemSpace = 15;
		storageFee[] = { 25000, 25000, 0, 0 };
		garageSell[] = { 27500, 0, 0, 0 };
		insurance = 5000;
		chopShop = 40000;
		textures[] = {};
	};
	
	class CUP_I_BTR40_TKG {
		vItemSpace = 35;
		storageFee[] = { 2000, 2000, 0, 0 };
		garageSell[] = { 115000, 0, 0, 0 };
		insurance = 5000;
		chopshop = 100000;
		textures[] = {};
	};
	
	//Civilian Ground Vehicles
	class CUP_C_Skoda_White_CIV {
		vItemSpace = 15;
		storageFee[] = { 250, 250, 0, 0 };
		garageSell[] = { 3000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 2000;
		textures[] = {};
	};
	
	class RDS_Gaz24_Civ_01 {
		vItemSpace = 15;
		storageFee[] = { 250, 250, 0, 0 };
		garageSell[] = { 4000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 3000;
		textures[] = {};
	};
	
	class RDS_Lada_Civ_01 {
		vItemSpace = 15;
		storageFee[] = { 250, 250, 0, 0 };
		garageSell[] = { 4500, 0, 0, 0 };
		insurance = 5000;
		chopShop = 3500;
		textures[] = {};
	};
	
	class RDS_S1203_Civ_01 {
		vItemSpace = 45;
		storageFee[] = { 250, 250, 0, 0 };
		garageSell[] = { 6000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 5000;
		textures[] = {};
	};
	
	class RDS_Golf4_Civ_01 {
		vItemSpace = 15;
		storageFee[] = { 250, 250, 0, 0 };
		garageSell[] = { 5000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 4500;
		textures[] = {};
	};
	
	class CUP_C_Datsun {
		vItemSpace = 75;
		storageFee[] = { 250, 250, 0, 0 };
		garageSell[] = { 7500, 0, 0, 0 };
		insurance = 5000;
		chopShop = 6000;
		textures[] = {};
	};
	
	class ivory_suburban {
		vItemSpace = 100;
		storageFee[] = { 750, 750, 0, 0 };
		garageSell[] = { 19000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 18000;
		textures[] = {};
	};
	
	class ivory_gti {
		vItemSpace = 20;
		storageFee[] = { 300, 300, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 7500;
		textures[] = {};
	};
	
	class ivory_evox {
		vItemSpace = 25;
		storageFee[] = { 400, 400, 0, 0 };
		garageSell[] = { 12500, 0, 0, 0 };
		insurance = 5000;
		chopShop = 10000;
		textures[] = {};
	};
	
	class ivory_e36 {
		vItemSpace = 25;
		storageFee[] = { 500, 500, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 12500;
		textures[] = {};
	};
	
	class CUP_C_LR_Transport_CTK {
		vItemSpace = 90;
		storageFee[] = { 750, 750, 0, 0 };
		garageSell[] = { 14000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 10000;
		textures[] = {};
	};
	
	class ivory_190e {
		vItemSpace = 25;
		storageFee[] = { 500, 500, 0, 0 };
		garageSell[] = { 17000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 15000;
		textures[] = {};
	};
	
	class ivory_supra {
		vItemSpace = 30;
		storageFee[] = { 1650, 1650, 0, 0 };
		garageSell[] = { 90000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 85000;
		textures[] = {};
	};
	
	class ivory_m3 {
		vItemSpace = 30;
		storageFee[] = { 1250, 1250, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 60000;
		textures[] = {};
	};
	
	class GeK_TLC100 {
		vItemSpace = 100;
		storageFee[] = { 800, 800, 0, 0 };
		garageSell[] = { 30000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 27500;
		textures[] = {};
	};
	
	class ivory_wrx {
		vItemSpace = 30;
		storageFee[] = { 1500, 1500, 0, 0 };
		garageSell[] = { 75000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 70000;
		textures[] = {};
	};
	
	class ivory_gt500 {
		vItemSpace = 30;
		storageFee[] = { 500, 500, 0, 0 };
		garageSell[] = { 17500, 0, 0, 0 };
		insurance = 5000;
		chopShop = 15000;
		textures[] = {};
	};
	
	class ivory_r34 {
		vItemSpace = 30;
		storageFee[] = { 1500, 1500, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 70000;
		textures[] = {};
	};
	
	class ivory_rs4 {
		vItemSpace = 30;
		storageFee[] = { 1000, 1000, 0, 0 };
		garageSell[] = { 50000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 45000;
		textures[] = {};
	};
	
	class ivory_isf {
		vItemSpace = 30;
		storageFee[] = { 1400, 1400, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 5000;
		textures[] = {};
	};
	
	class ivory_supra_topsecret {
		vItemSpace = 30;
		storageFee[] = { 1700, 1700, 0, 0 };
		garageSell[] = { 100000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 85000;
		textures[] = {};
	};
	
	class ivory_c {
		vItemSpace = 30;
		storageFee[] = { 1900, 1900, 0, 0 };
		garageSell[] = { 110000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 100000;
		textures[] = {};
	};
	
	class ivory_lfa {
		vItemSpace = 30;
		storageFee[] = { 2000, 2000, 0, 0 };
		garageSell[] = { 130000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 110000;
		textures[] = {};
	};
	
	class ivory_elise {
		vItemSpace = 30;
		storageFee[] = { 1250, 1250, 0, 0 };
		garageSell[] = { 60000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 50000;
		textures[] = {};
	};
	
	class ivory_mp4 {
		vItemSpace = 30;
		storageFee[] = { 2000, 2000, 0, 0 };
		garageSell[] = { 160000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 150000;
		textures[] = {};
	};
	
	class ivory_f1 {
		vItemSpace = 30;
		storageFee[] = { 2250, 2250, 0, 0 };
		garageSell[] = { 180000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 160000;
		textures[] = {};
	};
	
	class ivory_veyron {
		vItemSpace = 30;
		storageFee[] = { 2250, 2250, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
		insurance = 5000;
		chopShop = 190000;
		textures[] = {};
	};
	
	//Civilian Air Vehicles
	class CUP_C_Mi17_Civilian_RU {
		vItemSpace = 500;
		storageFee[] = { 20000, 20000, 0, 0 };
		garageSell[] = { 500000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 450000;
		textures[] = {};
	};
	
	class sab_grob109 {
		vItemSpace = 50;
		storageFee[] = { 3000, 3000, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 65000;
		textures[] = {};
	};
	
	class sab_FAAllegro {
		vItemSpace = 65;
	    storageFee[] = { 3000, 3000, 0, 0 };
		garageSell[] = { 90000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 80000;
		textures[] = {};
	};
	
	class sab_grob115 {
		vItemSpace = 90;
		storageFee[] = { 3250, 3250, 0, 0 };
		garageSell[] = { 115000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 100000;
		textures[] = {};
	};
	
	class sab_stampe {
	    vItemSpace = 150;
		storageFee[] = { 3500, 3500, 0, 0 };
		garageSell[] = { 160000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 150000;
		textures[] = {};
	};
	
	class Sab_aeroc {
		vItemSpace = 175;
		storageFee[] = { 3750, 3750, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 180000;
		textures[] = {};
	};
	 
	class sab_dhc3 {
		vItemSpace = 250;
		storageFee[] = { 4000, 4000, 0, 0 };
		garageSell[] = { 220000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 200000;
		textures[] = {};
	};
	
	class sab_falcon {
		vItemSpace = 1000;
		storageFee[] = { 5000, 5000, 0, 0 };
		garageSell[] = { 700000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 650000;
		textures[] = {};
	};
	
	class CUP_B_SA330_Puma_HC2_BAF {
	    vItemSpace = 250;
		storageFee[] = { 4000, 4000, 0, 0 };
		garageSell[] = { 350000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 300000;
		textures[] = {};
	};
	
	class CUP_O_UH1H_slick_TKA {
		vItemSpace = 50;
		storageFee[] = { 15000, 15000, 0, 0 };
		garageSell[] = { 900000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 850000;
		textures[] = {
			{ "Olive", "cop", {
                "CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
            } },
            { "Desert", "civ", {
                "CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_TKA_CO.paa",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_TKA_CO.paa",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_TKA_co.paa"
            } },
			{ "Woodland", "civ", {
                "CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_SLA_CO.paa",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_SLA_CO.paa",
				"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
            } }
		};
	};
	//medic vehicles
	class CUP_B_UH1Y_MEV_USMC {
	    vItemSpace = 100;
		storageFee[] = { 0, 0, 1000, 0 };
		garageSell[] = { 0, 0, 1000, 0 };
		insurance = 2500;
		chopShop = 1000;
		textures[] = {};
	};
	
	class CUP_B_M1133_MEV_Desert {
	    vItemSpace = 100;
		storageFee[] = { 0, 0, 1000, 0 };
		garageSell[] = { 0, 0, 1000, 0 };
		insurance = 2500;
		chopShop = 1000;
		textures[] = {};
	};
	
	class RDS_S1203_Civ_02 {
	    vItemSpace = 100;
		storageFee[] = { 0, 0, 1000, 0 };
		garageSell[] = { 0, 0, 1000, 0 };
		insurance = 2500;
		chopShop = 1000;
		textures[] = {};
	};
	
	class CUP_B_LR_Ambulance_GB_D {
	    vItemSpace = 100;
		storageFee[] = { 0, 0, 1000, 0 };
		garageSell[] = { 0, 0, 1000, 0 };
		insurance = 2500;
		chopShop = 1000;
		textures[] = {};
	};
	
	class CUP_B_HMMWV_Ambulance_ACR {
	    vItemSpace = 100;
		storageFee[] = { 0, 0, 1000, 0 };
		garageSell[] = { 0, 0, 1000, 0 };
		insurance = 2500;
		chopShop = 1000;
		textures[] = {};
	};
};