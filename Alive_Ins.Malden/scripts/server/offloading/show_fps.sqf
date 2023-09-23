private [ "_sourcestr", "_position", "_myfpsmarker", "_myfps", "_localunits", "_localvehicles" ];

if ( isServer ) then {
	_sourcestr = "Server";
	_position = 0;
} else {
	if (vehicleVarName player == "HC_01") then {
		_sourcestr = "HC1";
		_position = 2;
	};
	if (vehicleVarName  player == "HC_02") then {
		_sourcestr = "HC2";
		_position = 4;
	};
	if (vehicleVarName  player == "HC_03") then {
		_sourcestr = "HC3";
		_position = 6;
	};
	if (vehicleVarName  player != "HC_01" and vehicleVarName  player != "HC_02" and vehicleVarName player != "HC_03") then {
		_sourcestr = "HC4";
		_position = 8;
	};
};

_myfpsmarker = createMarker [ format ["fpsmarker%1", _sourcestr ], [ 500, 500 + (500 * _position) ] ];
_myfpsmarker setMarkerType "mil_start";
_myfpsmarker setMarkerSize [ 0.7, 0.7 ];

while { true } do {

	_myfps = diag_fps;
	_localunits = { local _x } count allUnits;
	_localvehicles = { local _x } count vehicles;

	_myfpsmarker setMarkerColor "ColorGREEN";
	if ( _myfps < 30 ) then { _myfpsmarker setMarkerColor "ColorYELLOW"; };
	if ( _myfps < 20 ) then { _myfpsmarker setMarkerColor "ColorORANGE"; };
	if ( _myfps < 10 ) then { _myfpsmarker setMarkerColor "ColorBlack"; };

	_myfpsmarker setMarkerText format [ "%1: %2 fps, %3 units, %4 vehicles", _sourcestr, ( round ( _myfps * 100.0 ) ) / 100.0 , _localunits, _localvehicles ];

	sleep 15;
};
