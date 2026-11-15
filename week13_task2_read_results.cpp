// Week 13 - Task 2: Reading student results from a binary file (results.dat)
// Tip: run week13_task2_create_sample_data.cpp first to create a test file.

#include <iostream>
#include <fstream>
using namespace std;

// i) Structure to hold one student record.
// Fixed-size char arrays are used (not string) so that every record has the
// same size on disk, which is required for reading binary files correctly.
struct Student {
    char name[50];
    char regNumber[20];
    double totalMarks;
};

int main() {
    // ios::binary opens the file in binary mode
    ifstream inFile("results.dat", ios::binary);

    if (!inFile) {
        cout << "Error: could not open results.dat\n";
        return 1;
    }

    Student s;

    cout << "----- STUDENT RESULTS -----\n";

    // ii) Read records one at a time until the end of the file.
    // read() copies sizeof(Student) bytes from the file into s.
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(Student))) {
        // iii) Display name and marks
        cout << "Name : " << s.name << "\tMarks: " << s.totalMarks << endl;
    }

    inFile.close();
    return 0;
}
