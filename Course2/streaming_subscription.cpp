#include <iostream>




int main() {

    char package;
    int numberDevices;
    int monthlyTotal;

    std::cout << "What is your package : A, B or C ?" << std::endl;
    std::cin >> package;
    std::cin.ignore();

    std::cout << "How many simultaneous devices did you use ?" << std::endl;
    std::cin >> numberDevices;
    std::cin.ignore();

    switch(package) {
        case 'A':
            monthlyTotal = 9 + 6 * (numberDevices - 1);
            break;
        case 'B':
            monthlyTotal = 14 + 4 * (numberDevices - 3);
            break;
        case 'C':
            monthlyTotal = 20 + 2 * (numberDevices - 5);
            break;
        default:
            std::cout << "no such package!" << std::endl;
    }


    std::cout << "Your monthly total is: " << monthlyTotal  << "$." << std::endl;

    return 0;
}
