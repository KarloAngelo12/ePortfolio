#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number between 1 and 1000: ";
    cin >> number;

    if (number < 1 || number > 1000) {
        cout << "Out of range." << endl;
    } else if (number % 5 == 0) {
        cout << number << " is divisible by 5." << endl;
    } else {
        cout << number << " is not divisible by 5." << endl;
    }

    return 0;
}

