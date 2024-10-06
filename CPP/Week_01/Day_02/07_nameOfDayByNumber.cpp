#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter number between (1 to 7) to get the name of day : ";
    cin >> day;
    if (day == 1)
        cout << "Monday" << endl;
    else if (day == 2)
        cout << "Tuesday" << endl;
    else if (day == 3)
        cout << "Wednesday" << endl;
    else if (day == 4)
        cout << "Thursday" << endl;
    else if (day == 5)
        cout << "Friday" << endl;
    else if (day == 6)
        cout << "Saturday" << endl;
    else if (day == 7)
        cout << "Sunday" << endl;
    else 
        cout << "Invalid Input!\n";

// By switch case statement
    switch (day) {
        case 1: cout << "Monday";
                break;
        case 2: cout << "Tuesday";
                break;
        case 3: cout << "Wednesday";
                break;
        case 4: cout << "Thursday";
                break;
        case 5: cout << "Friday";
                break;
        case 6: cout << "Saturday";
                break;
        case 7: cout << "Sunday";
                break;
        default : cout << "Invalid Input!";
                break;
    }

    return 0;
}