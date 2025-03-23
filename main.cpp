#include <SFML/Graphics.hpp>
#include "events.cpp"
#include "world/world.h"

const float WINDOW_X = 1920u;
const float WINDOW_Y = 1080u;

int main()
{
    sf::RenderWindow window({WINDOW_X, WINDOW_Y}, "SFML works!");
    window.setFramerateLimit(175);

    sphere earth(WINDOW_X/2, WINDOW_Y/2- 100, 50.f, 5.97219e24, sf::Color(0, 255, 0));
    sphere moon(WINDOW_X/2 + 100, WINDOW_Y/2, 25.f, 7.34767309e22, sf::Color(255, 0, 0));

    world world;
    world.add_sphere(earth);
    world.add_sphere(moon);

    while (window.isOpen()) {
        event_loop(window);
            
        window.clear();

        world.update();

        world.draw(window);

        window.display();
    }

    return 0;
}