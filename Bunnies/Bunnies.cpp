// Bunnies.cpp : Defines the entry point for the console application.
//

#include <string> 
#include <ctime>

std::string colors[] = { "white", "brown", "black", "spotted" };

class Bunny
{
	
	Bunny();
	
	std::string name;  
	std::string color; 
	char sex; 
	int age; 
	bool radioActive;

};

int randInt(int x, int y)   // Returns a random number from x-y 
{
	srand(std::time(NULL));
	int x = rand() % y + x;
	return x;
}

std::string randomName()
{
	std::string nameList[10] = { "Thumper", "Oreo", "Coco", "Peanut", "Pepper", "Fluffy", "Ginger", "Cookie", "Hazel", "Nibbles" }; 
	return nameList[randInt(0, 9)];
}

bool radioActiveChance()
{
	if (randInt(1, 100) == 1 || randInt(1, 100) == 2)
		return true;
	else
		return false;
}

//Default constructor for the first five bunnies created
Bunny::Bunny()
{
	name = randomName(); 
	color = colors[randInt(0, 3)];
	age = randInt(0, 2); 
	radioActive = radioActiveChance();
}

int main()
{
    return 0;
}

