/**
 * Dutch
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */

#define WELCOME_MSG							CUSTOM_MENDEL_NAME " gereed."
#define MSG_SD_INSERTED						"SD ingestoken"
#define MSG_SD_REMOVED						"SD verwijderd"
#define MSG_MAIN							"Hoofdmenu"
#define MSG_DISABLE_STEPPERS				"Motoren uit"
#define MSG_AUTO_HOME						"Startpositie"
#define MSG_SET_HOME_OFFSETS				"Set home offsets"
#define MSG_SET_ORIGIN						"Oorsprong instellen"
#define MSG_COOLDOWN						"Afkoelen"
#define MSG_SWITCH_PS_ON					"Opstarten"
#define MSG_SWITCH_PS_OFF					"Uitschakelen"
#define MSG_MOVE_AXIS						"As verplaatsen"
#define MSG_MOVE_X							"Verplaats X"
#define MSG_MOVE_Y							"Verplaats Y"
#define MSG_MOVE_Z							"Verplaats Z"
#define MSG_MOVE_E							"Extruder"
#define MSG_SPEED							"Snelheid"
#define MSG_NOZZLE							"Tuit"
#define MSG_NOZZLE1							"Tuit2"
#define MSG_NOZZLE2							"Tuit3"
#define MSG_BED								"Bed"
#define MSG_FAN_SPEED						"Fan snelheid"
#define MSG_FLOW							"Flow"
#define MSG_FLOW0							"Flow 0"
#define MSG_FLOW1							"Flow 1"
#define MSG_FLOW2							"Flow 2"
#define MSG_CONTROL							"Control"
#define MSG_MIN								" \002 Min"
#define MSG_MAX								" \002 Max"
#define MSG_FACTOR							" \002 Fact"
#define MSG_TEMPERATURE						"Temperatuur"
#define MSG_MOTION							"Beweging"
#define MSG_VOLUMETRIC						"Filament"
#define MSG_VOLUMETRIC_ENABLED				"E in mm3"
#define MSG_STORE_EPROM						"Geheugen opslaan"
#define MSG_LOAD_EPROM						"Geheugen laden"
#define MSG_RESTORE_FAILSAFE				"Backup terugzetten"
#define MSG_REFRESH							"\xF8" "Herladen"
#define MSG_WATCH							"Info scherm"
#define MSG_TUNE							"Fijninstellingen"
#define MSG_PAUSE_PRINT						"Print pauzeren"
#define MSG_RESUME_PRINT					"Print hervatten"
#define MSG_STOP_PRINT						"Print stoppen"
#define MSG_CARD_MENU						"Print van SD"
#define MSG_NO_CARD							"Geen SD kaart"
#define MSG_DWELL							"Slapen..."
#define MSG_USERWAIT						"Wachten op gebruiker"
#define MSG_RESUMING						"Print hervatten"
#define MSG_PRINT_ABORTED					"Print afgebroken"
#define MSG_NO_MOVE							"Geen beweging."
#define MSG_KILLED							"NOODSTOP. "
#define MSG_STOPPED							"GESTOPT. "
#define MSG_FILAMENTCHANGE					"Wissel filament"
#define MSG_INIT_SDCARD						"Init. SD kaart"
#define MSG_CNG_SDCARD						"Wissel SD kaart"
#define MSG_BABYSTEP_X						"Babystep X"
#define MSG_BABYSTEP_Y						"Babystep Y"
#define MSG_BABYSTEP_Z						"Live Z aanpassen"
#define MSG_ADJUSTZ							"Auto instellen Z?"
#define MSG_PICK_Z							"Kies print"

#define MSG_SETTINGS						"Instellingen"
#define MSG_PREHEAT							"Voorverwarmen"
#define MSG_UNLOAD_FILAMENT					"Filament uithalen"
#define MSG_LOAD_FILAMENT					"Filament laden"
#define MSG_LOAD_FILAMENT_1					"Filament 1 laden"
#define MSG_LOAD_FILAMENT_2					"Filament 2 laden"
#define MSG_LOAD_FILAMENT_3					"Filament 3 laden"
#define MSG_LOAD_FILAMENT_4					"Filament 4 laden"
#define MSG_UNLOAD_FILAMENT_1				"Filament 1 uithalen"
#define MSG_UNLOAD_FILAMENT_2				"Filament 2 uithalen"
#define MSG_UNLOAD_FILAMENT_3				"Filament 3 uithalen"
#define MSG_UNLOAD_FILAMENT_4				"Filament 4 uithalen"
#define MSG_UNLOAD_ALL						"Alle uithalen"
#define MSG_LOAD_ALL						"Alle laden"

