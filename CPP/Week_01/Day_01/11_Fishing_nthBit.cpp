#include <iostream>
using namespace std;

int main() {
    int a, n, bit;
    cout << "Enter the integer : ";
    cin >> a;
    cout << "Enter bit position to extract : ";
    cin >> n;
    bit = (a >> n) & 1;
    cout << "The bit is : " << bit;
    return 0;
}