// Week 10 - Task 1: Payment System (Function Overloading - compile-time polymorphism)
// Same function name, different parameters. The compiler picks the right one.

#include <iostream>
#include <iomanip>
using namespace std;

class Payment {
public:
    // 1) Cash payment: only an amount
    void processPayment(int amount) {
        cout << "[Cash Payment]\n";
        cout << "Amount       : " << amount << endl;
        cout << "Final Amount : " << amount << endl << endl;
    }

    // 2) Card payment: amount + transaction fee
    void processPayment(double amount, double fee) {
        double finalAmount = amount + fee;
        cout << fixed << setprecision(2);
        cout << "[Card Payment]\n";
        cout << "Amount       : " << amount << endl;
        cout << "Fee          : " << fee << endl;
        cout << "Final Amount : " << finalAmount << endl << endl;
    }

    // 3) Mobile payment: amount + fee - discount
    void processPayment(double amount, double fee, double discount) {
        double finalAmount = amount + fee - discount;
        cout << fixed << setprecision(2);
        cout << "[Mobile Payment]\n";
        cout << "Amount       : " << amount << endl;
        cout << "Fee          : " << fee << endl;
        cout << "Discount     : " << discount << endl;
        cout << "Final Amount : " << finalAmount << endl << endl;
    }
};

int main() {
    Payment p;

    p.processPayment(1000);               // 1 int argument    -> cash
    p.processPayment(2500.0, 50.0);       // 2 arguments       -> card
    p.processPayment(3000.0, 30.0, 100.0);// 3 arguments       -> mobile

    return 0;
}
