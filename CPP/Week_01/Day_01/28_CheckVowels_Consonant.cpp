#include<iostream>

int main()
{
    char ch;
    std::cout << "---------- Vowels Or Consonant ----------\n";
alpha:
    std::cout << "Enter alphaber character : ";
    std::cin >> ch;

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' ||ch == 'i' || ch == 'I'|| ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        std::cout << ch << " is Vowel.";
    else if(!isalpha(ch))
    {
        std::cout << ch << " is Invalid!\n";
        goto alpha;
    }
    else
        std::cout << ch << " is a consonant.";

    return 0;
}