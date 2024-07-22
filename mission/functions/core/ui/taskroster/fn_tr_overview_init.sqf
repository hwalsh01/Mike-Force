/*
    File: fn_tr_overview_init.sqf
    Author: Savage Game Design
    Public: No
    
    Description:
		Loaded by Taskroster onLoad.
		Updates all the controls in the TaskRoster mainView and hides everything, that is not active/used in the "initial state".
    
    Parameter(s): none
    
    Returns: nothing
    
    Example(s): none
*/

disableSerialization;
#include "..\..\..\..\config\ui\ui_def_base.inc"

//cleanup everything
call vn_mf_fnc_tr_cleanRightSheet;
