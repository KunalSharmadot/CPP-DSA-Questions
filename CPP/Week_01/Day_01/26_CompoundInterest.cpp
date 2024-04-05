#include<iostream>

int main()
{
    int com_int, principal, rate, time;
    std::cout << "------------ Compound Interest ------------\n";
    std::cout << "Enter principal : ";
    std::cin >> principal;
    std::cout << "Enter rate(% per annual) : ";
    std::cin >> rate;
    std::cout << "Enter time(in yearly) : ";
    std::cin >> time;
    float power = (1 + ((float)rate / 100));
    for(int i = 0; i < time; i++)
    {
        power *= power;
    }
    std::cout << "Compound interest : " << (principal * power);
    return 0;
}