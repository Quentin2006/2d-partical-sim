#include "sphere.h"

sphere::sphere(double x, double y, int radius, double mass, const sf::Color & color) {
    this -> x = x;
    this -> y = y;
    this -> radius = radius;
    this -> mass = mass;
    this -> color = color;
    vx = 0;
    vy = 0;

    obj.setRadius(radius);
    obj.setFillColor(color);
    obj.setPosition(x, y);
};

// will add the passed xy vlues to the current xy values
int sphere::update_pos(double delta_x, double delta_y) {
    x += delta_x;
    y += delta_y;
    obj.setPosition(x, y);
    return 1;
};

int sphere::update(double delta_time) {
    x += vx * delta_time;
    y += vy * delta_time;
    obj.setPosition(x,y);
    return 1;
}

int sphere::apply_acceleration(double ax, double ay, double delta_time) {
    vx += ax * delta_time;
    vy += ay * delta_time;
    return 1;
}

// will draw sphere to window
int sphere::draw(sf::RenderWindow & window) {
    window.draw(obj);
    return 1;
}

int sphere::set_velocity(double vx, double vy) {
    this -> vx = vx;
    this -> vy = vy;
    return 1;
}

double sphere::get_mass(void) const {
    return mass;
}

double sphere::get_x(void) const {
    return x;
}
double sphere::get_y(void) const {
    return y;
}