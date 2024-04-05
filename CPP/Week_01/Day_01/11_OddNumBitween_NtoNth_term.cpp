#include<iostream>

int main()
{
    std::cout << "----------- Odd Number Bitween N to Nth Number ---------\n";
    int firstNum, lastNum;
    std::cout << "Enter first number : ";
    std::cin >> firstNum;
    std::cout << "Enter last number : ";
    std::cin >> lastNum;

    if(firstNum % 2 == 0)
    {
        firstNum++;
    } 
    if (firstNum <= lastNum)
    {
        // by for loop
        std::cout << "\n------ For Loop -------\n";
        for (int i = firstNum; i <= lastNum; i += 2)
        {
            std::cout << i << "\t";
        }

        // by while loop
        int i = firstNum;
        std::cout << "\n------ While Loop ------\n";
        while (i <= lastNum)
        {
            std::cout << i << "\t";
            i += 2;
        }

        // Do-while loop
        int j = firstNum;
        std::cout << "\n-------- Do-While Loop -------\n";
        do
        {
            std::cout << j << "\t";
            j += 2;
        } while (j <= lastNum);
    }
    else
    {
        std::cout << "Invalid Input!";
    }
    return 0;
}