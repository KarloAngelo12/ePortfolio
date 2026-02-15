#include <iostream>

int main() {
    char light;
    std::cout << "Enter traffic light color (R=Red, Y=Yellow, G=Green): ";
    std::cin >> light;

    switch (light) {
        case 'R': case 'r':std::cout << "Stop\n";break; 
        case 'Y': case 'y':std::cout << "Ready\n";break;
        case 'G': case 'g':std::cout << "Go\n";break;
        default:std::cout << "Invalid input\n";break;
    }

    return 0; 
}

