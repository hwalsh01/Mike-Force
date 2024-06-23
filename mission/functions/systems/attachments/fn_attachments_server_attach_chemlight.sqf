/*
    File: fn_attachments_server_attach_chemlight.sqf
    Author: 'DJ' Dijksterhuis
    Public: No

    Description:
        Does the heavy lifting.

        Attachs a chemlight of some colour to the player, also creating
        two light sources to create more of an aura (and make it easier to see).

        Execute this on the server as we need to remoteExecs to other players
        for the light sources to sync up.

    Parameter(s):
        _player - Player we will be attaching to
        _classname - Chemlight class name (tells us the color)

    Returns: nothing

    Example(s):
      [player, "Chemlight_blue"] remoteExec ["vn_mf_fnc_attachments_server_attach_chemlight", 2];
*/

params ["_player", "_classname"];

private _chemlight = _classname createVehicle (_player modelToWorld [0, 0, -1]); 
_chemlight attachTo [_player,  [0, 0.15, 0.1], "Pelvis", true];
_chemlight setDir 280;
_chemlight setPosWorld getPosWorld _chemlight;

// execute globally so all players and AI etc can see the light sources
// jip executed to ensure joining players also get the attached light source
[_player, _classname] remoteExec [
  "vn_mf_fnc_attachments_lightsources_chemlight",
  0,
  format [
    "vn_mf_bn_jip_attch_lightsrc_%1",
    getPlayerUID _player
  ]
];
