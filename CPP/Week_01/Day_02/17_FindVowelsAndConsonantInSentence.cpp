#include <iostream>
using namespace std;

int main()
{
    char name[100];
    int i, max, nvow, ncons;
    char ch;
    cout << "enter a sentence and terminate with '@'" << endl;
    i = 0;
    while ((ch = cin.get()) != '@')
    {
        name[i++] = ch;
    }
    name[i++] = '\0';
    max = i - 1;
    cout << "entered sentence is" << endl;
    for (i = 0; i <= max; ++i)
    {
        cout << name[i];
    }
    nvow = 0;
    ncons = 0;
    i = 0;
    while (name[i] != '\0')
    {
        switch (name[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            nvow = nvow + 1;
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            ncons = ncons + 1;
            break;
        }
        i = i + 1;
    } // end of while loop
    cout << "No of vowels = " << nvow << endl;
    cout << "No of consonants = " << ncons << endl;
    return 0;
}