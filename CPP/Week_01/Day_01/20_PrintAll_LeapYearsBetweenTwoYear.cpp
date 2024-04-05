// Print all leap year between two year
#include<iostream>

int main()
{
    int start_year, end_year;
    std::cout << "----------- All leap year between two year -----------\n";
    std::cout << "Enter start year : ";
    std::cin >> start_year;
    std::cout << "Enter last year : ";
    std::cin >> end_year;

    for(int i = start_year; i <= end_year; i++)
    {
        if((i % 400 == 0 && i % 100 == 0) || (i % 4 == 0))
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}