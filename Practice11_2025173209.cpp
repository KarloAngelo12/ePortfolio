#include <iostream>
using namespace std;

int main() {
    float temperature;
    cout << "Enter temperature in Celsius: ";
    cin >> temperature;

    if (temperature >= 37.5) {
        cout << "High Fever" << endl;
    } else if (temperature >= 36.5 && temperature < 37.5) {
        cout << "Normal" << endl;
    } else {
        cout << "Low Temperature" << endl;
    }

    return 0;
}

