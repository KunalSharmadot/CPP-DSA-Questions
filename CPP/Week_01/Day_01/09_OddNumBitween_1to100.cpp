#include<iostream>

int main()
{
    std::cout << "--------- Odd Number Between 1 to 100 ----------\n";

    // by for loop
    std::cout << "---------- For Loop --------\n";
    for(int i = 1; i <= 100; i += 2)
    {
        std::cout << i << "   \t";
    }

    // by while loop
    std::cout << "\n---------- While Loop ----------\n";
    int i = 1;
    while(i <= 100)
    {
        std::cout << i << "   \t";
        i += 2;
    }

    // by do-while loop
    std::cout << "\n--------- Do-While Loop -----------\n";
    i = 1;
    do{
        std::cout << i << "   \t";
        i += 2;
    }while(i <= 100);

    return 0;
}