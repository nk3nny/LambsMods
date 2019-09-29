// Rotate tank to face enemy
// version 1.2
// by nkenny

/*
	Design:
		Find a spot to turn towards
		End script when Tank reasonably turned
		Inspiration by the work of alarm9k @ https://forums.bohemia.net/forums/topic/172270-smarter-tanks-script/
		Also thanks to Natalie.

	Arguments:
		0, vehicle which will do the movement <OBJECT>
		1, Direction which we wish to end up <SCALAR>
		2, acceptable threshold <SCALAR> (Default : 18)

*/

// init
params ["_unit", ["_target", [0,0,0]], ["_threshold", 18]];

// cannot move or moving
if (!canMove _unit || {currentCommand _unit == "MOVE"}) exitWith {true};
private _distance = _unit distance _target;
// CQB tweak
if (_distance < lambs_danger_CQB_range) exitWith {true};

// within acceptble limits
if (_unit getRelDir _target < _threshold || {_unit getRelDir _target > (360-_threshold)}) exitWith {true};

// settings
private _pos = [];
private _min = 15;	// Minimum range

for "_i" from 1 to 7 do {
	if (_pos isEqualTo []) then {
		_pos = (_unit getPos [_min * _i,_unit getDir _target]) findEmptyPosition [0, 2.2, typeOf _unit];

		// water
		if (count _pos > 0) then {if (surfaceIsWater _pos) then {_pos = []};};
	};
};

if (_pos isEqualTo []) exitWith {_pos = _unit modelToWorldVisual [0,-100,0]};

private _targetKnowledge = _unit targetKnowledge _target;
private _lookAtPos = (_targetKnowledge select 6);
_lookAtPos = _lookAtPos vectorAdd [_targetKnowledge select 5 * _distance, _targetKnowledge select 5 * _distance, 0];
{
	_x lookAt _lookAtPos;
	nil;
} count crew _unit;

// move
_unit doMove _pos;

// delay
_time = time + (5 + random 8);
waitUntil {sleep 0.1;(_unit getRelDir _target < _threshold || {_unit getRelDir _target > (360-_threshold)}) || {time > _time}};

// check vehicle
if (!canMove _unit || {count crew _unit < 1}) exitWith {false};

// refresh ready (For HC apparently)
effectiveCommander _unit doMove getPosASL _unit;

// refresh formation
group _unit setFormDir (_unit getDir _target);

// end
true