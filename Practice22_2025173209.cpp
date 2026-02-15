#include <iostream>

using namespace std;

int main() {
    // Declare a double for the numbers and a character for the operator.
    double num1, num2;
    char operation;

    // Prompt the user for input.
    cout << "Enter an expression (e.g., 10 + 5): ";
    cin >> num1 >> operation >> num2;

    switch (operation) {
        case '+':cout << "Result: " << num1 + num2 << endl;break;
        case '-':cout << "Result: " << num1 - num2 << endl;break;
        case '*':cout << "Result: " << num1 * num2 << endl;break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:cout << "Error: Invalid operator." << endl;break;
    }

    return 0;
}

