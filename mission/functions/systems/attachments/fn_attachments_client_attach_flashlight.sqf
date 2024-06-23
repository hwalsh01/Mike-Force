/*
    File: fn_attach_vest_chemlight.sqf
    Author: 'DJ' Dijksterhuis
    Public: No

    Description:
        Attachs a chemlight of some colour to the player, also creating
        two light sources to create more of an aura (and make it easier to see).

        Execute this on the server. We'll broadcast remoteExecs out to other
        players if needed.

    Parameter(s):
        _player - Player we will be attaching to
        _classname - Chemlight class name (tells us the color)

    Returns: nothing

    Example(s): none
*/
params ["_interactedItem","_item","_magazineSize","_magazineSizeMax","_magazinesAmmoFull"];

private _interactedItem = uiNamespace getVariable ["vn_mf_interacted_item",[]];
if !(_interactedItem isEqualTo []) then {
  _interactedItem = _interactedItem select 1;
};

[player] call vn_mf_fnc_attachments_global_delete_all;

player removeItem _interactedItem;

// TODO: shouldn't need to JIP as createVehicle has global effect?
[player, _interactedItem] remoteExec ["vn_mf_fnc_attachments_server_attach_flashlight", 2];
