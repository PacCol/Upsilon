#include <py/obj.h>

mp_obj_t modion_keyboard_keydown(mp_obj_t key_o);
mp_obj_t modion_battery();
mp_obj_t modion_battery_level();
mp_obj_t modion_battery_ischarging();
mp_obj_t modion_get_keys();
mp_obj_t modion_set_brightness(mp_obj_t brightness_mp);
mp_obj_t modion_get_brightness();
// ADDED TO THE MOD
mp_obj_t modion_set_led_color(mp_obj_t led_color_mp);
extern const mp_obj_type_t file_type;

// BQAANRMTE30TIy