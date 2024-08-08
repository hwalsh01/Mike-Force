//included by "ui_tr_base.hpp"

// RIGHT HAND SIDE -- INHERITED BELOW
class vn_tr_disp_showNewPlayerGuide_rhs : vn_mf_RscControlsGroupNoScrollbarHV
{
	idc = -1;
	onLoad = "";

	x = VN_TR_SHEET_R_X;
	y = VN_TR_SHEET_R_Y;
	w = VN_TR_SHEET_R_W;
	h = VN_TR_SHEET_R_H;

	class controls
	{
		class mainInfoBackground: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(0);
			y = UIH(0);
			w = VN_TR_SHEET_L_W;
			h = VN_TR_SHEET_L_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			text = "\vn\ui_f_vietnam\ui\taskroster\img\tr_mainInfo.paa";
			tooltip = "";
		};

		// go find a duty officer and press 6 on them
		class rhs_helper_blurb: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIW(2);
			y = UIH(12.5);
			w = UIW(16);
			h = UIH(5);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "Walk up to a duty officer and press the 6 key while looking at them. This will bring up a wheel menu where you can click on the role(s) you want. Duty officers can be located by the white dot markers on the map around the main base.";
			size = UIH(0.69);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};

		class rhs_img_dutyofficer_map: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(1);
			y = UIH(16.5);
			w = UIW(5);
			h = UIH(5);
			text = "custom\taskroster\help\img_duty_officer_map.paa";
			tooltip = "Duty officers are marked by white dots on the map at the main base.";
		};

		class rhs_img_dutyofficer_map_caption: vn_mf_RscText
		{
			idc = -1;
			x = UIW(1.5);
			y = UIH(21.5);
			w = UIW(5);
			h = UIH(1);
			sizeEx = TXT_S;
			colorText[] = {0, 0, 0, 1};
			text = "Map Markers";
		};

		class rhs_img_dutyofficer_unit: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(7);
			y = UIH(16.5);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_duty_officer_unit.paa";
			tooltip = "A Duty Officer.";
		};

		class rhs_img_dutyofficer_unit_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(7.5);
			text = "Duty Officer";
		};

		class rhs_img_dutyofficer_wheel: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(13);
			y = UIH(16.5);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_duty_officer_wheel.paa";
			tooltip = "Pressing the 6 key will bring up the wheel menu where you can gain additional roles.";
		};

		class rhs_img_dutyofficer_wheel_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(13.5);
			text = "Wheel Menu";
		};
	};
};

class vn_tr_disp_showNewPlayerGuide
{
	name = "vn_tr_disp_showNewPlayerGuide";
	//If already opened -> Recalling it -> Reloading the Dialog (e.g. like updating the view, without "closing" it)
	onLoad = "[""onLoad"",_this,""vn_tr_disp_showNewPlayerGuide"",''] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	onUnload = "[""onUnload"",_this,""vn_tr_disp_showNewPlayerGuide"",''] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [] spawn vn_mf_fnc_tr_overview_init;";
	idd = THISISWRONGONPURPOSE;
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

		//MUST be in the background, otherwise it could "pop up", when clicking on it, covering up the cordles
		class rhs: vn_tr_disp_showNewPlayerGuide_rhs
		{
			idc = -1;
		};
	};

	class Controls
	{
		class title: vn_mf_RscText
		{
			idc = -1;
			x = UIW(0);
			y = UIH(2);
			w = UIW(15);
			h = UIH(2);

			style = "0x10 + 0x0200";
			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			shadow = 0;
			text = "New Player Guide";
			font = USEDFONT_B;
			sizeEx = TXT_L;
		};

		// go find a duty officer and press 6 on them
		class rhs_helper_blurb2: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIW(0);
			y = UIH(5);
			w = UIW(16);
			h = UIH(5);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum. Lorem ipsum.";
			size = UIH(0.69);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};
		// go find a duty officer and press 6 on them
		class rhs_helper_blurb: vn_mf_RscStructuredText
		{
			idc = -1;
			x = UIW(0);
			y = UIH(10);
			w = UIW(16);
			h = UIH(5);

			colorText[] = {0.1,0.1,0.1,0.9};
			colorBackground[] = {0,0,0,0.0};
			text = "Walk up to a duty officer and press the 6 key while looking at them. This will bring up a wheel menu where you can click on the role(s) you want. Duty officers can be located by the white dot markers on the map around the main base.";
			size = UIH(0.69);
			tooltip = "";
			class Attributes
			{
				align = "left";
				valign = "middle";
				color = "#000000";
				colorLink = "#D09B43";
				font = USEDFONT;
				size = 1;
				shadow = 0;
			};
		};

		class rhs_img_dutyofficer_map: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(-1);
			y = UIH(14);
			w = UIW(5);
			h = UIH(5);
			text = "custom\taskroster\help\img_duty_officer_map.paa";
			tooltip = "Duty officers are marked by white dots on the map at the main base.";
		};

		class rhs_img_dutyofficer_map_caption: vn_mf_RscText
		{
			idc = -1;
			x = UIW(-0.5);
			y = UIH(19);
			w = UIW(5);
			h = UIH(1);
			sizeEx = TXT_S;
			colorText[] = {0, 0, 0, 1};
			text = "Map Markers";
		};

		class rhs_img_dutyofficer_unit: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(6);
			y = UIH(14);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_duty_officer_unit.paa";
			tooltip = "A Duty Officer.";
		};

		class rhs_img_dutyofficer_unit_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(6.5);
			text = "Duty Officer";
		};

		class rhs_img_dutyofficer_wheel: vn_mf_RscPicture
		{
			idc = -1;
			x = UIW(12);
			y = UIH(14);
			w = UIW(5);
			h = UIH(5);

			text = "custom\taskroster\help\img_duty_officer_wheel.paa";
			tooltip = "Pressing the 6 key will bring up the wheel menu where you can gain additional roles.";
		};

		class rhs_img_dutyofficer_wheel_caption: rhs_img_dutyofficer_map_caption
		{
			x = UIW(12.5);
			text = "Wheel Menu";
		};

		class lhs_back_btn: vn_mf_RscButton
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