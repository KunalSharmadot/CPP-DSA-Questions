#include <iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Enter Value of A and B : ";
    cin >> a >> b;
    cout << "Before Swapping : \n";
    cout << "a = " << a;
    cout << "\nb = " << b;

    // Swapping without temp OR third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter Swapping : \n" << "a = " << a;
    cout << "\nb = " << b;

    return 0;
}