#include<iostream>
using namespace std;

int main() {
    
    unsigned u = 0;
    cout << "Value before conversion : " << u;
    // Unary Operator : One's Complement Operator (~)
    u = ~u;
    cout << "\nValue after conversion : " << u;

    return 0;
}