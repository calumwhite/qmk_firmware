#include "kbupdated.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    KEYMAP(KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_UNDS, KC_EQL, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_UP, KC_O, KC_4, KC_LBRC, KC_RBRC, KC_SPC, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_LALT, KC_ENT, KC_NO, KC_SPC, KC_H, KC_LEFT, KC_DOWN, KC_RGHT, KC_1, KC_QUOT, KC_HASH, KC_LGUI, KC_NONUS_BSLASH, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_RCTRL, BL_STEP, KC_NO, KC_DEL, KC_LGUI, KC_N, KC_M, KC_COMM, KC_DOT, KC_0, KC_LSFT)};

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
