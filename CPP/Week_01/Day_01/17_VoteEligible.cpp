// Checking a user is eligible for vote or not.
#include <iostream>

int main()
{
    std::cout << "---------- Check you are eligible for vote or not ---------------\n";
    std::cout << "Enter your age : ";
    int age;
    std::cin >> age;

    if (age > 18)
    {
        std::cout << "You are eligible for vote.\n";
    }
    else if((age < 1))
    {
        std::cout << "Invalid Number ! \n";
    }
    else
    {
        std::cout << "You are not eligible for vote.\n";
    }

    // By ternary operator
    (age > 18) ? std::cout << "Eligible for vote.\n" : (age < 1) ? std::cout << "Invalid Number !\n" : std::cout << "Not Eligible for vote.\n";
    
    return 0;
}