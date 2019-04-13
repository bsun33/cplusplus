//uses a while to sum the numbers from 50 to 100
#include <iostream>

int main()
{
	int sum = 0, start = 50;

	while(start <= 100)
	{
		sum += start;
		++start;
	}

	std::cout << "The sum from 50 to 100 is " << sum << std::endl;

	//prints the numbers from ten down to zero
	start = 10;
	
	while(start >= 0)
	{
		std::cout << "the number is " << start-- << std::endl;
	}

	return 0;
}