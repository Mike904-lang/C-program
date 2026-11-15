// Week 12 - Task 1: Hospital Management System (Abstraction)
// MedicalStaff is an abstract class: it cannot be instantiated and forces
// every derived class to implement calculateSalary().

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ---------- Abstract base class ----------
class MedicalStaff {
protected:
    string staffName;
    int staffID;

public:
    MedicalStaff(string name, int id) {
        staffName = name;
        staffID = id;
    }

    // Pure virtual function (= 0) makes the class abstract.
    // Each type of staff must provide its own version.
    virtual double calculateSalary() = 0;

    // Normal (non-virtual) function shared by all staff
    void displayDetails() {
        cout << "Staff Name: " << staffName << endl;
        cout << "Staff ID  : " << staffID << endl;
    }

    virtual ~MedicalStaff() {}   // virtual destructor
};

// ---------- Doctor: salary = basic + allowance ----------
class Doctor : public MedicalStaff {
private:
    double basicSalary, allowance;
public:
    Doctor(string name, int id, double basic, double allow)
        : MedicalStaff(name, id), basicSalary(basic), allowance(allow) {}

    double calculateSalary() override {
        return basicSalary + allowance;
    }
};

// ---------- Nurse: salary = basic + overtime pay ----------
class Nurse : public MedicalStaff {
private:
    double basicSalary, overtimePay;
public:
    Nurse(string name, int id, double basic, double overtime)
        : MedicalStaff(name, id), basicSalary(basic), overtimePay(overtime) {}

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

int main() {
    cout << fixed << setprecision(2);

    // Base class pointers can point to any derived object
    MedicalStaff *staff1 = new Doctor("Dr. Achieng", 1001, 250000, 50000);
    MedicalStaff *staff2 = new Nurse("Nurse Mwangi", 2001, 80000, 12000);

    cout << "--- Doctor ---\n";
    staff1->displayDetails();
    cout << "Salary    : KES " << staff1->calculateSalary() << endl;  // Doctor's version

    cout << "\n--- Nurse ---\n";
    staff2->displayDetails();
    cout << "Salary    : KES " << staff2->calculateSalary() << endl;  // Nurse's version

    // Free the memory allocated with new
    delete staff1;
    delete staff2;

    return 0;
}
