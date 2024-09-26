#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    const char *name = "AchroDev";          // A string literal can also be assigned to a const char * (pointer) // remember const means no manipulation
    name[2] = 'a';                          // You can see this isn't allowed
    std::cout << strlen(name) << std::endl; // now prints the actual size of the const char array
    std::cin.get();
}
