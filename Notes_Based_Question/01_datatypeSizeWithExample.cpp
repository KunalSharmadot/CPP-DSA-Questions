// short and long is a size qualifiers which can change the size of datatype.
// unsigned and signed is a sign qualifiers which is positive and negative-positive both sign.
#include <iostream>
// #include<string>
int main()
{
    // integer datatype
    int a = 10;
    short int b = 20;
    long int c = 30;
    long long int d = 40;
    unsigned int e = -1;    // Only holding a positive value
    signed int f = -10;     // this is default in (int) datatype
    std::cout << "\nInteger datatype :- \n";
    std::cout << "int : " << a << " and size : " << sizeof(a) << std::endl;
    std::cout << "short int : " << b << " and size : " << sizeof(b) << std::endl;
    std::cout << "long int : " << c << " and size : " << sizeof(long int) << std::endl;
    std::cout << "long long int : " << d << " and size : " << sizeof(long long int) << std::endl;
    std::cout << "unsigned int : " << e << " and size : " << sizeof(e) << std::endl;
    std::cout << "signed int : " << f << " and size : " << sizeof(f) << std::endl;

    // floating-point datatype
    float g = 3.14f;
    double h = 3.141592;
    long double i = 3.141592568493L;
    std::cout << "\nFloating point datatype :-\n";
    std::cout << "float : " << g << " and size : " << sizeof(g) << std::endl;
    std::cout << "double : " << h << " and size : " << sizeof(h) << std::endl;
    std::cout << "long double : " << i << " and size : " << sizeof(long double) << std::endl;

    // char datatype
    char ch = 'k';
    wchar_t wch = L'b';
    char16_t ch16 = U'c';
    char32_t ch32 = U'g';
    std::cout << "\nCharacter datatype :-\n";
    std::cout << "Char : " << ch << " and size : " << sizeof(ch) << std::endl;
    std::cout << "wchar_t : " << wch << " and size : " << sizeof(wch) << std::endl;
    std::cout << "char16_t : " << ch16 << " and size : " << sizeof(ch16) << std::endl;
    std::cout << "char32_t : " << ch32 << " and size : " << sizeof(char32_t) << std::endl;

    // Boolean datatype
    bool tr = true;
    bool fa = false;
    std::cout << "\nBoolean datatype :- \n";
    std::cout << "True : " << tr << " and size : " << sizeof(true) << std::endl;
    std::cout << "False : " << fa << " and size : " << sizeof(false) << std::endl;

    // string datatype
    std::string n = "Hello, World.";
    std::cout << "\nString datatype :- \n";
    std::cout << "string : " << n << " and size : " << sizeof(n) << std::endl;
    return 0;
}