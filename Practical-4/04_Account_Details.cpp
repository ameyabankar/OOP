#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    string name;
    double balance;

public:
    void getData() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter account holder name: ";
        cin >> name;
        cout << "Enter balance: ";
        cin >> balance;
    }

    void displayData() {
        cout << "\nAccount Details" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a;
    a.getData();
    a.displayData();
    return 0;
}
