// perfect number : those number whose all factors (excluding itself) sum is equal to the original number   (6(1+2+3), 28, 496, 8128)
#include<iostream>

int main()
{
    std::cout << "----------- Check number is perfect or not ----------\n";
    int num, fact_sum = 0;
    std::cout << "Enter number : ";
    std::cin >> num;

    std::cout << "All Factors : ";
    for(int i = 1; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            std::cout << i << "    ";
            fact_sum += i;
        }
    }
    std::cout << num;
    std::cout << std::endl;
    if(num == fact_sum && fact_sum > 5)
        std::cout << fact_sum << " is a perfect number.\n";
    else
        std::cout << (fact_sum + 1)<< " is not a perfect number.\n";

    return 0;
}