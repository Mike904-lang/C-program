// Week 2 - Task 3: Simple Calculator (switch statement)
// Performs +, -, *, / on two numbers and handles division by zero.

#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;   // the operator: + - * /

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // switch chooses the operation depending on the operator entered
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;   // break stops execution from "falling" into the next case
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            // Handle division by zero
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed.\n";
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            // Runs when the operator is not one of the four above
            cout << "Error: Invalid operator '" << op << "'.\n";
    }

    return 0;
}
