#include <iostream>
using namespace std;

int main() {
    double hourlyWage;
    double hoursWorked;
    double grossPay;

    cout << "=================================\n";
    cout << "ABC Company Payroll\n";
    cout << "=================================\n";
    cout << "Enter hourly wage: ";
    cin >> hourlyWage;
    cout << "Enter hours worked in a week: ";        
    cin >> hoursWorked;
    cout << "=================================\n";

    if (hoursWorked > 40) {
        grossPay = (40 * hourlyWage) + (1.5 * hourlyWage * (hoursWorked - 40));
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    cout << "Gross pay: $" << grossPay << endl;

    return 0;
}

