// Check the character is upper/lower case, digit, specialsymbol
#include<iostream>

int main()
{
    std::cout << "Check the character is Uppercase, Lowercase, Digit or Special Symbol.\n";
    char ch;
    std::cout << "Enter Character : ";
    std::cin >> ch;

    if(ch >= 97 && ch <= 122)
        std::cout << ch << " is a lowercase alphabet character.\n";
    else if(ch >= 'A' && ch <= 'Z')
        std::cout << ch << " is a uppercase alphabet character.\n";
    else if(ch >= '0' && ch <= '9')
        std::cout << ch << " is a digit character.\n";
    else
        std::cout << ch << " is a special symbol.\n";
        
    return 0;
}