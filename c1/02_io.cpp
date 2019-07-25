#include <iostream>

int main() 
{
// same as (std::cout << "Enter two numbers:") << std::endl;
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
/*
The library defines versions of the input and output operators 
that handle operands of each of these differing types (like string literals and int)
*/
	std::cout << "The sum of " << v1 << " and " << v2
			<< " is " << v1 + v2 << std::endl;
	return 0;
}

/*
cin (standard input) : object of type istream
cout (standard output) : object of type ostream
cerr (standard error) : object of type ostream
clog : object of type ostream

#include directive

<< operator takes two operands: left-hand operand must be an ostream object; 
								the right-hand operand is a value to print.
								The result of the output operator is its left-hand operand.

endl : a special value called a manipulator
Writing endl has the effect of ending the current line 
and flushing the buffer associated with that device.

The prefix std:: incidcates that the names cout and endl are defined inside the namespace named std.
All the names defined by the standard library are in the std namespace.

Namespaces allow us to avoid inadvertent collisions between the names we define and 
uses of those same names inside a library.

:: is scope operator
+ operator

*/