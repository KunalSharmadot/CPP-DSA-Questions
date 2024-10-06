#include <iostream>
using namespace std;

int main()
{
    int num, total = 0;
    do
    {
        cout << "Enter a number(0 to quit) : ";
        cin >> num;
        if (num == 0)
        {
            cout << "end of data entry." << endl;
            goto dataend; // transfer to dataend position
        }
        if (num < 0)
        {
            cout << "skipping this number." << endl;
            continue; // skips next statements and transfers to start of loop
        }
        total += num;
    } while (1);

dataend:
    cout << "Total of all + ve numbers is " << total;
}