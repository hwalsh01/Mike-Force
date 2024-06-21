/*

maximum of 9 child category classes per parent class.
maximum of 9 options at any time.

### seq

the `seq` class contains emotes that have chained animations playing in a sequence.

A single array `seq` class is basiclaly a "one-shot" animation (play it once and then end).

uses playMove to build the queue of animations, so valid animation sequence rules apply.

### loop

`loop` classes are for animations that force the player into a loop that does not end.

these are executed with switchMove and can only have one animation string. there is no queuing.

*/

class seq {

	title = "Non Looping Animations";
	icon = "\A3\ui_f\data\map\markers\nato\respawn_motor_ca.paa";

	class misc {
		title = "Miscellaneous";
		icon = "\A3\ui_f\data\map\markers\handdrawn\unknown_CA.paa";
		options[] = {
			{"Drop Weapon", {"Acts_Ambient_Rifle_Drop"}},
			{"Stretch", {"Acts_Ambient_Stretching"}},
			{"Stargaze", {"Acts_Stargazer", ""}},
			{"WTF", {"Acts_Shocked_3"}},
			{"About this big...", {"Act_Alien_Gesture"}},
			{"Fly By!", {"Acts_Calling_Out_Jets_in_loop"}},
			{"Urinate", {"Acts_AidlPercMstpSlowWrflDnon_pissing"}},
			{"Salute", {"AmovPercMstpSrasWrflDnon_SaluteOut"}},
			{"Dramatic Grenade Throw", {
					"AwopPercMstpSgthWnonDnon_start",
					"AwopPercMstpSgthWnonDnon_throw",
					"AwopPercMstpSgthWnonDnon_end",
				}
			},
		};
	};

	class pointing {
		title = "Pointing";
		icon = "\A3\ui_f\data\map\markers\handdrawn\start_CA.paa";
		options[] = {
			{"Left", {"Acts_Pointing_Left"}},
			{"Right", {"Acts_Pointing_Right"}},
			{"Up", {"Acts_Pointing_Up"}},
			{"Down", {"Acts_Pointing_Down"}},
			{"Back", {"Acts_Pointing_Back"}},
			{"Front", {"Acts_Pointing_Front"}},
		};
	};

	class responses {
		title = "Responses";
		icon = "\A3\ui_f\data\map\markers\military\box_CA.paa";
		options[] = {
			{"Agree", {"Acts_Ambient_Agreeing"}},
			{"Disagree", {"Acts_Ambient_Disagreeing"}},
			{"Disagree (Pointing)", {"Acts_Ambient_Disagreeing_with_pointing"}},
			{"Aggressive", {"Acts_Ambient_Aggressive"}},
			{"Facepalm", {"Acts_Ambient_Facepalm_1"}},
			{"Defensive", {"Acts_Ambient_Defensive"}},
		};
	};

	class atc {
		title = "ATC";
		icon = "\A3\ui_f\data\map\markers\nato\c_plane.paa";
		options[] = {
			{"Left", {
					"Acts_JetsMarshallingLeft_in",
					"Acts_JetsMarshallingLeft_loop",
					"Acts_JetsMarshallingLeft_out",
				}
			},
			{"Right", {
					"Acts_JetsMarshallingRight_in",
					"Acts_JetsMarshallingRight_loop",
					"Acts_JetsMarshallingRight_out",
				}
			},
			{"Slow", {
					"Acts_JetsMarshallingSlow_in",
					"Acts_JetsMarshallingSlow_loop",
					"Acts_JetsMarshallingSlow_out",
				}
			},
			{"Emergency Stop", {
					"Acts_JetsMarshallingEmergencyStop_in",
					"Acts_JetsMarshallingEmergencyStop_loop",
					"Acts_JetsMarshallingEmergencyStop_out",
				}	
			},
			{"Engine Off", {
					"Acts_JetsMarshallingEnginesOff_in",
					"Acts_JetsMarshallingEnginesOff_loop",
					"Acts_JetsMarshallingEnginesOff_out",
				}
			},
			{"Engine On", {
					"Acts_JetsMarshallingEnginesOn_in",
					"Acts_JetsMarshallingEnginesOn_loop",
					"Acts_JetsMarshallingEnginesOn_out",
				}
			},
			{"Straight", {
					"Acts_JetsMarshallingStraight_in",
					"Acts_JetsMarshallingStraight_loop",
					"Acts_JetsMarshallingStraight_out",
				}
			},
			{"Stop", {
					"Acts_JetsMarshallingStop_in",
					"Acts_JetsMarshallingStop_loop",
					"Acts_JetsMarshallingStop_out",
				}
			},
			{"Launch", {
					"Acts_JetsShooterShootingReady_in",
					"Acts_JetsShooterShootingReady_loop",
					"Acts_JetsShooterShootingReady_pointing",
					"Acts_JetsShooterShootingLaunch_in",
					"Acts_JetsShooterShootingLaunch_loop",
					"Acts_JetsShooterShootingLaunch_out",
				}
			},
		};
	};

