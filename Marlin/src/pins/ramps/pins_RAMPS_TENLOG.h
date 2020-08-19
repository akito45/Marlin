/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Arduino Mega with RAMPS v1.4Plus, also known as 3DYMY version, pin assignments
 * The differences to the RAMPS v1.4 are:
 *  - Swap heater E0 with E1
 *  - Swap pins 8 and 10. Bed/Fan/Hotend as labeled on the board are on pins 8/9/10.
 *  - Change pins 16->42, 17->44 and 29->53 used for display.
 *
 * Applies to the following boards:
 *
 *  RAMPS_PLUS_EFB (Extruder, Fan, Bed)
 *  RAMPS_PLUS_EEB (Extruder, Extruder, Bed)
 *  RAMPS_PLUS_EFF (Extruder, Fan, Fan)
 *  RAMPS_PLUS_EEF (Extruder, Extruder, Fan)
 *  RAMPS_PLUS_SF  (Spindle, Controller Fan)
 *
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
 #error "Oops! Select 'Arduino/Genuino Mega or Mega 2560' in 'Tools > Board.'"
#endif

#define BOARD_INFO_NAME "RAMPS 1.4 TenLog edition"




	#define X_STEP_PIN         54
	#define X_DIR_PIN          55
	#define X_ENABLE_PIN       38
	#define X_MIN_PIN          3
	#define X_MAX_PIN          2//Ori 2	By zyf

	#define Y_STEP_PIN         60
	#define Y_DIR_PIN          61
	#define Y_ENABLE_PIN       56
	#define Y_MIN_PIN          14//Ori 14	by zyf
	#define Y_MAX_PIN          19 //use for Z2_MIN

	#define Z_STEP_PIN         46
	#define Z_DIR_PIN          48
	#define Z_ENABLE_PIN       62
	#define Z_MIN_PIN          18
//	#define Z_MAX_PIN          19 //used for Z2_MIN
//    #define Z2_USE_ENDSTOP          _ZMAX_


	#define Z2_STEP_PIN        65
	#define Z2_DIR_PIN         66
	#define Z2_ENABLE_PIN      64


	#define X2_STEP_PIN 36
	#define X2_DIR_PIN 34
	#define X2_ENABLE_PIN 30

	#define P2P1
	#ifdef P2P1
        #define HEATER_1_PIN        10
        #define HEATER_0_PIN        11
		#define TEMP_1_PIN         13   // ANALOG NUMBERING
        #define TEMP_0_PIN         15       //15 by zyf   // ANALOG NUMBERING
		#define E1_STEP_PIN        26
		#define E1_DIR_PIN         28
		#define E1_ENABLE_PIN      24

		#define E0_STEP_PIN        57
		#define E0_DIR_PIN         58
		#define E0_ENABLE_PIN      59
	#else
        #define HEATER_0_PIN        10
        #define HEATER_1_PIN        11
		#define TEMP_0_PIN         13   // ANALOG NUMBERING
        #define TEMP_1_PIN         15       //15 by zyf   // ANALOG NUMBERING
		#define E0_STEP_PIN        26
		#define E0_DIR_PIN         28
		#define E0_ENABLE_PIN      24

		#define E1_STEP_PIN        57
		#define E1_DIR_PIN         58
		#define E1_ENABLE_PIN      59
	#endif

    #define HEATER_BED_PIN     8    //  by zyf  // BED
    #define TEMP_BED_PIN       14 // by zyf   // ANALOG NUMBERING

	#define SDPOWER_PIN            -1
	#define SDSS               53
	#define LED_PIN            13

	#define FAN1_PIN            9
	#define FAN_PIN             5

