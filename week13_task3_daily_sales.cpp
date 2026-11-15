// Week 13 - Task 3: Daily Sales Total (reading sales.txt)
// Reads every transaction amount from sales.txt and prints the day's total.
// Note: the question says "C program", but this course is C++, so it is written in C++.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ifstream inFile("sales.txt");   // open the file for reading

    if (!inFile) {
        cout << "Error: could not open sales.txt\n";
        return 1;
    }

    double amount;
    double total = 0;
    int count = 0;

    // i) Read each transaction (one number per line) until the end of file
    while (inFile >> amount) {
        total += amount;   // ii) add it to the running total
        count++;
    }

    // iii) Close the file properly after reading
    inFile.close();

    cout << fixed << setprecision(2);
    cout << "Number of transactions: " << count << endl;
    cout << "Total sales for the day: KES " << total << endl;

    return 0;
}
