#include <iostream>

int main() {
    for (int i = 0; i <= 200; i += 2) {
        std::cout << i;
        if (i < 200) {
            std::cout << ", ";
        } else {
            std::cout << ".";
        }
    }
    return 0;
}

