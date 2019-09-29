// Call friendly artillery
// version 1.0
// by nkenny

/*

	Calls friendly artillery on target location!

	Arguments
		0, unit doing the calling 	[Object]
		1, target of artillery 		[Object or Object]

	Other
		Thanks Alex2k for doing the basic grunt work

*/

// init
params ["_unit", "_target"];

// check if mod active
if (!lambs_danger_WP) exitWith {if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc Artillery mode not enabled",""]}};

// sort target
private _pos = _target call bis_fnc_position;
if (_unit distance _pos < 100) exitWith {if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc %1 Artillery failed -- target too close",side _unit]}};

// settings
private _artillery = missionNamespace getVariable ["lambs_artillery_" + str (side _unit),[]];
_artillery select {
	canFire _x && {unitReady _x} && {_pos inRangeOfArtillery [[_x],getArtilleryAmmo [_gun] select 0]};
};

// exit on no ready artillery
if (count _artillery < 1) exitWith {if (lambs_danger_debug_functions) then {systemchat format ["Danger.fnc %1 Artillery failed -- no available artillery",side _unit]}};

// perform it
[selectRandom _artillery,_pos] spawn lambs_wp_fnc_taskArtillery;

// end
true