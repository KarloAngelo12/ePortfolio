#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string customerName;
    double hrsLabor, partsPrice;
    const double laborRate = 350.00;
    const double taxRate = 0.05;

    std::cout << "Enter customer name: ";
    std::getline(std::cin, customerName);
    
    std::cout << "Enter hours of labor: ";
    std::cin >> hrsLabor;
    
    std::cout << "Enter cost of parts and supplies: ";
    std::cin >> partsPrice;

    double laborCost = hrsLabor * laborRate;
    double tax = partsPrice * taxRate;
    double totalPartsCost = partsPrice + tax;
    double totalBill = laborCost + totalPartsCost;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Simplified Bill ---\n";
    std::cout << "Customer Name: " << customerName << "\n";
    std::cout << "Labor Cost: " << laborCost << " php\n";
    std::cout << "Parts Cost: " << partsPrice << " php\n";
    std::cout << "Sales Tax: " << tax << " php\n";
    std::cout << "Total Bill: " << totalBill << " php\n";

    return 0;
}

