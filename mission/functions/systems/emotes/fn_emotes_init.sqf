/*
	File: fn_emotes_init.sqf
	Author: @dijksterhuis
	Public: No

	Description:
		Initialise emote system.

		Builds the wheel menu options and stores them in the player's
		uiNamespace for later use.

	Parameter(s):
		_player: OBJECT: Player we're initialising the system for.

	Returns:
		Nothing

	Example(s):
		call vn_mf_fnc_emotes_init;
*/

params ["_player"];

uiNamespace setVariable ["vn_mf_bn_emotes_menu_actions", []];

private _fnc_setup_action = {
	params [
		"_name",
		"_method",
		"_action",
		["_icon", "\A3\ui_f\data\map\markers\nato\n_unknown.paa"],
		["_iconColorCodes", [
			[0.1,1,1,1],
			[1,1,1,1]
		]],
		["_selectorColorCodes", [
			[0.1,1,1,1],
			[1,1,1,1]
		]]
	];
	createHashMapFromArray [
		["text", _name],
		["iconPath", _icon],
		["spawnFunction", false],
		["functionArguments", [_player, _method, _action]],
		["function", "vn_mf_fnc_emotes_emote_toggle"],
		["iconColorCodes", _iconColorCodes],
		["selectorColorCodes", _selectorColorCodes]
	]
};

private _fnc_setup_category = {
	params [
		"_name",
		"_data",
		["_icon", "\A3\ui_f\data\map\markers\nato\n_unknown.paa"]
	];
	createHashMapFromArray [
		["text", _name],
		["iconPath", _icon],
		["submenuActions", _data],
		["iconColorCodes", [
			[0.1,1,1,1],
			[1,1,1,1]
		]],
		["selectorColorCodes", [
			[0.1,1,1,1],
			[1,1,1,1]
		]]
	]
};

/*
Read config data located at mission\config\subconfigs\emotes.hpp

- `seq` --> will play a sequence of animations one after the other.
- `loop` --> these animations are looped and there's no end point to them.

*/
private _fnc_create_categories_from_config = {
	params ["_configName"];
	private _config = "isClass(_x)" configClasses (missionConfigFile >> "gamemode" >> "emotes" >> _configName);

	private _results = [];

	(_config) apply {

		private _cls = _x;

		private _options = getArray (_cls >> "options");
		private _catName = getText (_cls >> "title");
		private _catIcon = getText (_cls >> "icon");
		// maximum 9 options
		_options resize (9 min (count _options));

		private _submenuActions = _options select {(_x isEqualType []) && (count _x == 2) } apply {
			private _actionName = _x select 0;
			private _actionStr = _x select 1;

			private _act = [_actionName, _configName, _actionStr, _catIcon] call _fnc_setup_action;
			_act
		};

		private _submenuActionsSorted = [_submenuActions, [], {_x get "text"}, "DESCEND"] call BIS_fnc_sortBy;
		private _cat = [_catName, _submenuActionsSorted, _catIcon] call _fnc_setup_category;

		if (count _results >= 9) exitWith {false};
		_results pushBackUnique _cat;
	};

	[_results, [], {_x get "text"}, "DESCEND"] call BIS_fnc_sortBy
};

private _looped = ["loop"] call _fnc_create_categories_from_config;
private _seqd = ["seq"] call _fnc_create_categories_from_config;

// initial action is the "stop doing the current aniamtion" option
private _actionInitial = [
	"Stop Animation(s)",
	"loop", // `switchMove` hard cancel
	"", 	// `switchMove` to 'nothing' animation
	"\A3\ui_f\data\map\groupicons\waypoint.paa",
	[[1,0,0,1], [1,0,0,1]],
	[[1,0,0,0.4], [1,0,0,1]]
] call _fnc_setup_action;

private _loopedCategory = [
	"Looped Animations",
	_looped,
	"\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa"
] call _fnc_setup_category;

private _seqdCategory = [
	"Single Animations",
	_seqd,
	"\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa"
] call _fnc_setup_category;

uiNamespace setVariable [
	"vn_mf_bn_emotes_menu_actions",
	[_actionInitial, _loopedCategory, _seqdCategory]
];
