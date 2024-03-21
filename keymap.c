#include QMK_KEYBOARD_H

#define _COLEMAK 0
#define _SYMBOL 1
#define _NUMBER 2

#define ALTENT MT(MOD_LALT, KC_ENT)
#define SHIFTandENTER S(KC_ENT)

#define LOCK TD(TAPDANCE_LOCK)
#define CAPS TD(TAPDANCE_CAPS)

#define KC_COLEMAK DF(_COLEMAK)
#define KC_SYM MO(_SYMBOL)
#define KC_NUMS MO(_NUMBER)
#define KC_COLEM DF(_COLEMAK)

#define CK_1 KC_1
#define CK_2 KC_2
#define CK_3 KC_3
#define CK_4 KC_4
#define CK_5 KC_5
#define CK_6 KC_8
#define CK_7 KC_9
#define CK_8 KC_0
#define CK_9 KC_MINS
#define CK_0 KC_EQL

#define CK_EXLM KC_EXLM
#define CK_AT KC_AT
#define CK_HASH KC_HASH
#define CK_DLR KC_DLR
#define CK_PERC KC_PERC
#define CK_CIRC KC_ASTR
#define CK_AMPR KC_LPRN
#define CK_ASTR KC_RPRN
#define CK_LPRN KC_UNDS
#define CK_RPRN KC_PLUS

#define CK_Q KC_Q
#define CK_W KC_W
#define CK_F KC_E
#define CK_P KC_R
#define CK_B KC_T
#define CK_J KC_U
#define CK_L KC_I
#define CK_U KC_O
#define CK_Y KC_P
#define CK_SCLN KC_LBRC

#define CK_ESC KC_CAPS
#define CK_A KC_A
#define CK_R KC_S
#define CK_S KC_D
#define CK_T KC_F
#define CK_G KC_G
#define CK_M KC_J
#define CK_N KC_K
#define CK_E KC_L
#define CK_I KC_SCLN
#define CK_O KC_QUOT
#define CK_QUOT KC_NUHS

#define CK_LBRC KC_6
#define CK_Z KC_NUBS
#define CK_X KC_Z
#define CK_C KC_X
#define CK_D KC_C
#define CK_V KC_V
#define CK_K KC_M
#define CK_H KC_COMM
#define CK_COMM KC_DOT
#define CK_DOT KC_SLSH
#define CK_SLSH KC_RBRC
#define CK_RBRC KC_7

#define CK_EQL KC_B
#define CK_MINS KC_N

#define CK_PLUS LSFT(KC_B)
#define CK_BSLS KC_H

#define COMPLETE C(KC_SPC)
#define CONTEXT A(KC_ENT)
#define FIND RCS(CK_F)
#define VSMENU RCS(CK_P)
#define TEST RCS(CK_T)
#define RENAME S(KC_F6)
#define USAGES A(KC_F7)
#define FORMAT LCA(CK_L)
#define HINT C(CK_P)
#define SNIP SGUI(CK_S)

#define PRT_WIN A(KC_PSCR)

#define FZ_LMS LCAG(KC_LEFT)
#define FZ_LS LGUI(KC_LEFT)
#define FZ_RS LGUI(KC_RGHT)
#define FZ_RMS LCAG(KC_RGHT)
#define FZ_WM LCAG(CK_1)
#define FZ_LTP LCAG(CK_2)

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  LOWER,
  RAISE,
};

enum {
  TAPDANCE_LOCK,
  TAPDANCE_CAPS,
};

