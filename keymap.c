/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2022 Harri Liimatta <@hliimatta>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                         KC_H,    KC_N,    KC_E,    KC_I,  KC_O,  KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  RSFT_T(KC_ENT),
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI,   MO(2), KC_SPC,      KC_SPC,   MO(3), KC_LALT
                                            //`--------------------------'  `--------------------------'
    ),


    [1] = LAYOUT_split_3x6_3(

        // ---------------------------------------------------------------------------------
        // |  TAB |  Q  |  W  |  E  |  R  |  T  |     |  Y  |  U   |  I  |  O  |  P  | BKSP|
        // |  GUI |  A  |  S  |  D  |  F  |  G  |     |  H  |  J   |  K  |  L  |  Ö  |  Ä  |
        // | SHFT |  Z  |  X  |  C  |  V  |  B  |     |  N  |  M   |  ,  |  .  |  -  | ENT |
        //                    | ALT | CTL | SPC |     | SPC | LWR  | RSE |

        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,   KC_U  ,  KC_I  ,  KC_O  ,  KC_P  , KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,  KC_J  ,  KC_K  ,  KC_L  , KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,  KC_M  , KC_COMM,  KC_DOT, KC_SLSH, RSFT_T(KC_ENT),
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI,   MO(2), KC_SPC,      KC_SPC,   MO(3), KC_LALT
                                            //`--------------------------'  `--------------------------'
    ),

    [2] = LAYOUT_split_3x6_3(
        // --------------------------------------------------------------------------------
        // | ESC  |  1  |  2  |  3  |  4  |  5  |     |  6  |  7  |  8  |  9  |  0  | BKSP|
        // |      |  F1 |  F2 |  F3 |  F4 |  F5 |     | LFT | DWN |  UP | RGT | HOME| PGUP|
        // |      |  F6 |  F7 |  F8 |  F9 | F10 |     | F11 | F12 |     |     | END | PGDN|
        //                    | ALT | CTL | SPC |     | SPC | LWR  | RSE |

        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_HOME, KC_PGUP,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                        KC_F11,  KC_F12 , XXXXXXX, XXXXXXX, KC_END,  KC_PGDN,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______, _______,    _______,  MO(7) , _______
                                          //`--------------------------'  `--------------------------'
    ),

    [3] = LAYOUT_split_3x6_3(
        // --------------------------------------------------------------------------------
        // | ESC  |  ^  |  @  |  #  |  %  |  ~  |     |  \  |  /  |  )  |  }  |  ]  | DEL |
        // |      |  !  |  "  |  '  |  $  |  |  |     |  &  |  =  |  (  |  {  |  [  |  *  |
        // |      | BT1 | BT2 | BT3 | BT4 | BT5 |     |  `  |  ?  |  <  |  >  |  +  | ENT |
        //                    | ALT | CTL | SPC |     | SPC | LWR  | RSE |

        //,--------------------------------------------------------------.                    ,------------------------------------------------------------------------------.
           KC_ESC,S(KC_RCBR),RALT(KC_2), KC_HASH,   S(KC_5),RALT(KC_RBRC),                      RALT(S(KC_7)),    S(KC_7), S(KC_9), RALT(S(KC_9)), RALT(KC_9),         KC_DEL,
        //|--------+----------+--------+--------+----------+-------------|                    |--------------+-----------+--------+--------------+-----------+---------------|
            _______,   KC_EXLM, S(KC_2), KC_NUHS,RALT(KC_4),   RALT(KC_7),                         S(KC_6)   ,  S(KC_0)  , S(KC_8), RALT(S(KC_8)), RALT(KC_8),     S(KC_NUHS),
        //|--------+----------+--------+--------+----------+-------------|                    |--------------+-----------+--------+--------------+-----------+---------------|
            _______,   KC_MS_L, KC_MS_D, KC_MS_U,   KC_MS_R,      KC_BTN1,                          S(KC_EQL), S(KC_MINS), KC_NUBS,    S(KC_NUBS),    KC_MINS, RSFT_T(KC_ENT),
        //|--------+----------+--------+--------+----------+-------------+--------|  |--------+--------------+-----------+--------+--------------+-----------+---------------|
                                                  _______,      _______, _______,    _______,       _______,    _______
                                            //`---------------------------------'  `-----------------------------------'
    ),


    [4] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                         KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                         KC_H,    KC_N,    KC_E,    KC_I,  KC_O,  KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_K,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  RSFT_T(KC_ENT),
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI,   MO(5), KC_SPC,      KC_SPC,   MO(6), KC_LALT
                                            //`--------------------------'  `--------------------------'
    ),

    [5] = LAYOUT_split_3x6_3(
        // --------------------------------------------------------------------------------
        // | ESC  |  1  |  2  |  3  |  4  |  5  |     |  6  |  7  |  8  |  9  |  0  | BKSP|
        // |      |  F1 |  F2 |  F3 |  F4 |  F5 |     | LFT | DWN |  UP | RGT | HOME| PGUP|
        // |      |  F6 |  F7 |  F8 |  F9 | F10 |     | F11 | F12 |     |     | END | PGDN|
        //                    | ALT | CTL | SPC |     | SPC | LWR  | RSE |

        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_HOME, KC_PGUP,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                       KC_F11,  KC_F12, XXXXXXX, XXXXXXX,  KC_END, KC_PGDN,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______, _______,    _______, MO(7)  , _______
                                          //`--------------------------'  `--------------------------'
    ),

    [6] = LAYOUT_split_3x6_3(
        // --------------------------------------------------------------------------------
        // | RESET|  ^  |  @  |  #  |  %  |  ~  |     |  \  |  /  |  )  |  }  |  ]  | DEL |
        // |      |  !  |  "  |  '  |  $  |  |  |     |  &  |  =  |  (  |  {  |  [  |  *  |
        // |      | BT1 | BT2 | BT3 | BT4 | BT5 |     |  `  |  ?  |  <  |  >  |  +  | ENT |
        //                    | ALT | CTL | SPC |     | SPC | LWR  | RSE |

        //,----------------------------------------------------------------.                    ,------------------------------------------------------------------------------.
            KC_ESC ,S(KC_RCBR),RALT(KC_2), KC_HASH,  S(KC_5) ,RALT(KC_RBRC),                     RALT(KC_MINS) ,  S(KC_7)  , S(KC_9),  RALT(KC_0)  , RALT(KC_9),   KC_DEL      ,
        //|--------+----------+----------+--------+----------+-------------|                    |--------------+-----------+--------+--------------+-----------+---------------|
            _______, KC_EXLM  , S(KC_2)  , KC_NUHS,RALT(KC_4),RALT(KC_NUBS),                         S(KC_6)   ,  S(KC_0)  ,S(KC_8) ,  RALT(KC_7)  , RALT(KC_8),  S(KC_NUHS)   ,
        //|--------+----------+----------+--------+----------+-------------|                    |--------------+-----------+--------+--------------+-----------+---------------|
            _______, KC_MS_L  ,  KC_MS_D ,KC_MS_U , KC_MS_R  ,  KC_BTN5    ,                         S(KC_EQL) , S(KC_MINS), KC_NUBS,  S(KC_NUBS)  ,  KC_MINS  , RSFT_T(KC_ENT),
        //|--------+----------+----------+--------+----------+-------------+--------|  |--------+--------------+-----------+--------+--------------+-----------+---------------|
                                                  _______,      _______, _______,    _______,       _______,    _______
                                            //`---------------------------------'  `-----------------------------------'
    ),

    [7] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            DF(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DF(4)  ,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DF(1)  ,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______,  KC_SPC,     KC_ENT, _______, _______
                                          //`--------------------------'  `--------------------------'
    )
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;
  }
  return rotation;
}

#define L_OSX 0
#define L_QWERTY 1
#define L_OSX_LOWER 2
#define L_OSX_RAISE 3
#define L_LNX 4
#define L_LNX_LOWER 5
#define L_LNX_RAISE 6
#define L_ADJUST 7

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state|default_layer_state)) {
        case L_OSX:
            oled_write_ln_P(PSTR("Mac"), false);
            break;
        case L_OSX_LOWER:
            oled_write_ln_P(PSTR("Mac num "), false);  
            break;
        case L_OSX_RAISE:
            oled_write_ln_P(PSTR("Mac sym"), false);
            break;
        case L_LNX:
            oled_write_ln_P(PSTR("Linux"), false);
            break;
        case L_LNX_LOWER:
            oled_write_ln_P(PSTR("Linux num"), false);
            break;
        case L_LNX_RAISE:
            oled_write_ln_P(PSTR("Linux sym"), false);
            break;
        case L_ADJUST:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
        case L_QWERTY:
            oled_write_ln_P(PSTR("QWERTY"), false);
            break;
    }
}

char keylog_str[24] = {};
const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
    if (keycode < 60) {
    name = code_to_name[keycode];
    }

    snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif
