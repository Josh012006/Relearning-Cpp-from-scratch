#include <iostream>




int main() {

    char grade;

    std::cout << "What's your grade letter : ";
    std::cin >> grade;
    std::cin.ignore();

    switch (grade) {
        case 'A':
            std::cout << "Don't think you are that intelligent !" << std::endl;
            break;
        case 'B':
            std::cout << "Can't even do anything right !" << std::endl;
            break;
        case 'C':
            std::cout << "Pathetic." << std::endl;
            break;
        case 'D':
            std::cout << "Try a bit more !" << std::endl;
            break;
        case 'E':
            std::cout << "You can't even fail correctly !" << std::endl;
            break;
        case 'F':
            std::cout << "Are you even going to the lectures bro ?" << std::endl;
            break;
        default:
            std::cout << "Don't want to roast you. It would be a waste of time" << std::endl;
            break;

    }

    return 0;
}