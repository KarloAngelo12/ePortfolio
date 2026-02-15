#include <iostream>
using namespace std;

int main() {
    double firstNum, secondNum;
    double sum = 0, difference = 0, product = 0, quotient = 0;

    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter second number: ";
    cin >> secondNum;

    sum = firstNum + secondNum;
    difference = firstNum - secondNum;
    quotient = firstNum / secondNum;
    product = firstNum * secondNum;

    cout << "The sum of two numbers is " << sum << "." << endl;
    cout << "The difference of two numbers is " << difference << "." << endl;
    cout << "The quotient of two numbers is " << quotient << "." << endl;
    cout << "The product of two numbers is " << product << "." << endl;

    return 0;
}

