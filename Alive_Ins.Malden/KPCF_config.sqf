/*
    Killah Potatoes Cratefiller v1.1.0

    Author: Dubjunk - https://github.com/KillahPotatoes
    License: GNU General Public License v3.0 - https://www.gnu.org/licenses/gpl-3.0.html

    Description:
    Configuration file for various variables of the KP cratefiller.
*/

// The Base object is for the player interaction, so at these object you can open the dialog
KPCF_cratefillerBase = [
    "Land_Cargo10_military_green_F"
];

// The Spawn object is the point where crates will spawn and acts the center for the KPCF_spawnRadius
KPCF_cratefillerSpawn = "Land_HelipadCivil_F";

// This variable defines if the player will be able to spawn and delete crates
KPCF_canSpawnAndDelete = true;

// If set to "true" the item lists will be generated from the config
KPCF_generateLists = true;

// These variable defines the range where inventories can be edited
// Example: With an setting of 10 all objects in a radius of 10m from the center of the spawn object can be edited
KPCF_spawnRadius = 10;

// Defines the distance for the interaction (addAction / ACE)
KPCF_interactRadius = 5;

// Defines the available crates
KPCF_crates = [
    ""
];


// Defines the blacklisted items
// Blacklisted items are used on every category with activated generatedLists and everytime on the magazines and attachments
// So this variable will ensure the block of unwanted items
KPCF_blacklistedItems = [
    ""
];

// ----- This Variable will only be used with activated generatedLists -----

// Defines the whitelisted items
// Whitelisted items will be added after the item detection to ensure the availability
KPCF_whitelistedItems = [
    "kat_IV_16",
	"kat_aatKit",
	"kat_accuvac",
	"ACE_adenosine",
	"kat_X_AED",
	"kat_amiodarone",
	"kat_CarbonateItem",
	"kat_atropine",
	"kat_AED",
	"ACE_Banana",
	"ACE_fieldDressing",
	"ACE_elasticBandage",
	"ACE_packingBandage",
	"ACE_quikclot",
	"kat_crossPanel",
	"kat_bloodIV_O",
	"kat_bloodIV_O_N",
	"kat_bloodIV_A",
	"kat_bloodIV_A_N",
	"kat_bloodIV_AB",
	"kat_bloodIV_AB_N",
	"kat_bloodIV_B",
	"kat_bloodIV_B_N",
	"kat_bloodIV_O_250",
	"kat_bloodIV_O_N_250",
	"kat_bloodIV_A_250",
	"kat_bloodIV_A_N_250",
	"kat_bloodIV_AB_250",
	"kat_bloodIV_AB_N_250",
	"kat_bloodIV_B_250",
	"kat_bloodIV_B_N_250",
	"kat_bloodIV_O_500",
	"kat_bloodIV_O_N_500",
	"kat_bloodIV_A_500",
	"kat_bloodIV_A_N_500",
	"kat_bloodIV_AB_500",
	"kat_bloodIV_AB_N_500",
	"kat_bloodIV_B_500",
	"kat_bloodIV_B_N_500",
	"ACE_bodyBag",
	"kat_Bubble_Wrap_Item",
	"kat_plate",
	"kat_BVM",
	"ACE_CableTie",
	"kat_CaffeineItem",
	"ACE_Can_Franta",
	"ACE_Can_RedGull",
	"ACE_Can_Spirit",
	"ACE_Canteen",
	"kat_chestSeal",
	"kat_clamp",
	"kat_EACA",
	"kat_vacuum",
	"kat_oxygenTank_150_Empty",
	"kat_oxygenTank_300_Empty",
	"ACE_epinephrine",
	"kat_etomidate",
	"kat_IO_FAST",
	"kat_fentanyl",
	"KAT_Empty_bloodIV_250",
	"KAT_Empty_bloodIV_500",
	"kat_flumazenil",
	"kat_guedel",
	"ACE_Humanitarian_Ration",
	"kat_ketamine",
	"kat_larynx",
	"kat_lidocaine",
	"kat_lorazepam",
	"ACE_morphine",
	"ACE_MRE_BeefStew",
	"ACE_MRE_ChickenTikkaMasala",
	"ACE_MRE_ChickenHerbDumplings",
	"ACE_MRE_CreamChickenSoup",
	"ACE_MRE_CreamTomatoSoup",
	"ACE_MRE_LambCurry",
	"ACE_MRE_MeatballsPasta",
	"ACE_MRE_SteakVegetables",
	"kat_nalbuphine",
	"kat_naloxone",
	"kat_ncdKit",
	"kat_nitroglycerin",
	"kat_norepinephrine",
	"kat_PainkillerItem",
	"ACE_personalAidKit",
	"ACE_plasmaIV",
	"kat_phenylephrine",
	"ACE_plasmaIV_250",
	"ACE_plasmaIV_500",
	"kat_pocketBVM",
	"kat_oxygenTank_150_Item",
	"kat_oxygenTank_300_Item",
	"kat_Pulseoximeter",
	"kat_retractor",
	"ACE_salineIV",
	"ACE_salineIV_250",
	"ACE_salineIV_500",
	"kat_scalpel",
	"kat_sealant",
	"ACE_splint",
	"kat_stethoscope",
	"ACE_Sunflower_Seeds",
	"ACE_surgicalKit",
	"ACE_tourniquet",
	"kat_TXA",
	"ACE_WaterBottle"
];

// ----- These Variables will be replaced with activated generatedLists -----

// Defines the available weapons
KPCF_weapons = [
    "arifle_SPAR_01_snd_F",
    "MMG_01_tan_F"
];

// Defines the available grenades
KPCF_grenades = [
    "HandGrenade",
    "MiniGrenade"
];

// Defines the available explosives
KPCF_explosives = [
    "DemoCharge_Remote_Mag",
    "ATMine_Range_Mag"
];

// Defines the available items
KPCF_items = [
    "FirstAidKit",
    "ToolKit"
];

// Defines the available backpacks
KPCF_backpacks = [
    "B_FieldPack_cbr",
    "B_AssaultPack_cbr"
];
