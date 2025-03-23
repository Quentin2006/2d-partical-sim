#include <SFML/Graphics.hpp>
#include "events.cpp"   // Event handling file
#include "world/world.h"

// Window dimensions
const float WINDOW_X = 1920;
const float WINDOW_Y = 1080;

// Time step in seconds per update (e.g., 10 hours per update)
const double delta_time = 3600;

// Solar system bodies (masses in kg, distances in meters)
// Sun
const double SUN_MASS = 1.989e30;

// Mercury
const double MERCURY_MASS = 3.301e23;
const double MERCURY_DISTANCE = 57.91e9;  // average distance to Sun
const double MERCURY_VELOCITY = 47.36e3;    // orbital speed in m/s

// Venus
const double VENUS_MASS = 4.867e24;
const double VENUS_DISTANCE = 108.21e9;
const double VENUS_VELOCITY = 35.02e3;

// Earth
const double EARTH_MASS = 5.97219e24;
const double EARTH_DISTANCE = 149.60e9;
const double EARTH_VELOCITY = 29.78e3;

// Mars
const double MARS_MASS = 0.64171e24;
const double MARS_DISTANCE = 227.92e9;
const double MARS_VELOCITY = 24.077e3;

// Moon (orbiting Earth)
const double MOON_MASS = 7.34767309e22;
const double EARTH_MOON_DISTANCE = 384400000; // average Earth-Moon distance (meters)
const double MOON_RELATIVE_VELOCITY = 1022;    // orbital speed of Moon relative to Earth (m/s)

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_X, WINDOW_Y), "Solar System Simulation with Moon");
    window.setFramerateLimit(60);

    world solarWorld;
    
    // Place the Sun at the center of the window.
    double sun_x = WINDOW_X / 2;
    double sun_y = WINDOW_Y / 2;
    sphere sun(sun_x, sun_y, 40, SUN_MASS, sf::Color::Yellow);
    sun.set_velocity(0, 0); // Sun remains stationary
    solarWorld.add_sphere(sun);
    
    // Helper lambda to add a planet orbiting the Sun.
    auto addPlanet = [&](double distance, double mass, double velocity, int radius, sf::Color color) {
        double planet_x = sun_x + (distance / SCALE);
        double planet_y = sun_y;
        sphere planet(planet_x, planet_y, radius, mass, color);
        // Set velocity tangent to the orbit (for a circular orbit, assume downward velocity).
        planet.set_velocity(0, -velocity / SCALE);
        solarWorld.add_sphere(planet);
    };

    // Add Mercury, Venus, and Mars orbiting the Sun.
    addPlanet(MERCURY_DISTANCE, MERCURY_MASS, MERCURY_VELOCITY, 5, sf::Color(192, 192, 192)); // Mercury (gray)
    addPlanet(VENUS_DISTANCE, VENUS_MASS, VENUS_VELOCITY, 7, sf::Color(255, 165, 0));        // Venus (orange)
    
    // Add Earth orbiting the Sun.
    double earth_x = sun_x + (EARTH_DISTANCE / SCALE);
    double earth_y = sun_y;
    sphere earth(earth_x, earth_y, 8, EARTH_MASS, sf::Color::Blue);
    earth.set_velocity(0, -EARTH_VELOCITY / SCALE);
    solarWorld.add_sphere(earth);
    
    // Add Mars orbiting the Sun.
    addPlanet(MARS_DISTANCE, MARS_MASS, MARS_VELOCITY, 6, sf::Color(255, 0, 0)); // Mars (red)
    
    // Add Moon orbiting Earth.
    // Place Moon to the right of Earth by EARTH_MOON_DISTANCE/SCALE pixels.
    double moon_x = earth_x + (EARTH_MOON_DISTANCE / SCALE);
    double moon_y = earth_y;
    sphere moon(moon_x, moon_y, 4, MOON_MASS, sf::Color(200, 200, 200));
    // Set Moon's velocity as Earth's velocity plus a relative horizontal component.
    // Earth's velocity is (0, -EARTH_VELOCITY/SCALE). To orbit Earth, the Moon gets an extra horizontal velocity.
    // This gives the Moon an absolute velocity of (MOON_RELATIVE_VELOCITY/SCALE, -EARTH_VELOCITY/SCALE).
    moon.set_velocity(MOON_RELATIVE_VELOCITY / SCALE, -EARTH_VELOCITY / SCALE);
    solarWorld.add_sphere(moon);

    // Main simulation loop.
    while (window.isOpen()) {
        event_loop(window);
            
        window.clear();
        solarWorld.update(delta_time);
        solarWorld.draw(window);
        window.display();
    }
    
    return 0;
}
