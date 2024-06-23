/*
	File: fn_attach_vest_flashlight.sqf
	Author: Savage Game Design
	Public: No

	Description:

		Called on the server.

	Parameter(s):
		_player - Water level [Number]
		_food - Food level [Number]
		_item - item class [String]

	Returns: nothing

	Example(s): none
*/

params ["_player", "_classname"];

private _colorAmbient = [0, 0, 0];
private _colorLight = [0, 0, 0];
private _vectorDir = [0.555, -1, -0.3];

// the classnames when flashlights are in player inventories cannot be used with
// createVehicle because they do not refer to "AI units"
// so hardcode the standard flashlight model, then we'll build a light source for it
private _flashlight = "vn_b_item_mx991_01" createVehicle (_player modelToWorld [0, 0, 0]); 
_flashlight attachTo [_player,  [0.05, 0.1, -0.1], "LeftShoulder", true];
_flashlight setVectorDirAndUp [_vectorDir, [0, -0.1, 0.8]];

// execute globally so all players and AI etc can see the light sources
// jip executed to ensure joining players also get the attached light source
[_player, _classname, _vectorDir] remoteExec [
    "vn_mf_fnc_attachments_lightsources_flashlight",
    0,
    format [
        "vn_mf_bn_jip_attch_lightsrc_%1",
        getPlayerUID _player
    ]
];
