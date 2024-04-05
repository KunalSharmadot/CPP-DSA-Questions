#include <iostream>

int main()
{
    int f_num, l_num;
    std::cout << "--------- All perfect number between two number --------- \n";
    std::cout << "Enter first number : ";
    std::cin >> f_num;
    std::cout << "Enter last number : ";
    std::cin >> l_num;

    std::cout << "Perfect number are : ";
    for (int j = f_num; j <= l_num; j++)
    {
        int fact_sum = 0;
        for (int i = 1; i <= j / 2; i++)
        {
            if (j % i == 0)
            {
                fact_sum += i;
            }
        }
        if(fact_sum == j)
        {
            std::cout << fact_sum << "  ";
        }
    }

    return 0;
}