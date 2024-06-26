// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_cw(KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO,
                    KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO,
                    KC_SPC, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_LALT,
                    KC_LGUI, KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_RCTL, BL_STEP,
                    KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQL,
                    KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,
                    KC_ENTER, KC_BSPC, KC_SPC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NUHS,
                    BL_STEP, KC_DEL, KC_RGUI, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_RSFT, KC_NO)};
