// Helper program (for testing Week 13 Task 2 only)
// Creates a sample results.dat file containing a few student records.

#include <iostream>
#include <fstream>
#include <cstring>   // strcpy
using namespace std;

// Must be IDENTICAL to the struct in week13_task2_read_results.cpp
struct Student {
    char name[50];
    char regNumber[20];
    double totalMarks;
};

int main() {
    Student students[3];

    strcpy(students[0].name, "Alice Wanjiku");
    strcpy(students[0].regNumber, "REG001");
    students[0].totalMarks = 78.5;

    strcpy(students[1].name, "Brian Otieno");
    strcpy(students[1].regNumber, "REG002");
    students[1].totalMarks = 64.0;

    strcpy(students[2].name, "Cynthia Mutua");
    strcpy(students[2].regNumber, "REG003");
    students[2].totalMarks = 91.25;

    // Write all records to the binary file
    ofstream outFile("results.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(students), sizeof(students));
    outFile.close();

    cout << "results.dat created with 3 records.\n";
    return 0;
}
