#include <iostream>

int main()
{
    int num, power, sum = 1;
    std::cout << "------------ Power of number -----------\n";
    std::cout << "Enter number : ";
    std::cin >> num;
    std::cout << "Enter power (how much time to multiply with itself): ";
    std::cin >> power;

    for(int i = 1; i <= power; i++)
    {
        sum *= num;
    }
    std::cout << "Answers : " << sum;
    return 0;
}