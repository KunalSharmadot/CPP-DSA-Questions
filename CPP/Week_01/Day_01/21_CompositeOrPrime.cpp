// check the number is composite or prime number
#include<iostream>

int main()
{
    int number, count = 2;
    std::cout << "-------- Number is prime or composite ----------\n";
    std::cout << "Enter number : ";
    std::cin >> number;

    // for(int i = 2; i < number; i++)
    for(int i = number / 2; i < number; i++)
    {
        if(number % i == 0)
            {
                // count take half number of iteration
                count++;
            }
    }
    if(count == 2)
        std::cout << number << " is a prime number.\n";
    else
        std::cout << number << " is a composite number.\n";
    return 0;
}