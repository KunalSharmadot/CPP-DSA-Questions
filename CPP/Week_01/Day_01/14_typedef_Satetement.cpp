// typedef : It is a statement is used to give new names to existence datatype.
// typedef is compatible with older C and C++ standards.
#include<iostream>

// creating a string datatype whose additional name (alias) is text
typedef std::string text_t;
// using text_t instead of string

// 'using' is preferred in modern C++ code due to its flexibility and readability.
using number = int;
//  typedef int number;  

int main()
{
    text_t name = "Crew Code";
    // you can also write [std::string first_name = "Crew Code"]
    number age = 21;
    std::cout << name << "\n" << age;
    return 0;
}