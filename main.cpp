#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    char *name = "AchroDev"; // A string literal can also be assigned to a char *. Removing const with some compilers will let you compile this
    std::cout << name << std::endl;
    std::cin.get();
}
