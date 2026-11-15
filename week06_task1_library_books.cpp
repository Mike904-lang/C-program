// Week 6 - Task 1: Library Book Management System (Classes and Objects)

#include <iostream>
#include <string>
using namespace std;

// A class is a blueprint; it groups data (attributes) and functions (methods)
class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:
    // Reads the book details from the user
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    // Reduces available copies by one when a book is borrowed
    void borrowBook() {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "\nBook borrowed successfully.\n";
        } else {
            cout << "\nSorry, no copies available.\n";
        }
    }

    // Shows the book information
    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title            : " << title << endl;
        cout << "Author           : " << author << endl;
        cout << "Copies Available : " << copiesAvailable << endl;
    }
};

int main() {
    Book book;   // create an object of the class

    book.inputDetails();     // input book details
    book.displayDetails();   // show details before borrowing
    book.borrowBook();       // borrow a book
    book.displayDetails();   // show updated details

    return 0;
}
