SeahavenWoods_MapScripts::
# 2 "data/maps/SeahavenWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeahavenWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SeahavenWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SeahavenWoods/scripts.pory"
	map_script_2 VAR_LG_INTRO, 0, IntroCutscene
	.2byte 0


IntroCutscene::
# 8 "data/maps/SeahavenWoods/scripts.pory"
	lock
# 9 "data/maps/SeahavenWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FirstMovement
# 10 "data/maps/SeahavenWoods/scripts.pory"
	waitmovement 0
# 11 "data/maps/SeahavenWoods/scripts.pory"
	delay 16
# 12 "data/maps/SeahavenWoods/scripts.pory"
	msgbox IntroDialouge_1
# 13 "data/maps/SeahavenWoods/scripts.pory"
	delay 30
# 14 "data/maps/SeahavenWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SecondMovement
# 15 "data/maps/SeahavenWoods/scripts.pory"
	waitmovement 0
# 16 "data/maps/SeahavenWoods/scripts.pory"
	msgbox IntroDialouge_2
# 17 "data/maps/SeahavenWoods/scripts.pory"
	setvar VAR_LG_INTRO, 1
# 18 "data/maps/SeahavenWoods/scripts.pory"
	release
	end


# 35 "data/maps/SeahavenWoods/scripts.pory"
FirstMovement:
# 36 "data/maps/SeahavenWoods/scripts.pory"
	face_up
# 37 "data/maps/SeahavenWoods/scripts.pory"
	delay_16
# 38 "data/maps/SeahavenWoods/scripts.pory"
	face_right
# 39 "data/maps/SeahavenWoods/scripts.pory"
	delay_16
# 40 "data/maps/SeahavenWoods/scripts.pory"
	face_down
# 41 "data/maps/SeahavenWoods/scripts.pory"
	delay_16
# 42 "data/maps/SeahavenWoods/scripts.pory"
	face_left
	step_end

# 45 "data/maps/SeahavenWoods/scripts.pory"
SecondMovement:
# 46 "data/maps/SeahavenWoods/scripts.pory"
	jump_in_place_left
# 46 "data/maps/SeahavenWoods/scripts.pory"
	jump_in_place_left
	step_end

SeahavenWoods_BlockPath::
# 50 "data/maps/SeahavenWoods/scripts.pory"
	lock
# 51 "data/maps/SeahavenWoods/scripts.pory"
	msgbox SeahavenWoods_BlockPath_Text_0
# 52 "data/maps/SeahavenWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CorrectPath
# 53 "data/maps/SeahavenWoods/scripts.pory"
	waitmovement 0
# 54 "data/maps/SeahavenWoods/scripts.pory"
	release
	end


# 58 "data/maps/SeahavenWoods/scripts.pory"
CorrectPath:
# 59 "data/maps/SeahavenWoods/scripts.pory"
	walk_left
	step_end

SeahavenWoods_Rain::
# 63 "data/maps/SeahavenWoods/scripts.pory"
	lock
# 64 "data/maps/SeahavenWoods/scripts.pory"
	setweather WEATHER_RAIN
# 65 "data/maps/SeahavenWoods/scripts.pory"
	doweather
# 66 "data/maps/SeahavenWoods/scripts.pory"
	delay 16
# 67 "data/maps/SeahavenWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RainMovement_1
# 68 "data/maps/SeahavenWoods/scripts.pory"
	waitmovement 0
# 69 "data/maps/SeahavenWoods/scripts.pory"
	msgbox SeahavenWoods_Rain_Text_0
# 70 "data/maps/SeahavenWoods/scripts.pory"
	delay 45
# 71 "data/maps/SeahavenWoods/scripts.pory"
	msgbox SeahavenWoods_Rain_Text_1
# 72 "data/maps/SeahavenWoods/scripts.pory"
	delay 60
# 73 "data/maps/SeahavenWoods/scripts.pory"
	playmoncry SPECIES_PHIONE, 0
# 74 "data/maps/SeahavenWoods/scripts.pory"
	waitmoncry
# 75 "data/maps/SeahavenWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RainMovement_2
# 76 "data/maps/SeahavenWoods/scripts.pory"
	waitmovement 0
# 77 "data/maps/SeahavenWoods/scripts.pory"
	msgbox RainDialouge_1
# 78 "data/maps/SeahavenWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RainMovement_3
# 79 "data/maps/SeahavenWoods/scripts.pory"
	waitmovement 0
# 80 "data/maps/SeahavenWoods/scripts.pory"
	msgbox RainDialouge_2
# 81 "data/maps/SeahavenWoods/scripts.pory"
	setvar VAR_LG_INTRO_RAIN, 1
# 82 "data/maps/SeahavenWoods/scripts.pory"
	release
	end


# 99 "data/maps/SeahavenWoods/scripts.pory"
RainMovement_1:
# 100 "data/maps/SeahavenWoods/scripts.pory"
	emote_exclamation_mark
# 101 "data/maps/SeahavenWoods/scripts.pory"
	delay_16
# 102 "data/maps/SeahavenWoods/scripts.pory"
	face_right
# 103 "data/maps/SeahavenWoods/scripts.pory"
	delay_16
# 104 "data/maps/SeahavenWoods/scripts.pory"
	face_left
# 105 "data/maps/SeahavenWoods/scripts.pory"
	delay_16
# 106 "data/maps/SeahavenWoods/scripts.pory"
	face_down
	step_end

# 109 "data/maps/SeahavenWoods/scripts.pory"
RainMovement_2:
# 110 "data/maps/SeahavenWoods/scripts.pory"
	emote_double_exclamation_mark
# 111 "data/maps/SeahavenWoods/scripts.pory"
	face_left
# 112 "data/maps/SeahavenWoods/scripts.pory"
	delay_8
# 113 "data/maps/SeahavenWoods/scripts.pory"
	face_right
	step_end

# 116 "data/maps/SeahavenWoods/scripts.pory"
RainMovement_3:
# 117 "data/maps/SeahavenWoods/scripts.pory"
	face_up
	step_end

SeahavenWoods_BlockPath_Text_0:
# 51 "data/maps/SeahavenWoods/scripts.pory"
	.string "I've come too far to turn back now!$"

SeahavenWoods_Rain_Text_0:
# 69 "data/maps/SeahavenWoods/scripts.pory"
	.string "I-it's raining?$"

SeahavenWoods_Rain_Text_1:
# 71 "data/maps/SeahavenWoods/scripts.pory"
	.string "Maybe I should just go back home after\n"
	.string "all...$"

IntroDialouge_1::
# 22 "data/maps/SeahavenWoods/scripts.pory"
	.string "I know I heard that weird sound come \n"
	.string "from around here... \p"
	.string "Of course, it could just be another \n"
	.string "false alarm, but...$"

IntroDialouge_2::
# 29 "data/maps/SeahavenWoods/scripts.pory"
	.string "Oh well, 23rd time's the charm! \p"
	.string "Just you wait, Manaphy! \n"
	.string "I'll find you and save the town!$"

RainDialouge_1::
# 87 "data/maps/SeahavenWoods/scripts.pory"
	.string "There's that sound again! \n"
	.string "I knew I wasn't just imagining things! \p"
	.string "I've never heard anything like it... \n"
	.string "that HAS to be Manaphy!$"

RainDialouge_2::
# 94 "data/maps/SeahavenWoods/scripts.pory"
	.string "Alright, no turning back! \n"
	.string "Just a little further!$"
