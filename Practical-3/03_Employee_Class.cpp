#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void getData() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.getData();
    e.displayData();

    return 0;
}
