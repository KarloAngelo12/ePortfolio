#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter Grade : ";
    cin >> score;

    if (score < 0) {
        cout << "Sorry, you are not allowed to enter negative grade." << endl;
    }
    else if (score > 100) {
        cout << "Sorry, grade is out of range." << endl;
    }
    else {
        switch (score / 10) {
            case 10: // 100
            case 9:  grade = 'A'; break;
            case 8:  grade = 'B'; break;
            case 7:  grade = 'C'; break;
            case 6:  grade = 'D'; break;
            default: grade = 'F'; break;
        }

        cout << "The equivalent grade is " << grade << "." << endl;
    }

    return 0;
}

