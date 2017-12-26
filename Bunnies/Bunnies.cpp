#include "Bunnies.H"


std::string colors[] = { "white", "brown", "black", "spotted" };



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
