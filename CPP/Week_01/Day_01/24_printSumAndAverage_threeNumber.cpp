// print sum and average of three number.
#include<iostream>

int main()
{
    int num1, num2, num3;
    std::cout << "----------- Sum and Average of given three number ----------\n";
    std::cout << "Enter first number : ";
    std::cin >> num1;
    std::cout << "Enter second number : ";
    std::cin >> num2;
    std::cout << "Enter third number : ";
    std::cin >> num3;

    int sum = num1 + num2 + num3;
    std::cout << "Sum of three number is " << sum << "\n";
    float average = (float)sum / 3;
    std::cout << "Average of three number is " << average;
    return 0;
}