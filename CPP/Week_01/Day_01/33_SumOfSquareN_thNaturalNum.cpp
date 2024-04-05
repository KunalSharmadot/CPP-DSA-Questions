// Sum of square of n-th natural number
#include <iostream>

int main()
{
    int n_th, sum = 0, square = 1;
    std::cout << "----------- Sum of Square of N-th Natural Number ---------\n";
    std::cout << "Enter the n_th number : ";
    std::cin >> n_th;

    for(int i = 1; i <= n_th; i++)
    {
        square = i * i;
        sum += square;
    }
    std::cout << "Sum of square of natual number is " << sum;
    return 0;
}