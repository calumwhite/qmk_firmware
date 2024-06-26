#include "kbupdated.h"
#define _BL 0
#define _FL 1
#define _CL 2

enum uthol_layers
{
    _QWERTY,
    _COLEMAK,
    _LOWER,
    _RAISE,
    _SETTINGS
};

#define QWERTY DF(_QWERTY)
#define COLEMAK DF(_COLEMAK)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SETTINGS MO(_SETTINGS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT(KC_ESC, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_UNDS, KC_EQL,
                   KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_Y, KC_U, KC_P, KC_LBRC, KC_RBRC,
                   KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_SPACE, KC_LSFT, KC_LALT, KC_ENT, KC_BACKSPACE, KC_SPACE, KC_H, KC_J, KC_DOWN, KC_K, KC_L, KC_SEMICOLON, KC_QUOT, KC_HASH,
                   KC_NUBS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_RCTL, KC_LEFT_GUI, QK_BACKLIGHT_STEP, QK_BACKLIGHT_STEP, KC_DEL, KC_RIGHT_GUI, KC_N, KC_M, KC_COMM, KC_DOT, KC_LSFT)};

void matrix_init_user(void) {}

void matrix_scan_user(void) {}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    return true;
}
