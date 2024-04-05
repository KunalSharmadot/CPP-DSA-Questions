// check the year is leap year or not
#include<iostream>

int main()
{
    std::cout << "--------- Check Leap year or not ----------\n";
    std::cout << "Enter year : ";
    // if you enter minus(-) value you get the highest positive value.
    unsigned int year;
    std::cin >> year;

    if((year % 400 == 0 && year % 100 == 0) || (year % 4 == 0))
    {
        std::cout << year << " is a leap year.\n";
    }
    else{
        std::cout << year << " is not a leap year.\n";
    }

    ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0)) ? std::cout << "Leap year.\n" : std::cout << "Not a Leap year.\n";
    
    return 0;
}