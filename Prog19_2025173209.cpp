#include <iostream>

int main() {
    int num1, num2, remainder = 0;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number:";
    std::cin >> num2;

    remainder = num1 % num2;

    std::cout << "Remainder of " << num1 << " and " << num2 << " is: " << remainder << std::endl;

    return 0;
}

