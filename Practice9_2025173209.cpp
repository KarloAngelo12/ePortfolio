#include <iostream>
using namespace std;

int main() {
    double price, finalPrice;
    cout << "Enter the price: ";
    cin >> price;

    if (price > 1000) {
        finalPrice = price * 0.9; // 10% discount
    } else {
        finalPrice = price; // no discount
    }

    cout << "Final price: " << finalPrice << endl;
    return 0;
}

