#include <iostream>


int main()
{
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */"; 	//add a " at the end would work
	std::cout << /* "*/" /* "/*" */;	//this is good

	return 0;
}