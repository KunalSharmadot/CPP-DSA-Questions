#include <iostream>
using namespace std;

int main() {

    char ch1, ch2;
    cout << "Enter first character : ";
    ch1 = cin.get();    
    cin.ignore();   // skip new line character
    cout << "Enter second character : ";
    ch2 = cin.get();
    cout << "Ch1 = " << ch1 << endl;
    cout << "Ch2 = " << ch2 << endl;

    if (ch1 > ch2) 
        cout << "ch1 > ch2 \n";
    else if (ch1 < ch2)
        cout << "ch1 < ch2 \n";
    else
        cout << "ch1 = ch2 \n";
    return 0;
}