	class briefings {
		title = "Briefing Animations";
		icon = "\A3\ui_f\data\map\markers\handdrawn\warning_CA.paa";
		options[] = {
			{"Long Briefing", {
					"Acts_A_M01_briefing",
					"Acts_A_M02_briefing",
					"Acts_A_M03_briefing",
					"Acts_A_M04_briefing",
					"Acts_A_M05_briefing",
					""
				}
			},
			{"M01", {"Acts_A_M01_briefing", ""}},
			{"M02", {"Acts_A_M02_briefing", ""}},
			{"M03", {"Acts_A_M03_briefing", ""}},
			{"M04", {"Acts_A_M04_briefing", ""}},
			{"M05", {"Acts_A_M05_briefing", ""}},
		};
	};

};


class loop {

	title = "Looping Animations";
	icon = "\A3\ui_f\data\map\markers\nato\respawn_unknown_ca.paa";

	class misc {
		title = "Miscellaneous";
		icon = "\A3\ui_f\data\map\markers\handdrawn\unknown_CA.paa";
		options[] = {
			{"Dancing 1", "Acts_Dance_01"},
			{"Dancing 2", "Acts_Dance_02"},
			{"Grieving", "Acts_Grieving"},
			{"Bad Knee", "Acts_Injured_Driver_Loop"},
			{"Admire Art", "Acts_Gallery_Visitor_01"},
			{"Gutshot", "Acts_SittingWounded_loop"},
			{"Remonstrating", "Acts_Watching_Fire_Loop"},
			{"Section Eight", "ApanPknlMstpSnonWnonDnon_G03"},
		};
	};

	class waiting {
		title = "Idle";
		icon = "\A3\ui_f\data\map\markers\military\end_CA.paa";
		options[] = {
			{"1", "Acts_AidlPercMstpSloWWrflDnon_warmup_1_loop"},
			{"2", "Acts_AidlPercMstpSloWWrflDnon_warmup_2_loop"},
			{"3", "Acts_AidlPercMstpSloWWrflDnon_warmup_3_loop"},
			{"4", "Acts_AidlPercMstpSloWWrflDnon_warmup_4_loop"},
			{"5", "Acts_AidlPercMstpSloWWrflDnon_warmup_5_loop"},
			{"6", "Acts_AidlPercMstpSloWWrflDnon_warmup_6_loop"},
			{"7", "Acts_AidlPercMstpSloWWrflDnon_warmup_7_loop"},
		};
	};


	class guard {
		title = "Prison Guards";
		icon = "\A3\ui_f\data\map\markers\nato\o_installation.paa";
		options[] = {
			{"Squat Down", "Acts_Executioner_Squat"},
			{"Pistol Whack Forehand", "Acts_Executioner_Forehand"},
			{"Pistol Whack Forehand", "Acts_Executioner_Backhand"},
			{"Standing Menacingly", "Acts_Executioner_StandingLoop"},
		};
	};

	class pow {
		title = "Prisoners";
		icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
		options[] = {
			{"Sitting", "Acts_AidlPsitMstpSsurWnonDnon_loop"},
			{"Kneeling", "Acts_ExecutionVictim_Loop"},
		};
	};

};
