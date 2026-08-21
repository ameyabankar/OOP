#include <iostream>
using namespace std;

int main() {
    int num = 10;
    double value;

    value = num; // Implicit conversion from int to double

    cout << "Integer value = " << num << endl;
    cout << "Double value = " << value << endl;

    return 0;
}
