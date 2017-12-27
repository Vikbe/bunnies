#include "Bunnies.h"

// Default constructor for the creation of the first 5
Bunny::Bunny()
{
	_name = randomName();
	_color = static_cast<Color>(randInt(0, 3));
	_age = randInt(0, 2);
	_sex = static_cast<Sex>(randInt(0, 1));
	_isRadioactive = radioActiveChance(); 
	_mother = nullptr;
} 

Bunny::Bunny(Bunny* m)
{
	_name = randomName();
	_color = m->_color;
	_age = 0;
	_sex = static_cast<Sex>(randInt(0, 1));
	_isRadioactive = radioActiveChance(); 
	_mother = m;
}

