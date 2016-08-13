#include "keymap_common.h"

/* Main layer:
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┐
│ ESC │  1  │  2  │  3  │  4  │  5  │  6  │  7  │  8  │  9  │  0  │  -  │  =  │▒▒▒▒▒│BKSPC│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│ TAB │  Q  │  W  │  E  │  R  │  T  │  Y  │  U  │  I  │  O  │  P  │  [  │  ]  │  \  │█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│CAPSL│  A  │  S  │  D  │  F  │  G  │  H  │  J  │  K  │  L  │  ;  │  '  │▒▒▒▒▒│ENTER│█████│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LSHFT│▒▒▒▒▒│  Z  │  X  │  C  │  V  │  B  │  N  │  M  │  ,  │  .  │  /  │▒▒▒▒▒│RSHFT│▒▒▒▒▒│
├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
│LCTRL│L_GUI│L_ALT│█████│█████│█████│ SPC │█████│█████│█████│R_ALT│R_GUI│ APP │RCTRL│█████│
└─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┴─────┘
*/

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(GRV,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0, MINS, EQL,    NO, BSPC, \
           TAB,    Q,    W,   E,   R,   T,   Y,   U,   I,    O,    P, LBRC, RBRC, BSLS,       \
           FN0,    A,    S,   D,   F,   G,   H,   J,   K,    L, SCLN, QUOT, NO,    ENT,       \
           FN4,   NO,    Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH, NO,   RSFT,   NO, \
          LCTL, LGUI, LALT,                FN7,                 RALT, RGUI,CAPS,  RCTL),      \
    /* 1: SpaceFn/media layer */
    KEYMAP(ESC,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,   F9,  F10,  F11,  F12, TRNS,   DEL, \
           TRNS, FN6,  FN3, ESC,MUTE, FN5,TRNS,HOME,  UP,  END,PSCR, SLCK, PAUS,  INS,        \
           TRNS,TRNS, TRNS,TRNS,VOLU,TRNS,PGUP,LEFT,DOWN, RGHT,TRNS, TRNS, TRNS, TRNS,        \
           TRNS, NO, TRNS, TRNS,TRNS,VOLD, SPC,PGDN, FN1,TRNS, TRNS, APP,   NO,  RSFT,   NO,  \
           TRNS,TRNS, TRNS,               TRNS,                 TRNS,TRNS, TRNS, TRNS),       \
    /* 2: Mouse layer */
    KEYMAP(FN2, TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS, TRNS, TRNS, TRNS,  TRNS, \
           TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,MS_U, WH_R,TRNS, TRNS, TRNS, TRNS,        \
           TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,WH_U,MS_L,MS_D,MS_R, BTN2, TRNS, TRNS, TRNS,        \
           TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,WH_D,TRNS,TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, \
           TRNS,TRNS, TRNS,               BTN1,                 TRNS,TRNS, TRNS, TRNS),       \
    /* 3: Gaming layer  */
    KEYMAP(GRV,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0, MINS, EQL,    NO, BSPC, \
           TAB,    Q,    W,   E,   R,   T,   Y,   U,   I,    O,    P, LBRC, RBRC, BSLS,       \
           FN0,    A,    S,   D,   F,   G,   H,   J,   K,    L, SCLN, QUOT, NO,   ENT,        \
           FN4,   NO,    Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH, NO,   RSFT,   NO, \
           LCTL,  NO, LALT,                FN7,                 RALT,   NO,APP,  RCTL),       \
    /* 4: WIP OSX */
    KEYMAP(GRV,    1,    2,   3,   4,   5,   6,   7,   8,    9,    0, MINS, EQL,    NO, BSPC, \
           TAB,    Q,    W,   E,   R,   T,   Y,   U,   I,    O,    P, LBRC, RBRC, BSLS,       \
           FN0,    A,    S,   D,   F,   G,   H,   J,   K,    L, SCLN, QUOT, NO,    ENT,       \
           FN4,   NO,    Z,   X,   C,   V,   B,   N,   M, COMM,  DOT, SLSH, NO,   RSFT,   NO, \
           LCTL,  NO, LALT,                FN7,                 RALT,   NO, APP,  RCTL)
};

/*
 * Macro definition
 */
enum macro_id {
    TESTS_IN_SPLITTER,
    SWITCH_SPLITTER_FILES
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    keyevent_t event = record->event;
    //uint8_t tap_count = record->tap_count;

    switch (id) {
        case TESTS_IN_SPLITTER:
            return (event.pressed ?
                        MACRO( D(LCTL), D(LSFT), D(LALT), D(A), // Press unsplit all
                               U(LCTL), U(LSFT), U(LALT), U(A), 
                               W(100),
                               D(LALT), D(RBRC), // split
                               U(LALT), U(RBRC),
                               W(100),
                               D(LCTL), D(LSFT), D(T), // go to test
                               U(LCTL), U(LSFT), U(T),
                               W(100),
                               T(ENT), // confirm 1st test imp.
                               END ) : MACRO( END )
                    );
        case SWITCH_SPLITTER_FILES:
            return (event.pressed ?
                        MACRO( D(LCTL), D(LSFT), D(0), // Toggle fav button 0
                               U(LCTL), U(LSFT), U(0), 
                               W(100),
                               D(LALT), D(LCTL), D(SCLN), // change splitter
                               U(LALT), U(LCTL), U(SCLN),
                               W(100),
                               D(LCTL), D(LSFT), D(LALT), D(Q), // Open in opposite group
                               U(LCTL), U(LSFT), U(LALT), U(Q), 
                               W(100),
                               D(LALT), D(LCTL), D(SCLN), // change splitter
                               U(LALT), U(LCTL), U(SCLN),
                               W(100),
                               D(LCTL), D(0), // restore fav
                               U(LCTL), U(0),
                               W(10),
                               D(LCTL), D(LSFT), D(0), // Toggle fav button 0
                               U(LCTL), U(LSFT), U(0), 
                               END ) : MACRO( END )
                    );
    }
    return MACRO_NONE;
}

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),           // SpaceFn
    [1] = ACTION_DEFAULT_LAYER_SET(2),         // Mouse layer
    [2] = ACTION_DEFAULT_LAYER_SET(0),         // Back to normal layer
    [3] = ACTION_DEFAULT_LAYER_SET(3),         // Gaming layer
    [4] = ACTION_MODS_ONESHOT(MOD_LSFT),       // Oneshot Shift
    [5] = ACTION_MACRO(TESTS_IN_SPLITTER),     // Macro tests in splitter
    [6] = ACTION_MACRO(SWITCH_SPLITTER_FILES), // Macro switch files
    [7] = ACTION_LAYER_TAP_KEY(1, KC_SPC)      // activate spacefn layer with spacebar
    /*OSX specific bindings -WIP-*/
};