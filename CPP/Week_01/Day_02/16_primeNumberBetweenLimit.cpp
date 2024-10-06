#include <iostream>
using namespace std;

int main()
{
    int num, i, j, l1, l2;
    cout << "Enter the lower limit : ";
    cin >> l1;
    cout << "Enter the higher limit : ";
    cin >> l2;
    cout << "\nThe prime numbers between "<< l1 <<" and "<< l2 <<" are : ";

    for (i = l1; i <= l2; i++)
    {
        if (i <= 3)
        {
            cout << i << "\t";
        }
        else
        {
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                    goto label;
            }
            cout << i << "\t";
        label:;
        }
    }
}