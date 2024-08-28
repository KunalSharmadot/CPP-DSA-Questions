#include <iostream>
using namespace std;

int main() {
    // integer value assigned to the char
    unsigned char c = 255;
    char d = -1;

    if(c < 0)
        cout << "C is less than Zero.\n";
    else
        cout << "C is Not less than Zero.\n";

    if(d < 0)
        cout << "D is less than Zero.\n";
    else
        cout << "D is not less than Zero.\n";

    if(c == d)
        cout << "C is equal to D value.\n";
    else
        cout << "C is not-equal to D value.\n";

    return 0;
}