#include <iostream>
using namespace std;

int main(){
    int age, sec;
    cout << "Enter your current age : ";
    cin >> age;

    if (age < 0)
        cout << "I am sorry! age can never be negative.";
    else {
        sec = age * 365 * 24 * 60 * 60;
        cout << "You have lived for " << sec << " second."; 
    }
    return 0;
}