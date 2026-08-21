#include <iostream>
using namespace std;

class Product {
private:
    int productId;
    string name;
    float price;

public:
    void getData() {
        cout << "Enter product ID: ";
        cin >> productId;
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
    }

    void displayData() {
        cout << "\nProduct Details" << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Product p;
    p.getData();
    p.displayData();
    return 0;
}
