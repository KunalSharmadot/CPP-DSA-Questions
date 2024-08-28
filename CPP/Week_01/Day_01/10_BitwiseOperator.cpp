#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 7, c;
    // Bitwise AND operator
    c = a & b;
    cout << "All bitwise Operator : \n";
    cout << "a & b = " << c;

    // Bitwise OR operator
    c = a | b;
    cout << "\na | b = " << c;

    // Bitwise XOR operator
    c = a ^ b;
    cout << "\na ^ b = " << c;

    // Bitwise Left-Shift operator
    c = (a << 2);
    cout << "\n(a << 2) = " << c;

    // Bitwise Right-Shift operator
    c = (a >> 2);
    cout << "\n(a >> 2) = " << c;

    return 0;
}