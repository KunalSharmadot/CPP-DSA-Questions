#include<iostream>

int main()
{
    int first, second;
    std::cout << "-------- Swapping number without third variable -------\n";
    std::cout << "Enter first number : ";
    std::cin >> first;
    std::cout << "Enter second number : ";
    std::cin >> second;

    first += second;
    second = first - second;
    first -= second;

    std::cout << "After swapping values : \n";
    std::cout << "First number : " << first;
    std::cout << "\nSecond number : " << second;
    return 0;
}