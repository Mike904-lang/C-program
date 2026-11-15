// Week 13 - Task 1: Borrowed Books (text file, append mode)
// Saves each book title into borrowed_books.txt WITHOUT deleting old records.

#include <iostream>
#include <fstream>   // file streams: ofstream, ifstream
#include <string>
using namespace std;

int main() {
    string title;

    cout << "Enter the title of the borrowed book: ";
    getline(cin, title);

    // ios::app = append mode: new text is added at the end of the file,
    // so existing records are kept. The file is created if it doesn't exist.
    ofstream outFile("borrowed_books.txt", ios::app);

    // Check that the file opened successfully
    if (!outFile) {
        cout << "Error: could not open borrowed_books.txt\n";
        return 1;
    }

    outFile << title << endl;   // write the title on its own line
    outFile.close();            // always close the file

    cout << "Book title \"" << title << "\" was stored successfully.\n";
    return 0;
}
