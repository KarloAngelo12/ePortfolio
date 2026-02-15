#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string hasID, parentalSupervision;
    double ticketPrice = 200.0;
    double discount = 0.0;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age." << endl;
        return 0;
    }

    cout << "Do you have a student ID? (yes/no): ";
    cin >> hasID;

    cout << "Do you have parental supervision? (yes/no): ";
    cin >> parentalSupervision;

    if (age >= 2 && age <= 3) {
        if (hasID == "yes" && parentalSupervision == "yes") {
            cout << "Allowed: Yes, Ticket Price: Free" << endl;
        }
    } else if (age >= 4 && age <= 15) {
        if (hasID == "yes" && parentalSupervision == "yes") {
            discount = 0.15;
            cout << "Allowed: Yes, Ticket Price: " << ticketPrice * (1 - discount) << "php" << endl;
        } else if (hasID == "no" && parentalSupervision == "yes") {
            cout << "Allowed: Yes, Ticket Price: " << ticketPrice << "php" << endl;
        } else if (hasID == "yes" && parentalSupervision == "no") {
            cout << "Allowed: No, NA" << endl;
        }
    } else if (age > 15) {
        if (age < 18) {
            if (hasID == "yes" && parentalSupervision == "yes") {
                discount = 0.05;
                cout << "Allowed: Yes, Ticket Price: " << ticketPrice * (1 - discount) << "php" << endl;
            } else {
                cout << "Allowed: Yes, Ticket Price: " << ticketPrice << "php" << endl;
            }
        } else {
            if (hasID == "yes" && parentalSupervision == "yes") {
                discount = 0.05;
                cout << "Allowed: Yes, Ticket Price: " << ticketPrice * (1 - discount) << "php" << endl;
            } else {
                cout << "Allowed: Yes, Ticket Price: " << ticketPrice << "php" << endl;
            }
        }
    }

    return 0;
}

