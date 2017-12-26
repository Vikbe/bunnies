#include "Bunnies.h"

// Default constructor for the creation of the first 5
Bunny::Bunny()
{
	_name = randomName();
	_color = static_cast<Color>(randInt(0, 3));
	_age = randInt(0, 2);
	_isRadioactive = radioActiveChance();
}
