/*
    Author - HoverGuy
    Website - https://northernimpulse.com
	
    Defines available traders
	
	class YourDealerClass - Used as a param for the call, basically the dealer you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the dealer
		
		interestedIn - ARRAY OF ARRAYS - Vehicles that the dealer is interested in buying
		|- 0 - STRING - Vehicle classname
		|- 1 - INTEGER - Vehicle sell price
	};
*/

class HG_DefaultDealer // HG_DefaultDealer is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	interestedIn[] = 
	{
		{"UK3CB_ION_B_Desert_M113_M2",160000},
		{"UK3CB_ION_B_Desert_M113_M2_90",135000},
		{"UK3CB_ION_B_Desert_M113_M240",155000},
		{"UK3CB_ION_B_Desert_M113_AMB",160000},
		{"UK3CB_ION_B_Desert_M113_MK19",162500},
		{"UK3CB_ION_B_Desert_M113_MK19_90",137500},
		{"UK3CB_ION_B_Desert_M113_supply",160000},
		{"UK3CB_ION_B_Desert_M113_unarmed",150000},
		{"UK3CB_ION_B_Desert_Hilux_Ambulance",12500},
		{"UK3CB_ION_B_Desert_Hilux",11500},
		{"UK3CB_ION_B_Desert_Hilux_M2",13000},
		{"UK3CB_ION_B_Desert_Hilux_Open",10000},
		{"UK3CB_ION_B_Desert_MB4WD_Unarmed",10000},
		{"UK3CB_ION_B_Desert_MB4WD_LMG",13000},
		{"UK3CB_ION_B_Desert_LR_Closed",9500},
		{"UK3CB_ION_B_Desert_LR_M2",12500},
		{"UK3CB_ION_B_Desert_LR_Open",7000},
		{"UK3CB_ION_B_Desert_Landcruiser",11000},
		{"PMC_Humvee_Soft",20000},
		{"UK3CB_ION_B_Desert_M1025_MK19",28000},
		{"PMC_Humvee_Soft_M2",25000},
		{"UK3CB_ION_B_Desert_M1025_TOW",40000},
		{"UK3CB_ION_B_Desert_M1025",20000},
		{"UK3CB_ION_B_Desert_M998_2DR",17500},
		{"UK3CB_ION_B_Desert_M998_4DR",18500},
		{"UK3CB_ION_B_Desert_MaxxPro_M2",215000},
		{"UK3CB_ION_B_Desert_MaxxPro_MK19",225000},
		{"UK3CB_ION_B_Desert_Offroad",8000},
		{"UK3CB_ION_B_Desert_Offroad_Comms",7500},
		{"UK3CB_ION_B_Desert_Offroad_Covered",7500},
		{"UK3CB_ION_B_Desert_Offroad_M2",17000},
		{"UK3CB_ION_B_Desert_Offroad_Service",7000},
		{"UK3CB_ION_B_Desert_Pickup",6000},
		{"UK3CB_ION_B_Desert_Pickup_M2",14000},
		{"UK3CB_ION_B_Desert_LSV_01",15000},
		{"UK3CB_ION_B_Desert_LSV_02_AT",35000},
		{"PMC_Quadbike",1000},
		{"UK3CB_ION_B_Desert_SUV_Armed",17500},
		{"UK3CB_ION_B_Desert_SUV_Armoured",20000},
		{"UK3CB_ION_B_Desert_T810_Reammo",5000},
		{"UK3CB_ION_B_Desert_T810_Refuel",6000},
		{"UK3CB_ION_B_Desert_T810_Recovery",3000},
		{"UK3CB_ION_B_Desert_T810_Repair",6000},
		{"UK3CB_ION_B_Desert_T810_Closed",4000},
		{"UK3CB_ION_B_Desert_T810_Open",4000},
		{"UK3CB_ION_B_Desert_Transit_Medevac",8000},
		{"UK3CB_ION_B_Desert_Transit_Cargo",8000},
		{"UK3CB_ION_B_Desert_Transit_Service",7000},
		{"UK3CB_ION_B_Desert_Transit_Transport",8000},
		{"PMC_SUV_X6",44325},
		{"PMC_DAGOR",8000},
		{"PMC_Razor",8000},
		{"PMC_Humvee_Soft_Cargo",40000},
		{"PMC_Humvee_Hard",80000},
		{"PMC_Humvee_Hard_M2",90000},
		{"PMC_Humvee_Hard_M240",82500},
		{"PMC_Humvee_Hard_Cargo",80000},
		{"PMC_Caiman",236000},
		{"PMC_Caiman_CROWS_M2",282000},
		{"PMC_Caiman_GPK_M2",262000},
		{"PMC_CaimanPlus_MED",230000},
		{"PMC_CaimanPlus_GPK_M2",260000},
		{"PMC_MD500_Attack",2250000},
		{"UK3CB_ION_B_Desert_MELB_AH6M_H",2250000},
		{"UK3CB_ION_B_Desert_MELB_AH6M_L",2250000},
		{"UK3CB_ION_B_Desert_MELB_AH6M_M",2250000},
		{"UK3CB_ION_B_Desert_AH9",2000000},
		{"UK3CB_ION_B_Desert_Bell412_FLIR",3250000},
		{"UK3CB_ION_B_Desert_Bell412_Medic",3250000},
		{"UK3CB_ION_B_Desert_Bell412_Luxury",3750000},
		{"UK3CB_ION_B_Desert_Bell412_Utility",2250000},
		{"UK3CB_ION_B_Desert_Bell412_Armed_dynamicLoadout",3750000},
		{"UK3CB_ION_B_Desert_Bell412_Armed",3850000},
		{"UK3CB_ION_B_Desert_Bell412_Mil_Medic",3750000},
		{"UK3CB_ION_B_Desert_Bell412_Armed_AT",4000000},
		{"PMC_Merlin",12500000},
		{"UK3CB_ION_B_Desert_MELB_MH6M",1000000},
		{"PMC_MD500_Transport",1000000},
		{"UK3CB_ION_B_Desert_Unarmed_MH9",1250000},
		{"UK3CB_ION_B_Desert_MELB_H6M",1900000},
		{"UK3CB_ION_B_Desert_Orca_Armed_MULTI",6000000},
		{"UK3CB_ION_B_Desert_Orca_Armed_AT",6250000},
		{"UK3CB_ION_B_Desert_Orca_Armed_CAS",6250000},
		{"PMC_Huey_Armed",775000},
		{"PMC_Huey_Gunship",800000},
		{"UK3CB_ION_B_Desert_UH1H_MED",775000},
		{"PMC_Huey_Clean",750000},
		{"PMC_Venom_FFAR",4700000},
		{"PMC_Venom_Heavy",4750000},
		{"PMC_Venom_Clean",4000000},
		{"PMC_MI8_Cargo",3000000},
		{"PMC_MI8_Gunship",3250000},
		{"PMC_MI8_Support",3150000},
		{"PMC_MI8",3040000},
		{"PMC_S70_Armed",2950000},
		{"PMC_S70",2950000},
		{"PMC_S70_ESSS",2975000},
		{"PMC_S70_Slick",2950000},
		{"PMC_KA60",6000000},
		{"PMC_KA60_Gunship",6250000},
		{"PMC_Model414",15000000},
		{"PMC_Model414_Cargo",15000000},
		{"PMC_ALCA",4750000}
	};
};
