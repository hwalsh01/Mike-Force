/*
	File: fn_ctf_broadcast_notify_immediate.sqf
	Author: "DJ" Dijksterhuis
	Public: No

	Description:
	   Display a notification for all players via a remoteExec callback.

	   Used to perform a global notification broadcast out to all players
	   from a specific player locality.

	   player -> server -> all players

	   Means the specific player client isn't sending out remoteExec instructions to
	   all connected players, hopefully mitigating some desync/latency issues and enabling
	   use to implement a CfgRemoteExec later on.

	   TODO: Refactor this out to core/helpers?

	Parameter(s):
		- _notificationClass -- class name of the notification to show [STRING]

	Returns: nothing

	Example(s):
		// from player locality
		// remote execs to this script from server
		// which then remoteExecs a notification for all players
		["FireInTheHole"] remoteExec ["vn_mf_fnc_ctf_broadcast_notify_immediate", 2];
*/

params ["_notificationClass"];

[_notificationClass, []] remoteExec ["para_c_fnc_show_notification", -2];