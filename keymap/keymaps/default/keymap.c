/* Copyright 2020 SithLord
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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN,
	_FN2
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    PSWD1 = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
		KC_GESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SLSH, KC_BSPC,
		LT(_FN, KC_TAB),  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN,  LT(_FN,KC_ENT),
		KC_LSPO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_RSPC, 
		KC_LCTL, KC_LGUI, KC_LALT,  KC_DEL, LT(_FN2, KC_ENTER),   KC_SPACE,   RGUI_T(KC_QUOT),  KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_FN] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SLSH, KC_BSPC,
		KC_TRNS,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_PIPE,  KC_MINS,  KC_EQL,  KC_L,  KC_SCLN,  KC_TRNS,
		KC_LSFT,   KC_Z,  KC_X,  KC_C,  KC_V, KC_B,  KC_LBRC, KC_RBRC, KC_COMM, KC_DOT, KC_PGUP, KC_RSFT, 
		KC_LCTL, KC_LGUI, KC_LALT,  KC_DEL, KC_TRNS,   KC_SPACE,   RGUI_T(KC_QUOT),  KC_HOME, KC_PGDN, KC_END
    ),
    [_FN2] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RESET,
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_SLSH, KC_BSPC,
		KC_TAB,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_BSLS,  KC_UNDS,  KC_PLUS,  KC_NO,  KC_NO,  KC_ENT,
		KC_LSFT,   KC_Z,  KC_X,  KC_C,  KC_V, KC_B,  KC_LBRC, KC_RBRC, KC_COMM, KC_DOT, KC_VOLU, KC_RSFT, 
		KC_LCTL, KC_LGUI, KC_LALT,  KC_DEL, KC_TRNS,   KC_SPACE,   RGUI_T(KC_QUOT),  KC_HOME, KC_VOLD, KC_END
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case PSWD1:
            if (record->event.pressed) {
                // when keycode PSWD1 is pressed
                SEND_STRING("Password");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
