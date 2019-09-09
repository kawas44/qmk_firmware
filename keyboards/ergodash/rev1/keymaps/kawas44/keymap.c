#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2


#define OS_LCTL OSM(MOD_LCTL)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_LALT OSM(MOD_LALT)
#define OS_RALT OSM(MOD_RALT)

#define BSPC_L1 LT(_LOWER, KC_BSPC)
#define SPC_L2  LT(_RAISE, KC_SPC)

#define KS_EURO (QK_RALT | QK_LSFT | KC_2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT( \
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_LBRC,                       KC_RBRC, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_LCBR,                       KC_RCBR, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    OS_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_PGUP,                       KC_PGDN, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    OS_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , XXXXXXX,                       XXXXXXX, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_BSLS,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    KC_HOME, KC_LEFT, KC_RGHT, KC_LGUI,          BSPC_L1, OS_LSFT, KC_ESC ,     KC_DEL , KC_ENT , SPC_L2 ,          OS_RALT, KC_UP  , KC_DOWN, KC_END
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_LOWER] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F12 , KC_F11 , KC_F10 , KC_F9  , KC_VOLU, XXXXXXX,                       XXXXXXX, KC_INS , KC_DEL , KC_ESC , XXXXXXX, XXXXXXX, KC_PSCR,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F8  , KC_F7  , KC_F6  , KC_F5  , KC_MPLY, XXXXXXX,                       XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_F4  , KC_F3  , KC_F2  , KC_F1  , KC_VOLD, XXXXXXX,                       XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------+--------.   ,--------+--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, XXXXXXX, XXXXXXX, _______,          _______, _______, _______,     _______, _______, _______,          _______, XXXXXXX, XXXXXXX, XXXXXXX
// `-------+--------+--------+--------+        `--------+--------+--------'   `--------+--------+--------'        `--------+--------+--------+--------'
  ),

  [_RAISE] = LAYOUT(
// ,-------+--------+--------+--------+--------+--------+--------.                     ,--------+--------+--------+--------+--------+--------+--------.
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_EQL , KC_MINS, KC_HASH, KC_LPRN, KC_RPRN, KC_AT  , XXXXXXX,                       XXXXXXX, KS_EURO, KC_7   , KC_8   , KC_9   , KC_PMNS, KC_PSLS,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    KC_AMPR, KC_ASTR, KC_PERC, KC_LBRC, KC_RBRC, KC_EXLM, XXXXXXX,                       XXXXXXX, KC_PDOT, KC_4   , KC_5   , KC_6   , KC_PPLS, KC_PAST,
// |-------+--------+--------+--------+--------+--------+--------|                     |--------+--------+--------+--------+--------+--------+--------|
    XXXXXXX, KC_BSLS, KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , XXXXXXX,                       XXXXXXX, KC_0   , KC_1   , KC_2   , KC_3   , KC_PEQL, KC_PENT,
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

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
