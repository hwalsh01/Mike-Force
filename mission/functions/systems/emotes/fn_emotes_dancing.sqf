/*
    File: fn_emotes_dancing.sqf
    Author: @dijksterhuis
    Public: No
    
    Description:
    	Makes player start dancing.
    
    Parameter(s):
		None
    
    Returns:
	   	Nothing
    
    Example(s):
		call vn_mf_fnc_emotes_dancing;
*/

private _animations = [
	"Acts_Dance_01",
	"Acts_Dance_02"
];


private _currAnimation = configName (
	configFile >> getText (
		configFile >> "CfgVehicles" >> typeOf player >> "moves"
	) >> "States" >> (animationState player)
);

if (_currAnimation in _animations) exitWith {
	[player, ""] remoteExec ["switchMove", 0];
};

[player, (selectRandom _animations)] remoteExec ["switchMove", 0];
