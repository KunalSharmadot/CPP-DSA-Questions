// Arithmetic Progress : The difference between any two consecutive numbers are all same.
// formula : a.n_th = a + (n_th - 1)d;
#include <iostream>

int main()
{
again:
    std::cout << "--------------- Arithmetic Progress -------------\n";
    int num;
    std::cout << "1. Print n_th number of term.\n2. Print series. \n";
    std::cout << "Enter number according two your choice : ";
    std::cin >> num;
    switch (num)
    {
    case 1:
        int t1, t2, t3, t4, t5, d, a, n_th;
        std::cout << "Enter started 4 terms of series : ";
        std::cin >> t1 >> t2 >> t3 >> t4;
        // a is a first term of series
        a = t1;
        // initialization of d
        if ((t3 - t2) == (t2 - t1))
        {
            d = t2 - t1;
            std::cout << "Which term you want to know : ";
            std::cin >> n_th;

            int formula;
            formula = a + (n_th - 1) * d;
            std::cout << formula;
        }
        else{
            std::cout << "Series is not a Arithmetic Progress.";
        }

        break;

    case 2:
        std::cout << "Enter common difference (d) : ";
        std::cin >> d;
        std::cout << "Series started from (a): ";
        std::cin >> a;

        std::cout << "A.P Series : ";
        for (int i = 1; i <= 5; i++)
        {
            std::cout << a << "  ";
            a += d;
        }
        std::cout << ".  .  .  .  .  .  .\n";
        break;

    default:
        std::cout << "Invalid input!\n";
        goto again;
    }
    return 0;
}