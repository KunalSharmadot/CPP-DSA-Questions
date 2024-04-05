#include<iostream>

int main()
{
    int last_num, start_num = 0;
    std::cout << " ---------------- Sum of natural number --------------\n";
    std::cout << "Enter last number (>1) : ";
    std::cin >> last_num;

    for(int i = start_num; i <= last_num; i++)
        start_num += i;
    
    std::cout << start_num;
    return 0;
}