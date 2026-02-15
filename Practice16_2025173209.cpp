#include <iostream>
#include <string>

int main() {
    std::string username;
    std::string password;
    const std::string correctUsername = "admin";
    const std::string correctPassword = "password123";

    std::cout << "Enter username: ";
    std::cin >> username;

    if (username == correctUsername) {
        std::cout << "Enter password: ";
        std::cin >> password;

        if (password == correctPassword) {
            std::cout << "Login Successful" << std::endl;
        } else {
            std::cout << "Invalid login" << std::endl;
        }
    } else {
        std::cout << "Invalid login" << std::endl;
    }

    return 0;
}

