#include <iostream>
using namespace std;

int main() {

    int numerator, denominator;
    float result, remainder;
    cout << "Enter numerator : ";
    cin >> numerator;
    cout << "Enter denominator : ";
    cin >> denominator;
    
    result = numerator / denominator;
    // result = (float) numerator / denominator;
    remainder = numerator % denominator;
    cout << "Result : " << result;
    cout << "\nRemainder : " << remainder;

    return 0;
}