#include <iostream>
using namespace std;

int main() {
    int input;
    cout << "Enter 1 if it's raining, 0 if not: ";
    cin >> input;

    if (input == 1) {
        cout << "Bring an umbrella" << endl;
    }

    return 0;
}

