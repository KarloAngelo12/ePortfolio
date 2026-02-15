#include <iostream>

int main() {
    int number = 0;
    while (number <= 200) {
        std::cout << number;
        if (number < 200) {
            std::cout << ", ";
        } else {
            std::cout << ".";
        }
        number += 2;
    }
    return 0;
}

