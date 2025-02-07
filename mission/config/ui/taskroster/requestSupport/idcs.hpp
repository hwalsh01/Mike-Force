#define VN_IDD_TR_SUPREQ 414000
#define VN_TR_SUPREQ_LHS_IDC 414001
#define VN_TR_SUPREQ_RHS_IDC 414002

#define VN_TR_SUPREQ_MAP_IDC 414003
#define VN_TR_SUPREQ_ACCEPT_IDC 414004
#define VN_TR_SUPREQ_ABORT_IDC 414005

// LHS -- **must** be displayCtrl ... **not** controlsGroupCtrl!
#define VN_TR_SUPREQ_IDC 414006
#define VN_TR_SUPREQ_TASK_TXT_IDC 414007
#define VN_TR_SUPREQ_DESC_TXT_IDC 414008
#define VN_TR_SUPREQ_TASK_IDC 414009
#define VN_TR_SUPREQ_TEAM_TXT_IDC 414010
#define VN_TR_SUPREQ_TEAM_IDC 414011
#define VN_TR_SUPREQ_SELPOS_IDC 414012
#define VN_TR_SUPREQ_CTASK_IDC 414013

#define VN_DISP_TR_SUPREQ (uinamespace getvariable ["vn_tr_disp_showRequestSupport", DisplayNull])

#define VN_TR_SUPREQ_RHS_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_RHS_IDC)
#define VN_TR_SUPREQ_MAP_CTRL (VN_TR_SUPREQ_RHS_CTRL controlsGroupCtrl VN_TR_SUPREQ_MAP_IDC)
#define VN_TR_SUPREQ_ACCEPT_CTRL (VN_TR_SUPREQ_RHS_CTRL controlsGroupCtrl VN_TR_SUPREQ_ACCEPT_IDC)
#define VN_TR_SUPREQ_ABORT_CTRL (VN_TR_SUPREQ_RHS_CTRL controlsGroupCtrl VN_TR_SUPREQ_ABORT_IDC)

#define VN_TR_SUPREQ_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_IDC)
#define VN_TR_SUPREQ_TASK_TXT_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_TASK_TXT_IDC)
#define VN_TR_SUPREQ_DESC_TXT_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_DESC_TXT_IDC)
#define VN_TR_SUPREQ_TASK_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_TASK_IDC)
#define VN_TR_SUPREQ_TEAM_TXT_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_TEAM_TXT_IDC)
#define VN_TR_SUPREQ_TEAM_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_TEAM_IDC)
#define VN_TR_SUPREQ_SELPOS_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_SELPOS_IDC)
#define VN_TR_SUPREQ_CTASK_CTRL (VN_DISP_TR_SUPREQ displayCtrl VN_TR_SUPREQ_CTASK_IDC)