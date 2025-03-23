#include "world.h"
#include <iostream>

using namespace std;

int world::add_sphere(sphere & add) {
    spheres.push_back(add);
    return 1;
}

int world::update(double delta_time) {
    int size = spheres.size();

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i != j) {
                sphere& x = spheres[i];
                sphere& y = spheres[j];

                // Compute distance
                double dx = y.get_x() - x.get_x();
                double dy = y.get_y() - x.get_y();
                double distance = sqrt(dx * dx + dy * dy);
                
                if (distance < 1) continue;  // Prevent division by zero

                // Gravitational force magnitude
                double force = G * (x.get_mass() * y.get_mass()) / (distance * distance);

                // Force components
                double fx = force * (dx / distance);
                double fy = force * (dy / distance);

                // Compute acceleration
                double ax = fx / x.get_mass();
                double ay = fy / x.get_mass();

                double bx = -fx / y.get_mass();
                double by = -fy / y.get_mass();

                // Apply acceleration
                x.apply_acceleration(ax, ay, delta_time);
                y.apply_acceleration(bx, by, delta_time);

                // debug
                cout << ax << " " << ay << " " << bx << " " << by << endl;
            }
        }    
    }
    for (int i = 0; i < size; ++i)
        spheres[i].update(delta_time);

    return 1;
}


// will draw all spheres to window
int world::draw(sf::RenderWindow & window) {
    for (sphere & cur : spheres) 
        cur.draw(window);
        
    return 1;
}