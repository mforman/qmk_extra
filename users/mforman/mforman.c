#include "mforman.h"

userspace_config_t userspace_config;

#ifdef TAP_DANCE_ENABLE
// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
};
#endif

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    #ifdef OLED_DRIVER_ENABLE
        process_record_user_oled(keycode, record);
    #endif

    if (!process_record_keymap(keycode, record)) {
        return false;
    }

    if (!process_record_user_switcher(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case BSP_WRD:
            if (record->event.pressed) {
                int mod = userspace_config.is_mac_os ? KC_LALT : KC_LCTL;
                register_code16(mod);
                tap_code(KC_BSPC);
                unregister_code16(mod);
            }
            break;
        case COLEMAK:
            set_single_persistent_default_layer(_COLEMAK);
            break;
        case QWERTY:
            set_single_persistent_default_layer(_QWERTY);
            break;
        case CG_TOGG:
            if (record->event.pressed) {
                userspace_config.is_mac_os = !userspace_config.is_mac_os;
                task_switch_mod = userspace_config.is_mac_os ? KC_LGUI : KC_LALT;
            }
            break;
        default:
            return true;
    }
    return true;
}

__attribute__((weak)) void suspend_power_down_keymap(void) {}

void suspend_power_down_user(void) {
#ifdef OLED_ENABLE
    oled_off();
#endif
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_set_suspend_state(true);
#endif
    suspend_power_down_keymap();
}

__attribute__((weak)) void suspend_wakeup_init_keymap(void) {}

void suspend_wakeup_init_user(void) {
#ifdef OLED_ENABLE
    oled_on();
#endif
#ifdef RGB_MATRIX_ENABLE
    rgb_matrix_set_suspend_state(false);
#endif
    suspend_wakeup_init_keymap();
}

__attribute__((weak)) void matrix_scan_keymap(void) {}

void matrix_scan_user(void) { matrix_scan_keymap(); }

__attribute__((weak)) void led_set_keymap(uint8_t usb_led) {}

// Any custom LED code goes here.
// So far, I only have keyboard specific code,
// So nothing goes here.
void led_set_user(uint8_t usb_led) { led_set_keymap(usb_led); }


__attribute__((weak)) void keyboard_pre_init_keymap(void) {}

void keyboard_pre_init_user(void) {
    userspace_config.raw = eeconfig_read_user();
    keyboard_pre_init_keymap();
}
__attribute__((weak)) void eeconfig_init_keymap(void) {}

void eeconfig_init_user(void) {
    userspace_config.raw              = 0;
    userspace_config.rgb_layer_change = true;
    userspace_config.is_mac_os = true;
    eeconfig_update_user(userspace_config.raw);
    eeconfig_init_keymap();
    keyboard_init();
}

__attribute__((weak)) layer_state_t layer_state_set_keymap(layer_state_t state) { return state; }

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
    return layer_state_set_keymap(state);
};
