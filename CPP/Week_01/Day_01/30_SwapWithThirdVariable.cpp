#include<iostream>

int main()
{
    int num1, num2, temp;
    std::cout << "--------- Swapping number with third variable -----------\n";
    std::cout << "Enter first number : ";
    std::cin >> num1;
    std::cout << "Enter second number : ";
    std::cin >> num2;

    // swap by temp variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // after swapping
    std::cout << "First number : " << num1;
    std::cout << "\nSecond number : " << num2;
    return 0;
}