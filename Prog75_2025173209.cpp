#include <iostream>

int main() {
    int number = 0;
    do {
        std::cout << number;
        number += 2;
        if (number <= 200) {
            std::cout << ", ";
        }
    } while (number <= 200);
    std::cout << "." << std::endl;
    return 0;
}

