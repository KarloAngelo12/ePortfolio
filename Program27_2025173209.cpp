#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare prices for each equipment and rental period
    const double rugCleanerHalfDay = 160.00;
    const double rugCleanerFullDay = 240.00;
    const double lawnMowerHalfDay = 120.00;
    const double lawnMowerFullDay = 180.00;
    const double paintSprayerHalfDay = 200.00;
    const double paintSprayerFullDay = 300.00;

    double deposit = 300.00;
    double rentalPrice = 0.0;
    int itemChoice;
    char durationChoice;


    cout << "====================\n";
    cout << "Maiya's Equipment Rental\n";
    cout << "====================\n";
    
    cout << "1. Rug Cleaner    Half-Day: PHP 160.00    Full Day: PHP 240.00\n";
    cout << "2. Lawn Mower     Half-Day: PHP 120.00    Full Day: PHP 180.00\n";
    cout << "3. Paint Sprayer  Half-Day: PHP 200.00    Full Day: PHP 300.00\n";
    cout << "====================\n";
    
    cout << "Enter equipment [1,2,3]: ";
    cin >> itemChoice;
    if (itemChoice < 1 || itemChoice > 3) {
        cout << "Invalid equipment choice!" << endl;
        return 1;
    }

    cout << "Enter duration [H or F]: ";
    cin >> durationChoice;
    durationChoice = toupper(durationChoice);
    if (durationChoice != 'H' && durationChoice != 'F') {
        cout << "Invalid duration choice!" << endl;
        return 1;
    }

    if (itemChoice == 1) {
        rentalPrice = (durationChoice == 'H') ? rugCleanerHalfDay : rugCleanerFullDay;
    } else if (itemChoice == 2) {
        rentalPrice = (durationChoice == 'H') ? lawnMowerHalfDay : lawnMowerFullDay;
    } else if (itemChoice == 3) {
        rentalPrice = (durationChoice == 'H') ? paintSprayerHalfDay : paintSprayerFullDay;
    }

    double totalBill = rentalPrice + deposit;
    
    cout << "\n--- Rental Bill ---\n";
    cout << "Equipment selected: " << itemChoice << endl;
    cout << "Rental duration: " << (durationChoice == 'H' ? "Half-Day" : "Full Day") << endl;
    cout << "Rental price: PHP " << fixed << setprecision(2) << rentalPrice << endl;
    cout << "Deposit: PHP " << deposit << endl;
    cout << "Total bill: PHP " << totalBill << endl;

    return 0;
}

