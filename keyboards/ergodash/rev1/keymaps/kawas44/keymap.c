#include QMK_KEYBOARD_H
#include "keymap_bepo.h"
#include "keymap_french.h"

#define _AZERTY 0
#define _BEPO 1
#define _LOWER 2
#define _RAISE 3
#define _ADJUST 4

enum custom_keycodes {
  AZERTY = SAFE_RANGE,
  BEPO
};


#define OS_LCTL OSM(MOD_LCTL)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)
#define OS_LALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)

#define OS_L1   OSL(_LOWER)
#define OS_L2   OSL(_RAISE)

#define MO_L1   MO(_LOWER)
#define MO_L2   MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_AZERTY] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LBRC,                       KC_RBRC, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_DEL ,                       KC_ENT , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_EQL ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_ESC , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_NO  ,                       KC_NUHS, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_NUBS, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,                       XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_NO  ,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    KC_NO  , KC_LCTL, KC_LGUI, KC_LALT,          MO_L1  , KC_BSPC, KC_LSFT,     KC_RSFT, KC_SPC , MO_L2  ,          KC_RALT, KC_RGUI, KC_RCTL, KC_NO
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_BEPO] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    BP_DLR , BP_DQOT, BP_LGIL, BP_RGIL, BP_LPRN, BP_RPRN, BP_W   ,                       BP_AT  , BP_PLUS, BP_MINS, BP_SLSH, BP_ASTR, BP_EQL, BP_PERC ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_TAB , BP_B   , BP_ECUT, BP_P   , BP_O   , BP_EGRV, KC_DEL ,                       KC_ENT , BP_DCRC, BP_V   , BP_D   , BP_L   , BP_J   , BP_Z   ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_ESC , BP_A   , BP_U   , BP_I   , BP_E   , BP_COMM, KC_NO  ,                       KC_NO  , BP_C   , BP_T   , BP_S   , BP_R   , BP_N   , BP_M   ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    BP_ECRC, BP_AGRV, BP_Y   , BP_X   , BP_DOT , BP_K   , XXXXXXX,                       XXXXXXX, BP_APOS, BP_Q   , BP_G   , BP_H   , BP_F   , BP_CCED,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    KC_NO  , KC_LCTL, KC_LGUI, KC_LALT,          MO_L1  , KC_BSPC, KC_LSFT,     KC_RSFT, KC_SPC , MO_L2  ,          KC_RALT, KC_RGUI, KC_RCTL, KC_NO
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_LOWER] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_PSCR, KC_F12 , KC_F11 , KC_F10 , KC_F9  , KC_VOLU, XXXXXXX,                       XXXXXXX, KC_PGUP, KC_HOME, KC_UP  , KC_END , XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F8  , KC_F7  , KC_F6  , KC_F5  , KC_MPLY, XXXXXXX,                       XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F4  , KC_F3  , KC_F2  , KC_F1  , KC_VOLD, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_RAISE] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, KC_PAST, KC_P7  , KC_P8  , KC_P9  , KC_PMNS, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, KC_P0  , KC_P4  , KC_P5  , KC_P6  , KC_PEQL, KC_PENT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, KC_PPLS, KC_P1  , KC_P2  , KC_P3  , KC_PSLS, KC_PDOT,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------'        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_ADJUST] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, AZERTY ,                       BEPO   , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------'        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  )
};

#ifdef CONSOLE_ENABLE
void keyboard_post_init_user(void) {
  debug_enable=true;
  /* debug_matrix=true; */
  debug_keyboard=true;
  /* debug_mouse=true; */
}
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AZERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_AZERTY);
      }
      return false;
      break;
    case BEPO:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_BEPO);
      }
      return false;
      break;
  }
  return true;
}
