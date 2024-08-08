//included by "ui_def_base.inc"

//Task Roster:


#define VN_TR_USERNAME_IDC					412000
#define VN_TR_USERNAME_CTRL					(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_USERNAME_IDC)
#define VN_TR_TEAMNAME_IDC					412001
#define VN_TR_TEAMNAME_CTRL					(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_TEAMNAME_IDC)
#define VN_TR_TEAMLOGO_IDC					412002
#define VN_TR_TEAMLOGO_CTRL					(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_TEAMLOGO_IDC)
#define VN_TR_TEAMLOGO_BTN_IDC				412003
#define VN_TR_TEAMLOGO_BTN_CTRL				(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_TEAMLOGO_BTN_IDC)

//-----------------------------------------------------------------------------
// TASKROSTER: MAIN WELCOME PAGE
//-----------------------------------------------------------------------------
// TODO: some of these IDC/CTRLS can be removed now

// #define VN_TR_TASK_REQ_FLAG_IDC				412005
// #define VN_TR_TASK_REQ_FLAG_CTRL			(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_TASK_REQ_FLAG_IDC)
// #define VN_TR_TASK_ICON_IDC					412006
// #define VN_TR_TASK_ICON_CTRL				(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_TASK_ICON_IDC)
// #define VN_TR_TASK_ACTIVE_IDC				412007
// #define VN_TR_TASK_ACTIVE_CTRL				(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_TASK_ACTIVE_IDC)

// defined in a script i don't think we ever call anymore
// setActive.sqf
#define VN_TR_ZONE_A_IDC					412010
#define VN_TR_ZONE_A_CTRL					(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_ZONE_A_IDC)
#define VN_TR_ZONE_B_IDC					412011
#define VN_TR_ZONE_B_CTRL					(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_ZONE_B_IDC)

//-----------------------------------------------------------------------------
// TASKROSTER: ACTIVE TASKS SHEET
//-----------------------------------------------------------------------------
// MAIN INTERFACES

// still needed in cleanRightSheet for some reason
// RIGHT HAND SIDE -- The Child tasks for a parent task
// #define VN_TR_MISSION_ACTIVATE_IDC			413018
// #define VN_TR_MISSION_ACTIVATE_CTRL			(VN_TR_MISSIONSHEET_CTRL controlsGroupCtrl VN_TR_MISSION_ACTIVATE_IDC)

//-----------------------------------------------------------------------------
// TASKROSTER: SUPPORT REQUEST
//-----------------------------------------------------------------------------
// #define VN_IDD_TR_SUPREQ					413997
// #define VN_DISP_TR_SUPREQ					(uinamespace getvariable ["vn_tr_disp_showRequestSupport", DisplayNull])

// // LEFT HAND SIDE -- The List of Parent Tasks
// #define VN_TR_SUPREQ_LHS_IDC				413998
// #define VN_TR_SUPREQ_LHS_CTRL				(VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_LHS_IDC)

// #define VN_TR_SUPREQ_RHS_IDC				413999
// #define VN_TR_SUPREQ_RHS_CTRL				(VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_RHS_IDC)

// ONLY RIGHT HAND SIDE FOR NOW
// #define VN_TR_SUPREQ_IDC					414000
// #define VN_TR_SUPREQ_CTRL					(VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_IDC)
// #define VN_TR_SUPREQ_DESC_TXT_IDC			414001
// #define VN_TR_SUPREQ_DESC_TXT_CTRL			(VN_TR_SUPREQ_CTRL controlsGroupCtrl VN_TR_SUPREQ_DESC_TXT_IDC)
// #define VN_TR_SUPREQ_TASK_TXT_IDC			414002
// #define VN_TR_SUPREQ_TASK_TXT_CTRL			(VN_TR_SUPREQ_CTRL controlsGroupCtrl VN_TR_SUPREQ_TASK_TXT_IDC)
// #define VN_TR_SUPREQ_TASK_IDC				414003
// #define VN_TR_SUPREQ_TASK_CTRL				(VN_TR_SUPREQ_CTRL controlsGroupCtrl VN_TR_SUPREQ_TASK_IDC)
// #define VN_TR_SUPREQ_TEAM_TXT_IDC			414004
// #define VN_TR_SUPREQ_TEAM_TXT_CTRL			(VN_TR_SUPREQ_CTRL controlsGroupCtrl VN_TR_SUPREQ_TEAM_TXT_IDC)
// #define VN_TR_SUPREQ_TEAM_IDC				414005
// #define VN_TR_SUPREQ_TEAM_CTRL				(VN_TR_SUPREQ_CTRL controlsGroupCtrl VN_TR_SUPREQ_TEAM_IDC)
// #define VN_TR_SUPREQ_SELPOS_IDC				414006
// #define VN_TR_SUPREQ_SELPOS_CTRL			(VN_TR_SUPREQ_CTRL controlsGroupCtrl VN_TR_SUPREQ_SELPOS_IDC)
// #define VN_TR_SUPREQ_CTASK_IDC				414007
// #define VN_TR_SUPREQ_CTASK_CTRL				(VN_TR_SUPREQ_CTRL controlsGroupCtrl VN_TR_SUPREQ_CTASK_IDC)

