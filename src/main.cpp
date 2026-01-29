#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>
#include <bn_sprite_ptr.h>
#include <bn_sprite_items_dot.h>
#include <bn_log.h>
#include <bn_vector.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(3, 6, 9));

    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(20, 20);
    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(20, -20);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 20);
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-20, -20);

    // bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(-40, 40);
    // bn::sprite_ptr myCircle2 = bn::sprite_items::dot.create_sprite(-30, 40);
    // bn::sprite_ptr myCircle3 = bn::sprite_items::dot.create_sprite(-20, 40);
    // bn::sprite_ptr myCircle4 = bn::sprite_items::dot.create_sprite(-10, 40);
    // bn::sprite_ptr myCircle5 = bn::sprite_items::dot.create_sprite(0, 40);
    // bn::sprite_ptr myCircle6 = bn::sprite_items::dot.create_sprite(10, 40);
    // bn::sprite_ptr myCircle7 = bn::sprite_items::dot.create_sprite(20, 40);
    // bn::sprite_ptr myCircle8 = bn::sprite_items::dot.create_sprite(30, 40);
    // bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(40, 40);

    // bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(50, -50);
    // bn::sprite_ptr myCircle9 = bn::sprite_items::dot.create_sprite(-50, -50);


    bn::vector<bn::sprite_ptr, 14> circles = {};
    for(int x = -60; x <= 60; x += 10) {
        bn::sprite_ptr myCircle = bn::sprite_items::dot.create_sprite(x, 40);
        BN_LOG("x value", x);
        circles.push_back(myCircle);
    }
    


    circles[0].set_vertical_scale(2.5);
    circles[0].set_rotation_angle(1.5);
    circles[1].set_scale(0.2);
    circles[2].set_scale(0.2);
    circles[3].set_scale(0.2);
    circles[4].set_scale(0.2);
    circles[5].set_scale(0.2);
    circles[6].set_scale(0.2);
    circles[7].set_scale(0.2);
    circles[8].set_scale(0.2);
    circles[9].set_scale(0.2);
    circles[10].set_scale(0.2);
    circles[11].set_scale(0.2);
    circles[12].set_vertical_scale(2.5);
    circles[12].set_rotation_angle(1.5);


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