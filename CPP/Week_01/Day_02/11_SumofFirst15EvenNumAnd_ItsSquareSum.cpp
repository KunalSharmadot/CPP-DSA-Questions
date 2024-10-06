#include <iostream>
using namespace std;

int main() {

    int i, sum = 0, sum_ofSquare = 0;
    // for (i = 30; i >= 2; i -= 2)
    for (i = 2; i <= 30; i += 2)
    {
        sum = sum + i;
        // sum += i;
        sum_ofSquare = sum_ofSquare + i * i;
        // sum_ofSquare += i * i;
    }
    cout << "Sum of first 15 Even positive number : " << sum;
    cout << "\nSum of thier square : " << sum_ofSquare;

    return 0;
}