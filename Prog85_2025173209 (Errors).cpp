// -----------------------------------------------------------------------------
// File: Exercise7_2025173209.cpp
// Description: Exercise 7 - Grade Computation using void Function
// Author: Karlo Angelo L. Babaran
// Date: October 8, 2025
// -----------------------------------------------------------------------------
#include <iostream> // for input and output
#include <cmath>    // Required for std::abs() to calculate the positive difference
#include <cctype>    // For toupper
#include <limits>   // For std::numeric_limits

using namespace std;


void difference(int x, int y) {
    // Calculate the absolute difference using std::abs()
    int diff = abs(x - y);
    cout << "The difference of two numbers " << x << " and " << y << " is " << diff << ".\n" << endl;
}


bool is_in_range(int n) {
    return n >= 1 && n <= 10;
}

int main() {
    // Variable to control the main program loop. Start with 'Y' to run at least once.
    char tryAgain = 'Y';
    
    // The main program loop
    do {
        int num1 = 0, num2 = 0 // ERROR: Missing semicolon here! The compiler will error on the next line!
        bool valid_numbers = true;
        
        // --- 1. Get user input for two numbers ---
        cout << "\nEnter two numbers [1-10]: ";

        // Attempt to read two integers
        if (!(cin >> num1 >> num2)) {
            // Handles cases where the user enters non-integers (e.g., 'a b')
            cerr << "Error: Invalid input type. Please enter two integers." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            valid_numbers = false;
        } else {
            // --- 2. Validate first number ---
            if (!is_in_range(num1)) {
                cout << "Enter first number within the range 1-10!\n" << endl;
                valid_numbers = false;
            } 
            // --- 3. Validate second number (only if first was valid) ---
            else if (!is_in_range(num2)) {
                cout << "Enter second number within the range 1-10!\n" << endl;
                valid_numbers = false;
            }
        }

        // --- 4. Perform calculation or skip based on validation ---
        if (valid_numbers) {
            difference(num1, num2);
        }

        // --- 5. Get 'try again' choice with validation loop ---
        
        // Loop to ensure the user gives a valid 'Y' or 'N' response.
        do {
            cout << "Do you want to try again[Y/N]:";
            
            // Read the character
            cin >> tryAgain; 
            
            // Convert to uppercase for case-insensitive comparison (Y/y, N/n)
            char choice = toupper(tryAgain); 

            if (choice != 'Y' && choice != 'N') {
                cout << "Invalid response! Type Y for Yes or N for No\n" << endl;
            } else {
                // If valid, store the uppercase choice and exit the inner loop
                tryAgain = choice; 
                break;
            }

        } while (true); // Loop continues until a valid 'Y' or 'N' is entered

    } while (tryAgain == 'Y'); // Main loop continues only if user entered 'Y'

    cout << "\nThank you for using the system. Goodbye!" << endl;
    
   
   
}

