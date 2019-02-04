#include <string>
#include <ctime>
#include <cstdlib>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon
{
public:

    CrazyRandomSword() : Weapon("Crazy random sword", rand()%100+7)
    {
    	srand((unsigned) time(0));
    	hitPoints = rand() % 100 + 7;
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

