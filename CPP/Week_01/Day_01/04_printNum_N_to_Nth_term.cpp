#include <iostream>

int main()
{
    int first_n, second_n;
    std::cout << "------------ Number between perticular range -------------\n";
    std::cout << "Enter first number : ";
    std::cin >> first_n;
    std::cout << "Enter last number : ";
    std::cin >> second_n;

    if (first_n <= second_n)
    {
        // by for loop
        std::cout << "----- For Loop -----\n";
        for (int i = first_n; i <= second_n; i++)
            std::cout << i << "\t";

        // by while loop
        std::cout << "\n----- While Loop ------\n";
        int i = first_n;
        while (i <= second_n)
        {
            std::cout << i << "\t";
            i++;
        }

        // by do-while loop
        std::cout << "\n----- Do-While Loop ------\n";
        int j = first_n;
        do
        {
            std::cout << j << "\t";
            j++;
        } while (j <= second_n);
    }
    else{
        std::cout << "Invalid! Input ";
    }
    return 0;
}