#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    const char name[10] = "Achr\0oDev";     // This is a definition of a string literal // (const char[9])"AchroDev". It includes the null termination char
    std::cout << strlen(name) << std::endl; // only prints 4 as we manually put a null termination character after the fourth index
    std::cin.get();
}
