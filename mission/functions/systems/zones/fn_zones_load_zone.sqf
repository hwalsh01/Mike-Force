/*
	File: fn_zones_load_zone.sqf
	Author: Savage Game Design
	Public: Yes
	
	Description:
		Loads a zone.
	
	Parameter(s):
		_zoneId - Id of zone to load [STRING]
	
	Returns:
		Zone data [ARRAY]
	
	Example(s):
		[localNamespace getVariable "zone_ba_ria"] call vn_mf_fnc_zones_save_zone;
*/

params ["_zoneId"];


["GET", "zone_data" + (_zoneId), []] call para_s_fnc_profile_db params ["", "_savedData"];

if (_savedData isEqualTo []) then 
{
	_savedData = 
	[
		//Version
		2,
		//Zone
		_zoneId,
		//Captured
		false,
		// default initial task state
		mf_s_zone_first_task
	];
};

private _zoneData = [] call struct_zone_fnc_create;
_zoneData set [struct_zone_m_marker, _zoneId];

private _version = _savedData select 0;

_savedData params [
	"_version",
	"_zoneMarker",
	"_captured",
	["_task", mf_s_zone_first_task]  // optional for back compat
];

// tasks could have dependencies on other tasks being completed
// need to go back and redo those ones instead of starting with
// the latest task.
// tl;dr: this is the "capture_zone" task needing "prepare_zone"
// for the site generation.
_task = mf_s_zone_next_tasks get _task get "init";

_zoneData set [struct_zone_m_marker, _zoneMarker];
_zoneData set [struct_zone_m_captured, _captured];
_zoneData set [struct_zone_m_task, _task];

_zoneData
