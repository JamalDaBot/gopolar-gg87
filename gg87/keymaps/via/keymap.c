#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

        [0] = LAYOUT(
                KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,   KC_F7,   KC_F8,            KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS,
                KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,                    KC_BSPC, KC_INS , KC_HOME, KC_PGUP,
                KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, KC_DEL , KC_END,  KC_PGDN,
                KC_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,         
                KC_LSFT, MO(1),   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT, MO(2),            KC_UP,
                KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                                        KC_RALT, KC_RGUI, MO(3),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

        [1] = LAYOUT(
                KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,   KC_F7,   KC_F8,            KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_VOLD, KC_MUTE, KC_VOLU,
                KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,                    KC_BSPC, KC_MPRV, KC_MPLY, KC_MNXT,
                KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
                KC_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          RGB_TOG,         
                KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_CALC, KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT, KC_NO,            RGB_VAI,
                KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                                        KC_RALT, KC_RGUI, KC_NO,   KC_RCTL, RGB_MOD, RGB_VAD, RGB_RMOD),

        [2] = LAYOUT(
                KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,   KC_F7,   KC_F8,            KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_VOLD, KC_MUTE, KC_VOLU,
                KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,                    KC_BSPC, KC_MPRV, KC_MPLY, KC_MNXT,
                KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
                KC_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          RGB_TOG,         
                KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_CALC, KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT, KC_NO,            RGB_VAI,
                KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                                                        KC_RALT, KC_RGUI, KC_NO,   KC_RCTL, RGB_MOD, RGB_VAD, RGB_RMOD),

        [3] = LAYOUT(
                KC_ESC,           KC_F1,            KC_F2,         KC_F3,         KC_F4,            KC_F5,      KC_F6,      KC_F7,    KC_F8,               KC_F9,   KC_F10,  KC_F11,  RESET,   KC_VOLD, KC_MUTE, KC_VOLU,
                KC_GRV,  KC_1,    KC_2,             KC_3,          KC_4,          KC_5,    KC_6,    KC_7,       KC_8,       KC_9,     KC_0,       KC_MINS, KC_EQL,                    KC_BSPC, RGB_HUI, RGB_SAI, RGB_SPI,
                KC_TAB,           KC_Q,             KC_W,          KC_E,          KC_R,    KC_T,    KC_Y,       KC_U,       KC_I,     KC_O,       KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS, RGB_HUD, RGB_SAD, RGB_SPD,
                KC_CAPS,          KC_A,             KC_S,          KC_D,          KC_F,    KC_G,    KC_H,       KC_J,       KC_K,     KC_L,       KC_SCLN, KC_QUOT,          RGB_TOG,         
                KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_CALC,       KC_V,          KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                                      KC_RSFT, KC_NO,            RGB_VAI,
                KC_LCTL, KC_LGUI, KC_LALT,                         KC_SPC,                                                                                 KC_RALT, KC_RGUI, KC_NO,   KC_RCTL, RGB_MOD, RGB_VAD, RGB_RMOD),

};

#ifdef OLED_ENABLE

// Host Keyboard Layer Status
static void render_layer_info(void) {

    switch (get_highest_layer(layer_state)) {

        case 0:
            oled_write_P(PSTR("QWERTY    "), false);
            break;
        case 1:
            oled_write_P(PSTR("FUNCTION 1"), false);
            break;
        case 2:
            oled_write_P(PSTR("FUNCTION 2"), false);
            break;
        case 3:
            oled_write_P(PSTR("FUNCTION 3"), false);
            break;
        default:
            oled_write_P(PSTR("UNDEFINED "), false);

    }

}

bool oled_task_user(void) {

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();

    // WPM
    char wpm_counter[4];
    uint16_t m = get_current_wpm();
    wpm_counter[3] = '\0';
    wpm_counter[2] = '0' + m % 10;
    wpm_counter[1] = ( m /= 10) % 10 ? '0' + (m) % 10 : (m / 10) % 10 ? '0' : '0';
    wpm_counter[0] =  m / 10 ? '0' + m / 10 : '0';
    
    oled_write_P(led_state.caps_lock ? PSTR("=CAP= ") : PSTR("===== "), false);     
    oled_write_P(led_state.num_lock ? PSTR(" =NUM= ") : PSTR(" ===== "), false);
    oled_write_P(led_state.scroll_lock ? PSTR(" =SCR=\n") : PSTR(" =====\n"), false);

    oled_write_P(PSTR("\n"), false);

    oled_write_P(PSTR("WPM: "), false);
    oled_write(wpm_counter, false);

    oled_write_P(PSTR("\nLAYER: "), false);
    render_layer_info();
	
	return false;
}
#endif
