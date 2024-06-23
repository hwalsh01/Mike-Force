params ["_player"];

private _obs = attachedObjects _player select {
	toLower (typeOf _x) in [
		"#lightreflector",
		"chemlight_red",
		"chemlight_blue",
		"chemlight_green",
		"chemlight_yellow",
		"chemlight_blue_lit",
		"chemlight_green_lit",
		"chemlight_yellow_lit",
		"chemlight_red_lit",
		"vn_mx991",
		"vn_mx991_red",
		"vn_b_item_mx991_01"
	]
} apply {deleteVehicle _x};

// clean up the JIP queue
remoteExec ["", format ["vn_mf_bn_jip_attch_lightsrc_%1", getPlayerUID _player]];
