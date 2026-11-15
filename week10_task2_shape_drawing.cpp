// Week 10 - Task 2: Shape Drawing System (Function Overriding - run-time polymorphism)
// A base-class pointer calls the draw() of whichever object it points to.

#include <iostream>
using namespace std;

// ---------- Base class ----------
class Shape {
public:
    // "virtual" tells C++ to decide which draw() to call at run time
    virtual void draw() {
        cout << "Drawing Shape\n";
    }
    // Virtual destructor: good practice in classes meant for inheritance
    virtual ~Shape() {}
};

// ---------- Derived classes: each overrides draw() ----------
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle\n";
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle\n";
    }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    Shape *ptr;   // base class pointer

    ptr = &c;     // points to a Circle
    ptr->draw();  // prints "Drawing Circle"

    ptr = &r;     // same pointer, now points to a Rectangle
    ptr->draw();  // prints "Drawing Rectangle"

    ptr = &t;     // now a Triangle
    ptr->draw();  // prints "Drawing Triangle"

    return 0;
}
