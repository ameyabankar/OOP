#include <iostream>
using namespace std;

inline float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;

    cout << "Simple Interest = " << simpleInterest(principal, rate, time) << endl;

    return 0;
}
