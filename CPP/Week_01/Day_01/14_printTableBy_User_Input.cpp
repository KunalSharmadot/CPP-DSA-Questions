#include <iostream>

int main()
{
    int number;
    std::cout << "----------- Print table by user input ----------\n";
    std::cout << "Enter number : ";
    std::cin >> number;
    int a = 1;
    if (number > 0)
    {
        for (int i = number; i <= number * 10; i += number)
        {
            std::cout << number << " * " << a++ << " = " << i << "\n";
        }
    }
    else
    {
        std::cout << "Invalid input !";
    }
    return 0;
}