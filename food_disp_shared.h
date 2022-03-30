#pragma once

#define FOOD_DISP_NAME  "food_disp_chr"
// Confirm major availability
#define FOOD_DISP_MAJOR 155 
#define FOOD_DISP_MINOR 0

#define FOOD_DISP_IOCTL_PWM_CHANNEL       _IOWR(FOOD_DISP_MAJOR, 1, int *)
#define FOOD_DISP_IOCTL_PWM_APPLY_STATE   _IOWR(FOOD_DISP_MAJOR, 2, struct pwm_config *)

struct pwm_config {
    int channel;
    struct pwm_state state;
};