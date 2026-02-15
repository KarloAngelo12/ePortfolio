#include <iostream>
using namespace std;

int main() {
    int grade;
    double attendance;

    cout << "Enter the student's grade: ";
    cin >> grade;
    cout << "Enter the student's attendance percentage: ";
    cin >> attendance;

    if (grade >= 85) {
        if (attendance >= 90) {
            cout << "Eligible for Scholarship" << endl;
        } else {
            cout << "Not Eligible" << endl;
        }
    } else {
        cout << "Not Eligible" << endl;
    }

    return 0;
}

