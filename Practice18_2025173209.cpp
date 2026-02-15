#include <iostream>
using namespace std;

int main() {
    double atmBalance = 1000.00; // ATM balance
    double userBalance = 500.00;  // User's account balance
    double withdrawalAmount;

    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;

    if (atmBalance >= withdrawalAmount && userBalance >= withdrawalAmount) {
        cout << "Transaction Successful" << endl;
    } else {
        cout << "Insufficient Balance" << endl;
    }

    return 0;
}

