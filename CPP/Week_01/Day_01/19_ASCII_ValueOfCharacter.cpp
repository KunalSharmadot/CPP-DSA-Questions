// Print ascii value of character
#include<iostream>

int main ()
{
    std::cout << "---------- Print ASCII value of character -----------\n";
    std::cout << "Enter character : ";
    char ch;
    std::cin >> ch;

    // it occupi space in memory because of variable is created
    int con = ch;
    std::cout << "ASCII value of " << ch << " is " << con;

    // it work in real time memory
    std::cout << "\nASCII value of " << ch << " is " << int(ch);

    // char16_t c = U's';
    char16_t c = ch;
    std::cout << "\nASCII value of " << ch << " is " << c;

    return 0;
}