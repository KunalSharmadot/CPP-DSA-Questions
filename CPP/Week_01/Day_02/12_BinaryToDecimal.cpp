#include <iostream>
using namespace std;

int main()
{

    int binary, decimal = 0, digit, position = 0;
    cout << "Enter the binary number : ";
    cin >> binary;
    // converting binary to decimal
    while (binary)
    {
        digit = binary % 10; // extract binary bit
        decimal += digit << position;          // newvalue = oldvalue + 2^position
        binary /= 10;                          // advance to next bit
        position += 1;                         // advance to next bit position
    }
    cout << "Its decimal equivalent = " << decimal;
    return 0;
}