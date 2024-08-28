// Macro Function : The preprocessor will replace all the macro functions used in the program by their function body before the compilation
// Syntax : #define MacroFuncName (Parameters) single line of functionbody
#include<iostream>

#define maximum(a1, b) (a1 > b ? a1 : b)
int main()
{
    int a = 1, b = 2, k;
    k = maximum(a+4, b+1);
    std::cout << "Larger number is " << k;
    return 0;
}