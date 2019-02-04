#include <string>
#include "Weapon.h"

#ifndef LASER_H
#define LASER_H

class Laser : public Weapon
{
public:

    Laser() : Weapon("Laser", 69.0) {}

    virtual ~Laser() {};

    virtual double hit(double armor);

};

#endif /* LASER_H */

