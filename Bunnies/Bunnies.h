#include <string> 
#include <ctime> 
#include <vector>

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

static void firstBunnies(std::vector<Bunny>& b);

class Bunny
{
public:
	Bunny(); 
	Bunny(Bunny* m); 

	void newTurn(std::vector<Bunny>& b); 
	bool maleAlive(const std::vector<Bunny>& b);

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




