#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "--------- Identify the character is vowels or not ---------\n";
    cout << "Enter character : ";
    ch = cin.get();
    
    switch (ch) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u': cout << "Input character is a vowel.\n";
                break;
        default : cout << "Input character is a consonant.\n";
                break;
    }
    return 0;
}