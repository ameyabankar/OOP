#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float calculateArea() {
        return length * breadth;
    }

    void displayArea() {
        cout << "Area of rectangle = " << calculateArea() << endl;
    }
};

int main() {
    Rectangle r;
    r.getData();
    r.displayArea();

    return 0;
}
