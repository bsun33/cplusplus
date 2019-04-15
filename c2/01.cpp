#include <iostream>
#include <string>

/*
Uninitialized objects of built-in type defined inside a function body have undefined value. 
Objects of class type that we do not explicitly initialize have a value that is defined by the class.
*/
std::string global_str;
int global_int;

int main()
{
    int local_int;
    std::string local_str;
    
    std::cout << "global_str:" << global_str << std::endl;  // empty string
    std::cout << "global_int:" << global_int << std::endl;  // 0
    std::cout << "local_int:" << local_int << std::endl;    // undefined value
    std::cout << "local_str:" << local_str << std::endl;    // empty string
    return 0;
}

/*
Initialization is not assignment. 
Initialization happens when a variable is given a value when it is created. 
Assignment obliterates an object’s current value and replaces that value with a new one.

//fours ways to define an int variable and initialized it to 0
int units_sold = 0; 
int units_sold = {0}; 
int units_sold{0}; 
int units_sold(0);

//To obtain a declaration that is not also a definition, 
//we add the extern keyword and may not provide an explicit initializer:

extern int i; // declares but does not define i 
int j; // declares and defines j
extern double pi = 3.1416; // definition,It is an error to provide an initializer on an extern inside a function

Variables must be defined exactly once but can be declared many times.

To use the same variable in multiple files, we must define that variable in one—and only one—file. 
Other files that use that variable must declare—but not define—that variable.

*/