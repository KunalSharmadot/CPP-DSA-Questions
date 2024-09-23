#include <iostream>
using namespace std;

// Divide and multiply without using * and /. 

int main() {
    int num;
    cout << "Enter any number : ";
    cin >> num;
    
    // use left shift operator to twice number
    int multi = num << 1;
    cout << num << " multiply by 2 (using bitwise left shift) : " << multi <<endl; 
    
    // use right shift operator to half number
    float divide = num >> 1;
    if(num & 1) {
        cout << "The number is odd. Division result after adjusting : " << divide << endl;
    }
    else {
        cout << num << " divided by 2 (using bitwise right shift) : " << divide;
    }
    return 0;
}