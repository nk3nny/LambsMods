// Panic soldier
// version 1.2
// by nkenny

/*
	Types
	0 "GESTURE",
	1 "PANIC",
	2 "HIDE",
	3 "SUPPRESSION",
	4 "SPRINT",
	5 "CRAWL"
*/

// init
params ["_unit", "_target", ["_random", [0,0,1,1,1,1,2,2,3], []]];

// near enemy
if (_unit distance _target < 35) exitWith {false};

// settings
_random = selectRandom _random;
_unit setVariable ["lamb_danger_isPanicked",true];

// debug
if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc ** %1 in panic (%2)** ",name _unit,["Gesture","Panic","Hide","Suppression","Sprint","Crawl"] select _random];};

// effects Gesture
if (_random isEqualTo 0) exitWith {

	// do gesture
	_unit forceSpeed -1;
	_unit setUnitPos "MIDDLE";
	[_unit,["gestureCeaseFire","EvasiveLeft","EvasiveRight",selectRandom ["FastB","FastLB","FastRB"],"MountSide"]] call lambs_danger_fnc_gesture;
	_unit setVariable ["lamb_danger_isPanicked",false];
};

// effects momentary panic
if (_random isEqualTo 1) exitWith {

	// timer
	_timer = 6 + random 4;

	// execute panick
	_unit forceSpeed 0;
	_unit setUnitPosWeak "MIDDLE";
	_unit playMoveNow selectRandom ["AmovPercMstpSnonWnonDnon_Scared","AmovPercMstpSnonWnonDnon_Scared2"];

	// reset panick
	[_unit,_timer] spawn {
		params ["_unit","_timer"];
		sleep _timer;
		if (!alive _unit) exitWith {};
		_unit setVariable ["lamb_danger_isPanicked",false];
	};
};

// effects hide
if (_random isEqualTo 2) exitWith {

	// timer
	_timer = 12 + random 12;

	// do do hide!
	[_unit,_target,55] call lambs_danger_fnc_hideInside;

	// reset panick
	[_unit,_timer] spawn {
		params ["_unit","_timer"];
		sleep _timer;
		if (!alive _unit) exitWith {};
		_unit doFollow leader group _unit;
		_unit setVariable ["isPanicked",false];
	};
};

// effects Random suppression!
if (_random isEqualTo 3) exitWith {

	// timer
	_timer = 2 + random 4;

	// go prone
	_unit forceSpeed 0;

	// chance for random suppression
	_object = nearestObjects [_unit,["All"],100,true];
	_unit doSuppressiveFire ((getPosASL selectRandom _object) vectorAdd [random 4,random 4, random 5]);
	//_unit doWatch getPosASL (selectRandom _object);
	[_unit,_object] spawn {
		params ["_unit","_object"];
		if (primaryWeapon _unit isEqualTo "") exitWith {};
		while {alive _unit && {_unit getVariable ["lamb_danger_isPanicked",false]} && {!(_unit getVariable ["ACE_isUnconscious",false])}} do {
			_unit forceWeaponFire [(weapons _unit) select 0, selectRandom (getArray (configFile >> "CfgWeapons" >> ((weapons _unit) select 0) >> "modes"))];
			_unit lookAt selectRandom _object;
			_unit forceSpeed 24;
			sleep 0.1;
		};
	};

	// reset panick
	[_unit,_timer] spawn {
		params ["_unit","_timer"];
		sleep _timer;
		if (!alive _unit) exitWith {};
		_unit forceSpeed -1;
		_unit setVariable ["lamb_danger_isPanicked",false];
		_unit playMoveNow selectRandom ["AmovPercMstpSnonWnonDnon_Scared","AmovPercMstpSnonWnonDnon_Scared2"];
	};
};

// ---------------------------
//    NOT USED BENEATH HERE
// ---------------------------

// effects sprint/rush
if (_random isEqualTo 4) exitWith {

	// timer
	_timer = 8 + random 4;

	// remove weapons
  	_weapons = weapons _unit;
  	removeAllWeapons _unit;

	// execute move
	_unit setUnitPos "MIDDLE";
	_unit playMoveNow selectRandom ['ApanPknlMsprSnonWnonDf','ApanPercMsprSnonWnonDf'];
    if (unitReady _unit) then {_unit doMove (_unit getPos [100 + random 100,((_unit getDir _target) + 30 - random 60)])};

	// reset panick
	[_unit,_timer,_weapons] spawn {
		params ["_unit","_timer","_weapons"];
		sleep _timer;
		if (!alive _unit) exitWith {};
		_unit setVariable ["lamb_danger_isPanicked",false];
		_unit switchMove "AmovPknlMrunSrasWrflDfr_ldst";
		_unit playActionNow "Civil";
		{_unit addWeapon _x;true} count _weapons;	// return weapons
	};
};

// effects crawl

// timer
_timer = 15 + random 12;

// execute move
_unit playMoveNow selectRandom ['ApanPpneMsprSnonWnonDf','ApanPpneMrunSnonWnonDf',"ApanPpneMstpSnonWnonDnon_G01","ApanPpneMstpSnonWnonDnon_G02","ApanPpneMstpSnonWnonDnon_G03"];
if (unitReady _unit) then {_unit doMove (_unit getPos [100 + random 100,((_target getDir _unit) + 30 - random 60)])};

// remove weapons
private _weapons = weapons _unit;
removeAllWeapons _unit;

// reset panick
[_unit,_timer,_weapons] spawn {
	params ["_unit","_timer","_weapons"];
	sleep _timer;
	if (!alive _unit) exitWith {};
	sleep 3;
	_unit setVariable ["lamb_danger_isPanicked",false];
	_unit switchMove "AmovPpneMstpSrasWrflDnon_turnL";
	_unit playActionNow "CivilLying";
	{_unit addWeapon _x;true} count _weapons;	// return weapons
};

// end
true