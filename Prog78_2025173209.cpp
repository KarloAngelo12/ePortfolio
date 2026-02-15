#include <iostream>
using namespace std;

int main() {
    int number;
    do {
        cout << "Enter a number from 1 to 20: ";
        cin >> number;
        if (number < 1 || number > 20) {
            cout << "Number is out of range. Please enter number 1-20. Thank you." << endl;
        }
    } while (number < 1 || number > 20);

    for (int i = 0; i < number; i++) {
        cout << "*";
    }
    cout << endl;

    return 0;
}

