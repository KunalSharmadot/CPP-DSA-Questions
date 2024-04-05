#include<iostream>

int main()
{
    // Unary Operator : Increment and Decrement Operator

    wchar_t ch = L'a';
    std::cout << "\n---------------- Unary Operator have only 1 operands. ----------------\n";
    // postfix increment
    std::cout << ch++ << std::endl;
    // prefix increment
    std::cout << ++ch << std::endl;
    --ch;
    // postfix decrement
    std::cout << ch-- << std::endl;
    // prefix decrement
    std::cout << --ch << std::endl;

    // One's Complement Operator (~) from Bitwise Operator
    // Detect the largest possible unsigned integer
    unsigned u = 0;
    std::cout << "Value Before Conversion : " << u;
    u = ~u;
    std::cout << "\nValue After Conversion : " << u << std::endl;


    // ternary operator : Conditional operator

    std::cout << "\n----------- Ternary Operator handle the 3 operands.---------------\n";
    // direct value printed
    (ch % 2 == 0) ? std::cout << "Even.\n" : std::cout << "Odd.\n";
    // By holding values in string
    std::string a = (ch % 2 == 0) ? "True" : "False";
    std::cout << a <<std::endl;
    
    // Binary Operator : 
    // 1. Arithmetic Operators : (+,-,/,*,%)
    std::cout << "\n ---------------- Binary Operator have 2 operands. -----------------\n";
    int num1 = 20, num2 = 15;
    std::cout <<"\n1. Arithmetic Operator :- \n";
    std::cout << "Addition : " << (num1 + num2);
    std::cout << "\nSubstraction : " << (num1 - num2);
    std::cout << "\nMultiplication : " << (num1 * num2);
    std::cout << "\nDivision : " << (num1 / num2);
    std::cout << "\nModulus : " << (num1 % num2);

    // 2. Relational Operator : (==, <=, >=, <, >, !=)
    std::cout << "\n\n2. Relational Operator :- \n";
    if(num1 == num2)
        std::cout << "Both Number are same.\n";
    else if(num1 < num2)
        std::cout << "Number 1 is less than number 2.\n";
    else if(num1 <= num2)
        std::cout << "Number 1 is less than equals to number 2.\n";
    else if(num1 > num2)
        std::cout << "Number 1 is greater than number 2.\n";
    else if(num1 >= num2)
        std::cout << "Number 1 is greater than equal to number 2.\n";
    else if(num1 != num2)
        std::cout << "Both the Numbers are different.\n";

    // 3. Logical Operator : (&&, ||, !)
    std::cout << "\n3. Logical Operator.\n";
    int year = 2024;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        std::cout << year << " is a leap Year.\n";
    else
        std::cout << year << " is not a leap year.\n";
    
    //4. Bitwise Operator : (&, |, ^, ~, <<, >>)
    std::cout << "\n4. Bitwise Operator.\n";
    int n1 = 7, n2 = 5;
    // In AND :whenever single bit of both integer is 1 than it is 1. 
    std::cout << "Bitwise AND : " << (n1 & n2);
    // In OR : any bit of both integer is 1 that it is 1.
    std::cout << "\nBitwise OR : " << (n1 | n2);
    // In XOR : alternative bit value of both integer become 1.
    std::cout << "\nBitwise XOR : " << (n1 ^ n2);
    // Left Shift Operator : shifted left by no. of bits position.
    // (initial_value * 2_power_shiftingleft by 1 bit) == positional Yeild.
    std::cout << "\nLeft Shift Operator : " << (n1 << 1);
    // Right Shift Operator : inserted from right side and drop from left side.
    std::cout << "\nRight Shift Operator : " << (n1 >> 2);

    //5. Assignment Operator : (+=, -=, /=, %=, *=, &=, |=, ^=, <<=, >>=)
    int a1 = 2, a2 = 5;
    int a3 = 5;
    std::cout << "\n\n5. Assignment Operator.\n";
    std::cout << "Addition : " << (a3 += (a1 + a2));
    std::cout << "\nSubstraction : " << (a3 -= (a2 - a1));
    std::cout << "\nMultiplication : " << (a3 *= (a2 - a1));    //a3 = 27
    std::cout << "\nDivision : " << (a3 /= (a2));   // a3 = 5
    std::cout << "\nModulus (Remainder) : " << (a3 %= (a2 + 2));  //a3 = 5
    std::cout << "\nAND : " << (a3 &= 3);   // 0101 &= 0011
    std::cout << "\nOR : " << (a3 |= 10);   // 0001 |= 1010
    std::cout << "\nXOR : " << (a3 ^= a2);    // 1011 ^= 0101
    std::cout << "\nRight Shift Operator : " << (a3 >>= 1);     // 1110 >>= 1
    std::cout << "\nLeft Shift Operator : " << (a3 <<= 1);      // 0111 <<= 1
    
    // Special Operator : 
    std::cout << "\n\n --------------- Special Operator -------------- \n";
    std::cout << "Sizeof Operator : " << sizeof(float);
    int j, t = (j = 3, j + 2);
    std::cout << "\nComma Operator : " << t;
    
    return 0;
}