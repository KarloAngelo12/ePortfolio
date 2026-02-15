#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double weight, height, bmi;
    
    cout << " ========================\n";
    cout << " IDEAL WEIGHT BASED ON BMI\n";
    cout << " ========================\n";
    
    cout << "Customer name:";
    getline(cin, name);
    cout << "Enter your weight in pounds: ";
    cin >> weight;
    cout << "Enter your height in inches: ";
    cin >> height;

    bmi = weight / (height * height)*703;
    
    cout << fixed << setprecision(1);
    cout << "BMI is " << bmi << " "; 

    if (bmi < 18.5) {
        cout << "You are thin." << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "You are healthy." << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    return 0;
}

