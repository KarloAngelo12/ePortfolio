#include <iostream>
#include <string>

using namespace std;

int main() {
    string proverbs[7] = {
        "The squeaky wheel gets the grease.",
        "Cry and you cry alone.",
        "Opposites attract.",
        "Spare the rod and spoil the child.",
        "Actions speak louder than words.",
        "Familiarity breeds contempt.",
        "Marry in haste, repent at leisure."
    };

    bool truthValues[7] = {true, true, false, false, true, false, true};
    int correctAnswers = 0;
    char userAnswer;

    for (int i = 0; i < 7; i++) {
        cout << proverbs[i] << " (T/F): ";
        cin >> userAnswer;

        if ((userAnswer == 'T' || userAnswer == 't') && truthValues[i]) {
            correctAnswers++;
        } else if ((userAnswer == 'F' || userAnswer == 'f') && !truthValues[i]) {
            correctAnswers++;
        }
    }

    cout << "You answered " << correctAnswers << " questions correctly." << endl;

    if (correctAnswers == 7) {
        cout << "Evaluation: Perfect!" << endl;
    } else if (correctAnswers >= 5) {
        cout << "Evaluation: Excellent!" << endl;
    } else {
        cout << "Evaluation: You might consider taking Psychology 101." << endl;
    }

    return 0;
}

