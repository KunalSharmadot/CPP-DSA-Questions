// find Quotient and remainder
#include <iostream>

int main()
{
    int dividend, divisor, quotient, remainder;
start:
    std::cout << "\n------------ Quotient and Remainder -------------\n";
    std::cout << "Enter Dividend : ";
    std::cin >> dividend;
    std::cout << "Enter Divisor : ";
    std::cin >> divisor;
    if(divisor > 0)
    {
    // std::cout << "Remainder of " << dividend << " by " << divisor << " is : " << (dividend % divisor); 
    remainder = (dividend % divisor);
    std::cout << "Remainder of " << dividend << " by " << divisor << " is : " << remainder; 

    // std::cout << "Quotient of " << dividend << " by " << divisor << " is : " << (dividend / divisor); 
    quotient = (dividend / divisor);
    std::cout << "\nQuotient of " << dividend << " by " << divisor << " is : " << quotient; 
    }
    else{
        std::cout << "Invalid Input!";
        goto start;
    }
    return 0;
}