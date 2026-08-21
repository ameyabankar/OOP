#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    string title;
    string author;

public:
    void getData() {
        cout << "Enter book ID: ";
        cin >> bookId;
        cout << "Enter book title: ";
        cin >> title;
        cout << "Enter author name: ";
        cin >> author;
    }

    void displayData() {
        cout << "\nBook Details" << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b;
    b.getData();
    b.displayData();
    return 0;
}
