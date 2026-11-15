// Week 2 - Task 1: Grading System (if-else ladder)
// Assigns a grade based on the exam marks entered.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double marks;
    char grade;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter exam marks (0-100): ";
    cin >> marks;

    // Validate the marks first
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Marks must be between 0 and 100.\n";
        return 1;   // exit the program with an error code
    }

    // if-else ladder: conditions are checked from top to bottom,
    // the first one that is true decides the grade
    if (marks >= 70)
        grade = 'A';
    else if (marks >= 60)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else if (marks >= 40)
        grade = 'D';
    else
        grade = 'E';   // below 40

    cout << "\n--- RESULT ---\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Marks       : " << marks << endl;
    cout << "Grade       : " << grade << endl;

    return 0;
}
