#include "Bunnies.h"

// Default constructor for the creation of the first 5
Bunny::Bunny()
{
	_name = randomName();
	_color = static_cast<Color>(randInt(3, 0));
	_age = randInt(2, 2);
	_sex = static_cast<Sex>(randInt(1, 0));
	_isRadioactive = radioActiveChance(); 
	_alive = true;
	_mother = nullptr; 

	std::cout << _name << " of age " << _age << " and " << sexString() << " was created!" << std::endl;
} 

Bunny::Bunny(Bunny* m)
{
	_name = randomName();
	_color = m->_color;
	_age = 0;
	_sex = static_cast<Sex>(randInt(1, 0));
	_isRadioactive = radioActiveChance();
	_alive = true;
	_mother = m;

	std::cout << _mother->_name << " gave birth to " << _name << " of age " << _age << " and " << sexString() << std::endl;
}

// Make baby bunnies if the conditions are met
void Bunny::makeBabies(std::list<Bunny>& bunnies) 
{
	if (_age >= 2 && _sex == Female)
	{
		bunnies.push_back(Bunny(this));
	}
		
		
}

// Check if a male is eligible for breeding
bool Bunny::maleFuck()
{
	if (_alive && _sex == Male && _age >= 2)
		return true;
	else
		return false;
} 



void Bunny::ageTurn()
{
	_age++;
	if (_isRadioactive && _age == 10)
	{
		
		_alive = false;
	}
	else if (_isRadioactive && _age == 50)
	{
		std::cout << _name << " has died at the age of 50\n"; 
		_alive = false;
	}
		
}



void newTurn(std::list<Bunny>& bunnies)
{
	if (std::any_of(begin(bunnies), end(bunnies), [](Bunny b) {return b.maleFuck() == true; }) )  
	{ 
		for (auto i : bunnies)
			i.makeBabies(bunnies);
	}
	
	for (auto& i : bunnies)
		i.ageTurn();
		
std::cout << "this is a new turn!!!!!!!\n"; 
} 



void firstBunnies(std::list<Bunny>& bunnies)
{
	for (int i = 0; i < 5; i++)
	{
	bunnies.push_back(Bunny());
	}
}

