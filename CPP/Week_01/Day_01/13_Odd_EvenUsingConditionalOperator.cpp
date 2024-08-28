#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter number : ";
    cin >> num;
    cout << "The number " << num << " is ";
    cout << ((num % 2) ? "Odd" : "Even");

    cout << endl << "Enter the number: ";
    cin >> num;
    cout << "The number " << num << " is ";
    (num % 2)? cout << "Odd" : cout << "Even";

    return 0;
}