#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(3, 6, 9));


    while(true) {
        //a button
        if (bn::keypad::a_pressed()) {
            bn::backdrop::set_color(bn::color(31, 21, 22));
        }

        //b button
        if (bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(31, 0, 0));
        }

        //left button
        if (bn::keypad::left_released()) {
            bn::backdrop::set_color(bn::color(0, 0, 15));
        }

        //right button
        if (bn::keypad::right_released()) {
            bn::backdrop::set_color(bn::color(31, 31, 0));
        }

        bn::core::update();
    }

    
}