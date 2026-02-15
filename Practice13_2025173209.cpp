#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << "Child" << endl;
    } else if (age >= 13 && age <= 19) {
        cout << "Teen" << endl;
    } else if (age >= 20 && age <= 59) {
        cout << "Adult" << endl;
    } else if (age >= 60) {
        cout << "Senior" << endl;
    } else {
        cout << "Invalid age" << endl;
    }

    return 0;
}

