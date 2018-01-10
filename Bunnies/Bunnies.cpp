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

	std::cout << _mother->_name << " gave birth to " << _name << std::endl;
} 

// Make baby bunnies if the conditions are met
void Bunny::makeBabies(const Bunny b, bool malesAlive, std::vector<Bunny>& bb) 
{
	if (b._age >= 2 && b._sex == Female && malesAlive)
		bb.push_back(Bunny(b));
}

// Check if a male is eligble for breeding
bool Bunny::maleFuck(const Bunny b)
{
	if (b._alive && b._sex == Male && b._age >= 2)
		return true;
	else
		return false;
} 



void Bunny::ageTurn(Bunny& b)
{
	b._age++;

	if (!b._isRadioactive && b._age == 10)
		b._alive = false;
	else if (b._isRadioactive && b._age == 50)
		b._alive = false;
}

// Loop to check if there are any males that can breed
bool males(const std::vector<Bunny>& bb)
{
	for (auto i : bb)
	{
		if (i.maleFuck(i))
			return true;
	} 
	return false;
}

void newTurn(std::vector<Bunny>& bb)
{
	bool sex = males(bb);
	for (auto i : bb)
	{
		i.makeBabies(i, sex, bb);
		i.ageTurn(i);
	}
} 



void firstBunnies(std::vector<Bunny>& bb)
{
	for (int i = 0; i < 5; i++)
	{
		bb.push_back(Bunny());
	}
}

