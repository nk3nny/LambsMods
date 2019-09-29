// Do Gesture
// version 1.2
// by nkenny

// init
params ["_unit", ["_gesture", ["gestureFreeze"]]];

// do it
_unit playActionNow selectRandom _gesture;

// settings
vehicle _unit setVariable ["lamb_danger_lastGesture",time + 15 + random 30];

// end
true