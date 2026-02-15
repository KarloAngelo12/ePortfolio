// -----------------------------------------------------------------------------
// File: Exercise7_2025173209.cpp
// Description: Exercise 7 - Grade Computation using void Function
// Author: Karlo Angelo L. Babaran
// Date: October 9, 2025
// -----------------------------------------------------------------------------
#include <iostream> // for input and output
#include <string> // for the 'std::string' class to handle text/character sequences
#include <algorithm> // for toupper()
using namespace std;

// Function declarations
void inputName(string &player1Name, string &player2Name); // gets player names
void inputBet(string &player1, string &player2, string player1Name, string player2Name); // gets players' inputs
void validate(string player1, string player2, string player1Name, string player2Name);   // determines winner

int main() {
    string player1, player2;           // stores each player's move (ROCK, PAPER, or SCISSORS)
    string player1Name, player2Name;   // stores each player's name
    char choice;                       // used for retry input (Y/N)

    do {
        system("cls"); // clear the screen (use "clear" for Mac/Linux)
        cout << "============================" << endl;
        cout << " PAPER, SCISSORS, ROCK GAME" << endl;
        cout << "============================" << endl;

        // Step 1: Input player names
        inputName(player1Name, player2Name);

        // Step 2: Input each player's move (ROCK, PAPER, or SCISSORS)
        inputBet(player1, player2, player1Name, player2Name);

        // Step 3: Validate moves and display the result
        validate(player1, player2, player1Name, player2Name);

        // Step 4: Ask user if they want to play again
        do {
            cout << "\nDo you want to try again [Y/N]? ";
            cin >> choice;
            choice = toupper(choice); // convert response to uppercase for easier checking
            if (choice != 'Y' && choice != 'N') {
                cout << "Invalid response. ";
            }
        } while (choice != 'Y' && choice != 'N'); // repeats until valid input

    } while (choice == 'Y'); // repeat game if player chooses "Y"

    return 0;
}


void inputName(string &player1Name, string &player2Name) {
    cout << "Enter Name (PLAYER1): ";
    cin >> player1Name;
    cout << "Enter Name (PLAYER2): ";
    cin >> player2Name;
}


void inputBet(string &player1, string &player2, string player1Name, string player2Name) {
    bool valid1 = false, valid2 = false; // track if inputs are valid

    do {
        cout << "\n-------------------------------------------------------------------------\n";
        cout << " PLAYERS be ready with your input (SCISSORS, PAPER, ROCK). Use UPPERCASE.\n";
        cout << "-------------------------------------------------------------------------\n";

        cout << player1Name << ": ";
        cin >> player1;
        cout << player2Name << ": ";
        cin >> player2;

        // Check if both inputs are valid
        valid1 = (player1 == "ROCK" || player1 == "PAPER" || player1 == "SCISSORS");
        valid2 = (player2 == "ROCK" || player2 == "PAPER" || player2 == "SCISSORS");

        // If any input is invalid, ask again
        if (!valid1 || !valid2) {
            cout << "Invalid Input! Check your spelling or if input is in UPPERCASE.\n";
        }

    } while (!valid1 || !valid2); // loop until both inputs are valid
}


void validate(string player1, string player2, string player1Name, string player2Name) {
    cout << "-------------------------------------------------------------------------\n";
    cout << "                     R E S U L T   O F   T H E   G A M E\n";
    cout << "-------------------------------------------------------------------------\n";

    // Case 1: It's a tie
    if (player1 == player2) {
        cout << "WELL DONE!\n";
        cout << player1Name << " AND " << player2Name << ", IT'S A TIE!\n";
    } 
    // Case 2: Player 1 wins
    else if ((player1 == "ROCK" && player2 == "SCISSORS") ||
             (player1 == "PAPER" && player2 == "ROCK") ||
             (player1 == "SCISSORS" && player2 == "PAPER")) {

        // Show which move beats which
        if (player1 == "ROCK" && player2 == "SCISSORS") cout << "ROCK beats SCISSORS!\n";
        else if (player1 == "PAPER" && player2 == "ROCK") cout << "PAPER beats ROCK!\n";
        else if (player1 == "SCISSORS" && player2 == "PAPER") cout << "SCISSORS beats PAPER!\n";

        cout << player1Name << " WINS!\n";
    } 
    // Case 3: Player 2 wins
    else {
        if (player2 == "ROCK" && player1 == "SCISSORS") cout << "ROCK beats SCISSORS!\n";
        else if (player2 == "PAPER" && player1 == "ROCK") cout << "PAPER beats ROCK!\n";
        else if (player2 == "SCISSORS" && player1 == "PAPER") cout << "SCISSORS beats PAPER!\n";

        cout << player2Name << " WINS!\n";
    }
}
