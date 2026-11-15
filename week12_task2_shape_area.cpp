// Week 12 - Task 2: Shape Area System (Abstraction)
// Shape is abstract; Circle and Rectangle each define their own area formula.

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265;

// ---------- Abstract base class ----------
class Shape {
public:
    virtual double calculateArea() = 0;   // pure virtual function
    virtual ~Shape() {}
};

// ---------- Circle: Area = pi x r^2 ----------
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double calculateArea() override {
        return PI * radius * radius;
    }
};

// ---------- Rectangle: Area = length x width ----------
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    cout << fixed << setprecision(2);

    Shape *shape;   // base class pointer

    Circle circle(7.0);
    Rectangle rectangle(10.0, 5.0);

    shape = &circle;
    cout << "Area of Circle (r = 7)     : " << shape->calculateArea() << endl;

    shape = &rectangle;
    cout << "Area of Rectangle (10 x 5) : " << shape->calculateArea() << endl;

    return 0;
}
