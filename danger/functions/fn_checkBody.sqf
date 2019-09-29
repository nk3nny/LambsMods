// Check Body
// version 1.2
// by nkenny

// init
params ["_unit", "_pos", ["_range", 10]];

// check if stopped
if (stopped _unit || {!(attackEnabled _unit)}) exitWith {false};

// if too far away
if (_unit distance _pos > lambs_danger_CQB_range) exitWith {false};

// settings
vehicle _unit setVariable ["lamb_danger_lastAction",time + 20 + random 30];

// find body
_body = allDeadMen select {_x distance _pos < _range};

// Not checked? Move in close
if (count _body > 0 && {!(selectRandom _body getVariable ["lamb_danger_isChecked",false])}) exitWith {

	// do it
	[_unit,selectRandom _body] spawn {
		params ["_unit","_body","_bodyPos"];
		_bodyPos = getPosATL _body;
		_unit doMove _bodyPos;
		waitUntil {(_unit distance _bodyPos < 0.4) || {_unit getVariable ["lamb_danger_lastAction",0] < time} || {!alive _unit}};
		if (alive _unit && {!isNil str _body}) then {_unit action ["rearm",_body];};
	};

	// update variable
	(_body select 0) setVariable ["lamb_danger_isChecked",true,true];

	// debug
	if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc checking body (%1 %2m)",name _unit,round (_unit distance (_body select 0))];};

	// end
	true
};

// checked? Move in close
_unit doMove (_pos getPos [2 + random 10,random 360]);

// debug
if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc checking body area (%1m)",round (_unit distance _pos)];};

// end
true


