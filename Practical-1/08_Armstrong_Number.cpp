#include <iostream>
using namespace std;

int main() {
    int number, original, remainder, sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    original = number;
    while (number != 0) {
        remainder = number % 10;
        sum += remainder * remainder * remainder;
        number /= 10;
    }
    if (sum == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";
    return 0;
}
