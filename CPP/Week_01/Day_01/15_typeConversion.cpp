
#include <iostream>

int main()
{
// Implicit type conversion
    // 1. char and int = int
    char ch = 'a';
    // ch = 97;
    int i = 2;
    std::cout << "Values always in integer : " << (i + ch);
    // 2. int and long = long
    // 3. int and unsigned = unsigned
    // 4. long and double = double
    // 5. double and float = double
    // 6. int and float = float
    float f1 = 10.0;
    int in = 0;
    in = f1 / 3; // here 3 is automatical conveted into float (3 is getting promotion)
    // while whole float datatype is getting demotion
    std::cout << "\nValue always in float : " << in;
// Example:
    int a = 2;
    long l = 12.00;
    float f = 2.0;
    double d = 5.0;
    l = l / a + f * d - d;
    // l assigned to double (demotion of 11.00(double) value into long)
    std::cout << "\n" << l;

    std::cout << "\n" << (l / a + f * d - d);   
    //  Due to precision issues with floating-point arithmetic, it displays 10 instead of 11.0
    // This happens because the expression is evaluated within the std::cout

// Explicit Conversion
    int i1 = 13, j = 2;
    float f2;
    f2 = i1 / j;
    std::cout << "\ni/j = " << f2;
    f2 = (float) i1 / j;
    std::cout << "\n(float) i / j = " << f2;
    return 0;
}