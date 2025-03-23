#include <SFML/Graphics.hpp>
#include <vector>
#include "../sphere/sphere.h"

// gravitatinal constant
const double G = 6.674e-11 / (1e6 * 1e6 * 1e6);

class world {
    public:
        int add_sphere(sphere & add);
        int update(double delta_time);

        int draw(sf::RenderWindow & window);

    private:
        std::vector<sphere> spheres;
};