#define MSG_RECTRACT						"Rectract"
#define MSG_ERROR							"FOUT:"
#define MSG_PREHEAT_NOZZLE					"Tuit voorverwarmen!"
#define MSG_SUPPORT							"Support"
#define MSG_CORRECTLY						"Wissel ok?"
#define MSG_YES								"Ja"
#define MSG_NO								"Nee"
#define MSG_NOT_LOADED 						"Fil. niet geladen"
#define MSG_NOT_COLOR 						"Kleur niet duidelijk"
#define MSG_LOADING_FILAMENT				"Laade Filament"
#define MSG_PLEASE_WAIT						"Wacht aub"
#define MSG_LOADING_COLOR					"Laade kleur"
#define MSG_CHANGE_SUCCESS					"Wissel succesvol!"
#define MSG_PRESS							"en druk op knop"
#define MSG_INSERT_FILAMENT					"Filament insteken"
#define MSG_CHANGING_FILAMENT				"Wissel filament!"


#define MSG_SILENT_MODE_ON					"Mode     [silent]"
#define MSG_SILENT_MODE_OFF					"Mode [high power]" 
#define MSG_AUTO_MODE_ON					"Mode       [Auto]"
#define MSG_REBOOT							"Herstart  de printer"
#define MSG_TAKE_EFFECT						" om effectief te worden"											

#define MSG_Enqueing						"enqueing \""
#define MSG_POWERUP							"PowerUp"
#define MSG_CONFIGURATION_VER				" Laaste Update: "
#define MSG_FREE_MEMORY						" Vrij geheugen: "
#define MSG_PLANNER_BUFFER_BYTES			"  PlannerBufferBytes: "
#define MSG_OK								"ok"
#define MSG_ERR_CHECKSUM_MISMATCH			"checksum fout, Laatste lijn: "
#define MSG_ERR_NO_CHECKSUM					"Geen Checksum met lijnnummer Laatste Lijn: "
#define MSG_BEGIN_FILE_LIST					"Begin file lijst"
#define MSG_END_FILE_LIST					"Eind file lijst"
#define MSG_M104_INVALID_EXTRUDER			"M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER			"M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER			"M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER			"M218 Invalid extruder "
#define MSG_M221_INVALID_EXTRUDER			"M221 Invalid extruder "
#define MSG_ERR_NO_THERMISTORS				"Geen Temp.sensoren - geen temperatuur"
#define MSG_M109_INVALID_EXTRUDER			"M109 Invalid extruder "
#define MSG_HEATING							"Opwarmen"
#define MSG_HEATING_COMPLETE				"Opwarmen klaar."
#define MSG_BED_HEATING						"Bed opwarmen"
#define MSG_BED_DONE						"Bed OK."
#define MSG_M115_REPORT						"FIRMWARE_NAME:Marlin V1.0.2; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" CUSTOM_MENDEL_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_ERR_KILLED						"Printer gestopt. kill() called!"
#define MSG_ERR_STOPPED						"Printer vanwege fouten gestopt. Repareer de fout en gebruiken M999 te herstarten. (Temperatuur is gereset. Stel het na het herstarten)"
#define MSG_RESEND							"Resend: "
#define MSG_M119_REPORT						"Endstop status weergeven"
#define MSG_ENDSTOP_HIT						"gesloten"
#define MSG_ENDSTOP_OPEN					"open"

#define MSG_SD_CANT_OPEN_SUBDIR				"Kan map niet openen"
#define MSG_SD_INIT_FAIL					"SD opstarten mislukt"
#define MSG_SD_VOL_INIT_FAIL				"Volume.init mislukt"
#define MSG_SD_OPENROOT_FAIL				"Toegang tot basismap mislukt"
#define MSG_SD_CARD_OK						"SD card ok"
#define MSG_SD_WORKDIR_FAIL					"Openen van werkmap mislukt"
#define MSG_SD_OPEN_FILE_FAIL				"Openen mislukt, bestand : "
#define MSG_SD_FILE_OPENED					"Bestand  geopend: "
#define MSG_SD_FILE_SELECTED				"Bestand  geselecteerd"
#define MSG_SD_WRITE_TO_FILE				"Naar bestand schrijven: "
#define MSG_SD_PRINTING_BYTE				"SD printing byte "
#define MSG_SD_NOT_PRINTING					"geen SD printen"
#define MSG_SD_ERR_WRITE_TO_FILE			"fout bij schrijven naar bestand"
#define MSG_SD_CANT_ENTER_SUBDIR			"Kan niet in map: "

