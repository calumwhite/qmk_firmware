/* Copyright 2019 Yiancar-Designs
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
//#include QMK_KEYBOARD_H
#include "doppelganger.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
	KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_6, KC_7, KC_8, KC_9, KC_0, KC_UNDS, KC_EQL,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_I, KC_O, KC_4, KC_LBRC, KC_RBRC,
	KC_SPC, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_LALT, KC_ENT, KC_NO, KC_SPC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_HASH,
	KC_LGUI, KC_NONUS_BSLASH, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_RCTRL, BL_STEP, KC_NO, KC_DEL, KC_LGUI, KC_N, KC_M, KC_COMM, KC_DOT, KC_0, KC_LSFT
  ),
  [1] = LAYOUT( /* FN1 */
	KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_UNDS, KC_EQL,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_UP, KC_O, KC_4, KC_LBRC, KC_RBRC,
	KC_SPC, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_LALT, KC_ENT, KC_NO, KC_SPC, KC_H, KC_LEFT, KC_DOWN, KC_RGHT, KC_1, KC_QUOT, KC_HASH,
	KC_LGUI, KC_NONUS_BSLASH, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_RCTRL, BL_STEP, KC_NO, KC_DEL, KC_LGUI, KC_N, KC_M, KC_COMM, KC_DOT, KC_0, KC_LSFT
  ),
};
