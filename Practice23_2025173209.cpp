#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a letter: ";
    cin >> ch;

    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel\n";break;
        default:cout << "Consonant\n";break;
    }

    return 0;
}

