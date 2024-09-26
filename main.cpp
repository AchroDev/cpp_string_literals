#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    const char name[9] = "AchroDev";        // This is a definition of a string literal // (const char[9])"AchroDev". It includes the null termination char
    std::cout << strlen(name) << std::endl; // now prints the actual size of the const char array
    std::cin.get();
}
