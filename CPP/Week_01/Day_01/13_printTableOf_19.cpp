#include<iostream>

int main()
{
    std::cout << "---------- Print table of 19 ----------\n";
    
    // 10 iteration
    std::cout << "--------- Done in 10 iteration -------\n";
    for(int i = 19; i <= 190; i += 19)
    {
        std::cout << "19 * " << (i / 19) << " = " << i << "\n";
    }

    // 10 iteration
    std::cout << "---------- Done in 10 iteration ---------\n";
    int i = 19, j = 0;
    while(i <= 190)
    {
        std::cout << "19 * " << ++j << " = " << i << "\n";
        i += 19;
    }

    // 171 iteration
    std::cout << "----------- Done in 171 (19*9) iteration-------\n";
    int num = 19, k = 1;
    for(int i = num; i <= num*10; i++)
    {
        if(i % 19 == 0)
            std::cout << "19 * " << k++ << " = " << i << "\n";
    }
    return 0;
}