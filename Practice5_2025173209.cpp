#include <iostream>
using namespace std;

int main() {
    float temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature > 37) {
        cout << "High Temperature" << endl;
    }

    return 0;
}

