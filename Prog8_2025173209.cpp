#include <iostream>
using namespace std;

int main() {
    double base, height;
    double area = 0;

    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    area = base * height / 2;

    cout << "Base of the triangle: " << base << endl;
    cout << "Height of the triangle: " << height << endl;
    cout << "Area of the triangle: " << area << endl;

    return 0;
}

