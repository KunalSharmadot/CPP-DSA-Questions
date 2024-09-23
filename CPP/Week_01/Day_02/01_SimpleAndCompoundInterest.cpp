#include <iostream>
using namespace std;


int main() {
    // Simple Interest
    int time, principalAmount;
    float InterestRate, simpleInterest;
    cout << "Enter Principal Amount : ";
    cin >> principalAmount;
    cout << "Enter Interest Rate (yearly) : ";
    cin >> InterestRate;
    cout << "How many year you want to hold : ";
    cin >> time;
    simpleInterest = ((principalAmount * InterestRate * time) / 100) + principalAmount;
    cout << "Simple Interest is " << simpleInterest;

    // Compound Interest
    float compoundInterest, power = 1;
    float sum = (1 + (InterestRate / 100));

    for(int i = 0; i < time; ++i)
    {
        power *= sum;
    }
    compoundInterest = principalAmount * power;
    cout << "\nCompound Interest is " << compoundInterest;
    
    return 0;
}