// Week 8 - Task 1: Bank Account System (Constructors and Destructors)

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string holderName;
    int accountNumber;
    double balance;

public:
    // Constructor: runs automatically when an object is created.
    // It has the same name as the class and no return type.
    BankAccount(string name, int accNo, double initialBalance) {
        holderName = name;
        accountNumber = accNo;
        balance = initialBalance;
        cout << "Account successfully created\n";
    }

    // Shows account details
    void displayAccount() {
        cout << fixed << setprecision(2);
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder : " << holderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }

    // Destructor: runs automatically when the object is destroyed
    // (here, when main() ends). It starts with ~ and has no parameters.
    ~BankAccount() {
        cout << "\nAccount closed successfully\n";
    }
};

int main() {
    // Creating the object calls the constructor
    BankAccount account("Jane Wanjiru", 100245, 15000.50);

    account.displayAccount();

    return 0;   // object goes out of scope here -> destructor is called
}
