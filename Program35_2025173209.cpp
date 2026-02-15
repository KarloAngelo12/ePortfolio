#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 < 1 || num1 > 10 || num2 < 1 || num2 > 10) {
        cout << "Input out of range." << endl;
    } else if (num1 + num2 == 10) {
        cout << "The sum of two numbers is equal to 10." << endl;
    } else if (num1 == 10 || num2 == 10) {
        cout << "One of the given numbers is 10." << endl;
    } else {
        cout << "The sum of two number is not equal to 10 and none of the input is equal to 10." << endl;
    }

    return 0;
}