#define MSG_STEPPER_TOO_HIGH				"Steprate te hoog: "
#define MSG_ENDSTOPS_HIT					"endstops hit: "
#define MSG_ERR_COLD_EXTRUDE_STOP			"Stop, extruder kouwd!"
#define MSG_BABYSTEPPING_X					"Babystepping X"
#define MSG_BABYSTEPPING_Y					"Babystepping Y"
#define MSG_BABYSTEPPING_Z					"Z is ingesteld"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE		"Error in menu structure"

#define MSG_LANGUAGE_NAME					"Nederlands"
#define MSG_LANGUAGE_SELECT					"Kies taal"
#define MSG_PRUSA3D							"prusa3d.com"
#define MSG_PRUSA3D_FORUM					"forum.prusa3d.com"
#define MSG_PRUSA3D_HOWTO					"howto.prusa3d.com"

#define MSG_SELFTEST_ERROR					"Zelftest Fout !"
#define MSG_SELFTEST_PLEASECHECK			"Controleer aub:"	
#define MSG_SELFTEST_NOTCONNECTED			"Niet aangesloten"
#define MSG_SELFTEST_HEATERTHERMISTOR		"Heater/Thermistor"
#define MSG_SELFTEST_BEDHEATER				"Bed / Heater"
#define MSG_SELFTEST_WIRINGERROR			"Bedrading fout"
#define MSG_SELFTEST_ENDSTOPS				"Endstops"
#define MSG_SELFTEST_MOTOR					"Motor"
#define MSG_SELFTEST_ENDSTOP				"Endstop"
#define MSG_SELFTEST_ENDSTOP_NOTHIT			"Endstop niet geraakt"
#define MSG_SELFTEST_OK						"Zelftest OK"
#define MSG_LOOSE_PULLEY					"Loose pulley"

#define MSG_SELFTEST_FAN					"Fan test";
#define MSG_SELFTEST_COOLING_FAN			"Voordere fan?";
#define MSG_SELFTEST_EXTRUDER_FAN			"Linke fan?";
#define MSG_SELFTEST_FAN_YES				"Roteert";
#define MSG_SELFTEST_FAN_NO					"Roteert niet";

#define MSG_STATS_TOTALFILAMENT				"Filament total: "
#define MSG_STATS_TOTALPRINTTIME 			"Total printtijd:"
#define MSG_STATS_FILAMENTUSED				"Filamentverbruik:"
#define MSG_STATS_PRINTTIME					"Printtijd:   "
#define MSG_SELFTEST_START					"Zelftest  start  "
#define MSG_SELFTEST_CHECK_ENDSTOPS			"Controleer endstops"
#define MSG_SELFTEST_CHECK_HOTEND			"Controleer hotend  "  
#define MSG_SELFTEST_CHECK_X				"Controleer X as    "
#define MSG_SELFTEST_CHECK_Y				"Controleer Y as    "
#define MSG_SELFTEST_CHECK_Z				"Controleer Z as    "
#define MSG_SELFTEST_CHECK_BED				"Controleer bed  "
#define MSG_SELFTEST_CHECK_ALLCORRECT		"Allemaal goed    "
#define MSG_SELFTEST						"Zelftest         "
#define MSG_SELFTEST_FAILED					"Zelftest mislukt "
#define MSG_STATISTICS						"Statistieken"
#define MSG_USB_PRINTING					"USB printing  "
#define MSG_HOMEYZ							"Kalibreren Z"
#define MSG_HOMEYZ_PROGRESS					"Kalibreren Z"
#define MSG_HOMEYZ_DONE						"Kalbibratie OK"

#define MSG_SHOW_END_STOPS					"Toon endstops"
#define MSG_CALIBRATE_BED					"Kalibratie XYZ"
#define MSG_CALIBRATE_BED_RESET				"Reset XYZ kalibr."

