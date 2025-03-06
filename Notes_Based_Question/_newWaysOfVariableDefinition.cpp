#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Type reference with auto (C++11)
    auto x = 10;      // x is an int
    auto y = 3.147;   // y is an double
    auto z = "Kunal"; // z is an const char*
    // Note :- auto variable must have some values

    // Uniform Initialization
    int b(3.14); // Allowed, b will be 3.
//  int a{3.14};    // Compilation error, narrowing conversion not allowed.
    vector<int> v(5, 10);   //vector with 5 element, each value are 10.
    vector<int> w{5, 10};   //vector with 2 element, 5 and 10.
    // Note : Must use for narrowing conversion and Ambiguity(variable == fuction).

    // constexpr variable
    constexpr int a1 = 10;  // variable is evaluated at compile time.
//  a1 = 5;     // Error! constant expression variable are immutable and cannot change.
    //Note: Always used in performance optimization, template parameter, Array Size, Switch Case. 

    // nullptr for Null Pointer :- pointer doesn't point to any valid memory location.
    // #define NULL 0
    int *ptr = nullptr;
    cout << "Null Pointer : " << ptr << "\n";
    nullptr_t nptr = nullptr;   // type of nullptr

    // decltype :- Usefull for declaring variable whose type type depends on the result of an expression.
    int x1 = 5;
    decltype (x1) y1 = 10;      // x1 is copy the y1 datatype
    cout << "Size of x1 : " << sizeof(x1);

    // inline variable : define in header files without violating the one definition rule (ODR)
    inline int q = 42;

    // constinit : ensure that variable is initialized at compile time.
    constinit int y2 = 20; 
    return 0;
}