/*
	File: fn_action_reraise_flag.sqf
	Author: "DJ" dijksterhuis
	Public: No
	
	Description:
		Dac Cong players have lowered a mission critical (player built)
		flag in a base. Bluefor need to raise it to 100% again.

		WARNING: This is attached to **PLAYERS**, running in **player** locality.

	Parameter(s): none
	
	Returns:
	
	Example(s):
		call vn_mf_fnc_action_reraise_flag;
*/

private _actionText = format ["<t color='#0000FF'>%1</t>", "Raise Flag"];
private _actionIdleIcon = "custom\holdactions\holdAction_interact_ca.paa";
private _actionProgressIcon = "custom\holdactions\holdAction_interact_ca.paa";

private _isNotOpfor = "side player == west";
private _isInRangeOf = "player distance cursorObject < 5";
private _validFlagsArr = "['vn_flag_usa', 'vn_flag_aus', 'vn_flag_arvn', 'vn_flag_nz']";
private _isValidObjectType = format [
	"typeOf cursorObject in %1",
	_validFlagsArr
];
private _isObjectiveFlag = "!(isNil 'vn_mf_bn_dc_target_flag') && (cursorObject == vn_mf_bn_dc_target_flag)";
private _isFlagLowered = "(flagAnimationPhase cursorObject) != 1";

// bluefor can raise the flag only if it has been lowered
private _conditionToShow = format [
        "(%1 && %2 && %3 && %4 && %5)",
        _isNotOpfor,
        _isInRangeOf,
        _isValidObjectType,
        _isObjectiveFlag,
        _isFlagLowered
];

private _conditionToProgress = "true";

private _codeOnStart = {
	params ["_target", "_caller", "_actionId", "_arguments"];
	allPlayers apply {["BlueforRaisingFlag", []] remoteExec ["para_c_fnc_show_notification", _x]};
};
private _codeOnTick = {

	params ["_target", "_caller", "_actionId", "_arguments", "_progress", "_maxProgress"];

	// only run this script 4 times to reduce network bandwith usage
	if ((_progress mod (_maxProgress / 4 )) == 0) then {
		// runs globally on all machines!
		[vn_mf_bn_dc_target_flag, 4] remoteExec ["vn_mf_fnc_ctf_bluefor_raise_flag", 0];
	};
};

/*
private _codeOnComplete = {
	params ["_target", "_caller", "_actionId", "_arguments"];
};

private _codeOnInterrupted = {
	params ["_target", "_caller", "_actionId", "_arguments"];
};
*/

private _codeOnComplete = {};
private _codeOnInterrupted = {};
private _extraArgsArr = [flagAnimationPhase cursorObject];
private _actionDurationSeconds = 10;
private _actionPriority = 100;
private _actionRemoveOnComplete = false;
private _showWhenUncon = false;

[
        player,
        _actionText,
        _actionIdleIcon,
        _actionProgressIcon,
        _conditionToShow,
        _conditionToProgress,
        _codeOnStart,
        _codeOnTick,
        _codeOnComplete,
        _codeOnInterrupted,
        _extraArgsArr,
        _actionDurationSeconds,
        _actionPriority,
        _actionRemoveOnComplete,
        _showWhenUncon
] call BIS_fnc_holdActionAdd;
