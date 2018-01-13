#include <string> 
#include <ctime> 
#include <list> 
#include <iostream> 
#include <algorithm>

enum Color
{
	White,
	Brown,
	Black,
	Spotted
};

enum Sex { Male, Female };

class Bunny
{
public:
	Bunny();
	Bunny(Bunny* m);

	void makeBabies(std::list<Bunny>& bunnies);
	bool maleFuck();
	void ageTurn(); 
	friend void newTurn(std::list<Bunny>& bunnies);
 
	std::string sexString()
	{
		if (_sex == Male) {
			return "Male";
		}
		else {
			return "Female";
		}
		
	}
	

private:
	std::string _name;
	Color _color;
	Sex _sex;
	int _age;
	bool _isRadioactive;
	bool _alive;
	Bunny* _mother;
};


static int randInt(int ceiling, int floor)   // Returns a random number within range
{
	if (floor < ceiling)
	{
		int range = (ceiling - floor) + 1;
		return rand() % range;
	}
}

static std::string randomName()
{
	std::string nameList[10] = { "Thumper", "Oreo", "Coco", "Peanut", "Pepper", "Fluffy", "Ginger", "Cookie", "Hazel", "Nibbles" };
	return nameList[randInt(9, 0)];
}

static bool radioActiveChance()
{
	if (randInt(100, 1) == 1 || randInt(1, 100) == 2)
		return true;
	else
		return false;
} 




void firstBunnies(std::list<Bunny>& bb);





