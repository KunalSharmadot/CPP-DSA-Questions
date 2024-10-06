#include <iostream>
using namespace std;

int main()
{
    char inchar;
    do{
        cout << "Enter your sex(m / f) :";
        cin >> inchar;
    } while (inchar != 'm' && inchar != 'f');

    if (inchar == 'm')
        cout << "So you are male.good !";
    else
        cout << "So you are female.good !";
    
    return 0;
}