#include<iostream>

int main()
{
    int principal, rate, time, interest;
    std::cout << "-------- Simple Interest --------\n";
    std::cout << "Enter principal amount : ";
    std::cin >> principal;
    std::cout << "Enter interest rate(% per annual): ";
    std::cin >> rate;
    std::cout << "Enter time(in yearly): ";
    std::cin >> time;

    interest = (principal * rate * time) / 100;
    std::cout << "Amount : " << interest;

    
    return 0;
}