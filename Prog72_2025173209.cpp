#include <iostream>
#include <string>

int main() {
    std::string name;
    int times;

    do {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
        std::cout << "How many times would you like to see your name displayed? ";
        std::cin >> times;
        std::cin.ignore();

        for (int i = 0; i < times; ++i) {
            std::cout << "Hello, " << name << "!" << std::endl;
        }

    } while (times <= 0);

    return 0;
}

