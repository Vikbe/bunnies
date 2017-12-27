#include "Bunnies.h"

// Default constructor for the creation of the first 5
Bunny::Bunny()
{
	_name = randomName();
	_color = static_cast<Color>(randInt(0, 3));
	_age = randInt(0, 2);
	_sex = static_cast<Sex>(randInt(0, 1));
	_isRadioactive = radioActiveChance(); 
	_alive = true;
	_mother = nullptr;
} 

Bunny::Bunny(Bunny* m)
{
	_name = randomName();
	_color = m->_color;
	_age = 0;
	_sex = static_cast<Sex>(randInt(0, 1));
	_isRadioactive = radioActiveChance(); 
	_alive = true;
	_mother = m;
} 

void Bunny::newTurn(std::vector<Bunny> &b)
{
	bool males = maleAlive(b);
	for (auto i : b)
	{
		if (i._age >= 2 && i._sex == Female && males)
		{
			b.push_back(Bunny(i));
		}

		i._age++;

		if (!i._isRadioactive && i._age == 10)
			i._alive = false;
		else if (i._isRadioactive && i._age == 50)
			i._alive = false;

	}
} 

bool Bunny::maleAlive(const std::vector<Bunny>& b)
{
	for (auto i : b)
	{
		if (i._alive && i._sex == Male && i._age >= 2)
			return true;
	}

	return false;
} 

void firstBunnies(std::vector<Bunny>& b)
{
	for (int i = 0; i < 5; i++)
	{
		b.push_back(Bunny());
	}
}

