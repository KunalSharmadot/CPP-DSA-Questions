// WAP to print number 1 to 100 in reversal form.
#include<iostream>

int main()
{
    std::cout << "---------------- Reverse Number from 1 to 100 ----------------\n";

    // By For Loop
    std::cout << "----- By For Loop -----\n";
    for(int i = 100; i >= 1; i--)
        std::cout << i << " \t ";

    // By while loop
    std::cout << "\n------ By While Loop -------\n";
    int i = 100;
    while(i >= 1)
    {
        std::cout << i << " \t ";
        i--;
    }

    // By Do-While loop
    std::cout << "\n------ By Do-While Loop ------\n";
    int j = 100;
    do{
        std::cout << j << " \t ";
        j--;
    }while(j >= 1);


    return 0;
}