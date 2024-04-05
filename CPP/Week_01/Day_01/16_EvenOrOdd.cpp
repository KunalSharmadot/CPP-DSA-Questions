#include<iostream>

int main()
{
    std::cout << "------------ Determine the Odd and Even Number ------------\n";
    int num;
    std::cout << "Enter number : ";
    std::cin >> num;

    if(num % 2 == 0)
    {
        std::cout << "This is Even Number.\n";
    }
    else{
        std::cout << "This is Odd Number.\n";
    }
    
    (!(num % 2 != 0))? std::cout << "Even Number.\n" : std::cout << "Odd Number.\n";

    std::string e;
    e = (num % 2 == 0)? "Even Number.\n" : "Odd Number.\n";
    std::cout << e;

    return 0;
}