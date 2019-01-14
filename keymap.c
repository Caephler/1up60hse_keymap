/* Copyright 2018 MechMerlin
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

#define _DVL 0
#define _QWL 1
#define _MAC 2
#define _ARO 5 // Arrow layer
#define _FL 12

#define ______ KC_TRNS


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /** Keymap _DVL: Dvorak Layer (Default Layer)
   * ,---------------------------------------------------------.
   * |~ ` | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0| [ | ]|Backsp|
   * |---------------------------------------------------------|
   * |Tab  |  '|  ,|  .|  P|  Y|  F|  G|  C|  R|  L|  /|  =| \ |
   * |---------------------------------------------------------|
   * |ESC   |  A|  O|  E|  U|  I|  D|  H|  T|  N|  S|  -|Return|
   * |---------------------------------------------------------|
   * |Shift   |  ;|  Q|  J|  K|  X|  B|  M|  W|  V|  Z|MO(_ARO)|
   * |---------------------------------------------------------|
   * |Ctrl|Win |Alt |        Space      |Alt|=>KOR|MO(_FL)|=>JA|
   * `---------------------------------------------------------
   *
   */
  [_DVL] = LAYOUT_60_ansi(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSPC, \
		KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH, KC_EQL, KC_BSLS, \
    KC_ESC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS, KC_ENT, \
    KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, MO(_ARO), \
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, LALT(LSFT(1)), MO(_FL), LALT(LSFT(0))),

  /** Keymap _QWL: QWERTY Layer
   * ,---------------------------------------------------------.
   * |~ ` | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0| - | =|Backsp|
   * |---------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| \ |
   * |---------------------------------------------------------|
   * |ESC   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return|
   * |---------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|MO(_ARO)|
   * |---------------------------------------------------------|
   * |Ctrl|Win |Alt |     Space         |Alt|=>KOR|MO(_FL)|=>JA|
   * `---------------------------------------------------------
   *
   */
	[_QWL] = LAYOUT_60_ansi(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, \
    KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, MO(_ARO), \
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, LALT(LSFT(1)), MO(_FL), LALT(LSFT(0))),

  /** Keymap _MAC: Layer for Mac to switch Alt and Cmd **/
  [_MAC] = LAYOUT_60_ansi(
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, KC_LALT, KC_LGUI, ______, ______, ______, ______, ______ \
  ),

  /** Keymap _ARO: Layer for the arrow keys.
   * ,---------------------------------------------------------.
   * |        |  |   |   |   |   |   |   |   |   |   |   |  |  |
   * |---------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |  ↑|   |  |    |
   * |---------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |  ←| ↓ |  →|      |
   * |---------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |        |
   * |---------------------------------------------------------|
   * |    |    |    |                       |   |   |    |     |
   * `---------------------------------------------------------
   *
   */
  [_ARO] = LAYOUT_60_ansi(
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_UP, ______, ______, ______, \
    ______, ______, ______, ______, ______, ______, ______, ______, ______, KC_LEFT, KC_DOWN, KC_RIGHT, ______, \
    ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, ______, ______, ______, ______, ______, ______, ______ \
  ),

  /** Keymap _FL: Layer for the arrow keys.
   * ,---------------------------------------------------------.
   * |RESET|  F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  |
   * |---------------------------------------------------------|
   * |     |VO-|MUTE|VO+|NXT|PRV|   |   |   |   |   |   |      |
   * |---------------------------------------------------------|
   * |      |SWRL|RGB|   |   |   |   |   |   |   |   |   |     |
   * |---------------------------------------------------------|
   * |        |RGB+|RGB-|   |   |   |   |   |   |   | |TG(_ARO)|
   * |---------------------------------------------------------|
   * |    |    |    |          |DF(_DVL)|DF(_QWL)|    |TG(_MAC)|
   * `---------------------------------------------------------
   *
   */
  [_FL] = LAYOUT_60_ansi(
    RESET, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ______, \
    ______, KC_AUDIO_VOL_DOWN, KC_AUDIO_MUTE, KC_AUDIO_VOL_UP, KC_MEDIA_NEXT_TRACK, KC_MEDIA_PREV_TRACK, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, RGB_MODE_SWIRL, RGB_TOG, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, \
    ______, RGB_MODE_FORWARD, RGB_MODE_REVERSE, ______, ______, ______, ______, ______, ______, ______, ______, TG(_ARO), \
    ______, ______, ______, ______, DF(_DVL), DF(_QWL), ______, TG(_MAC) \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

