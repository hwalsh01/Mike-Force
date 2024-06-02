/*
	File: fn_veh_asset_bn_macv_force_respawn.sqf
	Author: 'DJ' Dijksterhuis
	Public: No

	Description:
		Forcibily, but safely, respawns a vehicle.

	Parameter(s):
		_spawnPointId - Id of spawn point [String]

	Returns: nothing

	Example(s): none
*/

params ["_spawnPointId"];

private _spawnPoint = vn_mf_veh_asset_spawn_points get _spawnPointId;
private _respawnType = _spawnPoint get "settings" get "respawnType";
private _vehicle = _spawnPoint getOrDefault ["currentVehicle", objNull];

if (_respawnType == "WRECK") then {
	deleteVehicle _vehicle;
	[_spawnPoint] call vn_mf_fnc_veh_asset_set_repairing;
};
if (_respawnType == "RESPAWN") then {
	[_spawnPoint] call vn_mf_fnc_veh_asset_set_respawning;
};
