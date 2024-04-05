// Print ASCII value with its Alphabet
#include<iostream>

int main()
{
    for(char i = 'a'; i <= 'z'; i++)
    {
        std::cout << i << " ASCII Value is : " << int(i) << "\n";
    }
    std::cout << std::endl;
    // Uppercase alphabet
    char ch = 'A';
    while(ch <= 'Z')
    {
        std::cout << ch << " ASCII value is : " << int(ch) << "\n";
        ch++;
    }

    return 0;
}