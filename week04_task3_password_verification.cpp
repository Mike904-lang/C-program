// Week 4 - Task 3: Password Verification System (do-while loop)
// Keeps asking for credentials until they match the stored ones.

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Predefined (stored) credentials
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "1234";

    string username, password;
    bool accessGranted = false;

    // do-while always runs at least once, which suits a login prompt
    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == CORRECT_USERNAME && password == CORRECT_PASSWORD) {
            cout << "Access Granted\n";
            accessGranted = true;   // makes the loop condition false
        } else {
            cout << "Incorrect credentials, try again\n\n";
        }
    } while (!accessGranted);       // repeat until correct

    return 0;
}