// Support Request -- Pop Up Map + Buttons
// #define VN_TR_SUPREQ_MAP_IDC				414011
// #define VN_TR_SUPREQ_MAP_CTRL				(VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_MAP_IDC)
// #define VN_TR_SUPREQ_ACCEPT_IDC				414012
// #define VN_TR_SUPREQ_ACCEPT_CTRL			(VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_ACCEPT_IDC)
// #define VN_TR_SUPREQ_ABORT_IDC				414013
// #define VN_TR_SUPREQ_ABORT_CTRL				(VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_ABORT_IDC)

//-----------------------------------------------------------------------------
// TASKROSTER: BLANK SHEET
//-----------------------------------------------------------------------------
// For clearing the right sheet
// #define VN_TR_BLANKSHEET_RHS_IDC			414188
// #define VN_TR_BLANKSHEET_RHS_CTRL			(VN_DISP_TR_TASKROSTER displayCtrl VN_TR_BLANKSHEET_RHS_IDC)


//-----------------------------------------------------------------------------
// NON TASK ROSTER
//-----------------------------------------------------------------------------

//Infopanel
#define VN_IDD_MF_INFOPANEL								47000
#define VN_DISP_MF_INFOPANEL							(uiNamespace getVariable ["para_infopanel",DisplayNull])


#define VN_MF_INFOPANEL_MAIN_IDC						5000
#define VN_MF_INFOPANEL_MAIN_CTRL						(VN_DISP_MF_INFOPANEL displayCtrl VN_MF_INFOPANEL_MAIN_IDC)

#define VN_MF_INFOPANEL_MAIN_TXT_IDC					2000
#define VN_MF_INFOPANEL_MAIN_TXT_CTRL					(VN_MF_INFOPANEL_MAIN_CTRL controlsGroupCtrl VN_MF_INFOPANEL_MAIN_TXT_IDC)
#define VN_MF_INFOPANEL_MAIN_IMG_IDC					2001
#define VN_MF_INFOPANEL_MAIN_IMG_CTRL					(VN_MF_INFOPANEL_MAIN_CTRL controlsGroupCtrl VN_MF_INFOPANEL_MAIN_IMG_IDC)

// #define VN_MF_INFOPANEL_QUICK_MAIN_IDC					2100
#define VN_MF_INFOPANEL_QUICK_CTRL(QUICK_TEMP_IDC)		(VN_DISP_MF_INFOPANEL displayCtrl QUICK_TEMP_IDC)

#define VN_MF_INFOPANEL_QUICK_TXT_IDC					2101
#define VN_MF_INFOPANEL_QUICK_TXT_CTRL(QUICK_TEMP_IDC)	(VN_MF_INFOPANEL_QUICK_CTRL(QUICK_TEMP_IDC) controlsGroupCtrl VN_MF_INFOPANEL_QUICK_TXT_IDC)

// Example display
#define VN_MF_IDD_RSCDISPLAYEXAMPLE 48000
#define VN_MF_RSCDISPLAYEXAMPLE_LT_IDC 100
#define VN_MF_RSCDISPLAYEXAMPLE_CT_IDC 101
#define VN_MF_RSCDISPLAYEXAMPLE_RT_IDC 102
#define VN_MF_RSCDISPLAYEXAMPLE_LM_IDC 103
#define VN_MF_RSCDISPLAYEXAMPLE_CM_IDC 104
#define VN_MF_RSCDISPLAYEXAMPLE_RM_IDC 105
#define VN_MF_RSCDISPLAYEXAMPLE_LB_IDC 106
#define VN_MF_RSCDISPLAYEXAMPLE_CB_IDC 107
#define VN_MF_RSCDISPLAYEXAMPLE_RB_IDC 108
