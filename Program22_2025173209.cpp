#include <iostream>
#include <string>

int main() {
    const std::string storedPin = "340023";
    std::string enteredPin;

    std::cout << "Enter your pin code: ";
    std::cin >> enteredPin;

    if (enteredPin == storedPin) {
        std::cout << "Access Granted." << std::endl;
    } else {
        std::cout << "Access Denied." << std::endl;
    }

    return 0;
}

