/*
    File: fn_ui_hud_toggle.sqf
    Author: "DJ" Dijksterhuis
    Public: No

    Description:
	    Enables/disables player HUD depending on whether HUD is already disabled/enabled.

    Parameter(s): none

    Returns: nothing

    Example(s):
	    [] call vn_mf_fnc_ui_hud_toggle;
*/

showHUD !(shownHUD);
