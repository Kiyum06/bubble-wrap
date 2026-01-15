#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(3, 6, 9));


    while(true) {
        if (bn::keypad::a_pressed()) {
            bn::backdrop::set_color(bn::color(31, 21, 22));
        }

        if (bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(31, 0, 0));
        }

        if (bn::keypad::left_released()) {
            bn::backdrop::set_color(bn::color(0, 0, 15));
        }

        if (bn::keypad::right_released()) {
            bn::backdrop::set_color(bn::color(31, 31, 0));
        }

        bn::core::update();
    }

    
}