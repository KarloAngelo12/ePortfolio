#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "What is your name? ";
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "! Hope you are doing well today." << std::endl;
    std::cout << "Have a nice day ahead." << std::endl;
    return 0;
}

