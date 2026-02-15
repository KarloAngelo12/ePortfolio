#include <iostream>

int main() {
    int side1, side2;
    int maxEdge = 0;

    std::cout << "Enter the length of the first side: ";
    std::cin >> side1;
    std::cout << "Enter the length of the second side: ";
    std::cin >> side2;

    maxEdge = (side1 + side2) - 1;

    std::cout << "Maximum Third Edge of the triangle: " << maxEdge << std::endl;

    return 0;
}

