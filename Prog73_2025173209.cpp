#include <iostream>
#include <string>

int main() {
    std::string name;
    int times;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "How many times would you like to see your name displayed? ";
    std::cin >> times;

    int count = 0;
    while (count < times) {
        std::cout << "Hello, " << name << "!" << std::endl;
        count++;
    }

    return 0;
}

