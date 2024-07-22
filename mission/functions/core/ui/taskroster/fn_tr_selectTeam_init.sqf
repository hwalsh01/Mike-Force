/*
    File: fn_tr_selectTeam_init.sqf
    Author: Savage Game Design
    Public: No
    
    Description:
		Called in onLoad section of the Display.
		Set's the text for the currently active Team in the Team-selection dialog.
    
    Parameter(s): none
    
    Returns: nothing
    
    Example(s):
		[] call vn_mf_fnc_tr_selectTeam_init;
*/

disableSerialization;
#include "..\..\..\..\config\ui\ui_def_base.inc"

VN_TR_SELECTTEAM_TEAM_LOGO_CTRL ctrlSetText "";
