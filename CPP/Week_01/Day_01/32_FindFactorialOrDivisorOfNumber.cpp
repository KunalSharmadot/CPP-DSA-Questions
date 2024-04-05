#include <iostream>

int main()
{
    std::cout << "--------- Factorial of a number ---------\n";
    int num;
    std::cout << "Enter number : ";
    std::cin >> num;
    
    // 1 and itself number are always divisible then skip both factorial
    std::cout << "Factorial are : ";
    
    // for (int i = 1; i <= num; i++)   //take 1 to num iteration
    for (int i = 1; i <= num / 2; i++)  // take 1 to num/2 interation
    {
        if (num % i == 0)
            std::cout << i << "\t";
    }
    std::cout << num;   // print last factorial

    return 0;
}