tap_dance_action_t tap_dance_actions[] = {
  [TAPDANCE_LOCK] = ACTION_TAP_DANCE_DOUBLE(_______, G(KC_L)),
  [TAPDANCE_CAPS] = ACTION_TAP_DANCE_DOUBLE(_______, KC_ESC),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,COMPLETE,CONTEXT ,FIND    ,VSMENU  ,TEST                               ,RENAME  ,USAGES  ,_______ ,FORMAT  ,HINT    ,SNIP
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,KC_TAB  ,CK_Q    ,CK_W    ,CK_F    ,CK_P    ,CK_B                               ,CK_J    ,CK_L    ,CK_U    ,CK_Y    ,CK_SCLN ,KC_BSPC
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,CK_ESC  ,CK_A    ,CK_R    ,CK_S    ,CK_T    ,CK_G                               ,CK_M    ,CK_N    ,CK_E    ,CK_I    ,CK_O    ,CK_QUOT
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    ,CK_LBRC ,CK_Z    ,CK_X    ,CK_C    ,CK_D    ,CK_V    ,CK_EQL           ,CK_MINS ,CK_K    ,CK_H    ,CK_COMM ,CK_DOT  ,CK_SLSH ,CK_RBRC
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                   ,KC_LCTL ,ALTENT  ,KC_LSFT                   ,KC_SPC  ,KC_NUMS ,KC_SYM
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYMBOL] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______ ,_______ ,_______ ,_______                            ,_______ ,_______ ,_______ ,_______ ,_______ ,_______
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,KC_BRIU ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5                              ,KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_VOLU
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,_______ ,CK_EXLM ,CK_AT   ,CK_HASH ,CK_DLR  ,CK_PERC                            ,CK_CIRC ,CK_AMPR ,CK_ASTR ,CK_LPRN ,CK_RPRN ,KC_MUTE
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    ,KC_BRID ,KC_LGUI ,KC_LALT ,KC_LSFT ,KC_LCTL ,KC_F11  ,CK_PLUS          ,_______ ,KC_F12  ,KC_RCTL ,KC_RSFT ,KC_RALT ,KC_RGUI ,KC_VOLD
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                   ,_______ ,KC_LGUI ,SHIFTandENTER             ,_______ ,_______ ,_______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUMBER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,FZ_LTP  ,FZ_WM   ,_______ ,FZ_LMS  ,FZ_LS                              ,FZ_RS   ,FZ_RMS  ,_______ ,_______ ,_______ ,_______
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,_______ ,CK_1    ,CK_2    ,CK_3    ,CK_4    ,CK_5                               ,CK_6    ,CK_7    ,CK_8    ,CK_9    ,CK_0    ,KC_DEL
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,LOCK    ,_______ ,KC_HOME ,KC_PGUP ,KC_PGDN ,KC_END                             ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT ,KC_GRV  ,_______
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    ,CAPS    ,_______ ,_______ ,_______ ,_______ ,_______ ,CK_PLUS          ,_______ ,_______ ,_______ ,_______ ,_______ ,CK_BSLS ,_______
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                   ,_______ ,_______ ,_______                   ,_______ ,_______ ,_______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

/*
  [_] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______ ,_______ ,_______ ,_______                            ,_______ ,_______ ,_______ ,_______ ,_______ ,_______
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,_______ ,_______ ,_______ ,_______ ,_______ ,_______                            ,_______ ,_______ ,_______ ,_______ ,_______ ,_______
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
    ,_______ ,_______ ,_______ ,_______ ,_______ ,_______                            ,_______ ,_______ ,_______ ,_______ ,_______ ,_______
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
    ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______          ,_______ ,_______ ,_______ ,_______ ,_______ ,_______ ,_______
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                   ,_______ ,_______ ,_______                   ,_______ ,_______ ,_______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
 */
};

const rgblight_segment_t PROGMEM colemak_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_OFF}
);

const rgblight_segment_t PROGMEM number_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_BLUE}
);
const rgblight_segment_t PROGMEM symbol_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_YELLOW}
);
const rgblight_segment_t PROGMEM capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 12, HSV_RED}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    colemak_layer,
    symbol_layer,
    number_layer,
    capslock_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(4, led_state.caps_lock);
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(_COLEMAK, layer_state_cmp(state, _COLEMAK));
    rgblight_set_layer_state(_SYMBOL, layer_state_cmp(state, _SYMBOL));
    rgblight_set_layer_state(_NUMBER, layer_state_cmp(state, _NUMBER));
    return state;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return 200;
    }
}
