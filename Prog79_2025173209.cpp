#include <iostream>

int main() {
    int number;
    
    std::cout << "Enter a number from 1 to 20: ";
    std::cin >> number;

    while (number < 1 || number > 20) {
        std::cout << "Number is out of range. Please enter number 1-20. Thank you.";
        std::cin >> number;
    }

    for (int i = 0; i < number; i++) {
        std::cout << "*";
    }
    
    std::cout << std::endl;
    return 0;
}

