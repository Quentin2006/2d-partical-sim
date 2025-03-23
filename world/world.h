#include <SFML/Graphics.hpp>
#include <vector>
#include "../sphere/sphere.h"

const double SCALE = 3e8;
// gravitatinal constant
const double G = 6.67430e-11/pow(SCALE,3); // gravitational constant

class world {
    public:
        int add_sphere(sphere & add);
        int update(double delta_time);

        int draw(sf::RenderWindow & window);

    private:
        std::vector<sphere> spheres;
};
