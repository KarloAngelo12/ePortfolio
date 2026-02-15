#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number from 0 to 10: ";
    cin >> number;

    switch (number) {
        case 0:cout << "Zero" << endl;
            break;
        case 1:cout << "One" << endl;
            break;
        case 2:cout << "Two" << endl;
            break;
        case 3:cout << "Three" << endl;
            break;
        case 4:cout << "Four" << endl;
            break;
        case 5:cout << "Five" << endl;
            break;
        case 6:cout << "Six" << endl;
            break;
        case 7:cout << "Seven" << endl;
            break;
        case 8:cout << "Eight" << endl;
            break;
        case 9:cout << "Nine" << endl;
            break;
        case 10:cout << "Ten" << endl;
            break;
        default:cout << "Invalid number. Please enter a number between 0 and 10." << endl;
    }

    return 0;
}

