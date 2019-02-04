#include "CrazyRandomSword.h"
#include <ctime>
#include <cstdlib>

double CrazyRandomSword::hit(double armor)
{

	double damage = hitPoints - rand()% (int) (armor / 3) + 2;

	if (0 > damage)
		return 0;

	return damage;
}
