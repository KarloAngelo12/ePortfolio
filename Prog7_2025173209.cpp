#include <iostream>
using namespace std;

int main() {
    int minutes;
    int seconds = 0;

    cout << "Enter minute/s: ";
    cin >> minutes;

    seconds = minutes * 60;

    cout << minutes << " minutes is equal to " << seconds << " seconds." << endl;

    return 0;
}

