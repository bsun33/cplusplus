//Reading an Unknown Number of Inputs

#include <iostream>

int main()
{
	int sum = 0,value = 0;

	//read until end-of-file or an input error
	//calculating a running total of all values read
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}

/*
The input operator >> returns its left operand, which is std::cin here.
When we use an istream as a condition, the effect is to test the state of the stream.
An istream becomes invalid when we hit end-of-file or encounter an invalid input, 
such as reading a value that is not an integer.

end-of-file on Mac is  CTRL+D and it works only in a new line, after pressing ENTER.
*/