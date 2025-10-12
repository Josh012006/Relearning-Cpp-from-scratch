#include <iostream>




int main() {

    double billAmount = 0.0;
    double tipPercentage = 0;
    std::cout << "Enter the total bill amount : ";
    std::cin >> billAmount;
    std::cin.ignore();

    std::cout << "Enter the tip percentage : ";
    std::cin >> tipPercentage;
    std::cin.ignore();

    double tipAmount = billAmount * tipPercentage / 100;
    double totalAmountToPay = billAmount + tipAmount;

    std::cout << "Tip amount: " << tipAmount << "$" << std::endl;
    std::cout << "Amount to pay: " << totalAmountToPay << "$" << std::endl;


    return 0;

}
