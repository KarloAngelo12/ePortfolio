#include <iostream>
#include <cmath>

int main() {
    double weight, height, bmi;

    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight;

    std::cout << "Enter your height in inches: ";
    std::cin >> height;

    bmi = (703 * weight) / (height * height);
    bmi = round(bmi);

    std::cout << "Your Body Mass Index (BMI) is: " << bmi << std::endl;

    return 0;
}

