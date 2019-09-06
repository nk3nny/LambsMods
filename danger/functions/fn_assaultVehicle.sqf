// Assault with vehicle
// version 1.13
// by nkenny 

// init 
private _unit = param [0]; 
private _target = param [1]; 

//  onFoot and speed and Gunner check 
if (gunner vehicle _unit != _unit) exitWith {false};
if !(_target isKindOf "Man") exitWith {false}; 
if (speed vehicle _unit > 15) exitWith {false};

// settings 
vehicle _unit setVariable ["lastAction",time + 10 + random 16];
private _veh = vehicle _unit; 
private _indoor = !(lineIntersects [eyepos _target,(eyePos _target) vectorAdd [0,0,4]]); 

// delay 
sleep (2 + random 3); 
if (!canFire _veh) exitWith {false};

// find 
private _buildings = [(_unit getHideFrom _target),5,true,_indoor] call lambs_danger_fnc_nearBuildings;

// not indoor -- get positions of buildings 
//if (!_indoor) then {_buildings = _buildings apply {position _x;};};

// add predicted location -- just to ensure shots fired! 
_buildings pushBack (_unit getHideFrom _target);

// pos 
private _pos = AGLToASL ((selectRandom _buildings) vectorAdd [0.5 - random 1,0.5 - random 1,random 1]); 

// minor manoeuvres
[_unit,_pos] spawn lambs_danger_fnc_rotateVehicle; 

// shoot 
gunner _unit doSuppressiveFire ATLtoASL _pos;

// shoot cannon
_cannon = random 1 > 0.2; 
if (_cannon) then {
	_veh doWatch _pos;
	sleep (0.5 + random 1);
	_veh action ["useWeapon", _veh, gunner _veh,random 2];
}; 

// debug
if (lambs_danger_debug_functions) then {systemchat format ["Danger.fsm vehicle assault building (cannon: %1)",_cannon];}; 

// end 
true 