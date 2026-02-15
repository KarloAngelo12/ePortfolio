#include <iostream>

int main() {
    int row = 0;
    int col;

    do {
        col = 0;
        do {
            std::cout << "* ";
            col++;
        } while (col < 10);
        std::cout << std::endl;
        row++;
    } while (row < 10);

    return 0;
}

