#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter third number: ";
    std::cin >> c;

    int lastDigitA = a % 10;
    int lastDigitB = b % 10;
    int lastDigitC = c % 10;

    if ((lastDigitA * lastDigitB) % 10 == lastDigitC) {
        std::cout << "TRUE" << std::endl;
    } else {
        std::cout << "FALSE" << std::endl;
    }

    return 0;
}

