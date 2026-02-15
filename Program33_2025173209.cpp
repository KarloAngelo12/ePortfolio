#include <iostream>
using namespace std;

int main() {
    double probability_of_winning, prize, cost_of_playing, net_outcome;

    cout << "Enter probability of winning: ";
    cin >> probability_of_winning;
    cout << "Enter potential payoff: ";
    cin >> prize;
    cout << "Enter pay: ";
    cin >> cost_of_playing;

    net_outcome = probability_of_winning * prize - cost_of_playing;

    cout << "Net profit: " << net_outcome << endl;

    if (net_outcome > 0) {
        cout << "This is a profitable gamble!" << endl;
    } else {
        cout << "This is not a profitable gamble!" << endl;
    }

    return 0;
}

