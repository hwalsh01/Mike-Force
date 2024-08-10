/*
	File: fn_ctf_broadcast_notify_immediate.sqf
	Author: "DJ" Dijksterhuis
	Public: No

	Description:
	   Display a notification for all players (not server).

	Parameter(s):
		- _notificationClass -- class name of the notification to show [STRING]

	Returns: nothing

	Example(s):
		["FireInTheHole"] call vn_mf_fnc_ctf_broadcast_notify_immediate;
*/

params ["_notificationClass"];

[_notificationClass, []] remoteExec ["para_c_fnc_show_notification", -2];