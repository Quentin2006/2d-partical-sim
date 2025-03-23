#include <SFML/Graphics.hpp>
#include <cmath>

// will manage all logic for drawing/creating spheres
class sphere {
    public:
        sphere(float x, float y, float radius, int mass, const sf::Color & color);

        int get_mass(void) const;
        int get_x(void) const;
        int get_y(void) const;

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