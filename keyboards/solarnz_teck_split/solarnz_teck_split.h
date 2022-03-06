// Copyright 2022 Chris Trotman (@solarnz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06, L07, R00, R01, R02, R03, R04, R05, R06, R07, \
    L10, L11, L12, L13, L14, L15, L16, L17, R10, R11, R12, R13, R14, R15, R16, R17, \
    L20, L21, L22, L23, L24, L25, L26, L27, R20, R21, R22, R23, R24, R25, R26, R27, \
         L31, L32, L33, L34, L35, L36, L37, R30, R31, R32, R33, R34, R35, R36,      \
         L41, L42, L43, L44, L45, L46, L47, R40, R41, R42, R43, R44, R45, R46,      \
         L51, L52, L53, L54, L55, L56, L57, R50, R51, R52, R53, R54, R55, R56       \
    ) \
    { \
        { L00,   L01, L02, L03, L04, L05, L06, L07 }, \
        { L10,   L11, L12, L13, L14, L15, L16, L17 }, \
        { L20,   L21, L22, L23, L24, L25, L26, L27 }, \
        { KC_NO, L31, L32, L33, L34, L35, L36, L37 }, \
        { KC_NO, L41, L42, L43, L44, L45, L46, L47 }, \
        { KC_NO, L51, L52, L53, L54, L55, L56, L57 }, \
        { R07,   R06, R05, R04, R03, R02, R01, R00 }, \
        { R17,   R16, R15, R14, R13, R12, R11, R10 }, \
        { R27,   R26, R25, R24, R23, R22, R21, R20 }, \
        { KC_NO, R36, R35, R34, R33, R32, R31, R30 }, \
        { KC_NO, R46, R45, R44, R43, R42, R41, R40 }, \
        { KC_NO, R56, R55, R54, R53, R52, R51, R50 }  \
    }
