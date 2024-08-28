// #define preprocessor directive, associates a constant value to a symbol and is visible throughout the module in which it is define
#include <iostream>
using namespace std;

// Preprocessor definition have a constant value.
#define CITY "Lucknow"
#define PI 3.1452

void which_city();

int main() {
    cout << "Earlier City : ";
    cout << CITY << "\n";
    
    #define CITY_NEW "Noida";
    cout << "New City : ";
    cout << CITY_NEW;

    which_city();
    return 0;
}
void which_city() {
    cout << "\nCity in Function : ";
    cout << CITY_NEW;
    cout << "\nPi Value : " << PI;
}