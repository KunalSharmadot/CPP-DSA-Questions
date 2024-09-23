#include <iostream>
using namespace std;

int main() {

    int a = 2, b = 3;
    // Expression : Those expression which not end with semi-colon
    // Statement : Those expression which end with semi-colon
    // Block : Multiple statement make a block or compound statement

// Branching Statement : sequention execution of program
    // if statement
    if (a > b) {
        cout << "Greater No. " << a;
    }
    // else-if statement
    if (a > b) {
        cout << "\nGreater No. " << a;
    }
    else if (a == b) {
        cout << "\nBoth are same number.";
    }
    else {
        cout << "\nSmaller No. " << b;
    }

    // Switch Case 

    return 0;
}