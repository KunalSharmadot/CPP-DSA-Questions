// WAP to print a number from 1 to 100
#include<iostream>

int main()
{
    std::cout << "-------------- Number From 1 To 100 ---------------\n";
    
    // by for loop
    std::cout << "----- By For Loop -----\n";
    for(int i = 1; i <= 100; i++)
        std::cout << i << " \t ";
    
    // by while loop
    int i = 1;
    std::cout << "\n---- By While Loop -----\n";
    while(i <= 100)
    {
        std::cout << i << " \t ";
        i++;
    }

    // by do-while loop
    int j = 1;
    std::cout << "\n---- By Do-While Loop -----\n";
    do{
        std::cout << j << " \t ";
        j++;
    }while(j <= 100);


    return 0;
}