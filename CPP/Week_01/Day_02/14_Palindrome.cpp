#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;
    cout << "Enter the number : ";
    cin >> num;
    n = num;
    do
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    } while (num != 0);
    cout << "Reverse of the number = " << rev << endl;
    if (n == rev)
        cout << "The number is a palindrome\n";
    else
        cout << "The number is not a palindrome\n";
    return 0;
}