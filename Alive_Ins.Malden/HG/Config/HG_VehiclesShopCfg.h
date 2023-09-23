/*
    Author - HoverGuy
    Website - https://northernimpulse.com
	
    Defines available vehicle shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			vehicles - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the vehicle appears in the list else no
			spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
			|- 0 - STRING - Display name in the dialog
			|- 1 - ARRAY OF MIXED - Markers/positions
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
    class Civilian
	{
	    displayName = "$STR_HG_SHOP_CIVILIAN";
		vehicles[] =
		{
		    {"C_SUV_01_F",15000,"true"}
		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"vehicles_spawn_1"}}
		};
	};
	
	class Military
	{
	    displayName = "$STR_HG_SHOP_MILITARY";
		vehicles[] =
		{
		    {"UK3CB_ION_B_Desert_M113_M2",320000,"true"},
			{"UK3CB_ION_B_Desert_M113_M2_90",270000,"true"},
			{"UK3CB_ION_B_Desert_M113_M240",310000,"true"},
			{"UK3CB_ION_B_Desert_M113_AMB",320000,"true"},
			{"UK3CB_ION_B_Desert_M113_MK19",325000,"true"},
			{"UK3CB_ION_B_Desert_M113_MK19_90",275000,"true"},
			{"UK3CB_ION_B_Desert_M113_supply",320000,"true"},
			{"UK3CB_ION_B_Desert_M113_unarmed",300000,"true"},
			{"UK3CB_ION_B_Desert_Hilux_Ambulance",25000,"true"},
			{"UK3CB_ION_B_Desert_Hilux",23000,"true"},
			{"UK3CB_ION_B_Desert_Hilux_M2",26000,"true"},
			{"UK3CB_ION_B_Desert_Hilux_Open",20000,"true"},
			{"UK3CB_ION_B_Desert_MB4WD_Unarmed",20000,"true"},
			{"UK3CB_ION_B_Desert_MB4WD_LMG",26000,"true"},
			{"UK3CB_ION_B_Desert_LR_Closed",19000,"true"},
			{"UK3CB_ION_B_Desert_LR_M2",25000,"true"},
			{"UK3CB_ION_B_Desert_LR_Open",16000,"true"},
			{"UK3CB_ION_B_Desert_Landcruiser",22000,"true"},
			{"UK3CB_ION_B_Desert_M1030",600,"true"},
			{"UK3CB_ION_B_Desert_M1025_MK19",40000,"true"},
			{"UK3CB_ION_B_Desert_M1025_M2",35000,"true"},
			{"UK3CB_ION_B_Desert_M1025_TOW",80000,"true"},
			{"UK3CB_ION_B_Desert_M1025",20000,"true"},
			{"UK3CB_ION_B_Desert_M998_2DR",20000,"true"},
			{"UK3CB_ION_B_Desert_M998_4DR",20000,"true"},
			{"UK3CB_ION_B_Desert_MaxxPro_M2",430000,"true"},
			{"UK3CB_ION_B_Desert_MaxxPro_MK19",450000,"true"},
			{"UK3CB_ION_B_Desert_Offroad",30000,"true"},
			{"UK3CB_ION_B_Desert_Offroad_Comms",35000,"true"},
			{"UK3CB_ION_B_Desert_Offroad_Covered",33000,"true"},
			{"UK3CB_ION_B_Desert_Offroad_M2",36000,"true"},
			{"UK3CB_ION_B_Desert_Offroad_Service",35000,"true"},
			{"UK3CB_ION_B_Desert_Pickup",16000,"true"},
			{"UK3CB_ION_B_Desert_Pickup_M2",22000,"true"},
			{"UK3CB_ION_B_Desert_LSV_01",70000,"true"},
			{"UK3CB_ION_B_Desert_LSV_02_AT",110000,"true"},
			{"UK3CB_ION_B_Desert_Quadbike",800,"true"},
			{"UK3CB_ION_B_Desert_SUV_Armed",195000,"true"},
			{"UK3CB_ION_B_Desert_SUV_Armoured",150000,"true"},
			{"UK3CB_ION_B_Desert_T810_Reammo",32000,"true"},
			{"UK3CB_ION_B_Desert_T810_Refuel",32000,"true"},
			{"UK3CB_ION_B_Desert_T810_Recovery",26000,"true"},
			{"UK3CB_ION_B_Desert_T810_Repair",32000,"true"},
			{"UK3CB_ION_B_Desert_T810_Closed",28000,"true"},
			{"UK3CB_ION_B_Desert_T810_Open",26000,"true"},
			{"UK3CB_ION_B_Desert_Transit_Medevac",17000,"true"},
			{"UK3CB_ION_B_Desert_Transit_Cargo",14000,"true"},
			{"UK3CB_ION_B_Desert_Transit_Service",16000,"true"},
			{"UK3CB_ION_B_Desert_Transit_Transport",16000,"true"},
			{"PMC_SUV_X6",14325,"true"},
			{"PMC_DAGOR",10000,"true"},
			{"PMC_Razor",15000,"true"},
			{"PMC_Humvee_Soft_Cargo",100000,"true"},
			{"PMC_Humvee_Hard",200000,"true"},
			{"PMC_Humvee_Hard_M2",220000,"true"},
			{"PMC_Humvee_Hard_M240",215000,"true"},
			{"PMC_Humvee_Hard_Cargo",200000,"true"},
			{"PMC_Caiman",450000,"true"},
			{"PMC_Caiman_CROWS_M2",518000,"true"},
			{"PMC_Caiman_GPK_M2",516000,"true"},
			{"PMC_CaimanPlus_MED",490000,"true"},
			{"PMC_CaimanPlus_GPK_M2",517000,"true"},
			{"UK3CB_LDF_B_RM70_MG",191000,"true"},
			{"UK3CB_KRG_B_M270_MLRS_HE",6300000,"true"},
			{"UK3CB_CW_SOV_O_EARLY_2S3",1800000,"true"},
			{"UK3CB_CW_SOV_O_EARLY_2S1",1500000,"true"},
			{"rhs_tigr_m_3camo_msv",92000,"true"},
			{"rhs_tigr_sts_3camo_msv",98000,"true"},
			{"SRV_UKWD",60000,"true"},
			{"SRV_TAN",60000,"true"},
			{"SRV_NATOWD",60000,"true"},
			
			// HELICOPTER
			
			{"PMC_MD500_Attack",4500000,"true"},
			{"UK3CB_ION_B_Desert_MELB_AH6M_H",4500000,"true"},
			{"UK3CB_ION_B_Desert_MELB_AH6M_L",4500000,"true"},
			{"UK3CB_ION_B_Desert_MELB_AH6M_M",4500000,"true"},
			{"UK3CB_ION_B_Desert_AH9",4000000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_FLIR",6500000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_Medic",6500000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_Luxury",7500000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_Utility",4500000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_Armed_dynamicLoadout",7500000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_Armed",7500000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_Mil_Medic",7500000,"true"},
			{"UK3CB_ION_B_Desert_Bell412_Armed_AT",8000000,"true"},
			{"PMC_Merlin",25000000,"true"},
			{"PMC_MD500_Transport",4000000,"true"},
			{"UK3CB_ION_B_Desert_Benches_MH9",4000000,"true"},
			{"UK3CB_ION_B_Desert_Unarmed_MH9",3500000,"true"},
			{"UK3CB_ION_B_Desert_MELB_H6M",3800000,"true"},
			{"UK3CB_ION_B_Desert_Orca_Armed_MULTI",12000000,"true"},
			{"UK3CB_ION_B_Desert_Orca_Armed_AT",12500000,"true"},
			{"UK3CB_ION_B_Desert_Orca_Armed_CAS",12500000,"true"},
			{"PMC_Huey_Armed",1550000,"true"},
			{"PMC_Huey_Gunship",1600000,"true"},
			{"UK3CB_ION_B_Desert_UH1H_MED",1550000,"true"},
			{"PMC_Huey_Clean",1500000,"true"},
			{"PMC_Venom_FFAR",4700000,"true"},
			{"PMC_Venom_Heavy",4750000,"true"},
			{"PMC_Venom_Clean",4000000,"true"},
			{"PMC_MI8_Cargo",6000000,"true"},
			{"PMC_MI8_Gunship",6250000,"true"},
			{"PMC_MI8_Support",6150000,"true"},
			{"PMC_MI8",3040000,"true"},
			{"PMC_S70_Armed",2950000,"true"},
			{"PMC_S70",2950000,"true"},
			{"PMC_S70_ESSS",2975000,"true"},
			{"PMC_S70_Slick",2950000,"true"},
			{"PMC_Model414",30000000,"true"},
			{"PMC_Model414_Cargo",30000000,"true"},
			{"PMC_ALCA",9500000,"true"},
			{"rhsgref_b_mi24g_CAS",18000000,"true"}
	    };
		spawnPoints[] =
		{
			{"$STR_HG_MARKER_2",{"vehicles_spawn_1"}}
		};
	};
};
