#include <iostream>
using namespace std;

int main() {
    int month, day, year;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter year: ";
    cin >> year;

    // Determine Astrological Sign
    string astrologicalSign;
    switch (month) {
        case 1: astrologicalSign = (day <= 19) ? "Capricorn" : "Aquarius"; break;
        case 2: astrologicalSign = (day <= 18) ? "Aquarius" : "Pisces"; break;
        case 3: astrologicalSign = (day <= 20) ? "Pisces" : "Aries"; break;
        case 4: astrologicalSign = (day <= 19) ? "Aries" : "Taurus"; break;
        case 5: astrologicalSign = (day <= 20) ? "Taurus" : "Gemini"; break;
        case 6: astrologicalSign = (day <= 20) ? "Gemini" : "Cancer"; break;
        case 7: astrologicalSign = (day <= 22) ? "Cancer" : "Leo"; break;
        case 8: astrologicalSign = (day <= 22) ? "Leo" : "Virgo"; break;
        case 9: astrologicalSign = (day <= 22) ? "Virgo" : "Libra"; break;
        case 10: astrologicalSign = (day <= 22) ? "Libra" : "Scorpio"; break;
        case 11: astrologicalSign = (day <= 21) ? "Scorpio" : "Sagittarius"; break;
        case 12: astrologicalSign = (day <= 21) ? "Sagittarius" : "Capricorn"; break;
        default: astrologicalSign = "Invalid date"; break;
    }

    // Determine Chinese Zodiac Sign
    string chineseZodiac;
    switch (year % 12) {
        case 0: chineseZodiac = "Monkey"; break;
        case 1: chineseZodiac = "Rooster"; break;
        case 2: chineseZodiac = "Dog"; break;
        case 3: chineseZodiac = "Pig"; break;
        case 4: chineseZodiac = "Rat"; break;
        case 5: chineseZodiac = "Ox"; break;
        case 6: chineseZodiac = "Tiger"; break;
        case 7: chineseZodiac = "Rabbit"; break;
        case 8: chineseZodiac = "Dragon"; break;
        case 9: chineseZodiac = "Snake"; break;
        case 10: chineseZodiac = "Horse"; break;
        case 11: chineseZodiac = "Sheep"; break;
    }

    // Check for leap year
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    // Output results
    cout << "You are born under the sign of " << astrologicalSign << ", Year of the " << chineseZodiac << "." << endl;
    cout << "Year is " << (isLeapYear ? "a leap year." : "not a leap year.") << endl;

    return 0;
}

