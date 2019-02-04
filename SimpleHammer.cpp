#include "SimpleHammer.h"

double SimpleHammer::hit(double armor)
{
	double damage;

	if (30 > armor)
		damage = hitPoints;
	else
		damage = hitPoints - armor;

    if (0 > damage)
        return 0;


    return damage;
}
