// Copyright 2022 Chris Trotman (@solarnz)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
[_BASE] = LAYOUT(
  KC_ESC,   QK_BOOT,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    /* | split | */   KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   QK_BOOT,  KC_NO,

  KC_ESC,   KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_DEL,   /* | split | */   KC_NO,    KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,
  KC_BSLS,  KC_SLSH,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_NO,    /* | split | */   KC_DEL,   KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,
            KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     MO(_FN),  /* | split | */   KC_NO,    KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_RSFT,
            KC_TAB,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_LCTL,  /* | split | */   KC_RCTL,  KC_N,     KC_M,     KC_COMMA, KC_DOT,   KC_QUOT,  KC_ENT,
            KC_LCTL,  KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END,   KC_BSPC,  KC_LGUI,  /* | split | */   KC_RGUI,  KC_SPC,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_RALT
),
[_FN] = LAYOUT(
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    /* | split | */   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,

  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    /* | split | */   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    /* | split | */   KC_MPRV,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    /* | split | */   KC_MPLY,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_NO,    KC_NO,
            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    /* | split | */   KC_MNXT,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
            KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    /* | split | */   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO
),
};
