#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch (age / 10) {
        case 0:
        case 1:
            if (age <= 12) {
                cout << "You are classified in Children Group." << endl;
            } else {
                cout << "You are classified in Teenager Group." << endl;
            }
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "You are classified in Adult Group." << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "You are classified in Senior Group." << endl;
            break;
        default:
            cout << "Invalid Input." << endl;
            break;
    }

    return 0;
}