#define MSG_MOVE_CARRIAGE_TO_THE_TOP 		"Kalibreren van XYZ. Draai de knop om de Z-wagen omhoog te gaan tot het einde stoppers. Klik als klaar."
#define MSG_MOVE_CARRIAGE_TO_THE_TOP_Z 		"Kalibreren van XYZ. Draai de knop om de Z-wagen omhoog te gaan tot het einde stoppers. Klik als klaar."

#define MSG_CONFIRM_NOZZLE_CLEAN			"Reinig het tuit voor de kalibratie aub. Klik als klaar."
#define MSG_CONFIRM_CARRIAGE_AT_THE_TOP		"Zijn beide Z wagen heelemaal boven?"

#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE1		"Zoeke bed kalibratiepunt"
#define MSG_FIND_BED_OFFSET_AND_SKEW_LINE2		" van 4"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE1	"Nauwkeurigheid verbeteren bij kalibratiepunt"
#define MSG_IMPROVE_BED_OFFSET_AND_SKEW_LINE2	" van 9"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE1	"Meten van reference hoogte van de kalibratiepunt"
#define MSG_MEASURE_BED_REFERENCE_HEIGHT_LINE2	" van 9"
#define MSG_FIND_BED_OFFSET_AND_SKEW_ITERATION	"Herhaling "

#define MSG_BED_SKEW_OFFSET_DETECTION_POINT_NOT_FOUND			"XYZ kalibratie mislukt. Bed kalibratiepunt niet gevonden."
#define MSG_BED_SKEW_OFFSET_DETECTION_FITTING_FAILED			"XYZ kalibratie mislukt. Raadpleeg de handleiding."
#define MSG_BED_SKEW_OFFSET_DETECTION_PERFECT					"XYZ kalibratie ok. X/Y-assen staan perpendiculair. Gefeliciteerd!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_MILD					"XYZ kalibratie ok. X/Y-assen zijn iets scheef. Scheefheid wordt automatisch gecorrigeerd. Goed gedaan!"
#define MSG_BED_SKEW_OFFSET_DETECTION_SKEW_EXTREME				"XYZ kalibratie ok. X/Y-assen zijn heel scheef. Scheefheid wordt automatisch gecorrigeerd."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_LEFT_FAR		"XYZ kalibratie mislukt. Linksvoor kalibratiepunt niet bereikbaar."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_RIGHT_FAR	"XYZ kalibratie mislukt. Rechtsvoor kalibratiepunt niet bereikbaar."
#define MSG_BED_SKEW_OFFSET_DETECTION_FAILED_FRONT_BOTH_FAR		"XYZ kalibratie mislukt. Voorzijde kalibratiepunten niet bereikbaar."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_LEFT_FAR	"XYZ kalibratie gecompromitteerd. Linksvoor kalibratiepunt niet bereikbaar."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_RIGHT_FAR	"XYZ kalibratie gecompromitteerd. Rechtsvoor kalibratiepunt niet bereikbaar."
#define MSG_BED_SKEW_OFFSET_DETECTION_WARNING_FRONT_BOTH_FAR	"XYZ kalibratie gecompromitteerd. Voorzijde kalibratiepunten niet bereikbaar."

#define MSG_BED_LEVELING_FAILED_POINT_LOW						"Bed nivellering mislukt. Sensor was niet geactiveerd. Vuil op nozzle? Wacht op reset."
#define MSG_BED_LEVELING_FAILED_POINT_HIGH						"Bed nivellering mislukt. Een sensor heeft te hoog getriggerd. Wacht op reset."
#define MSG_BED_LEVELING_FAILED_PROBE_DISCONNECTED				"Bed nivellering mislukt.Sensor niet aangesloten of kabel gebroken.Wacht op reset"

#defineMSG_NEW_FIRMWARE_AVAILABLE			"Nieuwe firmware versie beschikbaar:"
#define MSG_NEW_FIRMWARE_PLEASE_UPGRADE		"Upgraden aub."

#define MSG_FOLLOW_CALIBRATION_FLOW			"Printer is nog niet gekalibreerd. Volg de handleiding, hoofdstuk First steps, sectie Calibration flow."
#define MSG_BABYSTEP_Z_NOT_SET				"Afstand tussen tip van het tuit en het print oppervlak nog niet vastgesteld. Volg de handleiding, First steps, sectie First layer calibration."

