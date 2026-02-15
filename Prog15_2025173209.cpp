#include <iostream>
#include <iomanip>
#include <string>

int main() {
    double bill, tipPercent, tip;

    std::cout << "Enter the bill amount: ";
    std::cin >> bill;
    std::cout << "Enter the tip percentage: ";
    std::cin >> tipPercent;

    tip = bill * (tipPercent / 100);
    
    std::cout << "For a bill of php" << std::fixed << std::setprecision(2) << bill 
              << ", a tip of " << tipPercent << "% would be php" 
              << std::fixed << std::setprecision(2) << tip << "." << std::endl;

    return 0;
}

