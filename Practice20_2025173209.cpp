#include <iostream>
using namespace std;

int main() {
    int age;
    char hasID;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Do you have an ID? (y/n): ";
        cin >> hasID;

        if (hasID == 'y' || hasID == 'Y') {
            cout << "You can vote." << endl;
        } else {
            cout << "You need an ID to vote." << endl;
        }
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}

