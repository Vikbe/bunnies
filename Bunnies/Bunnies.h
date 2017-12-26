// Bunnies.cpp : Defines the entry point for the console application.
//

#include <string> 
#include <ctime>

std::string colors[] = { "white", "brown", "black", "spotted" };

class Bunny
{
public:
	Bunny();

	std::string name;
	std::string color;
	char sex;
	int age;
	bool radioActive;

};

// Default constructor for the creation of the first 5
Bunny::Bunny() 
{
	name = randomName();
	color = colors[randInt(0, 3)];
	age = randInt(0, 2);
	radioActive = radioActiveChance();
}

int randInt(int x, int y);   // Returns a random number from x-y 


std::string randomName();


bool radioActiveChance();


//Default constructor for the first five bunnies created



