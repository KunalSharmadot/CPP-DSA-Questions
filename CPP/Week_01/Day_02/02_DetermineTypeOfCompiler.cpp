#include <iostream>
using namespace std;

// Check whether your compiler type is 16-bit or 32-bit

int main() {

    if(sizeof(void*) == 2) {
        cout << "This is 16-bit Compiler." << endl;
    }
    else if(sizeof(void*) == 4) {
        cout << "This is 32-bit Compiler." << endl;
    }
    else {
        cout << "This is neither a 16-bit nor a 32-bit Compiler." << endl;
    }
    return 0;
}