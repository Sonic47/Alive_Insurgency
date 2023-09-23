if ((!isServer) && (player != player)) then {waitUntil {player == player};};

["InitializePlayer",[player,true]]call BIS_fnc_dynamicGroups;

/*
    Author - HoverGuy
    Website - https://northernimpulse.com
    Player initialization
*/

if(!hasInterface) exitWith {}; // If headless then exit

[] execVM "HG\Setup\fn_clientInitialization.sqf";

player enableFatigue false;
player enableStamina false;
player setCustomAimCoef 0.1
