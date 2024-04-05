#include <iostream>

int main()
{
    std::cout << "---------- Odd Number Bitween 1 to N ----------\n";
    int lastNum;
    std::cout << "Enter Last Number : ";
    std::cin >> lastNum;

    if (1 <= lastNum)
    {
        // by for loop
        std::cout << "---------- For Loop --------\n";
        for (int i = 1; i <= lastNum; i += 2)
        {
            std::cout << i << "   \t";
        }

        // by while loop
        std::cout << "\n---------- While Loop ----------\n";
        int i = 1;
        while (i <= lastNum)
        {
            std::cout << i << "   \t";
            i += 2;
        }

        // by do-while loop
        std::cout << "\n--------- Do-While Loop -----------\n";
        i = 1;
        do
        {
            std::cout << i << "   \t";
            i += 2;
        } while (i <= lastNum);
    }
    else
    {
        std::cout << "Invalid Input!";
    }
    return 0;
}