// Week 1 - Task 1: Mobile Phone Sales Receipt System
// Captures a phone sale and prints a formatted customer receipt.

#include <iostream>   // for cin and cout
#include <string>     // for string
#include <iomanip>    // for setw, setprecision, fixed
using namespace std;

int main() {
    // i) Variables to store the sale details
    string customerName;   // name of the customer
    string phoneModel;     // phone model bought
    int quantity;          // number of phones bought
    double pricePerPhone;  // price of one phone
    double totalAmount;    // total sales amount

    // Prompt the user to enter the details
    cout << "Enter customer name: ";
    getline(cin, customerName);          // getline allows names with spaces

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone (KES): ";
    cin >> pricePerPhone;

    // ii) Total Sales Amount = Quantity Bought x Price Per Phone
    totalAmount = quantity * pricePerPhone;

    // iii) Display a well-formatted receipt
    cout << fixed << setprecision(2);    // show 2 decimal places
    cout << "\n==========================================\n";
    cout << "        RUIRU MOBILE PHONE SHOP\n";
    cout << "            SALES RECEIPT\n";
    cout << "==========================================\n";
    cout << left << setw(20) << "Customer Name:"   << customerName  << endl;
    cout << left << setw(20) << "Phone Model:"     << phoneModel    << endl;
    cout << left << setw(20) << "Quantity Bought:" << quantity      << endl;
    cout << left << setw(20) << "Price Per Phone:" << "KES " << pricePerPhone << endl;
    cout << "------------------------------------------\n";
    cout << left << setw(20) << "TOTAL AMOUNT:"    << "KES " << totalAmount   << endl;
    cout << "==========================================\n";
    cout << "     Thank you for shopping with us!\n";

    return 0;
}
