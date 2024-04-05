#include <iostream>

int main()
{
    int first_n, last_n, count = 0;
    std::cout << "------ Count total number between two number --------\n";
    std::cout << "Enter first number : ";
    std::cin >> first_n;
    std::cout << "Enter last number : ";
    std::cin >> last_n;

    if (first_n <= last_n)
    {
        // by for loop;
        std::cout << "------- For Loop -------\n";
        for (int i = first_n; i <= last_n; i++)
            count++;
        std::cout << "Total number : " << count;

        // by while loop
        int i = first_n;
        count = 0;
        std::cout << "\n------ While Loop -------\n";
        while (i <= last_n)
        {
            count++;
            i++;
        }
        std::cout << "Total number : " << count;

        // by do-while loop
        i = first_n, count = 0;
        std::cout << "\n------ Do-While Loop ------\n";
        do
        {
            count++;
            i++;
        } while (i <= last_n);
        std::cout << "Total number : " << count;
    }
    else
    {
        std::cout << "Input Invalid!";
    }

    return 0;
}