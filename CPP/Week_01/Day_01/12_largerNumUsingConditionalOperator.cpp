#include<iostream>
using namespace std;

int main() {
    
    int a, b, larger;
    cout << "Enter two integer : ";
    cin >> a >> b;
    larger = (a > b) ? a : b;
    cout << "The largest of two number is " << larger; 

    return 0;
}