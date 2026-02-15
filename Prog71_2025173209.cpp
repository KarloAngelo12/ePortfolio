#include <iostream>
#include <string>

int main() {
    std::string name;
    int times;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter the number of times to display your name: ";
    std::cin >> times;

    for (int i = 0; i < times; ++i) {
        std::cout << "Hello, " << name << "!" << std::endl;
    }

    return 0;
}

