// Week 3 - Task 2: Water Billing System Using Functions
// Calculates a water bill and gives a 10% discount for usage above 100 units.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const double RATE_PER_UNIT = 50.0;   // price per unit of water (KES)

// Function prototypes
void getCustomerDetails(string &name, double &units);
double calculateBill(double units);
double applyDiscount(double bill, double units);
void displayBill(string name, double units, double bill, double discount, double finalAmount);

int main() {
    string name;
    double units, bill, discount, finalAmount;

    getCustomerDetails(name, units);              // 1. input
    bill = calculateBill(units);                  // 2. bill before discount
    discount = applyDiscount(bill, units);        // 3. discount amount (0 if none)
    finalAmount = bill - discount;                // 4. amount payable
    displayBill(name, units, bill, discount, finalAmount);

    return 0;
}

// Prompts for the customer name and units consumed (passed by reference)
void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    getline(cin, name);
    cout << "Enter units consumed: ";
    cin >> units;
}

// Water Bill = Units Consumed x Rate Per Unit
double calculateBill(double units) {
    return units * RATE_PER_UNIT;
}

// Returns the discount amount: 10% of the bill if units > 100, otherwise 0
double applyDiscount(double bill, double units) {
    if (units > 100)
        return 0.10 * bill;
    return 0.0;
}

// Prints the full bill
void displayBill(string name, double units, double bill, double discount, double finalAmount) {
    cout << fixed << setprecision(2);
    cout << "\n==========================================\n";
    cout << "            WATER BILL\n";
    cout << "==========================================\n";
    cout << left << setw(26) << "Customer Name:"          << name << endl;
    cout << left << setw(26) << "Units Consumed:"         << units << endl;
    cout << left << setw(26) << "Total Before Discount:"  << "KES " << bill << endl;
    cout << left << setw(26) << "Discount:"               << "KES " << discount << endl;
    cout << "------------------------------------------\n";
    cout << left << setw(26) << "FINAL AMOUNT PAYABLE:"   << "KES " << finalAmount << endl;
    cout << "==========================================\n";
}
