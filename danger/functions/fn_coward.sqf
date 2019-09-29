// check to see if unit should be coward
// version 1.2
// by nkenny

// init
params ["_unit", "_target"];

// vehicles exit
if (!isNull objectParent _unit) exitWith {false};

// no weapons? exit
if (count weapons _unit < 1) exitWith {true};

// infantry exit -- but count!
if (isNull objectParent _target) exitWith {
	private _check = (((count (units group _unit)) + 2) < ((count units group _target) / 3)) || {fleeing _unit};
	_check
};

// Enemy vehicles?
_enemyVehicle = _target isKindOf "Tank" || {_target isKindOf "Air"};
_noLauncher = secondaryWeapon _unit isEqualTo "";

// tough vehicle and no launcher
if (_enemyVehicle && {_noLauncher}) exitWith {true};

// else
false