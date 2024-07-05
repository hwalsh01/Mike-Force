/*
    File: fn_director_process_active_zone.sqf
    Author: Spoffy
    Date: 2023-01-07
    Last Update: 2023-01-07
    Public: Yes
    
    Description:
	   	Checks the current status of the zone, and handles the flow for that zone if needed.
		For example, creating a new task or completing the zone.
    
    Parameter(s):
		_zone - The zone name [STRING]
    
    Returns:
	   	Nothing
    
    Example(s):
		["zone_ba_ria"] call vn_mf_fnc_director_process_active_zone;
*/

params ["_zone"];

if !(_zone in mf_s_dir_activeZones) exitWith {
	["WARNING", format ["Attempted to process inactive zone '%1'", _zone]] call para_g_fnc_log;
};

private _zoneInfo = mf_s_dir_activeZones get _zone;

private _currentState = _zoneInfo get "state";
private _task = _zoneInfo get "currentTask";
private _taskIsCompleted = [_task] call vn_mf_fnc_task_is_completed;
private _taskResult = _task getVariable ["taskResult", ""];

private _fnc_start_next_task = {
	params ["_zone", "_currentState", "_currentResult"];

	private _nextState = mf_s_zone_next_tasks get _currentState get _currentResult;

	[
		"INFO",
		format ["Zone '%1' phase '%2' %3, starting next task '%4'", _zone, _currentState, _currentResult, _nextState]
	] call para_g_fnc_log;

	private _nextTask = (([_nextState, _zone] call vn_mf_fnc_task_create) # 1);

	_zoneInfo set ["state", _nextState];
	_zoneInfo set ["currentTask", _nextTask];

	[_zone, struct_zone_m_task, _nextState] call vn_mf_fnc_zones_update_zone;

};

if (_taskIsCompleted) then {

	if (_taskResult isEqualTo "FAILED") exitWith {
		[_zone, _currentState, "failure"] call _fnc_start_next_task;
	};

	if (_currentState isEqualTO mf_s_zone_last_task) exitWith {
		[
			"INFO",
			format ["Zone '%1' phase '%2' successful, completing zone", _zone, _currentState]
		] call para_g_fnc_log;

		[_zone] call vn_mf_fnc_director_complete_zone;
	};

	[_zone, _currentState, "success"] call _fnc_start_next_task;

};

