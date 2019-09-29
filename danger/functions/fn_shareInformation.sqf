// Share information
// version 1.2
// by nkenny

/*
	Design
		Rank increases range information is shared
*/

// init
params ["_unit", "_target", ["_range", 350]];

// settings
_unit setVariable ["lamb_danger_lastGesture",time + 120];

// nil
if (_unit knowsAbout _target < 1 || {_unit distance _target > 3000}) exitWith {false};

// range
_range = [rank _unit,_range] call {
	params ["_rank","_range"];
	if (_rank isEqualTo "SERGEANT") exitWith {500};
	if (_rank isEqualTo "LIEUTENANT") exitWith {800};
	if (_rank isEqualTo "CAPTAIN") exitWith {1000};
	if (_rank isEqualTo "MAJOR") exitWith {2000};
	if (_rank isEqualTo "COLONEL") exitWith {3000};
	_range
};

// find units
private _grp = allGroups select {local _x && {side _x isEqualTo side _unit} && {leader _x distance2d _unit < _range} && {_x != group _unit}};

// share information
{
	_x reveal [_target,_unit knowsAbout _target];
	true
} count _grp;

// debug
if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc share information (%1 knows %2 to %3 groups at %4m range)",side _unit,_unit knowsAbout _target,count _grp,_range];}; 

// end
true