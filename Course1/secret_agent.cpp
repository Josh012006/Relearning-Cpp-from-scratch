#include <iostream>
#include <string>


int main() {

    std::string fullName;
    std::string secretAlias;
    int age;
    int agentLevel;
    std::string favoriteGadget;

    std::cout << "Your full name: ";
    std::getline(std::cin,fullName);

    std::cout << "Your secret alias: ";
    std::getline(std::cin,secretAlias);

    std::cout << "Your age: ";
    std::cin >> age;
    std::cout << "Your agent level: ";
    std::cin >> agentLevel;
    std::cin.ignore();

    std::cout << "Your favorite gadget to use: ";
    std::getline(std::cin, favoriteGadget);


    std::cout << "Here is your ID card :" <<std::endl;
    std::cout << "=========================================="<< std::endl;
    std::cout << "     --- Agent " << fullName << " ---     " << std:: endl;
    std::cout << "Code name : " << secretAlias << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Level: " << agentLevel << std::endl;
    std::cout << "Favorite gadget: " << favoriteGadget << std::endl;
    std::cout << "=========================================="<< std::endl;
    std::cout << "    --- Mission status: CLASSIFIED ---    "<< std::endl;

    return 0;
}
