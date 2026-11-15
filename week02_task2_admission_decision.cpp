// Week 2 - Task 2: Admission Decision (Nested if)
// A student is admitted only if age >= 18 AND exam score >= 50.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age;
    double score;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter exam score: ";
    cin >> score;

    cout << "\nStudent: " << studentName << endl;
    cout << "Decision: ";

    // Outer if: first check the age requirement
    if (age >= 18) {
        // Inner if: age is fine, now check the score
        if (score >= 50) {
            cout << "Admitted\n";
        } else {
            cout << "Not Admitted: Low Score\n";
        }
    } else {
        // Age is below 18
        cout << "Not Admitted: Underage\n";
    }

    return 0;
}
