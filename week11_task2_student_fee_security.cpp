// Week 11 - Task 2: Student Fee Security System (Encapsulation)
// The fee balance is private and can only change through makePayment().

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:   // cannot be accessed or changed directly from outside the class
    string name;
    int admissionNumber;
    double feeBalance;

public:
    void inputStudentData() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter admission number: ";
        cin >> admissionNumber;
        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // The only way to change feeBalance, with validation to protect it
    void makePayment(double amount) {
        if (amount <= 0) {
            cout << "Invalid amount. Payment must be greater than zero.\n";
        } else if (amount > feeBalance) {
            cout << "Payment exceeds the balance. Payment rejected.\n";
        } else {
            feeBalance -= amount;
            cout << "Payment of " << amount << " accepted.\n";
        }
    }

    void displayStatus() {
        cout << fixed << setprecision(2);
        cout << "\n--- Student Fee Status ---\n";
        cout << "Name             : " << name << endl;
        cout << "Admission Number : " << admissionNumber << endl;
        cout << "Fee Balance      : " << feeBalance << endl;
    }
};

int main() {
    Student s;
    double payment;

    s.inputStudentData();

    cout << "Enter payment amount: ";
    cin >> payment;
    s.makePayment(payment);

    s.displayStatus();

    // s.feeBalance = 0;   // ERROR: feeBalance is private!
    return 0;
}
