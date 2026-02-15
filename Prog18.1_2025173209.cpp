#include <iostream>
#include <algorithm>

int main() {
    int wheels, bodies, figures;

    std::cout << "Enter the number of wheels: ";
    std::cin >> wheels;
    std::cout << "Enter the number of bodies: ";
    std::cin >> bodies;
    std::cout << "Enter the number of figures: ";
    std::cin >> figures;

    int toyCars = std::min(wheels / 4, std::min(bodies, figures / 2));

    std::cout << "You can build " << toyCars << " complete toy cars." << std::endl;

    return 0;
}

