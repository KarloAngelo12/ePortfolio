#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    if (number >= 0) {
        cout << "positive" << endl;
    } else {
        cout << "negative" << endl;
    }

    return 0;
}

