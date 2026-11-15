// Week 5 - Hotel Management System Using Arrays
// Part 1: 1D array  - weekly revenue
// Part 2: 2D array  - room occupancy of one branch
// Part 3: 3D array  - occupancy of three branches

#include <iostream>
#include <iomanip>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
using namespace std;

int main() {
    srand(time(0));   // seed the random generator so results differ each run

    // ================= PART 1: 1D ARRAY (Weekly Revenue) =================
    const int DAYS = 7;
    double revenue[DAYS];
    double totalRevenue = 0;
    string dayNames[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                             "Friday", "Saturday", "Sunday"};

    cout << "===== WEEKLY REVENUE TRACKER =====\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "Enter revenue for " << dayNames[i] << ": ";
        cin >> revenue[i];
        totalRevenue += revenue[i];          // add to running total
    }
    cout << fixed << setprecision(2);
    cout << "Total weekly revenue : " << totalRevenue << endl;
    cout << "Average daily revenue: " << totalRevenue / DAYS << endl;

    // ================= PART 2: 2D ARRAY (One Branch) =================
    const int FLOORS = 5, ROOMS = 10;
    int occupancy[FLOORS][ROOMS];   // 1 = occupied, 0 = vacant

    // Simulate input: fill every room with a random 0 or 1
    for (int f = 0; f < FLOORS; f++)
        for (int r = 0; r < ROOMS; r++)
            occupancy[f][r] = rand() % 2;

    cout << "\n===== ROOM OCCUPANCY (ONE BRANCH) =====\n";
    for (int f = 0; f < FLOORS; f++) {
        int occupied = 0;
        for (int r = 0; r < ROOMS; r++)
            if (occupancy[f][r] == 1)
                occupied++;
        int vacant = ROOMS - occupied;
        cout << "Floor " << f + 1 << ": Occupied = " << occupied
             << ", Vacant = " << vacant << endl;
    }

    // ================= PART 3: 3D ARRAY (Multiple Branches) =================
    const int BRANCHES = 3;
    int chain[BRANCHES][FLOORS][ROOMS];   // [branch][floor][room]
    int totalOccupied = 0;

    // Randomly assign occupancy and count occupied rooms at the same time
    for (int b = 0; b < BRANCHES; b++)
        for (int f = 0; f < FLOORS; f++)
            for (int r = 0; r < ROOMS; r++) {
                chain[b][f][r] = rand() % 2;
                if (chain[b][f][r] == 1)
                    totalOccupied++;
            }

    cout << "\n===== HOTEL CHAIN (ALL BRANCHES) =====\n";
    cout << "Total occupied rooms across all branches: " << totalOccupied
         << " out of " << BRANCHES * FLOORS * ROOMS << endl;

    return 0;
}
