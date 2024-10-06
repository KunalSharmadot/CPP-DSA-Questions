// Enumerated datatype : An enumerated data type is a user-defined type, with values ranging over a finite set of identifiers called enumeration constants.
#include<iostream>

enum emotion{happy, angry, cool};
enum weather{hot, cold, wet};
typedef enum color{red, blue, green}color1;
using col1 = enum color3{r, gren, blu};
int main()
{
    emotion feeling;
    feeling = happy;

    color1 col;
    col = green;
    
    col1 c;
    c = gren;
    std::cout << feeling << "\n" << col << "\n" << c;
    return 0;
}