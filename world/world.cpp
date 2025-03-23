#include "world.h"
#include <iostream>

using namespace std;

int world::add_sphere(sphere & add) {
    spheres.push_back(add);
    return 1;
}

int world::update(void) {
    int size = spheres.size();

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i != j) {
                sphere &x = spheres[i];
                sphere &y = spheres[j];

                // Calculate distance between two objects
                double distance = sqrt(pow(y.get_x() - x.get_x(), 2) + pow(y.get_y() - x.get_y(), 2));
                // Calculate gravitational force between both objects
                double grav_force = G * FORCE_SCALE * ((y.get_mass() * x.get_mass()) / pow(distance, 2));

                // Get the x and y components of the gravitational force
                double x_force = grav_force * ((y.get_x() - x.get_x()) / distance);
                double y_force = grav_force * ((y.get_y() - x.get_y()) / distance);

                // Get the acceleration for x and y based on each object's mass
                double acc_x_x = x_force / x.get_mass();  // acceleration of x due to force from y
                double acc_y_x = y_force / x.get_mass();  // acceleration of x due to force from y

                double acc_x_y = x_force / y.get_mass();  // acceleration of y due to force from x
                double acc_y_y = y_force / y.get_mass();  // acceleration of y due to force from x

                // Update positions for both spheres based on their accelerations
                x.update_pos(acc_x_x, acc_y_x);
                y.update_pos(acc_x_y, acc_y_y);

            }
        }
    }

    return 1;
}


// will draw all spheres to window
int world::draw(sf::RenderWindow & window) {
    for (sphere cur : spheres) 
        cur.draw(window);
        
    return 1;
}