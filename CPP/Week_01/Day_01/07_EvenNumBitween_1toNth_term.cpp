#include<iostream>

int main()
{
    std::cout << "------- Even number between 1 to N ----------\n";
    int lastNum;
    std::cout << "Enter last number : ";
    std::cin >> lastNum;

    // for loop
    std::cout << "------- For Loop ---------\n";
    for(int i = 0; i <= lastNum ;i += 2)
    {
        std::cout << i << "\t";
    }

    std::cout << "\n------- While Loop ---------\n";
    int i = 0;
    while(i <= lastNum)
    {
        std::cout << i << "\t";
        i += 2;
    }

    std::cout << "\n------- Do-While Loop ---------\n";
    int j = 0;
    do{
        std::cout << j << "\t";
        j += 2;
    }while(j <= lastNum);

    return 0;
}