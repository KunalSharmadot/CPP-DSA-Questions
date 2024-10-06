#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "-------- Find the largest number among three ---------\n";
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;


    if (a > c)
    {
        if (a > b)
        {
            cout << a << " is a largest number.";
        }
        else {
            cout << b << " is a largest number.";
        }
    }
    else {
        if (b > c)
        {
            cout << b << " is a largest number.";
        }
        else {
            cout << c << " is a largest number.";
        }   
    }
    return 0;
}