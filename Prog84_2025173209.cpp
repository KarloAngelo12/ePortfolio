// -----------------------------------------------------------------------------
// File: Exercise7_2025173209.cpp
// Description: Exercise 7 - Grade Computation using void Function
// Author: Karlo Angelo L. Babaran
// Date: October 7, 2025
// -----------------------------------------------------------------------------
#include <iostream>  // for input and output
using namespace std;

// Function prototype
void inputHours(int hours);

// Main function
int main() {
    int hours;

    cout << "=============================\n";
    cout << "  HOURS CONVERTED TO SECONDS\n";
    cout << "=============================\n";

    // Input validation loop to ensure positive number
    do {
        cout << "Enter hours: ";
        cin >> hours;

        if (hours <= 0) {
            cout << "Enter positive number!\n\n";
        }

    } while (hours <= 0); // repeat until input is positive

    // Call function to convert and display result
    inputHours(hours);

    cout << "\nThank you for using Hours Conversion to Seconds. Goodbye!\n";
    cout << "=============================\n";
    return 0;
}

// Function definition: converts and displays seconds
void inputHours(int hours) {
    int seconds = hours * 3600; // 1 hour = 3600 seconds

    cout << "\n=============================\n";
    cout << "       CONVERTED SECONDS\n";
    cout << "=============================\n";
    cout << hours << " hour/s = " << seconds << " second/s.\n";
}

