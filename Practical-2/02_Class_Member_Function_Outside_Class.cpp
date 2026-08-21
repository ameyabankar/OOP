#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    void getData();
    void displayData();
};

void Student::getData() {
    cout << "Enter name: ";
    cin >> name;
}

void Student::displayData() {
    cout << "Name: " << name << endl;
}

int main() {
    Student s;
    s.getData();
    s.displayData();

    return 0;
}
