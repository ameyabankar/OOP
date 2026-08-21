#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData();
    void displayData();
};

void Student::getData() {
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: ";
    cin >> marks;
}

void Student::displayData() {
    cout << "\nStudent Information" << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main() {
    Student s;
    s.getData();
    s.displayData();
    return 0;
}
