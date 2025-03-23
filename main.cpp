#include <SFML/Graphics.hpp>
#include "events.cpp"
#include "sphere/sphere.h"

const float WINDOW_X = 1920u;
const float WINDOW_Y = 1080u;

int main()
{
    sf::RenderWindow window({WINDOW_X, WINDOW_Y}, "SFML works!");
    window.setFramerateLimit(175);

    sphere sphere1(WINDOW_X/2, WINDOW_Y/2, 12.f, 1000, sf::Color(0, 255, 0));
    sphere sphere2(WINDOW_X/2 + 300, WINDOW_Y/2 - 300, 12.f, 1000, sf::Color(255, 0, 0));
    sphere sphere3(WINDOW_X/2 - 300, WINDOW_Y/2 + 300, 12.f, 1000, sf::Color(0, 0, 255));

    while (window.isOpen()) {
        event_loop(window);
            

        window.clear();
        sphere1.draw(window);
        sphere1.update_pos(0.1, 0.1);

        sphere2.draw(window);
        sphere2.update_pos(-0.1, 0.1);

        sphere3.draw(window);
        sphere3.update_pos(0.1, -0.1);
        window.display();
    }

    return 0;
}