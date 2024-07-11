/*
	File: sites_remoteactions_destroy_task.sqf
	Author: Cerebral
	Modified: @dijksterhuis
	Public: No
	
	Description:
		Pops a task
	
	Parameter(s): none
	
	Returns:
	
	Example(s):
		[_object, _player] call vn_mf_fnc_sites_remoteactions_destroy_task;
*/

params ["_task", "_explosiveClassname"];

[_task, _explosiveClassname] spawn {
	params ["_task", "_explosiveClassname"];
	sleep 30;
	private _bomb = createVehicle [_explosiveClassname, getPos _task, [], 0, "CAN_COLLIDE"];
	_bomb setDamage 1;
	deleteVehicle _task;
};