#define MSG_FILAMENT_LOADING_T0				"Steek filament in de extruder 1. Klik als klaar."
#define MSG_FILAMENT_LOADING_T1				"Steek filament in de extruder 2. Klik als klaar."
#define MSG_FILAMENT_LOADING_T2				"Steek filament in de extruder 3. Klik als klaar."
#define MSG_FILAMENT_LOADING_T3				"Steek filament in de extruder 4. Klik als klaar."
#define MSG_CHANGE_EXTR						"Wissel extruder"

#define MSG_FIL_ADJUSTING					"Aanpassen filamenten. Even geduld aub."
#define MSG_CONFIRM_NOZZLE_CLEAN_FIL_ADJ	"Filamenten zijn nu ingesteld. Reinig het tuit voor de kalibratie. Klik als klaar."
#define MSG_STACK_ERROR						"Error - static memory has been overwritten"
#define MSG_CALIBRATE_E						"Kalibratie E"
#define MSG_RESET_CALIBRATE_E				"Reset E Cal."
#define MSG_E_CAL_KNOB						"Draai knop tot mark extruder bereikt is. Klik als klaar."

//#define MSG_FARM_CARD_MENU				"Farm mode print"
#define MSG_MARK_FIL						"Mark filament 100mm van extruder body. Klik als klaar."
#define MSG_CLEAN_NOZZLE_E					"E kalibratie voltooid. Reinig het tuit. Klik op als klaar."
#define MSG_WAITING_TEMP					"Wachten op afkoelen van heater en bed."
#define MSG_FILAMENT_CLEAN					"Is kleur zuiver?"
#define MSG_UNLOADING_FILAMENT				"Filament uitwerpen"
#define MSG_PAPER							"Leg een vel papier onder het tuit tijdens de kalibratie van de eerste 4 punten. Als het tuit het papier vangt, Printer onmiddellijk uitschakelen."

#define MSG_BED_CORRECTION_MENU				"Bed juist"
#define MSG_BED_CORRECTION_LEFT				"Links     [um]"
#define MSG_BED_CORRECTION_RIGHT			"Rechts    [um]"
#define MSG_BED_CORRECTION_FRONT			"Vooraan   [um]"
#define MSG_BED_CORRECTION_REAR				"Achter    [um]"
#define MSG_BED_CORRECTION_RESET			"Reset"

#define MSG_MESH_BED_LEVELING				"Mesh Bed Leveling"
#define MSG_MENU_CALIBRATION				"Kalibratie"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_OFF	"SD card [normal]"
#define MSG_TOSHIBA_FLASH_AIR_COMPATIBILITY_ON	"SD card [FlshAir]"
#define MSG_PRINTER_DISCONNECTED			"Printer ontbonden"
#define MSG_FINISHING_MOVEMENTS				"Bewegingen afwerken"
#define MSG_PRINT_PAUSED					"Druck pauzeren"
#define MSG_RESUMING_PRINT					"Print hervatten"
#define MSG_PID_EXTRUDER					"PID kalibratie"
#define MSG_SET_TEMPERATURE					"Temp. instellen"
#define MSG_PID_FINISHED					"PID kal. klaar      "
#define MSG_PID_RUNNING						"PID kal.     "

#define MSG_CALIBRATE_PINDA					"PINDA Temp. kal."
#define MSG_CALIBRATION_PINDA_MENU			"PINDA Temp. kal."
#define MSG_PINDA_NOT_CALIBRATED			"PINDA temperatuur calibratie was nog niet uitgevoerd"
#define MSG_PINDA_PREHEAT					"PINDA warmt op"
#define MSG_TEMP_CALIBRATION				"PINDA Temp.kal."
#define MSG_TEMP_CALIBRATION_DONE			"PINDA temperatuur calibratie is klaar. Klik om door te gaan."
#define MSG_TEMP_CALIBRATION_ON				"PINDA T.kal. [ON]"
#define MSG_TEMP_CALIBRATION_OFF			"PINDA T.kal.[OFF]"

