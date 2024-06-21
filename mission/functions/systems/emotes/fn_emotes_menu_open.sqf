/*
    File: fn_emotes_menu_open.sqf
    Author: @dijksterhuis
    Public: No
    
    Description:
    	Opens the emotes wyheel menu.

    	Runs locally on the client.
    
    Parameter(s):
		None
    
    Returns:
	   	Nothing
    
    Example(s):
		call vn_mf_fnc_emotes_menu_open;
*/

private _isIncapacitated = [player] call para_g_fnc_unit_is_incapacitated;
if (_isIncapacitated) exitWith { false };

private _actions = uiNamespace getVariable ["vn_mf_bn_emotes_menu_actions", []];

if (count _actions < 1) exitWith {
	diag_log format ["Emote Menu actions not set up correctly."];
};

[_actions, player, false] call para_c_fnc_wheel_menu_open;
