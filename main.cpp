#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    char *name = "AchroDev"; // Assigning a char * like this is undefined behavior. Removing const with some compilers will let you compile this
    name[2] = 'a';           // Cannot modify. If you want to make the string an array instead of a pointer.
    std::cout << name << std::endl;
    std::cin.get();
}
