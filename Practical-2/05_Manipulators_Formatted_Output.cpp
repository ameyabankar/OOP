#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price = 1234.56789;

    cout << left << setw(15) << "Product";
    cout << right << setw(15) << "Price" << endl;

    cout << left << setw(15) << "Laptop";
    cout << right << setw(15) << fixed << setprecision(2) << price << endl;

    return 0;
}
