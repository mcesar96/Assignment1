#include "Laser.h"

double Laser::hit(double armor)
{
    double damage = hitPoints - (armor * 0.6);

    if (0 > damage)
        return 0;

    return damage;
}
