/*
    File: fn_teams_comms_switchers_onoff.sqf
    Author: @dijksterhuis
    Public: No
    
    Description:
    	Switch on/off player's custom comms channel.

    	To be used with paradigm's keybinding menu, or buttons in the task roster.

    	Called by other functions in this folder, which are called by the keybind presses / menu clicks.
    
    Parameter(s):
		None
    
    Returns:
	   	Nothing
    
    Example(s):
		[3, "CFF"] call vn_mf_fnc_teams_comms_switchers_onoff;
*/

params ["_custom_channel_id", "_channel_name"];

if (11 < _custom_channel_id || _custom_channel_id < 0) exitWith {
	diag_log format ["[ERROR] Custom channel ids must be between 1 and 15: channelId=%1", _custom_channel_id];
};

private _global_channel_id = 15 min (6 max (_custom_channel_id + 5));

private _fnc_notification = {
	params [["_action", "err"], ["_name", "err"]];
	[_action, [_name]] call para_c_fnc_show_notification;
};

(channelEnabled _global_channel_id) params ["", "_isVoiceEnabled"];

if (_isVoiceEnabled) then {
	_custom_channel_id radioChannelRemove [player];
	_global_channel_id enableChannel [false, false];
	["CommsDisabled", [_channel_name]] call para_c_fnc_show_notification;
} else {
	_custom_channel_id radioChannelAdd [player];
	_global_channel_id enableChannel [true, true];
	setCurrentChannel _global_channel_id;
	["CommsEnabled", [_channel_name]] call para_c_fnc_show_notification;
};

