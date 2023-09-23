private "_this";
_this = _this select 0;

if ((side _this == east) and (!isPlayer _this)) then {

_this addEventHandler ["Killed", {
	_unit = (_this select 0);
	_killer = (_this select 1);
	[20,0] remoteExecCall ["HG_fnc_addOrSubXP",_killer,false]; 
}];
};

if ((side _this == west) and (!isPlayer _this)) then {

_this addEventHandler ["Killed", {
	_unit = (_this select 0);
	_killer = (_this select 1);
	[40,1] remoteExecCall ["HG_fnc_addOrSubXP",_killer,false]; 
}];
};

if ((side _this == Civilian) and (!isPlayer _this)) then {

_this addEventHandler ["Killed", {
	_unit = (_this select 0);
	_killer = (_this select 1);
	[80,1] remoteExecCall ["HG_fnc_addOrSubXP",_killer,false];
}];
};