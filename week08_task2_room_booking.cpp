// Week 8 - Task 2: Hotel Room Booking System (Constructors and Destructors)

#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    // Constructor: initializes all attributes when the booking is created
    RoomBooking(string name, int room, int days) {
        guestName = name;
        roomNumber = room;
        daysBooked = days;
        cout << "Room booking confirmed\n";
    }

    // Displays the booking details
    void displayBooking() {
        cout << "\n--- Booking Details ---\n";
        cout << "Guest Name  : " << guestName << endl;
        cout << "Room Number : " << roomNumber << endl;
        cout << "Days Booked : " << daysBooked << endl;
    }

    // Destructor: runs when the object is destroyed (end of main)
    ~RoomBooking() {
        cout << "\nBooking ended, room released\n";
    }
};

int main() {
    RoomBooking booking("Peter Kamau", 204, 3);   // constructor runs here

    booking.displayBooking();

    return 0;   // destructor runs here
}
