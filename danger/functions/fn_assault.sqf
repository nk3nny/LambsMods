// Clear buildings
// version 1.2
// by nkenny

// init
params ["_unit", ["_target", objNull], ["_range", 30]];

// check if stopped
//if (!(_unit checkAIFeature "PATH") || {!(_unit checkAIFeature "MOVE")}) exitWith {};
if (stopped _unit || {!(attackEnabled _unit)}) exitWith {false};

// settings
_unit setUnitPosWeak "UP";
vehicle _unit setVariable ["lamb_danger_lastAction",time + 14];

// exit if in CQB mode
private _CQB = group _unit getVariable ["lamb_danger_isCQB",[]];
if (count _CQB > 0) exitWith {

	// Ready units clear rooms
	//doStop _unit;

	// execute move
	if (unitReady _unit) then {
		// move
		_unit doMove (_CQB select 0);

		// if near meters -- clean up CQB lists
		if (_unit distance (_CQB select 0) < 15) then {
			_CQB deleteAt 0;
			group _unit setVariable ["lamb_danger_isCQB",_CQB];
		} else {

			// if stuck indoors -- teleport
			if (_unit distance (_CQB select 0) > 40 && {random 1 > 0.6} && {(LineIntersects [eyePos _unit, (eyePos _unit) vectorAdd [0,0,4]])}) then {
				_unit setVehiclePosition [getPos _unit, [], 5];
				if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc %1 teleport debug %2",side _unit,name _unit];};
			};
		};

	} else {

		if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc %1 assault CQB (positions : %2)",side _unit,count _CQB];};
		// visual indicator of range
		_unit setUnitPosWeak "MIDDLE";
	};

	// debug
};

// Near buildings + sort near positions + add target actual location
_buildings = [_target,_range,true,true] call lambs_danger_fnc_nearBuildings;
_buildings pushBack (getPosATL _target);
_buildings = _buildings select {_x distance2d _target < 4.5};

// exit without buildings? -- Assault or delay!
if (count _buildings < 2 && {random 1 > 0.3}) exitWith {

	// check indoors
	if (!(lineIntersects [eyePos _unit, (eyePos _unit) vectorAdd [0,0,6]]) || {random 1 > 0.5}) then {

		// execute move
		_unit doMove (_unit getHideFrom _target);

		// debug
		LOG_2("Danger.fnc %1 assaulting position (%2m)",side _unit,round (_unit distance2d _target));
	};
};

// execute move
_unit doMove selectRandom _buildings;

// debug
if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc %1 checking buildings (%2m)",side _unit,round (_unit distance2d _target)];}; 

// end
true