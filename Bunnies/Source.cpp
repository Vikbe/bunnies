#include "Bunnies.h"






int main()
{
	srand((unsigned)std::time(0));
	
	std::vector<Bunny> bunnies;
	firstBunnies(bunnies);  
	for (int i = 0; i < 10; i++)
	{
		newTurn(bunnies);
	}



	return 0;
}

