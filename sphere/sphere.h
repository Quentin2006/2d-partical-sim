#include <SFML/Graphics.hpp>
#include <cmath>

// will manage all logic for drawing/creating spheres
class sphere {
    public:
        sphere(double x, double y, int radius, double mass, const sf::Color & color);

        int update_pos(double delta_x, double delta_y);
        int draw(sf::RenderWindow & window);
        int set_velocity(double vx, double vy);
        int update(double delta_time);
        int apply_acceleration(double ax, double ay, double delta_time);

        double get_mass(void) const;
        double get_x(void) const;
        double get_y(void) const;


    private:
        sf::CircleShape obj;
        sf::Color color;
        double x;
        double y;
        double vx;
        double vy;
        int radius;
        double mass;
};