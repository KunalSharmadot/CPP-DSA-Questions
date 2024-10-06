#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;

    if(age < 0){
        cout << "I am sorry!\n";
        cout << "Age can never be negative.";
        return 0;   // terminate program
    }
    if(age > 12 && age < 20){
        cout << "Your are a teen-Aged person, good!";
    } else {
        cout << "You are not a teen-Aged person.";
    }
    return 0;
}