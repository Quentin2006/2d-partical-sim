#include <SFML/Graphics.hpp>
#include <vector>
#include "../sphere/sphere.h"

// gravitatinal constant
const double FORCE_SCALE = 1e12;
const double G = 6.674e-11;

class world {
    public:
        int add_sphere(sphere & add);
        int update(void);

        int draw(sf::RenderWindow & window);

    private:
        std::vector<sphere> spheres;
};
