// Week 3 - Task 1: Payroll System Using Functions
// Each step of the payroll is handled by its own function.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const double RATE_PER_HOUR = 500.0;   // overtime rate (KES per hour)

// Function prototypes (declarations) so main() can come first
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours);
double calculateOvertimePay(double overtimeHours);
double calculateNetSalary(double basicSalary, double overtimePay);
void displayPayslip(string name, double basicSalary, double overtimeHours,
                    double overtimePay, double netSalary);

int main() {
    string name;
    double basicSalary, overtimeHours, overtimePay, netSalary;

    // Call the functions in a logical order
    getEmployeeDetails(name, basicSalary, overtimeHours);
    overtimePay = calculateOvertimePay(overtimeHours);
    netSalary   = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}

// Reads employee details. Parameters are passed by reference (&)
// so that the values typed in are stored back in main()'s variables.
void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

// Overtime Pay = Overtime Hours x Rate Per Hour
double calculateOvertimePay(double overtimeHours) {
    return overtimeHours * RATE_PER_HOUR;
}

// Net Salary = Basic Salary + Overtime Pay
double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

// Prints a formatted payslip
void displayPayslip(string name, double basicSalary, double overtimeHours,
                    double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);
    cout << "\n==========================================\n";
    cout << "               PAYSLIP\n";
    cout << "==========================================\n";
    cout << left << setw(22) << "Employee Name:"  << name << endl;
    cout << left << setw(22) << "Basic Salary:"   << "KES " << basicSalary << endl;
    cout << left << setw(22) << "Overtime Hours:" << overtimeHours << endl;
    cout << left << setw(22) << "Rate Per Hour:"  << "KES " << RATE_PER_HOUR << endl;
    cout << left << setw(22) << "Overtime Pay:"   << "KES " << overtimePay << endl;
    cout << "------------------------------------------\n";
    cout << left << setw(22) << "NET SALARY:"     << "KES " << netSalary << endl;
    cout << "==========================================\n";
}
