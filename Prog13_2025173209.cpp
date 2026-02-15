#include <iostream>
using namespace std;

int main() {
    double kg;
    cout << "Enter weight in kilograms (kg): ";
    cin >> kg;

    double g = kg * 1000;
    double mg = kg * 1000000;
    double t = kg / 1000;
    double lbs = kg * 2.20462;
    double oz = kg * 35.274;

    cout << kg << " kg is equal to:" << endl;
    cout << g << " grams (g)" << endl;
    cout << mg << " milligrams (mg)" << endl;
    cout << t << " tons (t)" << endl;
    cout << lbs << " pounds (lbs)" << endl;
    cout << oz << " ounces (oz)" << endl;

    return 0;
}

