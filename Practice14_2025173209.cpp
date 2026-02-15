#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Excellent" << endl;
    } else if (score >= 75) {
        cout << "Good" << endl;
    } else if (score >= 50) {
        cout << "Fair" << endl;
    } else {
        cout << "Poor" << endl;
    }

    return 0;
}

