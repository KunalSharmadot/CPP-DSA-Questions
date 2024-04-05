#include<iostream>

int main()
{
    std::cout << "-------- Even number between 1 to 100 ---------\n";
    
    // by for loop
    std::cout << "------ For Loop -------\n";
    for(int i = 0; i <= 100; i += 2)
    {
        std::cout << i << "\t";
    }

    // BY While loop
    int i = 0;
    std::cout << "\n------ While Loop -------\n";
    while(i <= 100)
    {
        std::cout << i << "\t";
        i += 2;
    }

    //by do-while loop
    std::cout << "\n--------- Do-While Loop --------\n";
    int j = 0;
    do{
        std::cout << j << "\t";
        j += 2;
    }while(j <= 100);
    return 0;
}