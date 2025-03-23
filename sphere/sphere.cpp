#include "sphere.h"

sphere::sphere(float x, float y, float radius, int mass, const sf::Color & color) {
    this -> x = x;
    this -> y = y;
    this -> radius = radius;
    this -> mass = mass;
    this -> color = color;

    obj.setRadius(radius);
    obj.setFillColor(color);
    obj.setPosition(x, y);
};

// will add the passed xy vlues to the current xy values
int sphere::update_pos(float delta_x, float delta_y) {
    x += delta_x;
    y += delta_y;
    obj.setPosition(x, y);
    return 1;
};

// will draw sphere to window
int sphere::draw(sf::RenderWindow & window) {
    window.draw(obj);
    return 1;
}

int sphere::get_mass(void) const {
    return mass;
}

int sphere::get_x(void) const {
    return x;
}
int sphere::get_y(void) const {
    return y;
}