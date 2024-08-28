// literals : are the constants value that are used directly in calculation or comparision.
#include <iostream>

int main()
{
    int a = 6;     // initializetion of identifier a
    int b = a + 2; // a is integer, 2 is integer literal

    const char *strLiteral = "Hello"; // "Hello" is a string literal
    char strVariable[] = "World";     // strVariable is a string variable initialized with a string literal
    std::cout << sizeof(strLiteral) << "\n" << sizeof(strVariable);
    // here the size have a difference
    return 0;
}