#include<iostream>

int main()
{
    int tableNum, times;
    std::cout << "-------- Print direct Multiple of Table ----------\n";
    std::cout << "Enter table number : ";
    std::cin >> tableNum;
    std::cout << "How much times : ";
    std::cin >> times;

    std::cout << tableNum << " * " << times << " = " << (tableNum * times);
    return 0;
}