#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer. 25 HITPOINTS. If armor less than 30
 	the hammer will ignore all the armpor points.
 */

class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) {}

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

