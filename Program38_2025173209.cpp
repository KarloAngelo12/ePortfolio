#include <iostream>
using namespace std;

int main() {
    int age;
    char gender;
    bool onBreak;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << "Is the bartender on break? (Y for Yes, N for No): ";
    cin >> onBreak;

    if (!onBreak) {
        if ((gender == 'F' && age >= 18) || (gender == 'M' && age >= 21)) {
            cout << "The bartender will serve drinks." << endl;
        } else {
            cout << "The bartender will not serve drinks." << endl;
        }
    } else {
        cout << "The bartender is on break and will not serve drinks." << endl;
    }

    return 0;
}

