// Hide in buildings
// verison 1.21
// by nkenny

// init
params ["_unit", "_target", ["_range", 55]];

// stopped -- exit
//if (attackEnabled _unit) exitWith {false};

// buildings
private _buildings = [_unit,_range,true,true] call lambs_danger_fnc_nearBuildings;

// settings
_unit forceSpeed selectRandom [-1,24,25];
vehicle _unit setVariable ["lamb_danger_lastAction",time + 120 + random 60];

// Randomly scatter into buildings or hide!
if (count _buildings > 0) then {
	doStop _unit;
	_unit doMove selectRandom _buildings;
	_unit setUnitPosWeak "MIDDLE";
	if (lambs_danger_debug_functions) then {systemchat "Danger.fnc hide in building";};
} else {
	// Get General Target Position
	private _targetPos = (_unit getPos [50 + random _range,(_target getDir _unit) + 45 - random 90]);
	// Find Surrounding Bushes and Rocks
	private _objs = nearestTerrainObjects [_targetPos, ["BUSH", "ROCK", "ROCKS"], 5];
    if !(_objs isEqualTo []) then {
		// if a Rock or Bush is found set it as target Pos
		_targetPos = getPos (selectRandom _objs);
    };
	_unit doMove _targetPos;
	_unit setUnitPosWeak "DOWN";
	if (lambs_danger_debug_functions) then {systemchat "Danger.fnc hide in bush";};
};

// end
true