#define MSG_PREPARE_FILAMENT				"Filam. voorbereiden"
#define MSG_ALL								"Alle"
#define MSG_USED							"Gebruikt bij print"
#define MSG_CURRENT							"Actueel"
#define MSG_CHOOSE_EXTRUDER					"Kies Extruder"
#define MSG_EXTRUDER						"Extruder"
#define MSG_EXTRUDER_1						"Extruder 1"
#define MSG_EXTRUDER_2						"Extruder 2"
#define MSG_EXTRUDER_3						"Extruder 3"
#define MSG_EXTRUDER_4						"Extruder 4"
#define MSG_DATE							"Datum:"
#define MSG_XYZ_DETAILS						"XYZ kal. details"
#define	MSG_Y_DISTANCE_FROM_MIN				"Y afstand van min"
#define	MSG_LEFT							"Links:"
#define MSG_CENTER							"Centrum:"
#define MSG_RIGHT							"Rechts:"
#define MSG_MEASURED_SKEW					"Symmetrie:"
#define MSG_SLIGHT_SKEW						"Geringe Asym.:"
#define MSG_SEVERE_SKEW						"Hevige  Asym.:"
#define MSG_DEFAULT_SETTINGS_LOADED			"Standaard instellingen geladen"
#define MSG_SORT_TIME						"Sort:     [Tijd]"
#define MSG_SORT_ALPHA						"Sort: 	[Alfabet]"
#define MSG_SORT_NONE						"Sort:     [Geen]"
#define MSG_SORTING							"Sortere bestand"
#define MSG_FILE_INCOMPLETE					"Bestand onvolledig. Maar toch doorgaan?"
#define MSG_WIZARD							"Assistent"
#define	MSG_WIZARD_WELCOME					"Hallo, ik ben uw originele Prusa i3 printer. Zullen we beginnen met het installatieproces?"
#define MSG_WIZARD_QUIT						"U kunt de wizard altijd uit Kalibratie -> Assistent kiezen."
#define MSG_WIZARD_SELFTEST					"Ten eerste zullen we de zelftest uitvoeren om de meest voorkomende montageproblemen te controleren."
#define MSG_WIZARD_CALIBRATION_FAILED		"Controleer alstublieft ons handboek en los het probleem op. Vervolgens hervat de wizard door de printer opnieuw te starten."
#define MSG_WIZARD_XYZ_CAL					"Begin nu met xyz-kalibratie. Het duurt ongeveer 12 min."
#define MSG_WIZARD_FILAMENT_LOADED			"Filament geladen?"
#define MSG_WIZARD_Z_CAL					"Begin nu met z-kalibratie."
#define MSG_WIZARD_WILL_PREHEAT				"Opwarmen van de tuit voor PLA voor."
#define MSG_WIZARD_HEATING					"Opwarmen van de tuit. Wacht aub."
#define MSG_WIZARD_V2_CAL					"Begin met kalibratie tussen tuit en bed."
#define MSG_WIZARD_V2_CAL_2					"Begin de Kal.-Linie te printen, draai de knop tot je de optimale hoogte bereikt. Controleer de afbeeldingen in ons handboek in hoofdstuk Calibration."
#define MSG_V2_CALIBRATION					"Eerste laag kal."
#define MSG_WIZARD_DONE						"Klaar. Happy printing!"
#define MSG_WIZARD_LOAD_FILAMENT			"Plaats PLA filament in de extruder, druk dan op knop om het te laden."
#define MSG_WIZARD_RERUN					"Starten van deWizard verwijdert de huidige kalibreringsresultaten en begint vanaf het begin. Doorgaan?"
#define MSG_WIZARD_REPEAT_V2_CAL			"Wilt u de laatste stap herhalen om de afstand tussen tuit en bed te herstellen?"
#define MSG_WIZARD_CLEAN_HEATBED			"Maak de bed schoon en druk de knop."
#define MSG_WIZARD_PLA_FILAMENT				"Is het PLA filament?"
#define MSG_WIZARD_INSERT_CORRECT_FILAMENT	"Laad aub PLA-filament en hervat de wizard door de printer opnieuw te starten."
#define MSG_PLA_FILAMENT_LOADED				"Is PLA filament geladen?"
#define MSG_PLEASE_LOAD_PLA					"Laad eerst PLA filament. aub"
#define MSG_FILE_CNT						"Sommige bestanden worden niet gesorteerd omdat de max. 100 bestanden per map is."
#define MSG_M117_V2_CALIBRATION				"M117 eerste laag kal."