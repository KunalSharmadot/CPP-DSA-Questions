#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // d is a discriminant value = b^2 - 4 * a * c
    float a, b, c, d;
    // Below are roots value
    float x1, x2, x;
    cout << "-------- Finding the Roots Quadratic Equation ---------\n";
    cout << "Enter the cofficient value of X^2 : ";
    cin >> a;
    cout << "Enter the cofficient value of X : ";
    cin >> b;
    cout << "Enter the constant value : ";
    cin >> c;

    if (a == 0) {
        x = -c / b;
        cout << "Roots are linear : " << x;
    }
    else
    {
        d = ((b * b) - 4 * a * c);
        if (d < 0)
        {
            cout << "No real solution (Complex root).";
        }
        else if (d == 0)
        {
            x = ((-b) / (2 * a));
            cout << "Roots are identical (x1 = x2) : " << x << endl;
        }
        else
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << "Two real solution are : \nx1 : " << x1 << "\nx2 : " << x2 << endl;
        }
    }

    return 0;
}