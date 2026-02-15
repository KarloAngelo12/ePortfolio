#include <iostream>
#include <cmath>

bool isCurzon(int n) {
    int numerator = 1 + pow(2, n);
    int denominator = 1 + 2 * n;
    return (numerator % denominator == 0);
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    int numerator = 1 + pow(2, n);
    int denominator = 1 + 2 * n;

    std::cout << "1 + 2 ^ " << n << " = " << numerator << std::endl;
    std::cout << "1 + 2 * " << n << " = " << denominator << std::endl;

    if (isCurzon(n)) {
        std::cout << numerator << " is a multiple of " << denominator << "." << std::endl;
        std::cout << n << " is a Curzon number." << std::endl;
    } else {
        std::cout << numerator << " is not a multiple of " << denominator << "." << std::endl;
        std::cout << n << " is not a Curzon number." << std::endl;
    }

    return 0;
}

