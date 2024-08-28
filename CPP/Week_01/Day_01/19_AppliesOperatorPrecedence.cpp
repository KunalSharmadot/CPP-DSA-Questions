#include <iostream>
using namespace std;

// here increment first than solve left to right operator a / b1 than * c and so on .
#define solve(a1, b1, c1, d, e) (a1 / b1++ * c1 / d % e)

int main() {

    int a1 = 4, b1 = 3, c1 = 2, d = 1, e = 5, f;
    int a = 30, b = 20, c = 11;
    float result;
    result = a+b/--c+a%b;
    cout << "a+b/--c+a%b = " << result << "\n";
    return 0;

    f = solve(a1, b1, c1, d, e);
    // so we get 2
    cout << f << "\n";
    
}