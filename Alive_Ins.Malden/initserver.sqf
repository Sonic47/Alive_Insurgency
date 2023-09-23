//MostraFPS
[] spawn compileFinal preprocessFileLineNumbers "scripts\server\offloading\show_fps.sqf";

disableMapIndicators [false, true, false, false];

["Initialize"]call BIS_fnc_dynamicGroups;

/*
    Author - HoverGuy
    Website - https://northernimpulse.com
    Server initialization
*/

[] execVM "HG\Setup\fn_serverInitialization.sqf";
