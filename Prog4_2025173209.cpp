#include <iostream>
using namespace std;

int main() {
    int firstNum, secondNum;

    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;

    // Swapping the values
    int temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;

    cout << "The two numbers are " << firstNum << " and " << secondNum << "." << endl;

    return 0;
}

