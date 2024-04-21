// Copyright 2024 Stefan Gluszek (@Stefan Gluszek)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500

#define ENCODERS_PAD_A { }
#define ENCODERS_PAD_B { }

#define BOOTMAGIC_ROW 4
#define BOOTMAGIC_COLUMN 1
