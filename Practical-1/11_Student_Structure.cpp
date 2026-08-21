#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {
    Student s;
    cout << "Enter roll number: ";
    cin >> s.rollNo;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details" << endl;
    cout << "Roll No: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}
