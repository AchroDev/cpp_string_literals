#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    char name[] = "AchroDev"; // As an array, it can be modified and is defined behavior
    name[2] = 'a';            // Now works and prints "AcaroDev"
    std::cout << name << std::endl;
    std::cin.get();
}
