/*
	File: fn_action_destroy_task.sqf
	Author: Cerebral
	Public: No
	
	Description:
		Pops a task
	
	Parameter(s): none
	
	Returns:
	
	Example(s):
		call vn_mf_fnc_action_destroy_task;
*/

private _objAttachTo = player;
private _title = "Bury";
private _idleIcon = "custom\holdactions\holdAction_interact_ca.paa";
private _idleProgress = "custom\holdactions\holdAction_interact_ca.paa";

// the str {} trim trick here means we can write stuff that highlights in an ide
// as sqf, but we make it turns into a string for the holdAction argument to compile later
// plus we can do some performance optimisation on the condition to progress statement...
// --> action conditions are checked on each frame.
private _conditionToShowString = str {
	call {
		// stuff players can destroy
		private _classNames = [
			"Land_vn_b_prop_body_01",
			"Land_vn_b_prop_body_01_02",
			"Land_vn_b_prop_body_02",
			"Land_vn_b_prop_body_02_02"
		];

		private _res = (
			(side player != east)
			&& {
				(typeOf cursorObject in _classNames)
			&& {
				// 1.75m base distance plus object largest dimension divided by 2
				(player distance cursorObject < (1.75 + (sizeOf (typeOf cursorObject)) / 2))
			}
			}
		);
		_res;
	};
} trim ["{}", 0];

private _conditionToProgressString = _conditionToShowString;
private _codeOnStart = {};
private _codeOnProgressTick = {};
private _codeOnCompletion =	{
	[cursorObject, {

		private _startTime = serverTime;

		_this setVariable ["vn_mf_sites_object_zfixer_ignore", true];
		_this enableSimulationGlobal false;

		while {true} do {
			private _newPos = [
				(getPosATL _this) # 0,
				(getPosATL _this) # 1,
				((getPosATL _this) # 2) - 0.01
			];
			_this setPosATL _newPos;
			sleep 0.005;

			// should be hidden now (hopefully)
			// TODO: we can generalise this to other objects by finding the maximum dimension.
			if ((_newPos # 2) < -1) then {break};
			// failsafe incase body refuses to clip through the ground
			if (serverTime > _startTime + 2) then {break};
		};
		deleteVehicle _this;
	}] remoteExec ["spawn", 2];
};
private _codeOnInterrupted = {};
private _args = [];
private _duration = 5;
private _priority = 100;
private _removeWhenCompleted = false;
private _showWhenunconscious = false;

[
	_objAttachTo,
	_title,
	_idleIcon,
	_idleProgress,
	_conditionToShowString,
	_conditionToProgressString,
	_codeOnStart,
	_codeOnProgressTick,
	_codeOnCompletion,
	_codeOnInterrupted,
	_args,
	_duration,
	_priority,
	_removeWhenCompleted,
	_showWhenunconscious
] call BIS_fnc_holdActionAdd;
