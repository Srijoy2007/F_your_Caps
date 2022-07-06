#include "booby.h"
#include "tapdancer.h"
#ifdef TAP_DANCE_ENABLE

#    include <stdbool.h>
#    include <inttypes.h>
// clang-format off
enum layer_names {
  _HOME,
  _TAP2

 
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_HOME] =  LAYOUT (
        KC_I , KC_C , KC_A,
        KC_S ,  KC_Y , KC_P,
        KC_H , KC_J , KC_L
    )

}

void dance_1_finished(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_I);

    }else {
        unregiter_code(KC_C);
    }
}
void dance_1_reset(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_I);

    }else {
        unregiter_code(KC_C);
    }
}

// TAP 2 
void dance_2_finished(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_A);

    }else {
        unregiter_code(KC_S);
    }
}
void dance_2_reset(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_A);

    }else {
        unregiter_code(KC_S);
    }
}

//tap 3
void dance_3_finished(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_Y);

    }else {
        unregiter_code(KC_P);
    }
}
void dance_3_reset(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_Y);

    }else {
        unregiter_code(KC_P);
    }
}



//TAP 4

void dance_4_finished(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_H);

    }else {
        unregiter_code(KC_J);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_H);

    }else {
        unregiter_code(KC_J);
    }
}

//TAP 5
void dance_4_finished(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_M);

    }else {
        unregiter_code(KC_L);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state , void *user_data){
    if (state->count == 2){
        unregister_code(KC_M);

    }else {
        unregiter_code(KC_L);
    }
}


qmk_tap_dance_action_t tap_dance_actions[] = {
     [TD1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),

    [TD2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),

    [TD3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),

    [TD4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_4_finished, dance_4_reset),

    [TD5] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_5_finished, dance_5_reset)
    };
