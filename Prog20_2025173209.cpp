#include <iostream>

int main() {
    int age;
    int restingHeartRate;
    double trainingHeartRate;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your resting heart rate: ";
    std::cin >> restingHeartRate;

    trainingHeartRate = 0.7 * (220 - age) + 0.3 * restingHeartRate;

    std::cout << "Your training heart rate is: " << trainingHeartRate << std::endl;

    return 0;
}

