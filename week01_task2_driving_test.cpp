// Week 1 - Task 2: Driving Test Result Evaluation System
// Calculates the average of theory and practical marks and decides pass/fail.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // i) Variables
    string studentName;
    double theoryMarks, practicalMarks, average;

    // Prompt for details
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    // ii) Average Score = (Theory + Practical) / 2
    average = (theoryMarks + practicalMarks) / 2;

    // iii) Display results
    cout << fixed << setprecision(1);
    cout << "\n------ DRIVING TEST RESULT ------\n";
    cout << "Student Name   : " << studentName    << endl;
    cout << "Theory Marks   : " << theoryMarks    << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score  : " << average        << endl;

    // A student passes if the average is 50 and above
    if (average >= 50)
        cout << "Result         : PASSED\n";
    else
        cout << "Result         : FAILED\n";

    return 0;
}
