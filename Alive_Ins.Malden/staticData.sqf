//////////////////////////////////////////////////////////////////
// Function file for Armed Assault
// Created by: TODO: Author Name
//////////////////////////////////////////////////////////////////

if (!isServer) exitWith {};
waitUntil {!isNil "ALiVE_REQUIRE_INITIALISED"};

_civilianFaction = "CIV_F_EUROPE";
_weapons = [["rhs_weap_akms","rhs_30Rnd_762x39mm"],["rhs_weap_akm","rhs_30Rnd_762x39mm"],["rhs_weap_makarov_pmm","rhs_mag_9x18_12_57N181S"],["rhs_weap_m16a4_carryhandle"],["rhs_mag_30Rnd_556x45_Mk262_Stanag"]]; 
[ALIVE_civilianWeapons, _civilianFaction, _weapons] call ALIVE_fnc_hashSet;