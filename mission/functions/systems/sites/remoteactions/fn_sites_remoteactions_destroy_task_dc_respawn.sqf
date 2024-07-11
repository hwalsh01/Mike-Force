/*
	File: fn_action_init.sqf
	Author: Cerebral
	Modified: @dijksterhuis
	Public: No
	
	Description:
		Init player actions
	
	Parameter(s): none
	
	Returns:
	
	Example(s):
		call vn_mf_fnc_action_init;
*/

params ["_task"];

private _respawnInfo = _task getVariable ["vn_respawn", []];

if !(_respawnInfo isEqualTo []) then
{
	private _marker = _respawnInfo # 0;
	private _respawnID = _respawnInfo # 1;

	_respawnID call BIS_fnc_removeRespawnPosition;
	deleteMarker _marker;

	// pop removed spawn from global list of DC spawns
	vn_dc_adhoc_respawns = vn_dc_adhoc_respawns select { !(_x isEqualTo _respawnInfo) } ;
	publicVariable "vn_dc_adhoc_respawns";
};
