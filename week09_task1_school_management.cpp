// Week 9 - Task 1: School Management System (Inheritance)
// Student inherits the name and age of Person, so we don't repeat code.

#include <iostream>
#include <string>
using namespace std;

// ---------- Base class ----------
class Person {
protected:               // protected: accessible in this class and derived classes
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// ---------- Derived class ----------
// "public Person" means Student inherits everything from Person
class Student : public Person {
private:
    int admissionNumber;
    string className;

public:
    void inputStudent() {
        inputPerson();   // reuse the base class input function
        cout << "Enter admission number: ";
        cin >> admissionNumber;
        cout << "Enter class: ";
        cin >> ws;                 // clear the leftover newline
        getline(cin, className);
    }

    void displayStudent() {
        cout << "\n--- Student Details ---\n";
        displayPerson();           // inherited details
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class           : " << className << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    s.displayStudent();
    return 0;
}
