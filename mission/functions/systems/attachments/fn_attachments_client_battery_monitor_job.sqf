/*
    File: fn_attachments_client_battery_job.sqf
    Author: 'DJ' Dijksterhuis
    Public: No

    Description:
        Once the lightsources have 'run out of battery' remove them from the player.

        'Out of battery' is
        - 6 minutes for non-Spike Team.
        - 10 minutes for Spike Team.

        Runs on the client directly, so player should be accessible.

    Parameter(s): none.
    Returns: nothing
    Example(s):
        call vn_mf_fnc_attachments_client_battery_job;
*/

private _startTime = player getVariable ["vn_mf_bn_attch_battery_starttime", 0];
private _timeLimit = 60 * 6;
(player getUnitTrait "canAttachChemlights") && {_timeLimit = 10 * 60};
private _endTime = _startTime + _timeLimit;
(serverTime > _endTime) && {[player] call vn_mf_fnc_attachments_global_delete_all};