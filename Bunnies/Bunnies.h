#include <string> 
#include <ctime>

int randInt(int x, int y)   // Returns a random number from x-y 
{
	srand((unsigned)std::time(0));
	int number = rand() % y + x;
	return number;
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

class Bunny
{
public:
	Bunny();

	enum Color
	{
		White,
		Brown,
		Black,
		Spotted
	};

	enum Sex { Male, Female };

private:
	std::string _name;
	Color _color;
	Sex _sex;
	int _age;
	bool _isRadioactive;
};




