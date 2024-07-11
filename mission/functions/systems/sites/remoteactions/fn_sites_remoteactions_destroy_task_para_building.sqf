params ["_task", "_explosiveClassname"];

private _building = _task getVariable ["para_g_building", objNull];

[_building, _task, _explosiveClassname] spawn {
	params ["_building", "_task", "_explosiveClassname"];
	sleep 15;
	private _bomb = createVehicle [_explosiveClassname, getPos _task, [], 0, "CAN_COLLIDE"];
	[_building, "onBuildingDeleted", [_building]] call para_g_fnc_building_fire_feature_event;
	[_building] call para_s_fnc_building_delete;
};
