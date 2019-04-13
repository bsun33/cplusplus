#include <iostream>

int main()
{
	int fn = 0, sn = 0;

	std::cout << "Please enter two number " << std::endl; 
	std::cin >> fn >> sn;
	
	while(++fn < sn)
	{
		std::cout << fn << std::endl;
			
	}

	return 0;
}