// Week 9 - Task 2: Vehicle System (Inheritance)
// Car inherits Brand and Year from Vehicle and adds its own attributes.

#include <iostream>
#include <string>
using namespace std;

// ---------- Base class ----------
class Vehicle {
protected:
    string brand;
    int yearOfManufacture;

public:
    void inputVehicle() {
        cout << "Enter brand: ";
        getline(cin, brand);
        cout << "Enter year of manufacture: ";
        cin >> yearOfManufacture;
    }

    void displayVehicle() {
        cout << "Brand            : " << brand << endl;
        cout << "Year of Manufact.: " << yearOfManufacture << endl;
    }
};

// ---------- Derived class ----------
class Car : public Vehicle {
private:
    int numberOfDoors;
    double engineCapacity;   // in cc

public:
    void inputCar() {
        inputVehicle();      // inherited function handles brand and year
        cout << "Enter number of doors: ";
        cin >> numberOfDoors;
        cout << "Enter engine capacity (cc): ";
        cin >> engineCapacity;
    }

    void displayCar() {
        cout << "\n--- Car Details ---\n";
        displayVehicle();    // inherited details
        cout << "Number of Doors  : " << numberOfDoors << endl;
        cout << "Engine Capacity  : " << engineCapacity << " cc\n";
    }
};

int main() {
    Car car;
    car.inputCar();
    car.displayCar();
    return 0;
}
