#include <SFML/Graphics.hpp>
#include "events.cpp"
#include "world/world.h"

const float WINDOW_X = 1920u;
const float WINDOW_Y = 1080u;

// masses in kg
const double EARTH_MASS = 5.97219e24;
const double MOON_MASS = 7.34767309e22;

// sets 1px to be 1e6 meters
const double SCALE = 1e6;

// earth to moon distance in meters
const double REAL_DISTANCE = 384400000;

// Time step  
const double delta_time = 3600; // 1 hr / update

int main()
{
    sf::RenderWindow window({WINDOW_X, WINDOW_Y}, "Gravity Sim");
    window.setFramerateLimit(60);

    // pos of earth, set to center
    double earth_x = WINDOW_X/2;
    double earth_y = WINDOW_Y/2;

    // pos of moon, real distance 
    double moon_x = earth_x + (REAL_DISTANCE/SCALE);
    double moon_y = earth_y;

    sphere earth(earth_x, earth_y, 50, EARTH_MASS, sf::Color(0, 255, 0));
    sphere moon(moon_x, moon_y, 25, MOON_MASS, sf::Color(255, 0, 0));

    moon.set_velocity(0, -1022/SCALE); // 1022m/s scaled

    world world;
    world.add_sphere(earth);
    world.add_sphere(moon);

    while (window.isOpen()) {
        event_loop(window);
            
        window.clear();
        world.update(delta_time);
        world.draw(window);
        window.display();
    }

    return 0;
}