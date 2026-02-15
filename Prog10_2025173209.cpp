#include <iostream>
using namespace std;

int main() {
    int hours;
    int seconds = 0; 
    int minutes = 0;

    cout << "Enter hours: ";
    cin >> hours;

    minutes = hours * 60;
    seconds = minutes * 60;

    cout << "Equivalent seconds: " << seconds << endl;

    return 0;
}

