#include<iostream>

int main()
{
    std::cout << "----------- Odd Number Bitween N to Nth Number ---------\n";
    int firstNum, lastNum;
    std::cout << "Enter last number : ";
    std::cin >> lastNum;
    std::cout << "Enter first number : ";
    std::cin >> firstNum;

    if(lastNum % 2 == 0)
    {
        lastNum--;
    } 
    if (firstNum <= lastNum)
    {
        // by for loop
        std::cout << "\n------ For Loop -------\n";
        for (int i = lastNum; i >= firstNum; i -= 2)
        {
            std::cout << i << "\t";
        }

        // by while loop
        int i = lastNum;
        std::cout << "\n------ While Loop ------\n";
        while (i >= firstNum)
        {
            std::cout << i << "\t";
            i -= 2;
        }

        // Do-while loop
        int j = lastNum;
        std::cout << "\n-------- Do-While Loop -------\n";
        do
        {
            std::cout << j << "\t";
            j -= 2;
        } while (j >= firstNum);
    }
    else
    {
        std::cout << "Invalid Input!";
    }
    return 0;
}