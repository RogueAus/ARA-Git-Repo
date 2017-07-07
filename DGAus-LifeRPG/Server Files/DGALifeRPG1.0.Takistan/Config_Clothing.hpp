/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        4: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL / BET)
*            2: What to compare to (-1 = Check Disabled) NOTE: IF USING BET USE AN ARRAY HERE E.G. {16,18}
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "rds_uniform_citizen1", "Takistani Gentleman(Brown)", 250, { "", "", -1 } },
			{ "rds_uniform_citizen2", "Takistani Gentleman(Light Brown)", 250, { "", "", -1 } },
			{ "rds_uniform_citizen3", "Takistani Gentleman(Orange)", 250, { "", "", -1 } },
			{ "rds_uniform_citizen4", "Takistani Gentleman(Dark Brown)", 250, { "", "", -1 } },
			{ "U_Afghan01NH", "Traditional Wear(Green)", 250, { "", "", -1 } },
			{ "U_Afghan03NH", "Traditional Wear(Orange)", 250, { "", "", -1 } },
			{ "rds_uniform_schoolteacher", "Doctors Coat", 300, { "", "", -1 } },
			{ "CUP_U_C_Villager_01", "Farmer Joe", 300, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_02", "Trucker(Green)", 300, { "", "", -1 } },
			{ "CUP_U_C_Woodlander_01", "Trucker(Brown)", 300, { "", "", -1 } },
			{ "CUP_U_O_SLA_Overalls_Tank", "Workers Overalls(Black)", 350, { "", "", -1 } },
			{ "CUP_U_O_SLA_Overalls_Pilot", "Workers Overalls(Blue)", 350, { "", "", -1 } },
			{ "CUP_U_C_Mechanic_02", "", 350, { "", "", -1 } },
			{ "CUP_U_C_Mechanic_03", "", 350, { "", "", -1 } },
			{ "CUP_U_C_Mechanic_01", "", 350, { "", "", -1 } },
			{ "CUP_U_C_Rocker_02", "", 450, { "", "", -1 } },
			{ "CUP_U_C_Rocker_04", "Rocker Clothes(Blue)", 450, { "", "", -1 } },
			{ "TRYK_U_B_Denim_T_BK", "Black T-Shirt w/ jeans", 500, { "", "", -1 } },
			{ "TRYK_U_B_RED_T_BR", "Red T-Shirt w/ jeans", 500, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_04", "Brown Sweater w/ jeans", 500, { "", "", -1 } },
			{ "CUP_O_TKI_Khet_Jeans_03", "Light Blue Sweater w/ jeans", 500, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_ylb", "Yellow Flannel w/ jeans", 500, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_R", "Red Flannel w/ jeans", 500, { "", "", -1 } },
			{ "TRYK_shirts_DENIM_BWH", "Blue Flannel w/ jeans", 500, { "", "", -1 } },
			{ "TRYK_U_denim_hood_blk", "Black Hoodie w/ jeans", 500, { "", "", -1 } },
			{ "TRYK_U_denim_hood_nc", "Green Mesh Hoodie w/ jeans", 500, { "", "", -1 } },			
			{ "U_C_man_sport_3_F", "Sports Clothes(Blue)", 500, { "", "", -1 } },
			{ "U_C_man_sport_2_F", "Sports Clothes(Orange)", 500, { "", "", -1 } },
			{ "U_C_Man_casual_6_F", "Casuals(Red)", 750, { "", "", -1 } },
			{ "U_C_Man_casual_4_F", "Casuals(Blue)", 750, { "", "", -1 } },
			{ "U_C_Man_casual_5_F", "Casuals(Yellow)", 750, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_02", "", 850, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_03", "", 850, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_01", "", 850, { "", "", -1 } },
			{ "CUP_U_C_Profiteer_04", "Profiteer Clothes(Orange)", 850, { "", "", -1 } },
			{ "U_C_Man_casual_2_F", "Rich man casuals(Blue)", 1250, { "", "", -1 } },
			{ "U_C_Man_casual_3_F", "Rich Man Casuals(Green)", 1250, { "", "", -1 } },
			{ "CUP_U_C_Suit_01", "Black Business Suit", 1500, { "", "", -1 } },
			{ "CUP_U_C_Suit_02", "Brown Business Suit", 1500, { "", "", -1 } },
			{ "U_C_Journalist", "Press Uniform", 1500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_06", "Takistani Pakol(Brown)", 350, { "", "", -1 } },
			{ "CUP_H_TKI_Pakol_2_05", "Takistani Pakol(Grey)", 350, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_01", "Skull Cap(Black)", 350, { "", "", -1 } },
			{ "CUP_H_TKI_SkullCap_04", "Skull Cap(Patterned)", 350, { "", "", -1 } },
			{ "H_Hat_grey", "", 500, { "", "", -1 } },
			{ "H_Hat_checker", "", 500, { "", "", -1 } },
			{ "H_Hat_blue", "", 500, { "", "", -1 } },
			{ "H_StrawHat", "", 500, { "", "", -1 } },
			{ "H_Cap_blk", "", 650, { "", "", -1 } },
			{ "H_Cap_blu", "", 650, { "", "", -1 } },
			{ "H_Cap_grn", "", 650, { "", "", -1 } },
			{ "H_Cap_surfer", "", 650, { "", "", -1 } },
			{ "CUP_H_PMC_Cap_Burberry", "", 650, { "", "", -1 } },
			{ "CUP_H_PMC_Cap_Grey", "", 750, { "", "", -1 } },
			{ "CUP_H_PMC_Cap_Tan", "", 750, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "Backwards Cap(Black)", 750, { "", "", -1 } },
			{ "TRYK_R_CAP_TAN", "Backwards Cap(Tan)", 750, { "", "", -1 } },
			{ "TRYK_H_woolhat", "Beanie(Black)", 900, { "", "", -1 } },
			{ "TRYK_H_woolhat_br", "Beanie(Brown)", 900, { "", "", -1 } },
			{ "TRYK_H_woolhat_cu", "Beanie(Yellow)", 900, { "", "", -1 } },
			{ "TRYK_H_woolhat_tan", "Beanie(Tan)", 900, { "", "", -1 } },
			{ "TRYK_H_woolhat_WH", "Beanie(White)", 900, { "", "", -1 } },
			{ "TRYK_H_woolhat_CW", "Beanie(Urban Camo)", 900, { "", "", -1 } },
			{ "H_Cap_press", "", 1250, { "", "", -1 } },
			{ "CUP_H_C_MAGA_01", "MAGA Cap", 1250, { "", "", -1 } },
			{ "CUP_H_NAPA_Fedora", "Country Mans Fedora", 1300, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Spectacles", "", 500, { "", "", -1 } },
			{ "G_Lady_Blue", "", 500, { "", "", -1 } },
			{ "G_Shades_Black", "", 500, { "", "", -1 } },
			{ "G_Shades_Blue", "", 500, { "", "", -1 } },
			{ "G_Shades_Green", "", 500, { "", "", -1 } },
			{ "G_Shades_Red", "", 500, { "", "", -1 } },
			{ "G_Squares_Tinted", "", 500, { "", "", -1 } },
			{ "G_Sport_Red", "", 500, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 750, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 750, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 750, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 750, { "", "", -1 } },
			{ "G_Sport_Greenblack", "", 750, { "", "", -1 } },
			{ "G_Aviator", "", 1000, { "", "", -1 } },
			{ "TRYK_US_ESS_Glasses_TAN", "Riding Goggles(Tan)", 1200, { "", "", -1 } },
			{ "TRYK_US_ESS_Glasses", "Riding Goggles(Black)", 1200, { "", "", -1 } },
			{ "TRYK_Shemagh_G", "Neck Scarf(Green)", 1250, { "", "", -1 } },
			{ "TRYK_Shemagh_shade_G", "Neck Scarf(Green) w/ Shades", 1250, { "", "", -1 } },
			{ "TRYK_Shemagh", "Neck Scarf(Tan)", 1250, { "", "", -1 } },
			{ "TRYK_Shemagh_shade", "Neck Scarf(Tan) w/ Shades", 1250, { "", "", -1 } },
			{ "TRYK_Shemagh_WH", "Neck Scarf(White)", 1250, { "", "", -1 } },
			{ "TRYK_Shemagh_shade_WH", "Neck Scarf(White) w/ Shades", 1250, { "", "", -1 } },
			{ "TRYK_Beard_BK", "Short Beard(Black)", 1500, { "", "", -1 } },
			{ "TRYK_Beard", "Short Beard(Blonde)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_BW", "Short Beard(Brown)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_Gr", "Short Beard(Grey)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_BK4", "Beard(Black)", 1500, { "", "", -1 } },
			{ "TRYK_Beard4", "Beard(Blonde)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_BW4", "Beard(Brown)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_Gr4", "Beard(Graying)", 1500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "TRYK_V_Bulletproof_BL", "BPV(Blue)", 500, { "", "", -1 } },
			{ "TRYK_V_Bulletproof_BLK", "BPV(Black)", 500, { "", "", -1 } },
			{ "TRYK_V_Bulletproof", "BPV(White)", 500, { "", "", -1 } },
			{ "V_Press_F", "Press Vest", 3000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 1200, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 1200, { "", "", -1 } },
			{ "B_AssaultPack_mcamo", "", 1200, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 1400, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 1400, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 1400, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 1650, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 1650, { "", "", -1 } },
			{ "CUP_B_HikingPack_Civ", "", 1700, { "", "", -1 } },
			{ "CUP_B_CivPack_WDL", "", 1900, { "", "", -1 } },
			{ "CUP_B_RUS_Backpack", "", 1900, { "", "", -1 } },
			{ "B_Carryall_oli", "Carry All(Olive)", 2500, { "", "", -1 } },
			{ "B_Carryall_khk", "Carry All(Kahki)", 2500, { "", "", -1 } },
			{ "TRYK_B_Carryall_wood", "Carry All(Woodland)", 2500, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "Carry All(Black)", 2500, { "", "", -1 } },
			{ "TRYK_B_Carryall_wh", "Carry All(White)", 2500, { "", "", -1 } }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "Cop Uniform", 25, { "", "", -1 } },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_survival_uniform", "", 1250, { "life_coplevel", "SCALAR", 1 } },
            { "U_B_CombatUniform_mcam_worn", "", 550, { "life_coplevel", "SCALAR", 2 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
            { "H_Booniehat_mcamo", "", 120, { "life_coplevel", "SCALAR", 1 } },
            { "H_MilCap_mcamo", "", 100, { "life_coplevel", "SCALAR", 2 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
            { "G_Aviator", "", 100, { "", "", -1 } },
            { "G_Lady_Mirror", "", 150, { "", "", -1 } },
            { "G_Lady_Dark", "", 150, { "", "", -1 } },
            { "G_Lady_Blue", "", 150, { "", "", -1 } },
            { "G_Lowprofile", "", 30, { "", "", -1 } },
            { "G_Combat", "", 55, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 800, { "", "", -1 } },
            { "V_PlateCarrier2_rgr", "", 1500, { "life_coplevel", "SCALAR", 1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 800, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 500, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
            { "B_Bergen_sgg", "", 2500, { "", "", -1 } },
            { "B_Carryall_cbr", "", 3500, { "", "", -1 } }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        license = "dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Diving", "", 500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_RebreatherB", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        license = "gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 4900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Rangemaster_belt", "", 1900, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        license = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_Rangemaster", "EMS Uniform", 50, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_Cap_blu", "", 10, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 150, { "", "", -1 } },
            { "G_Shades_Blue", "", 150, { "", "", -1 } },
            { "G_Sport_Blackred", "", 200, { "", "", -1 } },
            { "G_Sport_Checkered", "", 200, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 200, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 200, { "", "", -1 } },
            { "G_Squares", "", 250, { "", "", -1 } },
            { "G_Aviator", "", 250, { "", "", -1 } },
            { "G_Lady_Dark", "", 300, { "", "", -1 } },
            { "G_Lady_Blue", "", 300, { "", "", -1 } },
            { "G_Lowprofile", "", 300, { "", "", -1 } },
            { "G_Combat", "", 350, { "", "", -1 } },
			{ "Mask_M50", "", 5000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_FieldPack_oli", "EMS Backpack", 3000, { "", "", -1 } }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        license = "rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "TRYK_ZARATAKI2", "Takistani Fighter(Blue)", 750, { "", "", -1 } },
			{ "TRYK_ZARATAKI3", "Takistani Fighter(Brown)", 1250, { "", "", -1 } },
			{ "TRYK_ZARATAKI", "Takistani Fighter(Desert)", 1500, { "", "", -1 } },
			{ "TRYK_U_taki_G_BLK", "Takistani Special Forces(Black)", 1750, { "", "", -1 } },
			{ "TRYK_U_taki_G_WH", "Takistani Special Forces(White)", 1750, { "", "", -1 } },
			{ "TRYK_U_taki_G_COY", "Takistani Special Forces(Brown)", 1750, { "", "", -1 } },
			{ "TRYK_OVERALL_SAGE_BLKboots_nk_blk2", "Jump Suit(Sage)", 2000, { "", "", -1 } },
			{ "TRYK_OVERALL_nok_flesh", "Jump Suit(Tan)", 2000, { "", "", -1 } },
			{ "CUP_U_I_GUE_Anorak_02", "Grey Hoodie w/ Green Cargo", 2200, { "", "", -1 } },
			{ "CUP_U_I_GUE_Flecktarn", "Camo Hoodie w/ Green Cargo", 2200, { "", "", -1 } },
			{ "CUP_U_B_USMC_MARPAT_WDL_Sleeves", "Long Sleeve Camos", 2500, { "", "", -1 } },
			{ "CUP_U_B_BAF_MTP_Tshirt", "Brown Tee w/ MTP Cargo", 2500, { "", "", -1 } },
			{ "CUP_U_O_SLA_Desert", "Rejected SLA Uniform(Desert)", 2750, { "", "", -1 } },
			{ "CUP_U_O_SLA_Green", "Rejected SLA Unifrom(Grey)", 2750, { "", "", -1 } },
			{ "CUP_U_O_TK_Green", "Rejected SLA Uniform(Olive)", 2750, { "", "", -1 } },
			{ "TRYK_B_TRYK_OCP_D_T", "Stolen UN OCP Camos(Half)", 3200, { "", "", -1 } },
			{ "TRYK_U_B_NATO_OCPD_R_CombatUniform", "Stolen UN OCP Camos(Full)", 3500, { "", "", -1 } },
			{ "CUP_U_I_Ghillie_Top", "Half Ghillie(Woodland)", 25000, { "", "", -1 } },
			{ "CUP_U_O_TK_Ghillie_Top", "Half Ghillie(Desert)", 25000, { "", "", -1 } },
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_01", "", 250, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_02", "", 250, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_04", "", 250, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_05", "", 250, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_Open_06", "", 250, { "", "", -1 } },
			{ "CUP_H_TK_Lungee", "", 1500, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_01", "", 1500, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_05", "", 1500, { "", "", -1 } },
			{ "CUP_H_TKI_Lungee_06", "", 1500, { "", "", -1 } },
			{ "H_Shemag_olive", "", 1500, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 1500, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 1500, { "", "", -1 } },
			{ "TRYK_H_Booniehat_3CD", "Boonie Hat(Desert)", 500, { "", "", -1 } },
			{ "TRYK_H_Booniehat_CC", "Boonie Hat(Desert Dark)", 500, { "", "", -1 } },
			{ "TRYK_H_Booniehat_AOR1", "Boonie Hat", 500, { "", "", -1 } },
			{ "H_Cap_blk", "", 750, { "", "", -1 } },
			{ "CUP_H_PMC_Cap_Grey", "", 750, { "", "", -1 } },
			{ "CUP_H_PMC_Cap_Tan", "", 750, { "", "", -1 } },
			{ "TRYK_R_CAP_BLK", "Backwards Cap(Black)", 1000, { "", "", -1 } },
			{ "TRYK_R_CAP_TAN", "Backwards Cap(Tan)", 1000, { "", "", -1 } },
			{ "CUP_H_SLA_Helmet", "Rejected SLA Combat Helmet", 3000, { "", "", -1 } },
			{ "H_HelmetB", "Stolen Combat Helmet", 5000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 500, { "", "", -1 } },
			{ "G_Shades_Blue", "", 500, { "", "", -1 } },
			{ "G_Shades_Green", "", 500, { "", "", -1 } },
			{ "G_Shades_Red", "", 500, { "", "", -1 } },
			{ "G_Sport_Red", "", 500, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 750, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 750, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 750, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 750, { "", "", -1 } },
			{ "G_Sport_Greenblack", "", 750, { "", "", -1 } },
			{ "G_Aviator", "", 1000, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 1200, { "", "", -1 } },
			{ "G_Bandanna_sport", "", 1200, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 1200, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 1200, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 1200, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 1200, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 1200, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 1200, { "", "", -1 } },
			{ "CUP_RUS_Balaclava_blk", "", 1250, { "", "", -1 } },
			{ "CUP_RUS_Balaclava_grn", "", 1250, { "", "", -1 } },
			{ "CUP_TK_NeckScarf", "", 1300, { "", "", -1 } },
			{ "CUP_FR_NeckScarf", "", 1300, { "", "", -1 } },
			{ "CUP_FR_NeckScarf2", "", 1300, { "", "", -1 } },
			{ "TRYK_bandana_g", "Head Bandana", 1500, { "", "", -1 } },
			{ "Mask_M50", "", 15000, { "", "", -1 } },
			{ "TRYK_Beard_BK", "Short Beard(Black)", 1500, { "", "", -1 } },
			{ "TRYK_Beard", "Short Beard(Blonde)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_BW", "Short Beard(Brown)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_Gr", "Short Beard(Grey)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_BK4", "Full Beard(Black)", 1500, { "", "", -1 } },
			{ "TRYK_Beard4", "Full Beard(Blonde)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_BW4", "Full Beard(Brown)", 1500, { "", "", -1 } },
			{ "TRYK_Beard_Gr4", "Full Beard(Grey)", 1500, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
		    { "CUP_V_OI_TKI_Jacket1_04", "", 3000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_06", "", 3000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_01", "", 3000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_05", "", 3000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_02", "", 3000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket1_03", "", 3000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_04", "", 3500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_05", "", 3500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_02", "", 3500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_06", "", 3500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_03", "", 3500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket4_01", "", 3500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_04", "", 4000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_02", "", 4000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket3_01", "", 4000, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_05", "", 4500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_03", "", 4500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_04", "", 4500, { "", "", -1 } },
			{ "CUP_V_OI_TKI_Jacket2_01", "", 4500, { "", "", -1 } },
			{ "TRYK_LOC_AK_chestrig_TAN", "Chest Rig(Tan)", 5250, { "", "", -1 } },
			{ "CUP_V_I_Carrier_Belt", "", 5250, { "", "", -1 } },
			{ "V_TacChestrig_cbr_F", "", 5500, { "", "", -1 } },
			{ "V_TacChestrig_grn_F", "", 5500, { "", "", -1 } },
			{ "CUP_V_I_RACS_Carrier_Rig_2", "", 6000, { "", "", -1 } },
			{ "CUP_V_I_RACS_Carrier_Rig_wdl_2", "", 6000, { "", "", -1 } },
			{ "CUP_V_RUS_Smersh_1", "", 7500, { "", "", -1 } },
			{ "CUP_V_O_Ins_Carrier_Rig_MG", "", 7500, { "", "", -1 } },
			{ "CUP_V_O_TK_Vest_1", "", 8000, { "", "", -1 } },
			{ "CUP_V_B_RRV_DA1", "", 12500, { "", "", -1 } },
			{ "CUP_V_B_Eagle_SPC_Officer", "", 15000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 1200, { "", "", -1 } },
			{ "B_AssaultPack_blk", "", 1200, { "", "", -1 } },
			{ "B_AssaultPack_mcamo", "", 1200, { "", "", -1 } },
			{ "B_FieldPack_blk", "", 1400, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 1400, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 1400, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 1650, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 1650, { "", "", -1 } },
			{ "CUP_B_HikingPack_Civ", "", 1700, { "", "", -1 } },
			{ "CUP_B_CivPack_WDL", "", 1900, { "", "", -1 } },
			{ "CUP_B_RUS_Backpack", "", 1900, { "", "", -1 } },
			{ "CUP_B_ACRPara_m95", "", 2000, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_BLK", "Coyote Backpack(Black)", 2200, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack", "Coyote Backpack(Tan)", 2200, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_OD", "Coyote Backpack(Olive)", 2200, { "", "", -1 } },
			{ "TRYK_B_Coyotebackpack_WH", "Coyote Backpack(White)", 2200, { "", "", -1 } },
			{ "B_Carryall_mcamo", "Carry All(MTP)", 2500, { "", "", -1 } },
			{ "B_Carryall_oucamo", "Carry All(Urban)", 2500, { "", "", -1 } },
			{ "B_Carryall_oli", "Carry All(Olive)", 2500, { "", "", -1 } },
			{ "B_Carryall_khk", "Carry All(Kahki)", 2500, { "", "", -1 } },
			{ "TRYK_B_Carryall_wood", "Carry All(Woodland)", 2500, { "", "", -1 } },
			{ "TRYK_B_Carryall_blk", "Carry All(Black)", 2500, { "", "", -1 } },
			{ "TRYK_B_Carryall_wh", "Carry All(White)", 2500, { "", "", -1 } }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
            { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
            { "U_C_Driver_2", "", 3500, { "", "", -1 } },
            { "U_C_Driver_1", "", 3600, { "", "", -1 } },
            { "U_C_Driver_3", "", 3700, { "", "", -1 } },
            { "U_C_Driver_4", "", 3700, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
            { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
            { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } }
        };
    };
	
	//DGAus Clothing Stores
	class un {
        title = "UN Clothing";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "sab_UN_Soldier_ClothingSD", "UN Uniform", 0, { "life_coplevel", "SCALAR", 9 } },
            { "sab_UN_Soldier_Clothing", "", 0, { "life_coplevel", "SCALAR", 13 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "sab_UN_Helmet", "", 0, { "life_coplevel", "SCALAR", 9 } },
            { "sab_UN_cap", "", 0, { "life_coplevel", "SCALAR", 10 } },
            { "sab_UN_Beret", "", 0, { "life_coplevel", "SCALAR", 13 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 150, { "", "", -1 } },
            { "G_Shades_Blue", "", 150, { "", "", -1 } },
            { "G_Sport_Blackred", "", 200, { "", "", -1 } },
            { "G_Sport_Checkered", "", 200, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 200, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 200, { "", "", -1 } },
            { "G_Squares", "", 250, { "", "", -1 } },
            { "G_Aviator", "", 250, { "", "", -1 } },
            { "G_Lady_Dark", "", 300, { "", "", -1 } },
            { "G_Lady_Blue", "", 300, { "", "", -1 } },
            { "G_Lowprofile", "", 300, { "", "", -1 } },
            { "G_Combat", "", 300, { "", "", -1 } },
			{ "Mask_M50", "", 5000, { "life_coplevel", "BET", {11,18} } },
			{ "Mask_M40_OD", "", 5000, { "life_coplevel", "BET", {11,18} } },
			{ "Mask_M40", "", 5000, { "life_coplevel", "BET", {11,18} } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "sab_UN_tVest", "", 0, { "life_coplevel", "SCALAR", 9 } },
            { "sab_UN_mVest", "", 0, { "life_coplevel", "SCALAR", 11 } },
            { "sab_UN_hVest", "", 0, { "life_coplevel", "SCALAR", 13 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Kitbag_cbr", "", 1000, { "", "", -1 } },
            { "B_FieldPack_cbr", "", 1450, { "", "", -1 } },
            { "B_AssaultPack_cbr", "", 1750, { "", "", -1 } },
            { "B_Bergen_sgg", "", 2200, { "", "", -1 } },
            { "B_Carryall_cbr", "", 2500, { "", "", -1 } }
        };
    };
	
	class tsf {
        title = "TSF Clothing";
        license = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "DGA_TSF_Private", "Private Uniform", 0, { "life_coplevel", "EQUAL", 1 } },
			{ "DGA_TSF_Corporal", "Corporal Uniform", 0, { "life_coplevel", "EQUAL", 2 } },
			{ "DGA_TSF_Sergeant", "Sergeant Uniform", 0, { "life_coplevel", "EQUAL", 3 } },
			{ "DGA_TSF_Sweater_2_Lt", "2nd Lt. Uniform", 0, { "life_coplevel", "EQUAL", 4 } },
			{ "DGA_TSF_Sweater_1_Lt", "1st Lt. Uniform", 0, { "life_coplevel", "EQUAL", 5 } },
			{ "DGA_TSF_Sweater_Captain", "Captain Uniform", 0, { "life_coplevel", "EQUAL", 6 } },
			{ "DGA_TSF_Sweater_Deputy_Commissioner", "Dep. Commissioner Uniform", 0, { "life_coplevel", "EQUAL", 7 } },
			{ "DGA_TSF_Sweater_Commissioner", "Commissioner Uniform", 0, { "life_coplevel", "EQUAL", 8 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "DGAUS_TSF_Cap_Badge", "TSF Patrol Cap", 0, { "", "", -1 } },
			{ "DGAUS_TSF_Beret", "TSF Command Beret", 0, { "life_coplevel", "BET", {4,8} } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 150, { "", "", -1 } },
            { "G_Shades_Blue", "", 150, { "", "", -1 } },
            { "G_Sport_Blackred", "", 200, { "", "", -1 } },
            { "G_Sport_Checkered", "", 200, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 200, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 200, { "", "", -1 } },
            { "G_Squares", "", 250, { "", "", -1 } },
            { "G_Aviator", "", 250, { "", "", -1 } },
            { "G_Lady_Mirror", "", 300, { "", "", -1 } },
            { "G_Lady_Dark", "", 300, { "", "", -1 } },
            { "G_Lady_Blue", "", 300, { "", "", -1 } },
            { "G_Lowprofile", "", 350, { "", "", -1 } },
            { "G_Combat", "", 350, { "", "", -1 } },
			{ "Mask_M50", "", 5000, { "life_coplevel", "BET", {3,8} } },
			{ "Mask_M40_OD", "", 5000, { "life_coplevel", "BET", {3,8} } },
			{ "Mask_M40", "", 5000, { "life_coplevel", "BET", {3,8} } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_TSF_Black", "Tactical Vest BLK", 0, { "life_coplevel", "BET", {1,8} } },
            { "V_TSF_Green", "Tactical Vest GRN", 0, { "life_coplevel", "BET", {1,8} } },
            { "V_TSF_CRL_BLK", "Carrier Rig Lite BLK", 0, { "life_coplevel", "BET", {3,8} } },
			{ "V_TSF_CRL_GRN", "Carrier Rig Lite GRN", 0, { "life_coplevel", "BET", {3,8} } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "AM_PoliceBelt", "", 0, { "", "", -1 } }
        };
    };
	
	class civ_air {
        title = "Civ Air Clothing";
        license = "pilot";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_PilotCoveralls", "", 7500, { "", "", -1 } },
			{ "U_B_HeliPilotCoveralls", "", 7500, { "", "", -1 } },
			{ "U_I_pilotCoveralls", "", 7500, { "", "", -1 } },
			{ "TRYK_HRP_khk", "", 7500, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_HelmetCrew_B", "", 5000, { "", "", -1 } },
			{ "H_PilotHelmetFighter_B", "", 5000, { "", "", -1 } },
			{ "H_PilotHelmetHeli_B", "", 5000, { "", "", -1 } },
            { "CUP_H_USMC_Helmet_Pilot", "", 5000, { "", "", -1 } },
            { "CUP_H_USMC_Crew_Helmet", "", 5000, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Aviator", "", 1000, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "TRYK_Hrp_vest_od", "", 5000, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Parachute", "", 5000, { "", "", -1 } }
        };
    };
	
	class un_sniper {
        title = "UN Sniper Clothing";
        license = "un_sniper";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_FullGhillie_ard", "", 0, { "", "", -1 } }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 0, { "", "", -1 } },
            { "G_Shades_Blue", "", 0, { "", "", -1 } },
            { "G_Sport_Blackred", "", 0, { "", "", -1 } },
            { "G_Sport_Checkered", "", 0, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 0, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 0, { "", "", -1 } },
            { "G_Squares", "", 0, { "", "", -1 } },
            { "G_Aviator", "", 0, { "", "", -1 } },
            { "G_Lady_Mirror", "", 0, { "", "", -1 } },
            { "G_Lady_Dark", "", 0, { "", "", -1 } },
            { "G_Lady_Blue", "", 0, { "", "", -1 } },
            { "G_Lowprofile", "", 0, { "", "", -1 } },
            { "G_Combat", "", 0, { "", "", -1 } },
			{ "Mask_M50", "", 0, { "", "", -1 } },
			{ "Mask_M40_OD", "", 0, { "", "", -1 } },
			{ "Mask_M40", "", 0, { "", "", -1 } }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 0, { "", "", -1 } }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_rgr", "", 800, { "", "", -1 } },
            { "B_FieldPack_oli", "", 500, { "", "", -1 } },
            { "B_AssaultPack_rgr", "", 700, { "", "", -1 } },
            { "B_TacticalPack_oli", "", 2500, { "", "", -1 } },
            { "B_Carryall_oli", "", 3500, { "", "", -1 } }
        };
    };
};
