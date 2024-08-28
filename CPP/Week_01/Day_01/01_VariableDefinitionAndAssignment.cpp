#include<iostream>
using namespace std;

int main()
{
    // integer type variable definition
    int a, b;
    // variable definition and initialization
    int c = 100;
    int d(150);
    // Floating point variable definition
    float distance;
    
    // Initialization during execution time
    a = c;
    b = c + d;
    distance = 55.9;

    // Display content of variable
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    cout << "c = " << c << "\n";
    cout << "d = " << d << "\n";
    cout << "Distance = " << distance << "\n";
   return 0; 
}