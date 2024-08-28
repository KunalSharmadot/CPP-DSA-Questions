#include <iostream>
using namespace std;

int main() {
    
    int my_age, your_age;
    cout << "Enter my age : ";
    cin >> my_age;
    cout << "Enter your age : ";
    cin >> your_age;
    
    if(my_age == your_age)
        cout << "We are born in the same year.";
    else
        cout << "We are born in the different year.";

    return 0;
}