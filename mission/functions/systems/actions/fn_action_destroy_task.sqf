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

// stuff players can destroy
private _classNames = [
	// generic obj ammo crates etc
	'Land_vn_pavn_launchers',
	'vn_b_ammobox_01',
	'Land_vn_pavn_weapons_wide',
	'Land_vn_pavn_weapons_cache',
	'Land_vn_pavn_ammo',
	'Land_vn_pavn_weapons_stack1',
	'Land_vn_pavn_weapons_stack2',
	'Land_vn_pavn_weapons_stack3',
	'vn_b_ammobox_full_02',
	'vn_o_ammobox_wpn_04',
	'vn_o_ammobox_full_03',
	'vn_o_ammobox_full_07',
	'vn_o_ammobox_full_06',
	'vn_o_ammobox_02',
	"vn_o_ammobox_08",
	"vn_b_ammobox_09",
	'Land_CratesWooden_F',
	//arty sites
	"vn_o_nva_navy_static_mortar_type63",
	"vn_o_nva_navy_static_mortar_type53",
	"vn_o_nva_65_static_mortar_type53",
	"vn_o_nva_65_static_mortar_type63",
	"vn_o_nva_static_mortar_type53",
	"vn_o_nva_static_mortar_type63",
	"vn_o_vc_static_mortar_type53",
	"vn_o_vc_static_mortar_type63",
	"vn_o_nva_65_static_d44",
	"vn_o_nva_65_static_d44_01",
	"vn_o_nva_navy_static_d44",
	"vn_o_nva_navy_static_d44_01",
	"vn_o_nva_static_d44",
	"vn_o_nva_static_d44_01",
	"vn_o_vc_static_d44",
	"vn_o_vc_static_d44_01",
	// campsite only
	'Land_vn_o_shelter_06',
	// AA site
	'vn_o_nva_navy_static_zpu4',
	'vn_o_nva_65_static_zpu4',
	"vn_o_nva_static_zpu4",
	// mortar / art obj
	'vn_o_nva_navy_static_mortar_type63',
	'vn_o_nva_65_static_mortar_type53',
	'vn_o_nva_static_d44_01',  
	'vn_o_nva_navy_static_mortar_type63',
	'vn_o_nva_65_static_mortar_type53',
	'vn_o_nva_static_d44_01',
	// factory specific + one of the old radar compositions?
	'Land_vn_wf_vehicle_service_point_east',
	// radar / sa2 site
	'vn_sa2',
	'vn_o_static_rsna75',
	// tunnel
	'Land_vn_o_trapdoor_01',
	'Land_vn_o_platform_04'  // dac cong resapwn
];

// stuff players can destory formatted as a list
private _objString = format ["['%1']", _classNames joinString "', '"];

private _objAttachTo = player;
private _title = "Destroy";
private _idleIcon = "custom\holdactions\holdAction_destroy_ca.paa";
private _idleProgress = "custom\holdactions\holdAction_destroy_ca.paa";

// all the checks formatted as a single string
private _conditionToShowString = format ["(%1)",
	[
		format ["typeOf cursorObject in %1", _objString],
		"player distance cursorObject < (1 + (sizeOf (typeOf cursorObject)) / 2)",
		"side player != east",
		// the vn_tunnel module sets this variable globally,
		// meaning we should be able to inspect it locally as
		// a player (holdAction is player local)
		"(isNull (cursorObject getVariable ['vn_tunnel_tunnel_object', objNull]))"
	] joinString " && "
];
private _conditionToProgressString = "player distance cursorObject < (1 + (sizeOf (typeOf cursorObject)) / 2)";
private _codeOnStart = {};
private _codeOnProgressTick = {};
private _codeOnCompletion =	{
	[cursorObject, player] remoteExec ["vn_mf_fnc_sites_remoteactions_destroy_task", 2];
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
