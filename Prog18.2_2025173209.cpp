#include <iostream>
using namespace std;

int main() {
    const int totalSeats = 2000;
    int numberOfGraduates;

    cout << "Enter the number of graduates: ";
    cin >> numberOfGraduates;

    if (numberOfGraduates > 0) {
        int ticketsPerGraduate = totalSeats / numberOfGraduates;
        int leftoverTickets = totalSeats % numberOfGraduates;

        cout << "Tickets per graduate: " << ticketsPerGraduate << endl;
        cout << "Leftover tickets: " << leftoverTickets << endl;
    } else {
        cout << "Number of graduates must be greater than zero." << endl;
    }

    return 0;
}

