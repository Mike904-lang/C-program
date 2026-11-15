// Week 6 - Task 2: Student Fee Management System (Classes and Objects)

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int admissionNumber;
    double feeBalance;

public:
    // Reads student details
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter admission number: ";
        cin >> admissionNumber;
        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // Reduces the fee balance by the amount paid
    void makePayment(double amount) {
        if (amount <= 0) {
            cout << "Invalid payment amount.\n";
        } else if (amount > feeBalance) {
            cout << "Payment is more than the balance owed. Payment rejected.\n";
        } else {
            feeBalance -= amount;
            cout << "Payment of " << amount << " received.\n";
        }
    }

    // Shows student details and the remaining balance
    void displayStatus() {
        cout << fixed << setprecision(2);
        cout << "\n--- Fee Status ---\n";
        cout << "Name             : " << name << endl;
        cout << "Admission Number : " << admissionNumber << endl;
        cout << "Fee Balance      : " << feeBalance << endl;
    }
};

int main() {
    Student s;            // create the object
    double payment;

    s.inputStudent();     // input student details

    cout << "Enter amount to pay: ";
    cin >> payment;
    s.makePayment(payment);   // process the payment

    s.displayStatus();        // show updated status

    return 0;
}
