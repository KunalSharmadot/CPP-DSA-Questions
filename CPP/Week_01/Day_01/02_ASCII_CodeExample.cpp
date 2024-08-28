// Convert ASCII code to ASCII symbol.
#include <iostream>
using namespace std;

int main()
{
    int code;
    char symbol;
    cout << "Enter an ASCII Code (0 to 127) : ";
    cin >> code;
    symbol = code;
    cout << "The symbol corresponding to " << code << " is " << symbol;
    return 0;
}