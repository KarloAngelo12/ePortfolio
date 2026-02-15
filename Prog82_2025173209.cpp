#include <iostream>

int main() {
    int row = 0;
    int col;

    while (row < 10) {
        col = 0;
        while (col < 10) {
            std::cout << "* ";
            col++;
        }
        std::cout << std::endl;
        row++;
    }

    return 0;
}

