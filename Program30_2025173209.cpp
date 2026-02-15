    #include <iostream>
#include <string>

using namespace std;

int main() {
    int month;
    bool isLeapYear = false;
    string leapYearResponse;

    cout << "========================\n";
    cout << "NUMBER OF DAYS IN A MONTH\n";
    cout << "========================\n";
    cout << "- Display Table of Month-\n";
    cout << "========================\n";
  
    cout << "Enter month: ";
    cin >> month;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "31 days\n";
            break;
        case 4: case 6: case 9: case 11:
            cout << "30 days\n";
            break;
        case 2:
            cout << "Is the current year a leap year? [Y/N]: ";
            cin >> leapYearResponse;
            if (leapYearResponse == "Y" || leapYearResponse == "y") {
                cout << "29 days\n";
            } else {
                cout << "28 days\n";
            }
            break;
        default:
            cout << "Invalid month\n";
            break;
    }

    return 0;
}

