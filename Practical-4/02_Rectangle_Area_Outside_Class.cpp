#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    void getData();
    float calculateArea();
    void displayArea();
};

void Rectangle::getData() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
}

float Rectangle::calculateArea() {
    return length * breadth;
}

void Rectangle::displayArea() {
    cout << "Area of rectangle = " << calculateArea() << endl;
}

int main() {
    Rectangle r;
    r.getData();
    r.displayArea();
    return 0;
}
