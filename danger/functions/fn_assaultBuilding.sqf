// Unit leader declares and finds valid building assault positions!
// version 1.2
// by nkenny

// init
params ["_unit", "_target", ["_range", 25]];

// already in CQB? exit
private _CQB = group _unit getVariable ["lamb_danger_isCQB",[]];
if (count _CQB > 0) exitWith {

	// too far away? Cancel list
	if (_unit distance (_CQB select 0) > 300) then {
		_CQB = [];
	};

	// Near enemy!
	if (_unit distance _target < lambs_danger_CQB_range && {alive _target}) then {
		_CQB pushBackUnique getPosATL _target;
	};

	// sort em
	_CQB = [_CQB,[],{_unit distance _x},"ASCEND"] call BIS_fnc_sortBy;

	// update variable
	group _unit setVariable ["lamb_danger_isCQB",_CQB];
};

// find buildingPos
private _buildings = [_target,_range,true,true] call lambs_danger_fnc_nearBuildings;

// sort em
_buildings = [_buildings,[],{_unit distance _x}, "ASCEND"] call BIS_fnc_sortBy;

// declare
group _unit setVariable ["lamb_danger_isCQB",_buildings];

// debug
if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc %1 declared CQB (%2m) (positions : %3)",side _unit,round (_unit distance2d _target),count _buildings];};

// end
true