#include "Bunnies.h"
#include <iostream>

void firstBunnies(std::vector<Bunny>& b)
{
	for (int i = 0; i < 5; i++)
	{
		b.push_back(Bunny());
	}
}

int main()
{
	srand((unsigned)std::time(0));
	
	std::vector<Bunny> bunnies;
	firstBunnies(bunnies); 

	for (auto i : bunnies)
	{
		std::cout << i._name << std::endl;
	}

	return 0;
}

