#pragma once
// clang-format off

/*
    Hot wire cutter

    Two parallel carriages - each controlling one end of an electrically heated metal alloy wire.
    One is x, y for horizontal and vertical position, and the other a, b.

    SPINDLE_OUTPUT_PIN controls the wire heating power with 5KHz PWM.
*/

#define MACHINE_NAME            "hotcut"

#ifdef N_AXIS
    #undef N_AXIS
#endif
#define N_AXIS 5

#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_14
#define Y_STEP_PIN              GPIO_NUM_27
#define Y_DIRECTION_PIN         GPIO_NUM_26
#define A_STEP_PIN              GPIO_NUM_25
#define A_DIRECTION_PIN         GPIO_NUM_33
#define B_STEP_PIN              GPIO_NUM_32
#define B_DIRECTION_PIN         GPIO_NUM_35

// #define X_LIMIT_PIN             GPIO_NUM_17
// #define Y_LIMIT_PIN             GPIO_NUM_4
// #define Z_LIMIT_PIN             GPIO_NUM_16


// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

#define SPINDLE_TYPE            SpindleType::PWM
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_2   // labeled SpinPWM
#define SPINDLE_ENABLE_PIN      GPIO_NUM_22  // labeled SpinEnbl

// #define COOLANT_MIST_PIN        GPIO_NUM_21  // labeled Mist
// #define COOLANT_FLOOD_PIN       GPIO_NUM_25  // labeled Flood
// #define PROBE_PIN               GPIO_NUM_32  // labeled Probe


/*
#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // labeled Door,  needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_34  // labeled Reset, needs external pullup
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_36  // labeled Hold,  needs external pullup
#define CONTROL_CYCLE_START_PIN GPIO_NUM_39  // labeled Start, needs external pullup
*/

