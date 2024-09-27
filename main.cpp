#include <iostream>
#include <string>
#include <cstring>

#include <stdlib.h>

// String Literals in C++ are a series of characters between two double quotes ""

int main()
{
    // Introduced in C++ 14
    using namespace std::string_literals;

    // With std::string_literals you have some extra tools for strings
    std::string name0 = "AchroDev"s + " hello";       // Adding 's' to the end of a string signifies returning a std::string, this allows appending another string
    std::wstring name01 = L"AchroDev"s + L" hello";   // A wide string is written similarly and still requires the 'L' for both strings
    std::u16string name02 = u"AchroDev"s + u" hello"; // Same for the 16-bit string and 'u'
    std::u32string name03 = U"AchroDev"s + U" hello"; // and same for the 32-bit string and 'U'

    const char *name = u8"AchroDev";    // Remember char is a 1 byte type, can also be force defined by appended 'u8'
    const wchar_t *name2 = L"AchroDev"; // wchar_t is a wide character. The string must be appended with 'L' to signify the following string is made up of wide chars
                                        // wchar is also 2 bytes per char on Windows, 4 bytes on Linux

    const char16_t *name3 = u"AchroDev"; // Introduced in C++ 11, 2 bytes per char, unsigned 16-bit
    const char32_t *name4 = U"AchroDev"; // Introduced in C++ 11, 4 bytes per char, unsigned 32-bit

    // Appending the string(s) with the 'R'(RAW) char, it signifies to ignore escape characters
    const char *example = R"(Line1
    Line2
    Line3
    Line4)";

    // Without using 'R' to ingore escape chars, you will have to manually write in the new lines
    const char *ex = "Line1\n"
                     "Line2\n"
                     "Line3\n"
                     "Line4\n";

    std::cout << name << std::endl;
    std::cin.get();
}
