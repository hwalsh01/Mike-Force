/*
    File: fn_ctf_opfor_lower_flag.sqf
    Author: "DJ" Dijksterhuis
    Public: No

    Description:
       Lower the flag on clients and server simulateneously.

       Flags lowered on server are not visibly lowered on client and vice versa.

       So this script has to be executed on every machine.

    Parameter(s):
        - _target -- flag we'll be raising
        - _maxProgress -- maximum number of steps to lower the flag height with

    Returns: nothing

    Example(s):
	[_target, 4] call vn_mf_fnc_ctf_opfor_lower_flag;
*/

params ["_target", "_progress", "_maxProgress", "_direction"];

private _tickRate = 3;

// only change things every 3 holdAction ticks to ensure we're not spamming clients
// with a massive amount of changes (always a total of 24 ticks)
if ((_progress mod _tickRate ) isEqualTo 0) then {

    private _startingFlagHeight = flagAnimationPhase _target;
    private _newHeight = _startingFlagHeight;

    // -1 ---> dac cong lowering the flag
    // +1 ---> bluefor raising the flag

    if (_direction isEqualTo -1) then {

        _newHeight = _startingFlagHeight - (_tickRate / _maxProgress);

        if (_newHeight <= 0) exitWith {

            // global command, no need to remoteExec
            deleteVehicle _target;

            // broadcast notification
            ["DacCongCapturedFlag", []] remoteExec ["para_c_fnc_show_notification", -2];

            // clear the JIP queue for flag height.
            remoteExec ["", "JIP_DACCONG_CTF_FLAG_HEIGHT"];
        };

    } else {

        _newHeight = _startingFlagHeight + (_tickRate / _maxProgress);

        if (_newHeight >= 1) exitWith {

            // broadcast the the new flag height globally with JIP ID (includes server)
            [_target, 1] remoteExec ["setFlagAnimationPhase", 0, "JIP_DACCONG_CTF_FLAG_HEIGHT"];

            // broadcast notification out to all players
            ["BlueforRaisedFlag", []] remoteExec ["para_c_fnc_show_notification", -2];

        };
    };
    // set the new height globally via JIP queue so new players also see the flag at the right height
    // includes changing it on the server
    [_target, _newHeight] remoteExec ["setFlagAnimationPhase", 0, "JIP_DACCONG_CTF_FLAG_HEIGHT"];
};

