#include <iostream>
using namespace std;

inline int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Maximum = " << maximum(num1, num2) << endl;

    return 0;
}
