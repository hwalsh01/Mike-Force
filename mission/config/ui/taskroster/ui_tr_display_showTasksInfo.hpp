//included by "ui_tr_base.hpp"

class vn_tr_disp_showTasksInfo
{
	name = "vn_tr_disp_showTasksInfo";
	//If already opened -> Recalling it -> Reloading the Dialog (e.g. like updating the view, without "closing" it)
	// TODO: rename vn_mf_fnc_tr_mainInfo_show to vn_mf_fnc_tr_showTeamInfo_show

			// onLoad = "_this call vn_mf_fnc_tr_missions_show";

	onLoad = "[""onLoad"",_this,""vn_tr_disp_showTasksInfo"",''] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); call vn_mf_fnc_tr_cleanRightSheet; call vn_mf_fnc_tr_missions_fill;";
	onUnload = "[""onUnload"",_this,""vn_tr_disp_showTasksInfo"",''] call 	(uinamespace getvariable 'BIS_fnc_initDisplay'); call vn_mf_fnc_tr_cleanRightSheet; [] spawn vn_mf_fnc_tr_overview_init;";
	idd = VN_IDD_TR_SHOWTEAMINFO_WRONG;
	movingEnable = 1;
	enableSimulation = 1;
		
	class ControlsBackground
	{
		class folderBackground: vn_mf_RscPicture
		{
			idc = -1;
			x = VN_TR_FOLDER_X;
			y = VN_TR_FOLDER_Y;
			w = VN_TR_FOLDER_W;
			h = VN_TR_FOLDER_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			text = "\vn\ui_f_vietnam\ui\taskroster\img\tr_folder_background_sheetL.paa";
		};
		
		//MUST be in the background, otherwise it could "pop up", when clicking on it, covering up the cordles (silly Arma, y u do dis? :sad:)
		// class vn_sheet_clean_R: vn_sheet_clean_R_base
		// {
		// 	idc = -1;
		// };


		///////////////////Right:
		//Teamselection
		class vn_tr_taskDetails: vn_tr_missionInfoPolaroid_base
		{
			idc = VN_TR_MISSIONSHEET_IDC;
		};
	};
	
	class Controls
	{
		
		///////////////////Left:

		// @dijksterhuis: This does absolutely nothing in the UI, but without it
		// the following text elements don't appear on the page. I have no idea why.
		class lhs_tasks_dummy_does_nothing: vn_mf_RscStructuredText
		{
			idc = -1;
			style = "0x10";

			x = UIX_CL(17.5);
			y = UIY_CU(9.5);
			w = UIW(0);
			h = UIH(0);

			colorText[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0.0};
			sizeEx = TXT_XS;
			text = "";
			tooltip = "";
			class Attributes
			{
				align = "left";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 0.8;
				shadow = 0;
			};
		};

		class lhs_tasks_title: vn_mf_RscText
		{
			idc = -1;
			style = "0x10";

			x = UIX_CL(17.5);
			y = UIY_CU(10.5);
			w = UIW(15);
			h = UIH(1);
			
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0};
			sizeEx = TXT_L;
			font = USEDFONT_B;
			
			text = "Active Task List";
		};

		class lhs_tasks_description: vn_mf_RscStructuredText
		{
			idc = -1;
			style = "0x10";

			x = UIX_CL(17.5);
			y = UIY_CU(9);
			w = UIW(16);
			h = UIH(12);

			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.0};
			sizeEx = TXT_XS;
			text = "The map is divided into zones that must be taken over. Players need to work together to complete several primary tasks -- destroying sites; building a FOB and defending the zone.<br/><br/>Players can create additional support requests, like an ammo resupply or a pilot rescue 'brightlight' mission.<br/><br/>Click on a parent task below then select one of the subtasks on the right to change your active task.";
			tooltip = "";
			class Attributes
			{
				align = "left";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 0.8;
				shadow = 0;
			};
		};
		class lhs_tasks_list: vn_mf_RscListNBox //vn_mf_RscListBox
		{
			idc = VN_TR_MISSIONLIST_IDC;
			
			x = UIX_CL(17.5);
			y = UIY_CU(-1);
			w = UIW(16);
			h = UIH(7);
						
			//columns[] = {0.0,UIW(2.25),UIW(4.25),UIW(5)};
			columns[] = {
				0.0,  		// task type icon lhs boundary pos
				UIW(1.3),  // task type icon rhs boundary pos | task type text lhs boundary pos
				UIW(9),  	// task type text rhs boundary pos | task category icon lhs boundary pos
				UIW(10.3),  // task category icon rhs boundary pos | task category text lhs pos
				UIW(12),  	// task category text rhs pos | description lhs?
				UIW(125),	// description rhs?
			};
			
			colorBackground[] = {0,0,0,1};
			colorBorder[] = {0,0,0,1};
			
			colorText[] = {0,0,0,1}; // Text and frame color
			colorSelect[] = {0,0,0,1}; // Text selection color
			colorSelect2[] = {0,0,0,1}; // Text selection color (oscillates between this and colorSelect)
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
			
			colorPicture[] = {0.2,0.2,0.2,1};
			colorPictureSelected[] = {0.9,0.9,0.9,1};
			colorPictureDisabled[] = {0,0,0,1};

			onLBSelChanged = "_this call vn_mf_fnc_tr_missions_show";
			onLBDblClick = "";
		};

		class lhs_tasks_back_btn: vn_mf_RscButton
		{
			idc = -1;

			x = UIX_CL(17);
			y = UIY_CU(-9);
			w = UIW(7);
			h = UIH(1.5);
			
			text = "BACK";
			font = USEDFONT;
			sizeEx = TXT_L;
			onButtonClick = "(ctrlParent param[0]) closeDisplay 2";
			colorText[] = {0,0,0,1};
			colorBackground[] = {0,0,0,0.1};
		};
		
		//ALWAYS AT THE BOTTOM/LAST OF THE CONTROLS!
		class folder_cordels: vn_tr_cordels
		{};
	};
};