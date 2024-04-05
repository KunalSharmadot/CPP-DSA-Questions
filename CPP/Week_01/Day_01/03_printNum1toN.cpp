// print number from 1 to N number
#include <iostream>

int main()
{
    int n;
    std::cout << "-------------- Number from 1 to N value ------------\n";
    std::cout << "Enter n_th number : ";
    std::cin >> n;

    std::cout << "---------- Number from 1 to N -----------\n";

    // by for loop
    std::cout << "----- By For Loop ------\n";
    for (int i = 1; i <= n; i++)
        std::cout << i << "\t";

    std::cout << "\n";
    // by while loop
    std::cout << "----- By While Loop ------\n";
    int i = 1;
    while (i <= n)
    {
        std::cout << i << "\t";
        i++;
    }

    std::cout << std::endl;
    // by do-while loop
    std::cout << "----- By Do-While Loop ------\n";
    int j = 1;
    do{
        if (n > 0)
        {
            std::cout << j << "\t";
            j++;
        }
        else
        {
            std::cout << "Input is invalid !";
        }
    } while (j <= n);

    return 0;
}