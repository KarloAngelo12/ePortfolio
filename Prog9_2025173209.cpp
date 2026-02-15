#include <iostream>
using namespace std;

int main() {
    double volt, current;
    int power = 0;

    cout << "Enter voltage (in volts): ";
    cin >> volt;
    cout << "Enter current (in amps): ";
    cin >> current;

    power = volt * current;

    cout << "The calculated power is: " << power << " watts" << endl;

    return 0;
}

