#include <iostream>
#include <string>

int main() {
    std::string color, mode;
    std::cout << "========================\n";
    std::cout << "Weather Beacon\n"; 
    std::cout << "========================\n";
    std::cout << "Enter the color (blue or red): ";
    std::cin >> color;
    std::cout << "Enter the mode (S or F): ";
    std::cin >> mode;
    std::cout << "========================\n";

    if (color == "blue" && mode == "S") {
        std::cout << "The weather today is CLEAR VIEW" << std::endl;
    } else if (color == "blue" && mode == "F") {
        std::cout << "The weather today is ClOUDS DUE" << std::endl;
    } else if (color == "red" && mode == "S") {
        std::cout << "The weather today is RAIN AHEAD" << std::endl;
    } else if (color == "red" && mode == "F") {
        std::cout << "The weather today is SNOW INSTEAD" << std::endl;
    } else {
        std::cout << "INVALID INPUT." << std::endl;
    }

    return 0;
}

