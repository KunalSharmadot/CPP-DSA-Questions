// Conversion of Celcius to fahrenheit and Vise-Versa
#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celcius;
    // Celcius to Fahrenheit
    cout << "Enter temperature in celcius : ";
    cin >> celcius;
    fahrenheit = (1.8 * celcius) + 32;
    cout << "Equivalent Fahrenheit = " << fahrenheit << "\n";

    // Fahrenheit to Celcius
    cout << "Enter temperature in fahrenheit : ";
    cin >> fahrenheit;
    celcius = ((fahrenheit - 32) / 1.8);
    cout << "Equivalent Celcius = " << celcius << "\n";
    return 0;
}