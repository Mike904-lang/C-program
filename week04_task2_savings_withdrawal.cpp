// Week 4 - Task 2: Savings Withdrawal System (while loop)
// Customer keeps withdrawing until the amount is too large or balance is zero.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;
    cout << fixed << setprecision(2);

    // Loop runs only while there is money left in the account
    while (balance > 0) {
        cout << "\nCurrent balance: " << balance << endl;
        cout << "Enter amount to withdraw: ";
        cin >> withdrawal;

        // Stop condition 1: withdrawal is greater than the balance
        if (withdrawal > balance) {
            cout << "Insufficient balance. Withdrawal stopped.\n";
            break;   // leave the loop
        }

        // Valid withdrawal: deduct and show the remaining balance
        balance -= withdrawal;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;
    }

    // Stop condition 2: the loop condition (balance > 0) became false
    if (balance == 0)
        cout << "\nBalance is now zero. No more withdrawals possible.\n";

    return 0;
}
