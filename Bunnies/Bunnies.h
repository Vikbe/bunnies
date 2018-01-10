#include <string> 
#include <ctime> 
#include <vector> 
#include <iostream>


class Bunny
{
public:
	Bunny();
	Bunny(Bunny* m);

	void makeBabies(const Bunny b, bool malesAlive, std::vector<Bunny> &bb);
	bool maleFuck(const Bunny male);
	void ageTurn(Bunny& b);
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
	bool _alive;
	Bunny* _mother;
};


static int randInt(int x, int y)   // Returns a random number from x-y 
{
	int number = rand() % y + x;
	return number;
}

static std::string randomName()
{
	std::string nameList[10] = { "Thumper", "Oreo", "Coco", "Peanut", "Pepper", "Fluffy", "Ginger", "Cookie", "Hazel", "Nibbles" };
	return nameList[randInt(0, 9)];
}

static bool radioActiveChance()
{
	if (randInt(1, 100) == 1 || randInt(1, 100) == 2)
		return true;
	else
		return false;
} 

static bool males(const std::vector<Bunny>& bb);

void newTurn(std::vector<Bunny>& bb);

void firstBunnies(std::vector<Bunny>& bb);





