#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    const char *name = "AchroDev";      // Remember char is a 1 byte type
    const wchar_t *name2 = L"AchroDev"; // wchar_t is a wide character. The string must be appended with 'L' to signify the following string is made up of wide chars

    const char16_t *name3 = u"AchroDev"; // Introduced in C++ 11, unsigned 16-bit
    const char32_t *name4 = U"AchroDev"; // Introduced in C++ 11, unsigned 32-bit

    std::cout << name << std::endl;
    std::cin.get();
}
