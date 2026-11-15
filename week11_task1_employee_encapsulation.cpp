// Week 11 - Task 1: Employee Data Protection System (Encapsulation)
// Data is private; it can only be used through public member functions.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
private:   // hidden from code outside the class
    string name;
    int employeeID;
    double basicSalary;

public:
    // Inputs and assigns values to the private data members
    void setEmployeeDetails() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> employeeID;
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    // Net Salary = Basic Salary + 0.10 x Basic Salary (10% allowance)
    double calculateSalary() {
        return basicSalary + 0.10 * basicSalary;
    }

    void displayEmployeeDetails() {
        cout << fixed << setprecision(2);
        cout << "\n--- Employee Details ---\n";
        cout << "Name         : " << name << endl;
        cout << "Employee ID  : " << employeeID << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Net Salary   : " << calculateSalary() << " (includes 10% allowance)\n";
    }
};

int main() {
    Employee emp;
    emp.setEmployeeDetails();
    emp.displayEmployeeDetails();

    // emp.basicSalary = 100000;   // ERROR: basicSalary is private!
    return 0;
}
