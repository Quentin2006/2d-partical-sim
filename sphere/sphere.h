#include <SFML/Graphics.hpp>

class sphere {
    public:
        sphere(float x, float y, float radius, int mass, const sf::Color & color);

        int update_pos(float delta_x, float delta_y);
        int draw(sf::RenderWindow & window);

    private:
        sf::CircleShape obj;
        sf::Color color;
        float x;
        float y;
        float radius;
        int mass;
};