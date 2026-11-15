// Week 4 - Task 1: Employee Bonus System (for loop)
// Reads 5 employees, computes a 5% bonus and total salary for each.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5;
    string name;
    double basicSalary, bonus, totalSalary;

    // The for loop repeats the input and calculation 5 times
    for (int i = 1; i <= NUM_EMPLOYEES; i++) {
        cout << "\n--- Employee " << i << " ---\n";

        cout << "Enter employee name: ";
        // cin >> leaves a newline in the buffer; ws removes it before getline
        cin >> ws;
        getline(cin, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;          // Bonus = 5% of basic salary
        totalSalary = basicSalary + bonus;   // Total = Basic + Bonus

        // Report for this employee
        cout << fixed << setprecision(2);
        cout << "\n  Name         : " << name;
        cout << "\n  Basic Salary : " << basicSalary;
        cout << "\n  Bonus (5%)   : " << bonus;
        cout << "\n  Total Salary : " << totalSalary << endl;
    }

    return 0;
}
