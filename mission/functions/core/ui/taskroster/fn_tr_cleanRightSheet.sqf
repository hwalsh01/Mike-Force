/*
    File: fn_tr_cleanRightSheet.sqf
    Author: Savage Game Design
    Public: No
    
    Description:
		Hides all pages on the right side of the TaskRoster
    
    Parameter(s): none
    
    Returns: nothing
    
    Example(s): none
*/

disableSerialization;
#include "..\..\..\..\config\ui\ui_def_base.inc"

call vn_mf_fnc_tr_supportTask_map_hide;

_display = VN_DISP_TR_TASKROSTER;

deleteMarkerLocal format["%1_missionMarker",getPlayerUID player];
// [
//     VN_TR_ACTIVETASKS_RHS_GROUP_CTRL, VN_TR_SUPREQ_CTRL, VN_TR_CHARINFO_CTRL, VN_TR_SHOWTEAMINFO_RHS_CTRL
// ] apply {_x ctrlShow false};

//Added as single one, so it's staying ontop, until the others are "hidden"
// VN_TR_MAININFO_CTRL ctrlShow false;
VN_TR_BLANKSHEET_RHS_CTRL ctrlShow false;

// [VN_TR_MISSION_ACTIVATE_IDC] apply {ctrlDelete (_display displayCtrl _x)};