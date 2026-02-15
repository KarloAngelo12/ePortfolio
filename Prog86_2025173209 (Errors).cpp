// -----------------------------------------------------------------------------
// File: Exercise7_2025173209.cpp
// Description: Exercise 7 - Grade Computation using void Function
// Author: Karlo Angelo L. Babaran
// Date: October 9, 2025
// -----------------------------------------------------------------------------
#include <iostream> // for input and output
#include <string> // for the 'std::string' class to handle text/character sequences
using namespace std;

// Function declarations
void inputName(string &player1Name, string &player2Name);
void inputBet(string &player1, string &player2, string player1Name, string player2Name);
void validate(string player1, string player2, string player1Name, string player2Name);

int main() {
    string player1, player2;
    string player1Name, player2Name;
    char choice;

    do {
        system("cls"); // Clears the screen on Windows
        cout << "============================" << endl;
        cout << " PAPER, SCISSORS, ROCK GAME" << endl;
        cout << "============================" << endl;

        inputName(player1Name, player2Name);
        inputBet(player1, player2, player1Name, player2Name);
        validate(player1, player2, player1Name, player2Name);

        do {
            cout << "\nDo you want to try again [Y/N]? ";
            cin >> choice;
            choice = toupper(choice);
            if (choice != 'Y' && choice != 'N') {
                cout << "Invalid response. ";
            }
        } while (choice != 'Y' && choice != 'N');

    } while (choice == 'Y') 

}


void inputName(string &player1Name, string &player2Name) {
    cout << "Enter Name (PLAYER1): ";
    cin >> player1Name 
    cout << "Enter Name (PLAYER2): ";
    cin >> player2Name;
    
}


void inputBet(string &player1, string &player2, string player1Name, string player2Name) {
    bool valid1 = false, valid2 = false;

    do {
        cout << "\-------------------------------------------------------------------------\n";
        cout << " PLAYERS be ready with your input (SCISSORS, PAPER, ROCK). Use UPPERCASE.\n";
        cout << "-------------------------------------------------------------------------\n";

        cout << player1Name << ": ";
        cin >> player1;
        cout << player2Name << ": ";
        cin >> player2;

        valid1 = (player1 == "ROCK" || player1 == "PAPER" || player1 == "SCISSORS");
        valid2 = (player2 == "ROCK" || player2 == "PAPER" || player2 == "SCISSORS");

        if (!valid1 || !valid2) {
            cout << "Invalid Input! Check your spelling or if input is in UPPERCASE.\n";
        }
    } while (!valid1 || !valid2);
}


void validate(string player1, string player2, string player1Name, string player2Name) {
    cout << "-------------------------------------------------------------------------\n";
    cout << "                     R E S U L T   O F   T H E   G A M E\n";
    cout << "-------------------------------------------------------------------------\n";

    if (player1 = player2) { 
        cout << "WELL DONE!\n";
        cout << player1Name << " AND " << player2Name << ", IT'S A TIE!\n";
    } 
    else if ((player1 == "ROCK" && player2 == "SCISSORS") ||
             (player1 == "PAPER" && player2 == "ROCK") ||
             (player1 == "SCISSORS" && player2 == "PAPER")) {
        cout << player1Name << " WINS!\n" //
    } 
    else {
        cout << player2Name << " WINS!\n" // 
    }
    return 0;
}

