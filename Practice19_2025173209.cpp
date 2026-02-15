#include <iostream>
using namespace std;

int main() {
    int writtenTestScore, practicalTestScore;

    cout << "Enter written test score: ";
    cin >> writtenTestScore;
    cout << "Enter practical test score: ";
    cin >> practicalTestScore;

    if (writtenTestScore >= 50 && practicalTestScore >= 50) {
        cout << "Qualified" << endl;
    } else {
        cout << "Not Qualified" << endl;
    }

    return 0;
}

