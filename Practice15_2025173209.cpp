#include <iostream>
using namespace std;

int main() {
    double salary;
    double taxRate;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary >= 100000) {
        taxRate = 0.30;
    } else if (salary >= 50000) {
        taxRate = 0.20;
    } else if (salary >= 20000) {
        taxRate = 0.10;
    } else {
        taxRate = 0.05;
    }

    double tax = salary * taxRate;
    cout << "Your tax is: " << tax << endl;

    return 0;
}

